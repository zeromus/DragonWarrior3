using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class Form1 : Form
	{
		// TODO: don't allow multiple instances of editor dialogs!
		// Add menu items for all editors
		// Cleanup
		private const int HeaderSize = 16;
		private const int PrgSize = 1024 * 512;
		private const int StringTableTableOffset = 0xAA0E + HeaderSize;
		private byte[] _romBytes = new byte[PrgSize];

		public byte[] ROM
		{
			get { return _romBytes; }
		}

		// TODO: ability for user to pick rom
		public Form1()
		{
			InitializeComponent();
			Closing += (o, e) =>
			{
				ConfigService.Save("config.ini", Global.Config);
			};

			Global.MainForm = this;
		}

		private void Form1_Load(object sender, EventArgs e)
		{
			Global.Config = ConfigService.Load<Config>("config.ini");
			LoadRom(Global.Config.RomLocation);
		}

		private void LoadRom(string path)
		{
			var file = new FileInfo(path);
			if (!file.Exists)
			{
				RomStatusLabel.Text = "Unable to load ROM!";
				return;
			}

			_romBytes = File.ReadAllBytes(file.FullName);
			RomStatusLabel.Text = path + " loaded! " + file.Length + " bytes";
			Global.Config.RomLocation = path;
			Analyze();
		}

		public static int Address(int bank, int ofs)
		{
			return bank * 0x4000 + ofs + 16;
		}

		private void Analyze()
		{
			var br = new BinaryReader(new MemoryStream(_romBytes));

			//analyze string table
			br.BaseStream.Position = StringTableTableOffset;
			for (int i = 0; i < 13; i++)
			{
				StringTableOffsets[(DW3String.eStringTable)i] = br.ReadUInt16() + HeaderSize;
			}
		}

		string ReadNativeDialogString(int bank, int index)
		{
			var br = new BinaryReader(new MemoryStream(_romBytes));

			//locate the DialogMetaIndex
			int DialogMetaIndexOffset = Address(0x0A, 0x0156);
			br.BaseStream.Position = DialogMetaIndexOffset + (bank-0x10)*2;
			int metaIndexOffset = br.ReadUInt16() - 0x8000;

			//stringRef = (bank,hi,lo)
			//stringBank = stringRef.bank
			//stringNum = (hi<<8)+lo
			//stringOfs = u16[stringMetaTable[bank]+(stringNum>>4)*2]
			//stringNum &= 15; //since the offset has skipped to the nearest 16

			//access the DialogMetaIndex
			int indexGroup = index >> 4;
			int indexOffset = index & 0x0F;
			br.BaseStream.Position = Address(0x0A, metaIndexOffset + indexGroup * 2);
			int offsetInBank = br.ReadUInt16() - 0x8000;
			int address = Address(bank, offsetInBank);

			//scan out the strings
			br.BaseStream.Position = address;
			StringBuilder ret = new StringBuilder();
			while (indexOffset >= 0)
			{
				byte c = br.ReadByte();
				if (c == 0xFF || c == 0xEF || c == 0xEE)
					indexOffset--;
				else if (indexOffset == 0)
					ret.Append((char)c);
			}

			return ret.ToString();
		}

		public Dictionary<DW3String.eStringTable, int> StringTableOffsets = new Dictionary<DW3String.eStringTable, int>();
		Dictionary<int, int> DialogMetaIndex = new Dictionary<int, int>();

		public string ReadNativeStringTableEntry(DW3String.eStringTable whichTable, int offset)
		{
			var br = new BinaryReader(new MemoryStream(_romBytes));
			br.BaseStream.Position = StringTableOffsets[whichTable];
			StringBuilder ret = new StringBuilder();
			while (offset >= 0)
			{
				byte c = br.ReadByte();
				if (c == 0xFF)
					offset--;
				else if (offset == 0)
					ret.Append((char)c);
			}
			return ret.ToString();
		}

		private void EnemyEditButton_Click(object sender, EventArgs e)
		{
			try
			{
				EnemyEditor ee = new EnemyEditor();
				ee.Show();
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.Message);
			}
		}

		private void button1_Click(object sender, EventArgs e)
		{
			StringBuilder ret = new StringBuilder();
			for (int i = 0; i < 16; i++)
			{
				string str = DW3String.TranslateString(ReadNativeStringTableEntry(DW3String.eStringTable.EnemyLowFirst, i)).Replace("\t", "         ");
				str += "\n" + DW3String.TranslateString(ReadNativeStringTableEntry(DW3String.eStringTable.EnemyLowSecond, i)).Replace("\t", "         "); ;
				ret.AppendLine(str);
			}
			ret.AppendLine("------");
			ret.AppendLine(DW3String.TranslateString(ReadNativeStringTableEntry(DW3String.eStringTable.Erdrick, 0)));
			ret.AppendLine("------");
			for(int i=0;i<30;i++)
				ret.AppendFormat("{0} ", DW3String.TranslateString(ReadNativeStringTableEntry(DW3String.eStringTable.Location, 0)));
			ret.AppendLine();
			ret.AppendLine("------");
			ret.AppendLine(DW3String.TranslateString(ReadNativeDialogString(0x10, 0x08D)));
			System.Windows.Forms.MessageBox.Show(ret.ToString());
		}

		private void DragRomPanel_DragDrop(object sender, DragEventArgs e)
		{
			var path = ((string[])e.Data.GetData(DataFormats.FileDrop)).First();

			if (Path.GetExtension(path) == ".nes")
			{
				LoadRom(path);
			}
		}

		private void DragRomPanel_DragEnter(object sender, DragEventArgs e)
		{
			e.Effect = e.Data.GetDataPresent(DataFormats.FileDrop) ? DragDropEffects.Copy : DragDropEffects.None;
		}

		private void button2_Click(object sender, EventArgs e)
		{
			int EnemyActionHandlersTable = Address(0x04, 0x3DAA);

			StringBuilder sb = new StringBuilder();

			var br = new BinaryReader(new MemoryStream(_romBytes));
			br.BaseStream.Position = EnemyActionHandlersTable;
			for (int i = 0; i < 0x40; i++)
			{
				sb.AppendFormat("{0:X4},",br.ReadUInt16());
				if(i%16==15) sb.AppendLine();
			}
			MessageBox.Show(sb.ToString());
		}

		private void button4_Click(object sender, EventArgs e)
		{
			int ItemStatTable = Address(0x09, 0x3990);

			StringBuilder sb = new StringBuilder();

			var br = new BinaryReader(new MemoryStream(_romBytes));
			br.BaseStream.Position = ItemStatTable;
			for (int i = 0; i < 0x80; i++)
			{
				string name = i < 0x40 ? (ReadNativeStringTableEntry(DW3String.eStringTable.ItemLowFirst, i) + ReadNativeStringTableEntry(DW3String.eStringTable.ItemLowSecond, i))
				: (ReadNativeStringTableEntry(DW3String.eStringTable.ItemHighFirst, i - 0x40) + ReadNativeStringTableEntry(DW3String.eStringTable.ItemHighSecond, i - 0x40));
				sb.AppendFormat("{0} - {1}, ", br.ReadByte(), DW3String.TranslateString(name));
				if (i % 4 == 3) sb.AppendLine();
			}
			MessageBox.Show(sb.ToString());
		}

		private void button5_Click(object sender, EventArgs e)
		{
			new FilesystemBrowser(_romBytes).ShowDialog();
		}

		private void button6_Click(object sender, EventArgs e)
		{
			new MapViewer(_romBytes).ShowDialog();
		}

		private void Save(string path = "")
		{
			if (string.IsNullOrEmpty(path))
			{
				path = Global.Config.RomLocation;
			}
			else
			{
				Global.Config.RomLocation = path;
			}

			File.WriteAllBytes(path, _romBytes);
		}

		private void SaveMenuItem_Click(object sender, EventArgs e)
		{
			Save();
		}

		private void SaveAsMenuItem_Click(object sender, EventArgs e)
		{
			var sfd = new SaveFileDialog();

			var path = Path.GetDirectoryName(
				Path.Combine(GetExeDirectoryAbsolute(), 
				Global.Config.RomLocation));

			sfd.InitialDirectory = new FileInfo(path).DirectoryName;
			sfd.FileName = Path.GetFileName(path);
			var file = new FileInfo(path);
			if (file.Directory != null && file.Directory.Exists == false)
			{
				file.Directory.Create();
			}

			var result = sfd.ShowDialog();
			if (result == DialogResult.OK)
			{
				Save(sfd.FileName);
			}
		}

		public static string GetExeDirectoryAbsolute()
		{
			string path = Path.GetDirectoryName(Assembly.GetEntryAssembly().Location);
			if (path.EndsWith(Path.DirectorySeparatorChar.ToString()))
			{
				path = path.Remove(path.Length - 1, 1);
			}
			return path;
		}

		private void ExitMenuItem_Click(object sender, EventArgs e)
		{
			Close();
		}

		private void button7_Click(object sender, EventArgs e)
		{
			TextViewer tv = new TextViewer(_romBytes);
			tv.Show();
		}

		private void SpellEditButton_Click(object sender, EventArgs e)
		{
			SpellEditor sp = new SpellEditor(_romBytes);
			sp.Show();
		}

		private void button3_Click(object sender, EventArgs e)
		{
			PresetCharacters p = new PresetCharacters(_romBytes);
			p.Show();
		}

		private void WeaponEditorButton_Click(object sender, EventArgs e)
		{
			new WeaponEditor(_romBytes).Show();
		}
	}
}
