namespace DW3Editor
{
	partial class PresetCharacters
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
			this.OkBtn = new System.Windows.Forms.Button();
			this.CancelBtn = new System.Windows.Forms.Button();
			this.label1 = new System.Windows.Forms.Label();
			this.Character1GroupBox = new System.Windows.Forms.GroupBox();
			this.Character2GroupBox = new System.Windows.Forms.GroupBox();
			this.Character3GroupBox = new System.Windows.Forms.GroupBox();
			this.Character1ClassDropDown = new System.Windows.Forms.ComboBox();
			this.Character2ClassDropDown = new System.Windows.Forms.ComboBox();
			this.Character3ClassDropDown = new System.Windows.Forms.ComboBox();
			this.Character1GroupBox.SuspendLayout();
			this.Character2GroupBox.SuspendLayout();
			this.Character3GroupBox.SuspendLayout();
			this.SuspendLayout();
			// 
			// OkBtn
			// 
			this.OkBtn.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
			this.OkBtn.Location = new System.Drawing.Point(211, 325);
			this.OkBtn.Name = "OkBtn";
			this.OkBtn.Size = new System.Drawing.Size(60, 23);
			this.OkBtn.TabIndex = 0;
			this.OkBtn.Text = "&Ok";
			this.OkBtn.UseVisualStyleBackColor = true;
			this.OkBtn.Click += new System.EventHandler(this.OkBtn_Click);
			// 
			// CancelBtn
			// 
			this.CancelBtn.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
			this.CancelBtn.DialogResult = System.Windows.Forms.DialogResult.Cancel;
			this.CancelBtn.Location = new System.Drawing.Point(277, 325);
			this.CancelBtn.Name = "CancelBtn";
			this.CancelBtn.Size = new System.Drawing.Size(60, 23);
			this.CancelBtn.TabIndex = 1;
			this.CancelBtn.Text = "&Cancel";
			this.CancelBtn.UseVisualStyleBackColor = true;
			this.CancelBtn.Click += new System.EventHandler(this.CancelBtn_Click);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(12, 9);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(323, 13);
			this.label1.TabIndex = 2;
			this.label1.Text = "This dialog edits the 3 classes that begin at Luisa\'s place by default";
			// 
			// Character1GroupBox
			// 
			this.Character1GroupBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.Character1GroupBox.Controls.Add(this.Character1ClassDropDown);
			this.Character1GroupBox.Location = new System.Drawing.Point(12, 49);
			this.Character1GroupBox.Name = "Character1GroupBox";
			this.Character1GroupBox.Size = new System.Drawing.Size(325, 76);
			this.Character1GroupBox.TabIndex = 3;
			this.Character1GroupBox.TabStop = false;
			this.Character1GroupBox.Text = "Character 1";
			// 
			// Character2GroupBox
			// 
			this.Character2GroupBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.Character2GroupBox.Controls.Add(this.Character2ClassDropDown);
			this.Character2GroupBox.Location = new System.Drawing.Point(15, 131);
			this.Character2GroupBox.Name = "Character2GroupBox";
			this.Character2GroupBox.Size = new System.Drawing.Size(325, 76);
			this.Character2GroupBox.TabIndex = 4;
			this.Character2GroupBox.TabStop = false;
			this.Character2GroupBox.Text = "Character 2";
			// 
			// Character3GroupBox
			// 
			this.Character3GroupBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.Character3GroupBox.Controls.Add(this.Character3ClassDropDown);
			this.Character3GroupBox.Location = new System.Drawing.Point(15, 213);
			this.Character3GroupBox.Name = "Character3GroupBox";
			this.Character3GroupBox.Size = new System.Drawing.Size(325, 76);
			this.Character3GroupBox.TabIndex = 5;
			this.Character3GroupBox.TabStop = false;
			this.Character3GroupBox.Text = "Character 3";
			// 
			// Character1ClassDropDown
			// 
			this.Character1ClassDropDown.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
			this.Character1ClassDropDown.FormattingEnabled = true;
			this.Character1ClassDropDown.Items.AddRange(new object[] {
            "Male Hero",
            "Male Wizard",
            "Male Pilgram",
            "Male Sage",
            "Male Soldier",
            "Male Merchant",
            "Male Fighter",
            "Male Goof-Off",
            "Female Hero",
            "Female Wizard",
            "Female Pilgram",
            "Female Sage",
            "Female Soldier",
            "Female Merchant",
            "Female Fighter",
            "Female Goof-Off"});
			this.Character1ClassDropDown.Location = new System.Drawing.Point(22, 31);
			this.Character1ClassDropDown.Name = "Character1ClassDropDown";
			this.Character1ClassDropDown.Size = new System.Drawing.Size(121, 21);
			this.Character1ClassDropDown.TabIndex = 0;
			// 
			// Character2ClassDropDown
			// 
			this.Character2ClassDropDown.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
			this.Character2ClassDropDown.FormattingEnabled = true;
			this.Character2ClassDropDown.Items.AddRange(new object[] {
            "Male Hero",
            "Male Wizard",
            "Male Pilgram",
            "Male Sage",
            "Male Soldier",
            "Male Merchant",
            "Male Fighter",
            "Male Goof-Off",
            "Female Hero",
            "Female Wizard",
            "Female Pilgram",
            "Female Sage",
            "Female Soldier",
            "Female Merchant",
            "Female Fighter",
            "Female Goof-Off"});
			this.Character2ClassDropDown.Location = new System.Drawing.Point(19, 33);
			this.Character2ClassDropDown.Name = "Character2ClassDropDown";
			this.Character2ClassDropDown.Size = new System.Drawing.Size(121, 21);
			this.Character2ClassDropDown.TabIndex = 1;
			// 
			// Character3ClassDropDown
			// 
			this.Character3ClassDropDown.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
			this.Character3ClassDropDown.FormattingEnabled = true;
			this.Character3ClassDropDown.Items.AddRange(new object[] {
            "Male Hero",
            "Male Wizard",
            "Male Pilgram",
            "Male Sage",
            "Male Soldier",
            "Male Merchant",
            "Male Fighter",
            "Male Goof-Off",
            "Female Hero",
            "Female Wizard",
            "Female Pilgram",
            "Female Sage",
            "Female Soldier",
            "Female Merchant",
            "Female Fighter",
            "Female Goof-Off"});
			this.Character3ClassDropDown.Location = new System.Drawing.Point(19, 32);
			this.Character3ClassDropDown.Name = "Character3ClassDropDown";
			this.Character3ClassDropDown.Size = new System.Drawing.Size(121, 21);
			this.Character3ClassDropDown.TabIndex = 2;
			// 
			// PresetCharacters
			// 
			this.AcceptButton = this.OkBtn;
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.CancelButton = this.CancelBtn;
			this.ClientSize = new System.Drawing.Size(349, 360);
			this.Controls.Add(this.Character3GroupBox);
			this.Controls.Add(this.Character2GroupBox);
			this.Controls.Add(this.Character1GroupBox);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.CancelBtn);
			this.Controls.Add(this.OkBtn);
			this.Name = "PresetCharacters";
			this.ShowIcon = false;
			this.Text = "Preset Characters";
			this.Load += new System.EventHandler(this.PresetCharacters_Load);
			this.Character1GroupBox.ResumeLayout(false);
			this.Character2GroupBox.ResumeLayout(false);
			this.Character3GroupBox.ResumeLayout(false);
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.Button OkBtn;
		private System.Windows.Forms.Button CancelBtn;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.GroupBox Character1GroupBox;
		private System.Windows.Forms.GroupBox Character2GroupBox;
		private System.Windows.Forms.GroupBox Character3GroupBox;
		private System.Windows.Forms.ComboBox Character1ClassDropDown;
		private System.Windows.Forms.ComboBox Character2ClassDropDown;
		private System.Windows.Forms.ComboBox Character3ClassDropDown;
	}
}