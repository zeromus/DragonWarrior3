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
	public partial class FilesystemBrowser : Form
	{
		public FilesystemBrowser(byte[] _romBytes)
		{
			InitializeComponent();

			var fs = new DW3Editor.GameClasses.FileSystem(_romBytes);

			foreach (var fr in fs.FileRecords)
			{
				ListViewItem lvi = new ListViewItem();
				lvi.Text = string.Format("${0:X3}", fr.GlobalFileID);
				var props = new string[] {
					string.Format("${0:X2}",fr.Bank),
					string.Format("${0:X2}",fr.LocalFileID),
					string.Format("${0:X4}",fr.LocalOffset),
					string.Format("${0:X6}",fr.RomAddress),
					string.Format("${0:X4}",fr.SuspectedLength),
					fr.Name
				};
				lvi.SubItems.AddRange(props);
				lvGlobalFiles.Items.Add(lvi);
			}

			lvGlobalFiles.AutoResizeColumn(5, ColumnHeaderAutoResizeStyle.HeaderSize);
			lvGlobalFiles.AutoResizeColumn(6,ColumnHeaderAutoResizeStyle.ColumnContent);
		}
	}
}
