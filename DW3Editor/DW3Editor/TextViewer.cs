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
	public partial class TextViewer : Form
	{
		private byte[] _romBytes = new byte[0];
		
		public TextViewer(byte[] romBytes)
		{
			_romBytes = romBytes;
			InitializeComponent();
		}

		private void TextViewer_Load(object sender, EventArgs e)
		{
			DW3String all = new DW3String(_romBytes, 0);

			AllTextBox.Text = all.ToString();
		}
	}
}
