namespace DW3Editor
{
	partial class SpellEditControl
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
			this.CostLabel = new System.Windows.Forms.Label();
			this.SpellCostNumeric = new System.Windows.Forms.NumericUpDown();
			this.Flag1Checkbox = new System.Windows.Forms.CheckBox();
			this.Flag2Checkbox = new System.Windows.Forms.CheckBox();
			((System.ComponentModel.ISupportInitialize)(this.SpellCostNumeric)).BeginInit();
			this.SuspendLayout();
			// 
			// NameLabel
			// 
			this.NameLabel.AutoSize = true;
			this.NameLabel.Location = new System.Drawing.Point(4, 4);
			this.NameLabel.Name = "NameLabel";
			this.NameLabel.Size = new System.Drawing.Size(53, 13);
			this.NameLabel.TabIndex = 0;
			this.NameLabel.Text = "Name......";
			// 
			// CostLabel
			// 
			this.CostLabel.AutoSize = true;
			this.CostLabel.Location = new System.Drawing.Point(105, 4);
			this.CostLabel.Name = "CostLabel";
			this.CostLabel.Size = new System.Drawing.Size(26, 13);
			this.CostLabel.TabIndex = 1;
			this.CostLabel.Text = "MP:";
			// 
			// SpellCostNumeric
			// 
			this.SpellCostNumeric.Location = new System.Drawing.Point(137, 0);
			this.SpellCostNumeric.Maximum = new decimal(new int[] {
            63,
            0,
            0,
            0});
			this.SpellCostNumeric.Name = "SpellCostNumeric";
			this.SpellCostNumeric.Size = new System.Drawing.Size(42, 20);
			this.SpellCostNumeric.TabIndex = 2;
			this.SpellCostNumeric.ValueChanged += new System.EventHandler(this.SpellCostNumeric_ValueChanged);
			// 
			// Flag1Checkbox
			// 
			this.Flag1Checkbox.AutoSize = true;
			this.Flag1Checkbox.Location = new System.Drawing.Point(186, 2);
			this.Flag1Checkbox.Name = "Flag1Checkbox";
			this.Flag1Checkbox.Size = new System.Drawing.Size(71, 17);
			this.Flag1Checkbox.TabIndex = 3;
			this.Flag1Checkbox.Text = "Targeting";
			this.Flag1Checkbox.UseVisualStyleBackColor = true;
			this.Flag1Checkbox.CheckedChanged += new System.EventHandler(this.Flag1Checkbox_CheckedChanged);
			// 
			// Flag2Checkbox
			// 
			this.Flag2Checkbox.AutoSize = true;
			this.Flag2Checkbox.Location = new System.Drawing.Point(268, 2);
			this.Flag2Checkbox.Name = "Flag2Checkbox";
			this.Flag2Checkbox.Size = new System.Drawing.Size(100, 17);
			this.Flag2Checkbox.TabIndex = 4;
			this.Flag2Checkbox.Text = "Target Enemies";
			this.Flag2Checkbox.UseVisualStyleBackColor = true;
			this.Flag2Checkbox.CheckedChanged += new System.EventHandler(this.Flag2Checkbox_CheckedChanged);
			// 
			// SpellEditControl
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.Controls.Add(this.Flag2Checkbox);
			this.Controls.Add(this.Flag1Checkbox);
			this.Controls.Add(this.SpellCostNumeric);
			this.Controls.Add(this.CostLabel);
			this.Controls.Add(this.NameLabel);
			this.Name = "SpellEditControl";
			this.Size = new System.Drawing.Size(379, 22);
			this.Load += new System.EventHandler(this.SpellEditControl_Load);
			((System.ComponentModel.ISupportInitialize)(this.SpellCostNumeric)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.Label NameLabel;
		private System.Windows.Forms.Label CostLabel;
		private System.Windows.Forms.NumericUpDown SpellCostNumeric;
		private System.Windows.Forms.CheckBox Flag1Checkbox;
		private System.Windows.Forms.CheckBox Flag2Checkbox;
	}
}
