using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DW3Editor.GameClasses
{
	public class FileSystem
	{
		public const int NumFiles = 428;

		public List<FileRecord> FileRecords = new List<FileRecord>();

		public static readonly Dictionary<int, string> Filenames = new Dictionary<int, string>
		{
			{0x1C, "Special_F927 (this file points into the high PRG banks, oddly"},
			{0x65, "sub_ScreenShakeForDamage"},
			{0x66, "sub_ScreenBlinkForSpell"},
			{0x6A, "EnemyInfo"},
			{0xAE, "sub_map_DecodePointer6CToXY"}

		};
	
		public FileSystem(byte[] rom)
		{
			int GlobalBankTableRomAddr = Form1.Address(0x1F,0xE917-0xC000);
			int GlobalFileTableRomAddr = Form1.Address(0x1F,0xE9ED-0xC000);

			Dictionary<int, List<FileRecord>> FileRecordsPerBank = new Dictionary<int,List<FileRecord>>();
			for (int i = 0; i < NumFiles; i++)
			{
				FileRecord fr = new FileRecord();
				FileRecords.Add(fr);

				int GlobalFileID = i;
				fr.GlobalFileID = i;
				fr.Bank = (rom[GlobalBankTableRomAddr+(GlobalFileID >> 1)] >> ((1 - (GlobalFileID & 1)) * 4)) & 0xF;
				fr.LocalFileID = rom[GlobalFileTableRomAddr+GlobalFileID];
				int localFileTableRomAddr = Form1.Address(fr.Bank, 0x0000);
				var br = new BinaryReader(new MemoryStream(rom));
				br.BaseStream.Position = localFileTableRomAddr + fr.LocalFileID*2;
				fr.LocalOffset = br.ReadUInt16();
				if(fr.LocalOffset>=0x8000)
					fr.RomAddress = Form1.Address(fr.Bank, fr.LocalOffset - 0x8000);
				Filenames.TryGetValue(GlobalFileID, out fr.Name);
				if (!FileRecordsPerBank.ContainsKey(fr.Bank))
					FileRecordsPerBank[fr.Bank] = new List<FileRecord>();
				FileRecordsPerBank[fr.Bank].Add(fr);
			}

			foreach (var kvp in FileRecordsPerBank)
			{
				var list = kvp.Value;
				list.Sort((x, y) => x.RomAddress.CompareTo(y.RomAddress));
				FileRecord frLast = null;
				foreach (var lfr in list)
				{
					if (lfr.LocalOffset < 0xC000)
					{
						if (frLast != null)
							frLast.SuspectedLength = lfr.RomAddress - frLast.RomAddress;
						frLast = lfr;
					}
				}
				if (frLast != null)
					if(frLast.LocalOffset < 0xC000)
						frLast.SuspectedLength = Form1.Address(kvp.Key, 0x4000) - frLast.RomAddress;
			}
		}

		public class FileRecord
		{
			public int GlobalFileID;
			public int Bank;
			public int LocalFileID;
			public int LocalOffset;
			public int RomAddress;
			public int SuspectedLength;
			public string Name;
		}
	}
}
