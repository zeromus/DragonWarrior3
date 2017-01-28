namespace DW3Editor
{
	partial class Form1
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
			this.RomStatusLabel = new System.Windows.Forms.Label();
			this.EnemyEditButton = new System.Windows.Forms.Button();
			this.button1 = new System.Windows.Forms.Button();
			this.DragRomPanel = new System.Windows.Forms.Panel();
			this.DragRomMessageLabel = new System.Windows.Forms.Label();
			this.button2 = new System.Windows.Forms.Button();
			this.button4 = new System.Windows.Forms.Button();
			this.button5 = new System.Windows.Forms.Button();
			this.button6 = new System.Windows.Forms.Button();
			this.menuStrip1 = new System.Windows.Forms.MenuStrip();
			this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.SaveMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.SaveAsMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
			this.ExitMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.button7 = new System.Windows.Forms.Button();
			this.SpellEditButton = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.WeaponEditorButton = new System.Windows.Forms.Button();
			this.DragRomPanel.SuspendLayout();
			this.menuStrip1.SuspendLayout();
			this.SuspendLayout();
			// 
			// RomStatusLabel
			// 
			this.RomStatusLabel.AutoSize = true;
			this.RomStatusLabel.Location = new System.Drawing.Point(12, 31);
			this.RomStatusLabel.Name = "RomStatusLabel";
			this.RomStatusLabel.Size = new System.Drawing.Size(85, 13);
			this.RomStatusLabel.TabIndex = 0;
			this.RomStatusLabel.Text = "No Rom Loaded";
			// 
			// EnemyEditButton
			// 
			this.EnemyEditButton.Location = new System.Drawing.Point(12, 119);
			this.EnemyEditButton.Name = "EnemyEditButton";
			this.EnemyEditButton.Size = new System.Drawing.Size(98, 23);
			this.EnemyEditButton.TabIndex = 1;
			this.EnemyEditButton.Text = "Enemy Editor";
			this.EnemyEditButton.UseVisualStyleBackColor = true;
			this.EnemyEditButton.Click += new System.EventHandler(this.EnemyEditButton_Click);
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(12, 425);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(136, 23);
			this.button1.TabIndex = 2;
			this.button1.Text = "Test String Table";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// DragRomPanel
			// 
			this.DragRomPanel.AllowDrop = true;
			this.DragRomPanel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
			this.DragRomPanel.Controls.Add(this.DragRomMessageLabel);
			this.DragRomPanel.Location = new System.Drawing.Point(12, 47);
			this.DragRomPanel.Name = "DragRomPanel";
			this.DragRomPanel.Size = new System.Drawing.Size(448, 53);
			this.DragRomPanel.TabIndex = 3;
			this.DragRomPanel.DragDrop += new System.Windows.Forms.DragEventHandler(this.DragRomPanel_DragDrop);
			this.DragRomPanel.DragEnter += new System.Windows.Forms.DragEventHandler(this.DragRomPanel_DragEnter);
			// 
			// DragRomMessageLabel
			// 
			this.DragRomMessageLabel.AutoSize = true;
			this.DragRomMessageLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
			this.DragRomMessageLabel.Location = new System.Drawing.Point(107, 10);
			this.DragRomMessageLabel.Name = "DragRomMessageLabel";
			this.DragRomMessageLabel.Size = new System.Drawing.Size(162, 25);
			this.DragRomMessageLabel.TabIndex = 0;
			this.DragRomMessageLabel.Text = "Drag ROM here";
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(12, 396);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(149, 23);
			this.button2.TabIndex = 4;
			this.button2.Text = "Print Enemy Action Handlers";
			this.button2.UseVisualStyleBackColor = true;
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// button4
			// 
			this.button4.Location = new System.Drawing.Point(12, 367);
			this.button4.Name = "button4";
			this.button4.Size = new System.Drawing.Size(149, 23);
			this.button4.TabIndex = 6;
			this.button4.Text = "Print Item Info";
			this.button4.UseVisualStyleBackColor = true;
			this.button4.Click += new System.EventHandler(this.button4_Click);
			// 
			// button5
			// 
			this.button5.Location = new System.Drawing.Point(12, 338);
			this.button5.Name = "button5";
			this.button5.Size = new System.Drawing.Size(149, 23);
			this.button5.TabIndex = 7;
			this.button5.Text = "Filesystem Browser";
			this.button5.UseVisualStyleBackColor = true;
			this.button5.Click += new System.EventHandler(this.button5_Click);
			// 
			// button6
			// 
			this.button6.Location = new System.Drawing.Point(12, 309);
			this.button6.Name = "button6";
			this.button6.Size = new System.Drawing.Size(149, 23);
			this.button6.TabIndex = 8;
			this.button6.Text = "Map Browser";
			this.button6.UseVisualStyleBackColor = true;
			this.button6.Click += new System.EventHandler(this.button6_Click);
			// 
			// menuStrip1
			// 
			this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem});
			this.menuStrip1.Location = new System.Drawing.Point(0, 0);
			this.menuStrip1.Name = "menuStrip1";
			this.menuStrip1.Size = new System.Drawing.Size(472, 24);
			this.menuStrip1.TabIndex = 9;
			this.menuStrip1.Text = "menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.SaveMenuItem,
            this.SaveAsMenuItem,
            this.toolStripSeparator1,
            this.ExitMenuItem});
			this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
			this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
			this.fileToolStripMenuItem.Text = "&File";
			// 
			// SaveMenuItem
			// 
			this.SaveMenuItem.Name = "SaveMenuItem";
			this.SaveMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.S)));
			this.SaveMenuItem.Size = new System.Drawing.Size(186, 22);
			this.SaveMenuItem.Text = "&Save";
			this.SaveMenuItem.Click += new System.EventHandler(this.SaveMenuItem_Click);
			// 
			// SaveAsMenuItem
			// 
			this.SaveAsMenuItem.Name = "SaveAsMenuItem";
			this.SaveAsMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)(((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.Shift) 
            | System.Windows.Forms.Keys.S)));
			this.SaveAsMenuItem.Size = new System.Drawing.Size(186, 22);
			this.SaveAsMenuItem.Text = "Save &As";
			this.SaveAsMenuItem.Click += new System.EventHandler(this.SaveAsMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this.toolStripSeparator1.Name = "toolStripSeparator1";
			this.toolStripSeparator1.Size = new System.Drawing.Size(183, 6);
			// 
			// ExitMenuItem
			// 
			this.ExitMenuItem.Name = "ExitMenuItem";
			this.ExitMenuItem.ShortcutKeyDisplayString = "Alt+F4";
			this.ExitMenuItem.Size = new System.Drawing.Size(186, 22);
			this.ExitMenuItem.Text = "E&xit";
			this.ExitMenuItem.Click += new System.EventHandler(this.ExitMenuItem_Click);
			// 
			// button7
			// 
			this.button7.Location = new System.Drawing.Point(15, 211);
			this.button7.Name = "button7";
			this.button7.Size = new System.Drawing.Size(75, 23);
			this.button7.TabIndex = 10;
			this.button7.Text = "Text Viewer";
			this.button7.UseVisualStyleBackColor = true;
			this.button7.Click += new System.EventHandler(this.button7_Click);
			// 
			// SpellEditButton
			// 
			this.SpellEditButton.Location = new System.Drawing.Point(12, 148);
			this.SpellEditButton.Name = "SpellEditButton";
			this.SpellEditButton.Size = new System.Drawing.Size(98, 23);
			this.SpellEditButton.TabIndex = 11;
			this.SpellEditButton.Text = "Spell Editor";
			this.SpellEditButton.UseVisualStyleBackColor = true;
			this.SpellEditButton.Click += new System.EventHandler(this.SpellEditButton_Click);
			// 
			// button3
			// 
			this.button3.Location = new System.Drawing.Point(126, 119);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(117, 23);
			this.button3.TabIndex = 12;
			this.button3.Text = "Default Characters";
			this.button3.UseVisualStyleBackColor = true;
			this.button3.Click += new System.EventHandler(this.button3_Click);
			// 
			// WeaponEditorButton
			// 
			this.WeaponEditorButton.Location = new System.Drawing.Point(126, 148);
			this.WeaponEditorButton.Name = "WeaponEditorButton";
			this.WeaponEditorButton.Size = new System.Drawing.Size(98, 23);
			this.WeaponEditorButton.TabIndex = 13;
			this.WeaponEditorButton.Text = "Weapon Editor";
			this.WeaponEditorButton.UseVisualStyleBackColor = true;
			this.WeaponEditorButton.Click += new System.EventHandler(this.WeaponEditorButton_Click);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(472, 489);
			this.Controls.Add(this.WeaponEditorButton);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.SpellEditButton);
			this.Controls.Add(this.button7);
			this.Controls.Add(this.button6);
			this.Controls.Add(this.button5);
			this.Controls.Add(this.button4);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.DragRomPanel);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.EnemyEditButton);
			this.Controls.Add(this.RomStatusLabel);
			this.Controls.Add(this.menuStrip1);
			this.MainMenuStrip = this.menuStrip1;
			this.Name = "Form1";
			this.Text = "Dragon Warrior 3 Editor";
			this.Load += new System.EventHandler(this.Form1_Load);
			this.DragRomPanel.ResumeLayout(false);
			this.DragRomPanel.PerformLayout();
			this.menuStrip1.ResumeLayout(false);
			this.menuStrip1.PerformLayout();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.Label RomStatusLabel;
		private System.Windows.Forms.Button EnemyEditButton;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.Panel DragRomPanel;
		private System.Windows.Forms.Label DragRomMessageLabel;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button4;
		private System.Windows.Forms.Button button5;
		private System.Windows.Forms.Button button6;
		private System.Windows.Forms.MenuStrip menuStrip1;
		private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem SaveMenuItem;
		private System.Windows.Forms.ToolStripMenuItem SaveAsMenuItem;
		private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
		private System.Windows.Forms.ToolStripMenuItem ExitMenuItem;
		private System.Windows.Forms.Button button7;
		private System.Windows.Forms.Button SpellEditButton;
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button WeaponEditorButton;
	}
}

