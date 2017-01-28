using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class SpellEditControl : UserControl
	{
		private Spell _spell = Spell.DefaultInstance;

		private bool _loading = true;

		public SpellEditControl(Spell spell = null)
		{
			if (spell != null)
			{
				_spell = spell;
			}

			InitializeComponent();
		}

		public void Save(byte[] romBytes)
		{
			_spell.Save(romBytes);
		}

		private void SpellEditControl_Load(object sender, EventArgs e)
		{
			_loading = true;

			NameLabel.Text = _spell.Name;
			SpellCostNumeric.Value = _spell.Cost;
			Flag1Checkbox.Checked = _spell.Targeting;
			Flag2Checkbox.Checked = _spell.TargetEnemiesInsteadOfPlayers;

			_loading = false;
		}

		private void SpellCostNumeric_ValueChanged(object sender, EventArgs e)
		{
			if (!_loading)
			{
				_spell.Cost = (byte)SpellCostNumeric.Value;
			}
		}

		private void Flag1Checkbox_CheckedChanged(object sender, EventArgs e)
		{
			if (!_loading)
			{
				_spell.Targeting = Flag1Checkbox.Checked;
			}
		}

		private void Flag2Checkbox_CheckedChanged(object sender, EventArgs e)
		{
			if (!_loading)
			{
				_spell.TargetEnemiesInsteadOfPlayers = Flag2Checkbox.Checked;
			}
		}
	}
}
