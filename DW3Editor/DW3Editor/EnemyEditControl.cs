using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class EnemyEditControl : UserControl
	{
		private static IEnumerable<string> GetDescriptions(Type type)
		{
			var descs = new List<string>();
			var names = Enum.GetNames(type);
			foreach (var name in names)
			{
				var field = type.GetField(name);
				var fds = field.GetCustomAttributes(typeof(DescriptionAttribute), true);
				foreach (DescriptionAttribute fd in fds)
				{
					descs.Add(fd.Description);
				}
			}
			return descs;
		}

		private Enemy _enemy = Enemy.DefaultInstance;

		public EnemyEditControl()
		{
			InitializeComponent();
			PopulateEnemyList();
			PopulateMoveLists();
		}

		public void SetEnemy(Enemy enemy)
		{
			_enemy = enemy;
		}

		private void PopulateEnemyList()
		{
			ItemDroppedDropDown.Items.Clear();

			foreach (var item in Lookups.Items)
			{
				ItemDroppedDropDown.Items.Add(item.Value);
			}
		}

		private void PopulateMoveLists()
		{
			MoveSet1.Items.Clear();
			MoveSet2.Items.Clear();
			MoveSet3.Items.Clear();
			MoveSet4.Items.Clear();

			MoveSet5.Items.Clear();
			MoveSet6.Items.Clear();
			MoveSet7.Items.Clear();
			MoveSet8.Items.Clear();

			foreach (var move in GetDescriptions(typeof(Enemy.MoveList)))
			{
				MoveSet1.Items.Add(move);
				MoveSet2.Items.Add(move);
				MoveSet3.Items.Add(move);
				MoveSet4.Items.Add(move);

				MoveSet5.Items.Add(move);
				MoveSet6.Items.Add(move);
				MoveSet7.Items.Add(move);
				MoveSet8.Items.Add(move);
			}
		}

		private void EnemyEditControl_Load(object sender, EventArgs e)
		{
			UpdateValues();
		}

		public void UpdateValues()
		{
			NameLabel.Text = _enemy.Name;
			OffsetLabel.Text = string.Format("{0:X6}", _enemy.Offset);
			LevelNumeric.Value = _enemy.Level > 0 ? _enemy.Level : 1;
			HpNumeric.Value = _enemy.HitPoints;
			MpNumeric.Value = _enemy.MagicPoints;
			AttackNumeric.Value = _enemy.Attack;
			AgilityNumeric.Value = _enemy.Agility;
			DefenseNumeric.Value = _enemy.Defense;

			XpNumeric.Value = _enemy.Experience;
			GoldNumeric.Value = _enemy.Gold;
			DropOddsNumeric.Value = _enemy.OddsOfDrop;

			var toSelect = ItemDroppedDropDown.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.ItemDropped);
			ItemDroppedDropDown.SelectedItem = toSelect;

			MoveSet1.SelectedItem =
				MoveSet1.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move1.Description());

			MoveSet2.SelectedItem =
				MoveSet2.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move2.Description());

			MoveSet3.SelectedItem =
				MoveSet3.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move3.Description());

			MoveSet4.SelectedItem =
				MoveSet4.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move4.Description());

			MoveSet5.SelectedItem =
				MoveSet5.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move5.Description());

			MoveSet6.SelectedItem =
				MoveSet6.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move6.Description());

			MoveSet7.SelectedItem =
				MoveSet7.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move7.Description());

			MoveSet8.SelectedItem =
				MoveSet8.Items.OfType<object>().FirstOrDefault(item => item.ToString() == _enemy.Move8.Description());

			BlazeProtectionCheckbox.Checked = _enemy.HasBlazeProtection;
			FireProtectionCheckbox.Checked = _enemy.HasFireProtection;
			IceProtectionCheckbox.Checked = _enemy.HasIceProtection;
			Effect1B4Checkbox.Checked = _enemy.HasEff1B4;
			DefeatProtectionCheckbox.Checked = _enemy.HasDefeatProtection;
			InfernosProtectionCheckbox.Checked = _enemy.HasInfernosProtection;

			var sb = new StringBuilder();
			for (int i = 0; i < _enemy.Bytes.Count; i++)
			{
				sb.AppendFormat("{0:X2}", _enemy.Bytes[i]);

				if (i == 7 || i == 15)
				{
					sb.AppendLine();
				}
				else
				{
					sb.Append(' ');
				}
			}

			RawBytesLabel.Text = sb.ToString();

			EffectsBitsLabel.Text = _enemy.EffectsBits;

			Refresh();
		}

		private void MpNumeric_ValueChanged(object sender, EventArgs e)
		{
			if (MpNumeric.Value == 255)
			{
				toolTip1.SetToolTip(lblMP, "255=Infinite");
				lblMP.ForeColor = Color.Red;
			}
			else
			{
				toolTip1.SetToolTip(lblMP, "");
				lblMP.ForeColor = SystemColors.ControlText;
			}

			_enemy.MagicPoints = (byte)MpNumeric.Value;
		}

		private void LevelNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.Level = (byte)LevelNumeric.Value;
		}

		private void HpNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.HitPoints = (ushort)HpNumeric.Value;
		}

		private void AttackNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.Attack = (ushort)AttackNumeric.Value;
		}

		private void AgilityNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.Agility = (byte)AgilityNumeric.Value;
		}

		private void DefenseNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.Defense = (ushort)DefenseNumeric.Value;
		}

		private void XpNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.Experience = (ushort)XpNumeric.Value;
		}

		private void GoldNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.Gold = (ushort)GoldNumeric.Value;
		}

		private void DropOddsNumeric_ValueChanged(object sender, EventArgs e)
		{
			_enemy.OddsOfDrop = (byte)DropOddsNumeric.Value;
		}

		private void ItemDroppedDropDown_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.ItemDropped = ItemDroppedDropDown.SelectedItem.ToString();
		}

		private void MoveSet1_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move1 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet1.SelectedItem.ToString());
		}

		private void MoveSet2_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move2 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet2.SelectedItem.ToString());
		}

		private void MoveSet3_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move3 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet3.SelectedItem.ToString());
		}

		private void MoveSet4_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move4 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet4.SelectedItem.ToString());
		}

		private void MoveSet5_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move5 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet5.SelectedItem.ToString());
		}

		private void MoveSet6_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move6 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet6.SelectedItem.ToString());
		}

		private void MoveSet7_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move7 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet7.SelectedItem.ToString());
		}

		private void MoveSet8_SelectedIndexChanged(object sender, EventArgs e)
		{
			_enemy.Move8 = EnumExtensions.GetValueFromDescription<Enemy.MoveList>(MoveSet8.SelectedItem.ToString());
		}

		private void BlazeProtectionCheckbox_CheckedChanged(object sender, EventArgs e)
		{
			_enemy.HasBlazeProtection = BlazeProtectionCheckbox.Checked;
		}

		private void FireProtectionCheckbox_CheckedChanged(object sender, EventArgs e)
		{
			_enemy.HasFireProtection = FireProtectionCheckbox.Checked;
		}

		private void IceProtectionCheckbox_CheckedChanged(object sender, EventArgs e)
		{
			_enemy.HasIceProtection = IceProtectionCheckbox.Checked;
		}

		private void Effect1B4Checkbox_CheckedChanged(object sender, EventArgs e)
		{
			_enemy.HasEff1B4 = Effect1B4Checkbox.Checked;
		}

		private void DefeatProtectionCheckbox_CheckedChanged(object sender, EventArgs e)
		{
			_enemy.HasDefeatProtection = DefeatProtectionCheckbox.Checked;
		}

		private void InfernosProtectionCheckbox_CheckedChanged(object sender, EventArgs e)
		{
			_enemy.HasInfernosProtection = InfernosProtectionCheckbox.Checked;
		}
	}
}
