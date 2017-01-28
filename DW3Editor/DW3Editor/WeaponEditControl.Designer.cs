namespace DW3Editor
{
	partial class WeaponEditControl
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

		#region Component Designer generated code

		/// <summary> 
		/// Required method for Designer support - do not modify 
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.NameLabel = new System.Windows.Forms.Label();
			this.PriceNumeric = new System.Windows.Forms.NumericUpDown();
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.HrEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.HrUseCheckbox = new System.Windows.Forms.CheckBox();
			this.SrUseCheckbox = new System.Windows.Forms.CheckBox();
			this.SrEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.MrUseCheckbox = new System.Windows.Forms.CheckBox();
			this.MrEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.FrUseCheckbox = new System.Windows.Forms.CheckBox();
			this.FrEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.GfUseCheckbox = new System.Windows.Forms.CheckBox();
			this.GfEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.WzUseCheckbox = new System.Windows.Forms.CheckBox();
			this.WzEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.PgUseCheckbox = new System.Windows.Forms.CheckBox();
			this.PgEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.SgUseCheckbox = new System.Windows.Forms.CheckBox();
			this.SgEquipCheckbox = new System.Windows.Forms.CheckBox();
			this.label3 = new System.Windows.Forms.Label();
			this.label4 = new System.Windows.Forms.Label();
			this.EffectDropDown = new System.Windows.Forms.ComboBox();
			((System.ComponentModel.ISupportInitialize)(this.PriceNumeric)).BeginInit();
			this.SuspendLayout();
			// 
			// NameLabel
			// 
			this.NameLabel.AutoSize = true;
			this.NameLabel.Location = new System.Drawing.Point(4, 4);
			this.NameLabel.Name = "NameLabel";
			this.NameLabel.Size = new System.Drawing.Size(106, 13);
			this.NameLabel.TabIndex = 0;
			this.NameLabel.Text = "Sword of Destruction";
			// 
			// PriceNumeric
			// 
			this.PriceNumeric.Location = new System.Drawing.Point(125, 2);
			this.PriceNumeric.Maximum = new decimal(new int[] {
            65535,
            0,
            0,
            0});
			this.PriceNumeric.Name = "PriceNumeric";
			this.PriceNumeric.Size = new System.Drawing.Size(55, 20);
			this.PriceNumeric.TabIndex = 1;
			this.PriceNumeric.Value = new decimal(new int[] {
            65535,
            0,
            0,
            0});
			this.PriceNumeric.ValueChanged += new System.EventHandler(this.PriceNumeric_ValueChanged);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(6, 35);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(37, 13);
			this.label1.TabIndex = 2;
			this.label1.Text = "Equip:";
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(14, 53);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(29, 13);
			this.label2.TabIndex = 3;
			this.label2.Text = "Use:";
			// 
			// HrEquipCheckbox
			// 
			this.HrEquipCheckbox.AutoSize = true;
			this.HrEquipCheckbox.Location = new System.Drawing.Point(60, 33);
			this.HrEquipCheckbox.Name = "HrEquipCheckbox";
			this.HrEquipCheckbox.Size = new System.Drawing.Size(37, 17);
			this.HrEquipCheckbox.TabIndex = 4;
			this.HrEquipCheckbox.Text = "Hr";
			this.HrEquipCheckbox.UseVisualStyleBackColor = true;
			this.HrEquipCheckbox.CheckedChanged += new System.EventHandler(this.HrEquipCheckbox_CheckedChanged);
			// 
			// HrUseCheckbox
			// 
			this.HrUseCheckbox.AutoSize = true;
			this.HrUseCheckbox.Location = new System.Drawing.Point(59, 51);
			this.HrUseCheckbox.Name = "HrUseCheckbox";
			this.HrUseCheckbox.Size = new System.Drawing.Size(37, 17);
			this.HrUseCheckbox.TabIndex = 5;
			this.HrUseCheckbox.Text = "Hr";
			this.HrUseCheckbox.UseVisualStyleBackColor = true;
			this.HrUseCheckbox.CheckedChanged += new System.EventHandler(this.HrUseCheckbox_CheckedChanged);
			// 
			// SrUseCheckbox
			// 
			this.SrUseCheckbox.AutoSize = true;
			this.SrUseCheckbox.Location = new System.Drawing.Point(100, 51);
			this.SrUseCheckbox.Name = "SrUseCheckbox";
			this.SrUseCheckbox.Size = new System.Drawing.Size(36, 17);
			this.SrUseCheckbox.TabIndex = 7;
			this.SrUseCheckbox.Text = "Sr";
			this.SrUseCheckbox.UseVisualStyleBackColor = true;
			this.SrUseCheckbox.CheckedChanged += new System.EventHandler(this.SrUseCheckbox_CheckedChanged);
			// 
			// SrEquipCheckbox
			// 
			this.SrEquipCheckbox.AutoSize = true;
			this.SrEquipCheckbox.Location = new System.Drawing.Point(100, 33);
			this.SrEquipCheckbox.Name = "SrEquipCheckbox";
			this.SrEquipCheckbox.Size = new System.Drawing.Size(36, 17);
			this.SrEquipCheckbox.TabIndex = 6;
			this.SrEquipCheckbox.Text = "Sr";
			this.SrEquipCheckbox.UseVisualStyleBackColor = true;
			this.SrEquipCheckbox.CheckedChanged += new System.EventHandler(this.SrEquipCheckbox_CheckedChanged);
			// 
			// MrUseCheckbox
			// 
			this.MrUseCheckbox.AutoSize = true;
			this.MrUseCheckbox.Location = new System.Drawing.Point(180, 51);
			this.MrUseCheckbox.Name = "MrUseCheckbox";
			this.MrUseCheckbox.Size = new System.Drawing.Size(38, 17);
			this.MrUseCheckbox.TabIndex = 11;
			this.MrUseCheckbox.Text = "Mr";
			this.MrUseCheckbox.UseVisualStyleBackColor = true;
			this.MrUseCheckbox.CheckedChanged += new System.EventHandler(this.MrUseCheckbox_CheckedChanged);
			// 
			// MrEquipCheckbox
			// 
			this.MrEquipCheckbox.AutoSize = true;
			this.MrEquipCheckbox.Location = new System.Drawing.Point(180, 33);
			this.MrEquipCheckbox.Name = "MrEquipCheckbox";
			this.MrEquipCheckbox.Size = new System.Drawing.Size(38, 17);
			this.MrEquipCheckbox.TabIndex = 10;
			this.MrEquipCheckbox.Text = "Mr";
			this.MrEquipCheckbox.UseVisualStyleBackColor = true;
			this.MrEquipCheckbox.CheckedChanged += new System.EventHandler(this.MrEquipCheckbox_CheckedChanged);
			// 
			// FrUseCheckbox
			// 
			this.FrUseCheckbox.AutoSize = true;
			this.FrUseCheckbox.Location = new System.Drawing.Point(140, 51);
			this.FrUseCheckbox.Name = "FrUseCheckbox";
			this.FrUseCheckbox.Size = new System.Drawing.Size(35, 17);
			this.FrUseCheckbox.TabIndex = 9;
			this.FrUseCheckbox.Text = "Fr";
			this.FrUseCheckbox.UseVisualStyleBackColor = true;
			this.FrUseCheckbox.CheckedChanged += new System.EventHandler(this.FrUseCheckbox_CheckedChanged);
			// 
			// FrEquipCheckbox
			// 
			this.FrEquipCheckbox.AutoSize = true;
			this.FrEquipCheckbox.Location = new System.Drawing.Point(140, 33);
			this.FrEquipCheckbox.Name = "FrEquipCheckbox";
			this.FrEquipCheckbox.Size = new System.Drawing.Size(35, 17);
			this.FrEquipCheckbox.TabIndex = 8;
			this.FrEquipCheckbox.Text = "Fr";
			this.FrEquipCheckbox.UseVisualStyleBackColor = true;
			this.FrEquipCheckbox.CheckedChanged += new System.EventHandler(this.FrEquipCheckbox_CheckedChanged);
			// 
			// GfUseCheckbox
			// 
			this.GfUseCheckbox.AutoSize = true;
			this.GfUseCheckbox.Location = new System.Drawing.Point(340, 51);
			this.GfUseCheckbox.Name = "GfUseCheckbox";
			this.GfUseCheckbox.Size = new System.Drawing.Size(37, 17);
			this.GfUseCheckbox.TabIndex = 19;
			this.GfUseCheckbox.Text = "Gf";
			this.GfUseCheckbox.UseVisualStyleBackColor = true;
			this.GfUseCheckbox.CheckedChanged += new System.EventHandler(this.GfUseCheckbox_CheckedChanged);
			// 
			// GfEquipCheckbox
			// 
			this.GfEquipCheckbox.AutoSize = true;
			this.GfEquipCheckbox.Location = new System.Drawing.Point(340, 33);
			this.GfEquipCheckbox.Name = "GfEquipCheckbox";
			this.GfEquipCheckbox.Size = new System.Drawing.Size(37, 17);
			this.GfEquipCheckbox.TabIndex = 18;
			this.GfEquipCheckbox.Text = "Gf";
			this.GfEquipCheckbox.UseVisualStyleBackColor = true;
			this.GfEquipCheckbox.CheckedChanged += new System.EventHandler(this.GfEquipCheckbox_CheckedChanged);
			// 
			// WzUseCheckbox
			// 
			this.WzUseCheckbox.AutoSize = true;
			this.WzUseCheckbox.Location = new System.Drawing.Point(300, 51);
			this.WzUseCheckbox.Name = "WzUseCheckbox";
			this.WzUseCheckbox.Size = new System.Drawing.Size(42, 17);
			this.WzUseCheckbox.TabIndex = 17;
			this.WzUseCheckbox.Text = "Wz";
			this.WzUseCheckbox.UseVisualStyleBackColor = true;
			this.WzUseCheckbox.CheckedChanged += new System.EventHandler(this.WzUseCheckbox_CheckedChanged);
			// 
			// WzEquipCheckbox
			// 
			this.WzEquipCheckbox.AutoSize = true;
			this.WzEquipCheckbox.Location = new System.Drawing.Point(300, 33);
			this.WzEquipCheckbox.Name = "WzEquipCheckbox";
			this.WzEquipCheckbox.Size = new System.Drawing.Size(42, 17);
			this.WzEquipCheckbox.TabIndex = 16;
			this.WzEquipCheckbox.Text = "Wz";
			this.WzEquipCheckbox.UseVisualStyleBackColor = true;
			this.WzEquipCheckbox.CheckedChanged += new System.EventHandler(this.WzEquipCheckbox_CheckedChanged);
			// 
			// PgUseCheckbox
			// 
			this.PgUseCheckbox.AutoSize = true;
			this.PgUseCheckbox.Location = new System.Drawing.Point(260, 51);
			this.PgUseCheckbox.Name = "PgUseCheckbox";
			this.PgUseCheckbox.Size = new System.Drawing.Size(39, 17);
			this.PgUseCheckbox.TabIndex = 15;
			this.PgUseCheckbox.Text = "Pg";
			this.PgUseCheckbox.UseVisualStyleBackColor = true;
			this.PgUseCheckbox.CheckedChanged += new System.EventHandler(this.PgUseCheckbox_CheckedChanged);
			// 
			// PgEquipCheckbox
			// 
			this.PgEquipCheckbox.AutoSize = true;
			this.PgEquipCheckbox.Location = new System.Drawing.Point(260, 33);
			this.PgEquipCheckbox.Name = "PgEquipCheckbox";
			this.PgEquipCheckbox.Size = new System.Drawing.Size(39, 17);
			this.PgEquipCheckbox.TabIndex = 14;
			this.PgEquipCheckbox.Text = "Pg";
			this.PgEquipCheckbox.UseVisualStyleBackColor = true;
			this.PgEquipCheckbox.CheckedChanged += new System.EventHandler(this.PgEquipCheckbox_CheckedChanged);
			// 
			// SgUseCheckbox
			// 
			this.SgUseCheckbox.AutoSize = true;
			this.SgUseCheckbox.Location = new System.Drawing.Point(220, 51);
			this.SgUseCheckbox.Name = "SgUseCheckbox";
			this.SgUseCheckbox.Size = new System.Drawing.Size(39, 17);
			this.SgUseCheckbox.TabIndex = 13;
			this.SgUseCheckbox.Text = "Sg";
			this.SgUseCheckbox.UseVisualStyleBackColor = true;
			this.SgUseCheckbox.CheckedChanged += new System.EventHandler(this.SgUseCheckbox_CheckedChanged);
			// 
			// SgEquipCheckbox
			// 
			this.SgEquipCheckbox.AutoSize = true;
			this.SgEquipCheckbox.Location = new System.Drawing.Point(220, 33);
			this.SgEquipCheckbox.Name = "SgEquipCheckbox";
			this.SgEquipCheckbox.Size = new System.Drawing.Size(39, 17);
			this.SgEquipCheckbox.TabIndex = 12;
			this.SgEquipCheckbox.Text = "Sg";
			this.SgEquipCheckbox.UseVisualStyleBackColor = true;
			this.SgEquipCheckbox.CheckedChanged += new System.EventHandler(this.SgEquipCheckbox_CheckedChanged);
			// 
			// label3
			// 
			this.label3.AutoSize = true;
			this.label3.Location = new System.Drawing.Point(220, 4);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(38, 13);
			this.label3.TabIndex = 20;
			this.label3.Text = "Effect:";
			// 
			// label4
			// 
			this.label4.AutoSize = true;
			this.label4.Location = new System.Drawing.Point(181, 4);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(21, 13);
			this.label4.TabIndex = 21;
			this.label4.Text = "Gp";
			// 
			// EffectDropDown
			// 
			this.EffectDropDown.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
			this.EffectDropDown.FormattingEnabled = true;
			this.EffectDropDown.Items.AddRange(new object[] {
            "Todo"});
			this.EffectDropDown.Location = new System.Drawing.Point(260, 2);
			this.EffectDropDown.Name = "EffectDropDown";
			this.EffectDropDown.Size = new System.Drawing.Size(165, 21);
			this.EffectDropDown.TabIndex = 22;
			this.EffectDropDown.SelectedIndexChanged += new System.EventHandler(this.EffectDropDown_SelectedIndexChanged);
			// 
			// WeaponEditControl
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
			this.Controls.Add(this.EffectDropDown);
			this.Controls.Add(this.label4);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.GfUseCheckbox);
			this.Controls.Add(this.GfEquipCheckbox);
			this.Controls.Add(this.WzUseCheckbox);
			this.Controls.Add(this.WzEquipCheckbox);
			this.Controls.Add(this.PgUseCheckbox);
			this.Controls.Add(this.PgEquipCheckbox);
			this.Controls.Add(this.SgUseCheckbox);
			this.Controls.Add(this.SgEquipCheckbox);
			this.Controls.Add(this.MrUseCheckbox);
			this.Controls.Add(this.MrEquipCheckbox);
			this.Controls.Add(this.FrUseCheckbox);
			this.Controls.Add(this.FrEquipCheckbox);
			this.Controls.Add(this.SrUseCheckbox);
			this.Controls.Add(this.SrEquipCheckbox);
			this.Controls.Add(this.HrUseCheckbox);
			this.Controls.Add(this.HrEquipCheckbox);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.PriceNumeric);
			this.Controls.Add(this.NameLabel);
			this.Name = "WeaponEditControl";
			this.Size = new System.Drawing.Size(433, 76);
			this.Load += new System.EventHandler(this.WeaponEditControl_Load);
			((System.ComponentModel.ISupportInitialize)(this.PriceNumeric)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.Label NameLabel;
		private System.Windows.Forms.NumericUpDown PriceNumeric;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.CheckBox HrEquipCheckbox;
		private System.Windows.Forms.CheckBox HrUseCheckbox;
		private System.Windows.Forms.CheckBox SrUseCheckbox;
		private System.Windows.Forms.CheckBox SrEquipCheckbox;
		private System.Windows.Forms.CheckBox MrUseCheckbox;
		private System.Windows.Forms.CheckBox MrEquipCheckbox;
		private System.Windows.Forms.CheckBox FrUseCheckbox;
		private System.Windows.Forms.CheckBox FrEquipCheckbox;
		private System.Windows.Forms.CheckBox GfUseCheckbox;
		private System.Windows.Forms.CheckBox GfEquipCheckbox;
		private System.Windows.Forms.CheckBox WzUseCheckbox;
		private System.Windows.Forms.CheckBox WzEquipCheckbox;
		private System.Windows.Forms.CheckBox PgUseCheckbox;
		private System.Windows.Forms.CheckBox PgEquipCheckbox;
		private System.Windows.Forms.CheckBox SgUseCheckbox;
		private System.Windows.Forms.CheckBox SgEquipCheckbox;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.ComboBox EffectDropDown;
	}
}
