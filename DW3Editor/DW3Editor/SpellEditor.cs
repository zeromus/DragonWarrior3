using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class SpellEditor : Form
	{
		private byte[] _romBytes = new byte[0];

		public SpellEditor(byte[] romBytes)
		{
			_romBytes = romBytes;
			InitializeComponent();
		}

		private void SpellEditor_Load(object sender, EventArgs e)
		{
			for (int i = 0; i <= 0x36; i++)
			{
				var br = new BinaryReader(new MemoryStream(_romBytes));
				var pos = Form1.Address(0x04, 0x3452) + i;
				br.BaseStream.Position = pos;
				var spellByte = br.ReadByte();
				string name = DW3String.TranslateString(ReadNativeStringTableEntry(DW3String.eStringTable.Spell, i));

				Spell spell = new Spell(spellByte, pos, name);

				SpellEditControl spellEditor = new SpellEditControl(spell)
				{
					Location = new Point(15, 15 + (30 * i))
				};

				SpellEditorPanel.Controls.Add(spellEditor);
			}
		}

		// TODO: copy pasta from Form1
		public string ReadNativeStringTableEntry(DW3String.eStringTable whichTable, int offset)
		{
			var br = new BinaryReader(new MemoryStream(_romBytes));
			br.BaseStream.Position = Global.MainForm.StringTableOffsets[whichTable];
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

		private void OkBtn_Click(object sender, EventArgs e)
		{
			SpellEditorPanel.Controls
				.OfType<SpellEditControl>()
				.ToList()
				.ForEach(editor => editor.Save(_romBytes));

			Close();
		}

		private void CancelBtn_Click(object sender, EventArgs e)
		{
			Close();
		}
	}
}
