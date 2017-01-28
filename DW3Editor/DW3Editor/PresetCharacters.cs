using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DW3Editor
{
	/// <summary>
	/// Edits the 3 classes that are at Luisa's place by default
	/// </summary>
	public partial class PresetCharacters : Form
	{
		public const int Character1ClassOffset = 0x01ED4F;
		public const int Character2ClassOffset = 0x01ED50;
		public const int Character3ClassOffset = 0x01ED51;

		private byte[] _romBytes;
		
		public PresetCharacters(byte[] romBytes)
		{
			_romBytes = romBytes;
			InitializeComponent();
		}

		private void PresetCharacters_Load(object sender, EventArgs e)
		{
			Character1ClassDropDown.SelectedItem = EnumExtensions.Description<GenderedCharacterClass>((GenderedCharacterClass)_romBytes[Character1ClassOffset]);
			Character2ClassDropDown.SelectedItem = EnumExtensions.Description<GenderedCharacterClass>((GenderedCharacterClass)_romBytes[Character2ClassOffset]);
			Character3ClassDropDown.SelectedItem = EnumExtensions.Description<GenderedCharacterClass>((GenderedCharacterClass)_romBytes[Character3ClassOffset]);
		}

		private void Save()
		{
			GenderedCharacterClass c1 = EnumExtensions.GetValueFromDescription<GenderedCharacterClass>(Character1ClassDropDown.SelectedItem.ToString());
			GenderedCharacterClass c2 = EnumExtensions.GetValueFromDescription<GenderedCharacterClass>(Character2ClassDropDown.SelectedItem.ToString());
			GenderedCharacterClass c3 = EnumExtensions.GetValueFromDescription<GenderedCharacterClass>(Character3ClassDropDown.SelectedItem.ToString());

			_romBytes[Character1ClassOffset] = (byte)(int)c1;
			_romBytes[Character2ClassOffset] = (byte)(int)c2;
			_romBytes[Character3ClassOffset] = (byte)(int)c3;
		}

		private void OkBtn_Click(object sender, EventArgs e)
		{
			Save();
			Close();
		}

		private void CancelBtn_Click(object sender, EventArgs e)
		{
			Close();
		}
	}
}
