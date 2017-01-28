namespace DW3Editor
{
	partial class EnemyEditor
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
			this.EnemyPicker = new System.Windows.Forms.ComboBox();
			this.label1 = new System.Windows.Forms.Label();
			this.EnemyEditGroupBox = new System.Windows.Forms.GroupBox();
			this.TheEnemyEditControl = new DW3Editor.EnemyEditControl();
			this.OkBtn = new System.Windows.Forms.Button();
			this.CancelBtn = new System.Windows.Forms.Button();
			this.EnemyEditGroupBox.SuspendLayout();
			this.SuspendLayout();
			// 
			// EnemyPicker
			// 
			this.EnemyPicker.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
			this.EnemyPicker.FormattingEnabled = true;
			this.EnemyPicker.Location = new System.Drawing.Point(60, 17);
			this.EnemyPicker.Name = "EnemyPicker";
			this.EnemyPicker.Size = new System.Drawing.Size(121, 21);
			this.EnemyPicker.TabIndex = 0;
			this.EnemyPicker.SelectedIndexChanged += new System.EventHandler(this.EnemyPicker_SelectedIndexChanged);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(12, 20);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(42, 13);
			this.label1.TabIndex = 1;
			this.label1.Text = "Enemy:";
			// 
			// EnemyEditGroupBox
			// 
			this.EnemyEditGroupBox.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.EnemyEditGroupBox.Controls.Add(this.TheEnemyEditControl);
			this.EnemyEditGroupBox.Location = new System.Drawing.Point(15, 54);
			this.EnemyEditGroupBox.Name = "EnemyEditGroupBox";
			this.EnemyEditGroupBox.Size = new System.Drawing.Size(368, 621);
			this.EnemyEditGroupBox.TabIndex = 2;
			this.EnemyEditGroupBox.TabStop = false;
			this.EnemyEditGroupBox.Text = "None";
			// 
			// TheEnemyEditControl
			// 
			this.TheEnemyEditControl.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.TheEnemyEditControl.Location = new System.Drawing.Point(16, 19);
			this.TheEnemyEditControl.Name = "TheEnemyEditControl";
			this.TheEnemyEditControl.Size = new System.Drawing.Size(346, 596);
			this.TheEnemyEditControl.TabIndex = 0;
			// 
			// OkBtn
			// 
			this.OkBtn.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
			this.OkBtn.Location = new System.Drawing.Point(247, 693);
			this.OkBtn.Name = "OkBtn";
			this.OkBtn.Size = new System.Drawing.Size(65, 23);
			this.OkBtn.TabIndex = 3;
			this.OkBtn.Text = "&Ok";
			this.OkBtn.UseVisualStyleBackColor = true;
			this.OkBtn.Click += new System.EventHandler(this.OkBtn_Click);
			// 
			// CancelBtn
			// 
			this.CancelBtn.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
			this.CancelBtn.DialogResult = System.Windows.Forms.DialogResult.Cancel;
			this.CancelBtn.Location = new System.Drawing.Point(318, 693);
			this.CancelBtn.Name = "CancelBtn";
			this.CancelBtn.Size = new System.Drawing.Size(65, 23);
			this.CancelBtn.TabIndex = 4;
			this.CancelBtn.Text = "&Cancel";
			this.CancelBtn.UseVisualStyleBackColor = true;
			this.CancelBtn.Click += new System.EventHandler(this.CancelBtn_Click);
			// 
			// EnemyEditor
			// 
			this.AcceptButton = this.OkBtn;
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.CancelButton = this.CancelBtn;
			this.ClientSize = new System.Drawing.Size(395, 728);
			this.Controls.Add(this.CancelBtn);
			this.Controls.Add(this.OkBtn);
			this.Controls.Add(this.EnemyEditGroupBox);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.EnemyPicker);
			this.Name = "EnemyEditor";
			this.Text = "EnemyEditor";
			this.Load += new System.EventHandler(this.EnemyEditor_Load);
			this.EnemyEditGroupBox.ResumeLayout(false);
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.ComboBox EnemyPicker;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.GroupBox EnemyEditGroupBox;
		private EnemyEditControl TheEnemyEditControl;
		private System.Windows.Forms.Button OkBtn;
		private System.Windows.Forms.Button CancelBtn;

	}
}