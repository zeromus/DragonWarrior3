using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DW3Editor
{
	public enum CharacterClass
	{
		[Description("Hero")]
		Hero = 0x00,

		[Description("Wizard")]
		Wizard = 0x01,

		[Description("Pilgram")]
		Pilgram = 0x02,

		[Description("Sage")]
		Sage = 0x03,

		[Description("Soldier")]
		Soldier = 0x04,

		[Description("Merchant")]
		Merchant = 0x05,

		[Description("Fighter")]
		Fighter = 0x06,

		[Description("Goof-Off")]
		GoofOff = 0x07
	}

	public enum GenderedCharacterClass
	{
		[Description("Male Hero")]
		MHero = 0x00,

		[Description("Male Wizard")]
		MWizard = 0x01,

		[Description("Male Pilgram")]
		MPilgram = 0x02,

		[Description("Male Sage")]
		MSage = 0x03,

		[Description("Male Soldier")]
		MSoldier = 0x04,

		[Description("Male Merchant")]
		MMerchant = 0x05,

		[Description("Male Fighter")]
		MFighter = 0x06,

		[Description("Male Goof-Off")]
		MGoofOff = 0x07,

		[Description("Male Hero")]
		FHero = 0x08,

		[Description("Female Wizard")]
		FWizard = 0x09,

		[Description("Female Pilgram")]
		FPilgram = 0x0A,

		[Description("Female Sage")]
		FSage = 0x0B,

		[Description("Female Soldier")]
		FSoldier = 0x0C,

		[Description("Female Merchant")]
		FMerchant = 0x0D,

		[Description("Female Fighter")]
		FFighter = 0x0E,

		[Description("Female Goof-Off")]
		FGoofOff = 0x0F
	}

	public enum ItemEffectType
	{
		//00 - 05 none
		//FF, FE = wizard wand
		//10 = none
		//EE = wizard wand
		//20 = wizard wand
		//30 = nothing
		None = 0x00,
		WizardWand = 0xFF,
	}
}
