using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class WeaponEditControl : UserControl
	{
		Weapon _weapon = Weapon.DefaultInstance;

		public WeaponEditControl(Weapon weapon)
		{
			_weapon = weapon;

			InitializeComponent();
		}

		private void WeaponEditControl_Load(object sender, EventArgs e)
		{
			NameLabel.Text = _weapon.Name;
			PriceNumeric.Value = _weapon.Price;
			// TODO: effect dropdown

			HrEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Hero);
			SrEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Soldier);
			FrEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Fighter);
			MrEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Merchant);

			SgEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Sage);
			PgEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Pilgram);
			WzEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.Wizard);
			GfEquipCheckbox.Checked = _weapon.CanEquip.Any(character => character == CharacterClass.GoofOff);

			HrUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Hero);
			SrUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Soldier);
			FrUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Fighter);
			MrUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Merchant);

			SgUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Sage);
			PgUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Pilgram);
			WzUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.Wizard);
			GfUseCheckbox.Checked = _weapon.CanUse.Any(character => character == CharacterClass.GoofOff);
		}

		public void Save()
		{
			_weapon.Save();
		}

		private void PriceNumeric_ValueChanged(object sender, EventArgs e)
		{
			_weapon.Price = (int)PriceNumeric.Value;
		}

		private void EffectDropDown_SelectedIndexChanged(object sender, EventArgs e)
		{
			// TODO
		}

		private void HrEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{
			
		}

		private void SrEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void FrEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void MrEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void SgEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void PgEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void WzEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void GfEquipCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void HrUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void SrUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void FrUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void MrUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void SgUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void PgUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void WzUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void GfUseCheckbox_CheckedChanged(object sender, EventArgs e)
		{

		}
	}
}
