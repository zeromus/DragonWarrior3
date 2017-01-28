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
	public partial class WeaponEditor : Form
	{
		private byte[] _romBytes;

		public WeaponEditor(byte[] romBytes)
		{
			_romBytes = romBytes;

			InitializeComponent();
		}

		private void WeaponEditor_Load(object sender, EventArgs e)
		{
			for (int i = 0; i < 0x20; i++)
			{
				WeaponPanel.Controls.Add(new WeaponEditControl(
						new Weapon(i, _romBytes))
				{
					Location = new Point(15, 15 + (i * 85))
				});
			}
		}

		private void OkBtn_Click(object sender, EventArgs e)
		{
			WeaponPanel.Controls
				.OfType<WeaponEditControl>()
				.ToList()
				.ForEach(editor => editor.Save());

			Close();
		}

		private void CancelBtn_Click(object sender, EventArgs e)
		{
			Close();
		}
	}
}
