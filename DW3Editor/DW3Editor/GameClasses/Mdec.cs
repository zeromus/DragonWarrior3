using System;
using System.Drawing;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DW3Editor.GameClasses
{
	//map decoding
	public class Mdec
	{
		class BitReader
		{
			public BitReader(byte[] _romData, int romAddr)
			{
				byteCursor = romAddr;
				romData = _romData;
			}

			byte[] romData;
			int byteCursor;
			int bitCounter;

			public int Read1()
			{
				int b = romData[byteCursor];
				int ret = b >> (7 - bitCounter) & 1;
				bitCounter++;
				if (bitCounter == 8)
				{
					bitCounter = 0;
					byteCursor++;
				}

				return ret;
			}


			public int Read2()
			{
				return (Read1() << 1) | Read1();
			}

			public int ReadN(int n)
			{
				int ret = 0;
				for (int i = 0; i < n; i++)
				{
					ret <<= 1;
					ret |= Read1();
				}
				return ret;
			}


			/// <summary>
			/// for initial header bytes
			/// </summary>
			public int ReadByteRaw()
			{
				return romData[byteCursor++];
			}

			public int ReadTile() { return ReadN(TileSizeBits); }
			public int ReadPtrRaw() { return ReadN(PointerSizeBits); }

			public int PointerSizeBits;
			public int TileSizeBits;
		};

		//mdec state
		public int[,] Map;
		BitReader bits;
		int[] currMT = new int[4];
		bool orflag = false;
		bool metatileBig = false;
		Point temp16 = new Point(0, 0);
		Point dptr = new Point(0, 0);
		public int width, height;
		Stack<Point> pointStack = new Stack<Point>();
		Stack<int> deltaDirStack = new Stack<int>();

		public Point ReadPtr()
		{
			int ptr = bits.ReadPtrRaw();
			return new Point(ptr % width, ptr / width);
		}


		void EmitTile(int x, int y, int tnum, bool canOr)
		{
			if (canOr && orflag)
			{
				Map[x, y] &= 0x1F;
				Map[x, y] |= tnum << 5;
				Log("Tile {0},{1} |= {2} = {3}", x, y, tnum, Map[x, y]);
			}
			else
			{
				Log("Tile {0},{1} = {2}", x, y, tnum);
				Map[x, y] = tnum;
			}
		}

		void EmitMetatile(Point pt)
		{
			if (metatileBig)
			{
				EmitTile(pt.X, pt.Y, currMT[0], true);
				EmitTile(pt.X + 1, pt.Y, currMT[1], true);
				EmitTile(pt.X, pt.Y + 1, currMT[2], true);
				EmitTile(pt.X + 1, pt.Y + 1, currMT[3], true);
			}
			else
				EmitTile(pt.X, pt.Y, currMT[0], true);
		}

		StringBuilder logBuffer;

		void Log(string format, params object[] args)
		{
			if (logBuffer == null) return;
			for (int i = 0; i < pointStack.Count; i++)
				logBuffer.Append(' ');
			logBuffer.AppendFormat(format, args);
			logBuffer.AppendLine();
		}

		void sub_mdec_Run()
		{
		MAINLOOP:
			int command = bits.Read2();
		SWITCH_COMMAND:
			switch (command)
			{
				case 0: //"set current tilenum"
					metatileBig = false;
					currMT[0] = bits.ReadTile();
					//read the next command. however, in this state, an operator of 0 means something special
					command = bits.Read2();
					if (command != 0)
						goto SWITCH_COMMAND;
					//if the next bit is 1, then decoding is complete
					if (bits.Read1() == 1) return;
					//otherwise, we were wanting to setup a large metatile.
					metatileBig = true;
					currMT[1] = bits.ReadTile();
					currMT[2] = bits.ReadTile();
					currMT[3] = bits.ReadTile();
					goto MAINLOOP;

				case 1://"fill box"
					//receives topleft and bottomright corner (as pointers, annoyingly) and expects us to fill with the current tile or metatile
					//it is likely that OR mode is not supported for big metatiles, despite it being supported ordinarily.
					Point topleft = ReadPtr();
					Point bottomright = ReadPtr();
					Log("fill box ({0},{1}) -> ({2},{3})",topleft.X,topleft.Y,bottomright.X,bottomright.Y);
					Point todo = new Point(bottomright.X - topleft.X,bottomright.Y-topleft.Y);
					if (metatileBig)
					{
						todo.X /= 2;
						todo.Y /= 2;
					}
					todo.X++;
					todo.Y++;
					for(int y=0;y<todo.Y;y++)
						for (int x = 0; x < todo.X; x++)
						{
							if (!metatileBig)
								EmitTile(topleft.X + x, topleft.Y + y, currMT[0], true);
							else
							{
								EmitTile(topleft.X + x * 2, topleft.Y + y * 2, currMT[0], false);
								EmitTile(topleft.X + x * 2 + 1, topleft.Y + y * 2, currMT[1], false);
								EmitTile(topleft.X + x * 2 + 1, topleft.Y + y * 2 + 1, currMT[3], false);
								EmitTile(topleft.X + x * 2, topleft.Y + y * 2 + 1, currMT[2], false);
							}
						}
					goto MAINLOOP;

				case 2: //"path follow"
			PATHFOLLOW:
					Log("begin path follow");
					Point basePoint = ReadPtr();
					Point deltaPoint = basePoint;
					EmitMetatile(basePoint);
					int deltaDir = bits.Read2();
			OPERATOR2_LOOPTOP:
					if (bits.Read1() == 1)
					{
						command = bits.Read2();
						switch (command)
						{
							case 0: 
							//turn clockwise
								deltaDir = (deltaDir + 1) & 3;
								break;
							case 1: 
							//turn counterclockwise
								deltaDir = (deltaDir + 3) & 3;
								break;
							case 2:
								//push context and then turn
								Log("push >");
								pointStack.Push(deltaPoint);
								deltaDirStack.Push(deltaDir);
								command = bits.Read1();
								if (command == 0)
									goto case 0;
								else
									goto case 1;
							case 3:
								if (bits.Read1() == 0)
								{
									//restart path following
									goto PATHFOLLOW;
								}
								else
								{
									if (pointStack.Count == 0)
									{
										//terminate path following
										Log("end path following");
										goto MAINLOOP;
									}
									//pop
									deltaPoint = pointStack.Pop();
									deltaDir = deltaDirStack.Pop();
									Log("< pop");
									goto OPERATOR2_LOOPTOP;
								}
						}
					}
					//0: decr(y); 1: incr(x); 2: incr(y); 3: decr(x);
					switch (deltaDir)
					{
						case 0: deltaPoint.Y--; break;
						case 1: deltaPoint.X++; break;
						case 2: deltaPoint.Y++; break;
						case 3: deltaPoint.X--; break;
					}
					EmitMetatile(deltaPoint);
					goto OPERATOR2_LOOPTOP;

				case 3: //"set single tile"
					//reads a pointer and emits the current metatile to it
					EmitMetatile(ReadPtr());
					goto MAINLOOP;

			} //switch(command)
		}

		public Mdec(byte[] _romData, int romAddr)
		{
			bits = new BitReader(_romData, romAddr);

			width = bits.ReadByteRaw();
			height = bits.ReadByteRaw();

			//find pointer size, roughly, log2
			int maxptr = width * height - 1;
			while (maxptr != 0)
			{
				bits.PointerSizeBits++;
				maxptr >>= 1;
			}

			int stuff = bits.ReadByteRaw();

			Map = new int[width, height];
			bits.TileSizeBits = ((stuff>>6) & 3)+2;

			//read and apply clear tile
			int clearTile = bits.ReadTile();
			for (int y = 0; y < height; y++)
				for (int x = 0; x < width; x++)
					Map[x, y] = clearTile;

			//dump diagnostics
			//logBuffer = new StringBuilder();

			Log("dimensions: {0}x{1}", width, height);
			Log("ptrsize: {0}", bits.PointerSizeBits);
			try
			{

				//1st pass
				sub_mdec_Run();
				//2nd pass
				orflag = true;
				int temp = bits.Read2();
				if (temp != 0)
				{
					bits.TileSizeBits = temp;
					sub_mdec_Run();
				}

			}
			catch
			{
				throw;
			}
			finally
			{
				//dump diagnostics
				//Console.WriteLine(logBuffer.ToString());
			}


		}

	}

}