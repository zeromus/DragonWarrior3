namespace DW3Editor
{
	partial class FilesystemBrowser
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.lvGlobalFiles = new System.Windows.Forms.ListView();
			this.colGFID = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.colBank = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.colLFID = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.colLOFs = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.colRomAddr = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.colSuspLen = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.colName = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.label1 = new System.Windows.Forms.Label();
			this.SuspendLayout();
			// 
			// lvGlobalFiles
			// 
			this.lvGlobalFiles.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.colGFID,
            this.colBank,
            this.colLFID,
            this.colLOFs,
            this.colRomAddr,
            this.colSuspLen,
            this.colName});
			this.lvGlobalFiles.FullRowSelect = true;
			this.lvGlobalFiles.Location = new System.Drawing.Point(11, 30);
			this.lvGlobalFiles.Name = "lvGlobalFiles";
			this.lvGlobalFiles.Size = new System.Drawing.Size(671, 501);
			this.lvGlobalFiles.TabIndex = 0;
			this.lvGlobalFiles.UseCompatibleStateImageBehavior = false;
			this.lvGlobalFiles.View = System.Windows.Forms.View.Details;
			// 
			// colGFID
			// 
			this.colGFID.Text = "GFID";
			// 
			// colBank
			// 
			this.colBank.Text = "Bank";
			// 
			// colLFID
			// 
			this.colLFID.Text = "LFID";
			// 
			// colLOFs
			// 
			this.colLOFs.Text = "LOfs";
			// 
			// colRomAddr
			// 
			this.colRomAddr.Text = "RomAddr";
			// 
			// colSuspLen
			// 
			this.colSuspLen.Text = "Susp.Len";
			// 
			// colName
			// 
			this.colName.Text = "Name";
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(13, 11);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(600, 13);
			this.label1.TabIndex = 1;
			this.label1.Text = "Some values in here may be scrambled, as the file tables are used in varying ways" +
    ". Dont read too much into scrambled values.";
			// 
			// FilesystemBrowser
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(694, 543);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.lvGlobalFiles);
			this.Name = "FilesystemBrowser";
			this.Text = "FilesystemBrowser";
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.ListView lvGlobalFiles;
		private System.Windows.Forms.ColumnHeader colGFID;
		private System.Windows.Forms.ColumnHeader colBank;
		private System.Windows.Forms.ColumnHeader colLFID;
		private System.Windows.Forms.ColumnHeader colLOFs;
		private System.Windows.Forms.ColumnHeader colRomAddr;
		private System.Windows.Forms.ColumnHeader colSuspLen;
		private System.Windows.Forms.ColumnHeader colName;
		private System.Windows.Forms.Label label1;
	}
}