using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DW3Editor
{
	public class Weapon
	{
		// TODO: more stuff
		public const int WeaponPowerOffset = 0x279A0;
		public const int EquipOffset = 0x1147;
		public const int UseOffset = 0x1196; //Only items 0-1F, and 47-4E
		public const int EffectsOffset = 0x11BE;

		byte[] _romBytes = new byte[0];

		private int _itemNo;
		private byte _attackPower;
		private byte _equipFlags;
		private byte _useFlags;
		private byte _effectsFlags;

		public Weapon()
		{

		}

		public Weapon(int itemNo, byte[] romBytes)
		{
			_romBytes = romBytes;
			_itemNo = itemNo;

			_attackPower = _romBytes[WeaponPowerOffset + itemNo];
			_equipFlags = _romBytes[EquipOffset + itemNo];
			_useFlags = _romBytes[UseOffset + itemNo];
			_effectsFlags = _romBytes[EffectsOffset + itemNo];

			Name = Lookups.Items[_itemNo];
		}

		public string Name { get; private set; }

		public byte Strength
		{
			get { return _attackPower; }
			set { _attackPower = value; }
		}

		public ItemEffectType Effect { get; set; }

		public IEnumerable<CharacterClass> CanEquip
		{
			get
			{
				// TODO: be more clever here
				if (_equipFlags.Bit((int)CharacterClass.Hero))
				{
					yield return CharacterClass.Hero;
				}

				if (_equipFlags.Bit((int)CharacterClass.Wizard))
				{
					yield return CharacterClass.Wizard;
				}

				if (_equipFlags.Bit((int)CharacterClass.Pilgram))
				{
					yield return CharacterClass.Pilgram;
				}

				if (_equipFlags.Bit((int)CharacterClass.Sage))
				{
					yield return CharacterClass.Sage;
				}

				if (_equipFlags.Bit((int)CharacterClass.Soldier))
				{
					yield return CharacterClass.Soldier;
				}

				if (_equipFlags.Bit((int)CharacterClass.Merchant))
				{
					yield return CharacterClass.Merchant;
				}

				if (_equipFlags.Bit((int)CharacterClass.Fighter))
				{
					yield return CharacterClass.Fighter;
				}

				if (_equipFlags.Bit((int)CharacterClass.GoofOff))
				{
					yield return CharacterClass.GoofOff;
				}
			}

			set
			{
				foreach (var character in value)
				{
					NumberExtensions.SetBit(ref _equipFlags, (int)character, true);
				}
			}
		}

		public IEnumerable<CharacterClass> CanUse
		{
			get
			{
				// TODO: be more clever here
				if (_useFlags.Bit((int)CharacterClass.Hero))
				{
					yield return CharacterClass.Hero;
				}

				if (_useFlags.Bit((int)CharacterClass.Wizard))
				{
					yield return CharacterClass.Wizard;
				}

				if (_useFlags.Bit((int)CharacterClass.Pilgram))
				{
					yield return CharacterClass.Pilgram;
				}

				if (_useFlags.Bit((int)CharacterClass.Sage))
				{
					yield return CharacterClass.Sage;
				}

				if (_useFlags.Bit((int)CharacterClass.Soldier))
				{
					yield return CharacterClass.Soldier;
				}

				if (_useFlags.Bit((int)CharacterClass.Merchant))
				{
					yield return CharacterClass.Merchant;
				}

				if (_useFlags.Bit((int)CharacterClass.Fighter))
				{
					yield return CharacterClass.Fighter;
				}

				if (_useFlags.Bit((int)CharacterClass.GoofOff))
				{
					yield return CharacterClass.GoofOff;
				}
			}

			set
			{
				foreach (var character in value)
				{
					NumberExtensions.SetBit(ref _useFlags, (int)character, true);
				}
			}
		}

		public int Price { get; set; }

		public static Weapon DefaultInstance
		{
			get
			{
				return new Weapon();
			}
		}

		public void Save()
		{
			_romBytes[WeaponPowerOffset + _itemNo] = _attackPower;
			_romBytes[EquipOffset + _itemNo] = _equipFlags;
			_romBytes[UseOffset + _itemNo] = _useFlags;
			_romBytes[EffectsOffset + _itemNo] = _effectsFlags;
		}
	}
}
