using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class MapViewer : Form
	{
		byte[] romBytes;

		public MapViewer(byte[] _romBytes)
		{
			romBytes = _romBytes;
			InitializeComponent();
			pictureBox1.InterpolationMode = InterpolationMode.NearestNeighbor;

			//populate a quick reference for  debugging MapStates
			var fs = new DW3Editor.GameClasses.FileSystem(romBytes);
			var fr = fs.FileRecords[0x1E];
			for (int i = 0; i < 256; i++)
			{
				var br = new BinaryReader(new MemoryStream(romBytes));
				br.BaseStream.Position = fr.RomAddress;
				int mapDirectoryPointer = br.ReadUInt16();
				br.BaseStream.Position = Form1.Address(7, mapDirectoryPointer - 0x8000) + 3 * i;
				int mdecPtr = br.ReadUInt16();
				int tilesetNumber = br.ReadByte();
				int bank = 6;
				if (tilesetNumber >= 0x0C)
					bank = 7;

				br.BaseStream.Position = Form1.Address(bank, mdecPtr - 0x8000);
				int mapWidth = br.ReadByte();
				int mapheight = br.ReadByte();
				int stuff = br.ReadByte();
				listBox1.Items.Add(string.Format("{0} (${1:X2}) ts:${2:X2} {3:X2}:{4:X4} {5}x{6} [{7:X2}]", i, i, tilesetNumber, bank, mdecPtr, mapWidth, mapheight, stuff));
			}

			listBox1.SelectedIndex = 0;
			RefreshViewer();
		}

		void RefreshViewer()
		{
			int targetMapState = (int)listBox1.SelectedIndex;

			//read the MapDirectory entry
			var fs = new DW3Editor.GameClasses.FileSystem(romBytes);
			var fr = fs.FileRecords[0x1E];
			var br = new BinaryReader(new MemoryStream(romBytes));
			br.BaseStream.Position = fr.RomAddress;
			int mapDirectoryPointer = br.ReadUInt16();
			br.BaseStream.Position = Form1.Address(7, mapDirectoryPointer-0x8000) + 3 * targetMapState;
			int mdecPtr = br.ReadUInt16();
			int tilesetNumber = br.ReadByte();

			//dummied out map
			if (mdecPtr == 0)
			{
				pictureBox1.Image = new Bitmap(1, 1);
				return;
			}

			int bank = 6;
			if (tilesetNumber >= 0x0C)
				bank = 7;

			var mdec = new GameClasses.Mdec(romBytes, Form1.Address(bank, mdecPtr - 0x8000));

			//turn into a bitmap and pop open a test viewer
			var bmp = new Bitmap(mdec.width, mdec.height);
			for (int y = 0; y < mdec.height; y++)
				for (int x = 0; x < mdec.width; x++)
					bmp.SetPixel(x, y, TestColors[mdec.Map[x, y] % TestColors.Length]);
			pictureBox1.Image = bmp;
			pictureBox1.ClientSize = new Size(mdec.width * 4, mdec.height * 4);
			pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
		}

		private void numericUpDown1_ValueChanged(object sender, EventArgs e)
		{
			RefreshViewer();
		}


		/// <summary>
		/// Colors suitable for testing, shuffled. All colors described as white, black, and gray have been removed
		/// </summary>
		public static Color[] TestColors = new Color[] {
			Color.Red,		Color.BurlyWood,		Color.CornflowerBlue,		Color.Aquamarine,		Color.LimeGreen,		Color.DarkViolet,		Color.SaddleBrown,		Color.BlanchedAlmond,		Color.Lavender,		Color.RosyBrown,		Color.DarkCyan,		Color.DarkRed,		Color.PowderBlue,		Color.CadetBlue,		Color.DarkOrchid,		Color.Ivory,		Color.PaleVioletRed,		Color.Maroon,		Color.LightCoral,		Color.PaleGreen,		Color.LightGreen,		Color.MintCream,
			Color.LightPink,		Color.Bisque,		Color.Pink,		Color.Turquoise,		Color.DarkSeaGreen,		Color.SeaShell,		Color.MediumTurquoise,		Color.Beige,		Color.LightSeaGreen,		Color.SpringGreen,		Color.Plum,		Color.Honeydew,		Color.SandyBrown,		Color.DarkMagenta,		Color.MidnightBlue,		Color.LightCyan,		Color.DarkKhaki,		Color.LightGoldenrodYellow,
			Color.YellowGreen,		Color.Cornsilk,		Color.PaleTurquoise,		Color.Thistle,		Color.Violet,		Color.DodgerBlue,		Color.LightYellow,		Color.Fuchsia,		Color.BlueViolet,		Color.Magenta,		Color.Green,		Color.Silver,		Color.OrangeRed,		Color.DarkOrange,		Color.MediumSpringGreen,		Color.Moccasin,
			Color.Brown,		Color.AliceBlue,		Color.Purple,		Color.MistyRose,		Color.MediumPurple,		Color.Tan,		Color.DarkTurquoise,		Color.Gainsboro,		Color.Azure,		Color.RoyalBlue,		Color.Peru,		Color.Tomato,		Color.Blue,		Color.LightBlue,		Color.Linen,		Color.SkyBlue,		Color.Khaki,		Color.PapayaWhip,		Color.Aqua,		Color.Snow,		Color.Orange,		Color.Teal,		Color.DarkGoldenrod,
			Color.LightSalmon,		Color.SteelBlue,		Color.GreenYellow,		Color.Chartreuse,		Color.MediumSeaGreen,		Color.LawnGreen,		Color.Cyan,		Color.Gold,		Color.DarkOliveGreen,		Color.Salmon,		Color.DarkSlateBlue,		Color.Lime,		Color.PaleGoldenrod,		Color.SeaGreen,		Color.SlateBlue,		Color.Wheat,
			Color.MediumSlateBlue,		Color.Sienna,		Color.Olive,		Color.Yellow,		Color.MediumVioletRed,		Color.LemonChiffon,		Color.Indigo,		Color.MediumBlue,		Color.MediumOrchid,		Color.OldLace,		Color.OliveDrab,		Color.Navy,		Color.DarkGreen,		Color.Goldenrod,		Color.PeachPuff,		Color.LavenderBlush,		Color.HotPink,		Color.IndianRed,
			Color.DeepSkyBlue,		Color.LightSteelBlue,		Color.LightSkyBlue,		Color.Orchid,		Color.Firebrick,		Color.Coral,		Color.ForestGreen,		Color.DarkSalmon,		Color.MediumAquamarine,		Color.Chocolate,		Color.Crimson,		Color.DeepPink,		Color.DarkBlue,
		};

		private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
		{
			RefreshViewer();
		}

	}

	/// <summary>
	/// Inherits from PictureBox; adds Interpolation Mode Setting
	/// </summary>
	public class PictureBoxWithInterpolationMode : PictureBox
	{
		public InterpolationMode InterpolationMode { get; set; }

		protected override void OnPaint(PaintEventArgs paintEventArgs)
		{
			paintEventArgs.Graphics.InterpolationMode = InterpolationMode;
			paintEventArgs.Graphics.PixelOffsetMode = PixelOffsetMode.HighSpeed;
			//paintEventArgs.Graphics.DrawImage(Image, ClientRectangle);
			base.OnPaint(paintEventArgs);
		}
	}
}
