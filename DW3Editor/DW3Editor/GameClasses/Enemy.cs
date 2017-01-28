using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DW3Editor
{
	public class Enemy
	{
		#region Enums

		private enum ByteMap
		{
			Level = 0,
			Xp_Low = 1,
			Xp_High = 2,
			Agility = 3,
			Gold_Low = 4,
			Attack = 5,
			Defense = 6,
			Hp_Low = 7,
			Mp_Low = 8,
			Item_Dropped = 9,
			Move_Set_1 = 10,
			Move_Set_2 = 11,
			Move_Set_3 = 12,
			Move_Set_4 = 13,
			Move_Set_5 = 14,
			Move_Set_6 = 15,
			Move_Set_7 = 16,
			Move_Set_8 = 17,
			
			//high bits for values that dont fit in a byte
			Gold_High = 18,
			Attack_High = 19, //low 2 bits are Attack[9..8]
			Defense_High = 20,
			HP_High = 21,

			//these bytes also store 'added effects'
			Added_Effect_1 = 18,
			Added_Effect_2 = 19,
			Added_Effect_3 = 20,
			Added_Effect_4 = 21,

			Drop_Odds = 22
		}

		public enum MoveList
		{
			Unknown,

			[Description("Assessing the situation")]
			Assessing_Situation = 0x00,

			[Description("Protects itself")]
			Protects_Itself = 0x01,

			[Description("Regular attack")]
			Regular_attack = 0x02,

			[Description("Attack could be critical")]
			Attack_Could_Critical = 0x03,

			[Description("Attack could cause sleep")]
			Attack_Could_Cause_Sleep = 0x04,

			[Description("Attack could cause poison")]
			Attack_Could_Cause_Poison = 0x05,

			[Description("Attack could cause numbness")]
			Attack_Could_Cause_Numbness = 0x06,

			[Description("Enemy will flee")]
			Enemy_Will_Flee = 0x07,

			[Description("Call for reinforcements (same enemy)")]
			Calls_Reinforcements_SameEnemy = 0x08,

			[Description("Curious dance")]
			Curious_Dance = 0x09,

			[Description("Flaming breath (10-20 HP attack)")]
			Flaming_Breath_10_20 = 0x0A,

			[Description("Flaming breath (30-50 HP attack)")]
			Flaming_Breath_30_50 = 0x0B,

			[Description("Flaming breath (80-100 HP attack)")]
			Flaming_Breath_80_100 = 0x0C,

			[Description("Blizzard breath (10-20 HP attack)")]
			Blizzard_Breath_10_20 = 0x0D,

			[Description("Blizzard breath (40-60 HP attack)")]
			Blizzard_Breath_40_60 = 0x0E,

			[Description("Blizzard breath (100-140 HP attack)")]
			Blizzard_Breath_100_140 = 0x0F,

			[Description("Emits gales of sweet breath (causes sleep)")]
			Gales_Of_Sweet_Breath = 0x10,

			[Description("Emits gales of toxic breath (causes poison)")]
			Gales_Of_Toxic_Breath = 0x11,

			[Description("Emits gales of scorching breath (causes numbness)")]
			Gales_Of_Scorching_Breath = 0x12,

			[Description("Chants Blaze")]
			Chants_Blaze = 0x13,

			[Description("Chants Blazemore")]
			Chants_Blazemore = 0x14,

			[Description("Chants Blazemost")]
			Chants_Blazemost = 0x15,

			[Description("Chants Icebolt")]
			Chants_Icebolt = 0x16,

			[Description("Chants Firebal")]
			Chants_Firebal = 0x17,

			[Description("Chants Firebane")]
			Chants_Firebane = 0x18,

			[Description("Chants Explodet")]
			Chants_Explodet = 0x19,

			[Description("Chants Snowblast")]
			Chants_Snowblast = 0x1A,

			[Description("Chants Snowstorm")]
			Chants_Snowstorm = 0x1B,

			[Description("Chants Infernos")]
			Chants_Infernos = 0x1C,

			[Description("Chants Infermore")]
			Chants_Infermore = 0x1D,

			[Description("Chants Infermost")]
			Chants_Infermost = 0x1E,

			[Description("Chants Beat")]
			Chants_Beat = 0x1F,

			[Description("Chants Defeat")]
			Chants_Defeat = 0x20,

			[Description("Chants Sacrifice")]
			Chants_Sacrifice = 0x21,

			[Description("Chants Sleep")]
			Chants_Sleep = 0x22,

			[Description("Chants Stopspell")]
			Chants_Stopspell = 0x23,

			[Description("Chants Sap")]
			Chants_Sap = 0x24,

			[Description("Chants Defence")]
			Chants_Defence = 0x25,

			[Description("Chants Surround")]
			Chants_Surround = 0x26,

			[Description("Chants Robmagic")]
			Chants_Robmagic = 0x27,

			[Description("Chants Chaos")]
			Chants_Chaos = 0x28,

			[Description("Chants Slow")]
			Chants_Slow = 0x29,

			[Description("Chants Limbo")]
			Chants_Limbo = 0x2A,

			[Description("Freeze beam shoots out of Zoma's fingertip")]
			Zoma_Fingertip = 0x2B,

			[Description("Chants Bounce")]
			Chants_Bounce = 0x2C,

			[Description("Chants Increase")]
			Chants_Increase = 0x2D,

			[Description("Chants Increase 2")]
			Chants_Increase_2 = 0x2E,

			[Description("Chants Vivify")]
			Chants_Vivify = 0x2F,

			[Description("Chants Revive")]
			Chants_Revive = 0x30,

			[Description("Chants Heal")]
			Chants_Heal = 0x31,

			[Description("Chants Healmore")]
			Chants_Healmore = 0x32,

			[Description("Chants Healall")]
			Chants_Healall = 0x33,

			[Description("Chants Healus")]
			Chants_Healus = 0x34,

			[Description("Chants Healusall")]
			Chants_Healusall = 0x35,

			[Description("Chants Heal 2")]
			Chants_Heal_2 = 0x36,

			[Description("Chants Healmore 2")]
			Chants_Healmore_2 = 0x37,

			[Description("Chants Healall 2")]
			Chants_Healall_2 = 0x38,

			[Description("Chants Healus 2")]
			Chants_Healus_2 = 0x39,

			[Description("Chants Healusall 2")]
			Chants_Healusall_2 = 0x3A,

			[Description("Calls for reinforcements (Healer)")]
			Calls_Reinforcements_Healer = 0x3B,

			[Description("Calls for reinforcements (Granite Titan)")]
			Calls_Reinforcements_Granite_Titan = 0x3C,

			[Description("Calls for reinforcements (Hork)")]
			Calls_Reinforcements_Hork = 0x3D,

			[Description("Calls for reinforcements (Elysium Bird)")]
			Calls_Reinforcements_Elysium_Bird = 0x3E,

			[Description("Calls for reinforcements (Voodoo Shaman)")]
			Calls_Reinforcements_Voodoo_Shaman = 0x3F,


			[Description("(2) Assessing the situation")]
			_2Assessing_Situation = 0x80,

			[Description("(2) Protects itself")]
			_2Protects_Itself = 0x81,

			[Description("(2) Regular attack")]
			_2Regular_attack = 0x82,

			[Description("(2) Attack could be critical")]
			_2Attack_Could_Critical = 0x83,

			[Description("(2) Attack could cause sleep")]
			_2Attack_Could_Cause_Sleep = 0x84,

			[Description("(2) Attack could cause poison")]
			_2Attack_Could_Cause_Poison = 0x85,

			[Description("(2) Attack could cause numbness")]
			_2Attack_Could_Cause_Numbness = 0x86,

			[Description("(2) Enemy will flee")]
			_2Enemy_Will_Flee = 0x87,

			[Description("(2) Call for reinforcements (same enemy)")]
			_2Calls_Reinforcements_SameEnemy = 0x88,

			[Description("(2) Curious dance")]
			_2Curious_Dance = 0x89,

			[Description("(2) Flaming breath (10-20 HP attack)")]
			_2Flaming_Breath_10_20 = 0x8A,

			[Description("(2) Flaming breath (30-50 HP attack)")]
			_2Flaming_Breath_30_50 = 0x8B,

			[Description("(2) Flaming breath (80-100 HP attack)")]
			_2Flaming_Breath_80_100 = 0x8C,

			[Description("(2) Blizzard breath (10-20 HP attack)")]
			_2Blizzard_Breath_10_20 = 0x8D,

			[Description("(2) Blizzard breath (40-60 HP attack)")]
			_2Blizzard_Breath_40_60 = 0x8E,

			[Description("(2) Blizzard breath (100-140 HP attack)")]
			_2Blizzard_Breath_100_140 = 0x8F,

			[Description("(2) Emits gales of sweet breath (causes sleep)")]
			_2Gales_Of_Sweet_Breath = 0x90,

			[Description("(2) Emits gales of toxic breath (causes poison)")]
			_2Gales_Of_Toxic_Breath = 0x91,

			[Description("(2) Emits gales of scorching breath (causes numbness)")]
			_2Gales_Of_Scorching_Breath = 0x92,

			[Description("(2) Chants Blaze")]
			_2Chants_Blaze = 0x93,

			[Description("(2) Chants Blazemore")]
			_2Chants_Blazemore = 0x94,

			[Description("(2) Chants Blazemost")]
			_2Chants_Blazemost = 0x95,

			[Description("(2) Chants Icebolt")]
			_2Chants_Icebolt = 0x96,

			[Description("(2) Chants Firebal")]
			_2Chants_Firebal = 0x97,

			[Description("(2) Chants Firebane")]
			_2Chants_Firebane = 0x98,

			[Description("(2) Chants Explodet")]
			_2Chants_Explodet = 0x99,

			[Description("(2) Chants Snowblast")]
			_2Chants_Snowblast = 0x9A,

			[Description("(2) Chants Snowstorm")]
			_2Chants_Snowstorm = 0x9B,

			[Description("(2) Chants Infernos")]
			_2Chants_Infernos = 0x9C,

			[Description("(2) Chants Infermore")]
			_2Chants_Infermore = 0x9D,

			[Description("(2) Chants Infermost")]
			_2Chants_Infermost = 0x9E,

			[Description("(2) Chants Beat")]
			_2Chants_Beat = 0x9F,

			[Description("(2) Chants Defeat")]
			_2Chants_Defeat = 0xA0,

			[Description("(2) Chants Sacrifice")]
			_2Chants_Sacrifice = 0xA1,

			[Description("(2) Chants Sleep")]
			_2Chants_Sleep = 0xA2,

			[Description("(2) Chants Stopspell")]
			_2Chants_Stopspell = 0xA3,

			[Description("(2) Chants Sap")]
			_2Chants_Sap = 0xA4,

			[Description("(2) Chants Defence")]
			_2Chants_Defence = 0xA5,

			[Description("(2) Chants Surround")]
			_2Chants_Surround = 0xA6,

			[Description("(2) Chants Robmagic")]
			_2Chants_Robmagic = 0xA7,

			[Description("(2) Chants Chaos")]
			_2Chants_Chaos = 0xA8,

			[Description("(2) Chants Slow")]
			_2Chants_Slow = 0xA9,

			[Description("(2) Chants Limbo")]
			_2Chants_Limbo = 0xAA,

			[Description("(2) Freeze beam shoots out of Zoma's fingertip")]
			_2Zoma_Fingertip = 0xAB,

			[Description("(2) Chants Bounce")]
			_2Chants_Bounce = 0xAC,

			[Description("(2) Chants Increase")]
			_2Chants_Increase = 0xAD,

			[Description("(2) Chants Increase 2")]
			_2Chants_Increase_2 = 0xAE,

			[Description("(2) Chants Vivify")]
			_2Chants_Vivify = 0xAF,

			[Description("(2) Chants Revive")]
			_2Chants_Revive = 0xB0,

			[Description("(2) Chants Heal")]
			_2Chants_Heal = 0xB1,

			[Description("(2) Chants Healmore")]
			_2Chants_Healmore = 0xB2,

			[Description("(2) Chants Healall")]
			_2Chants_Healall = 0xB3,

			[Description("(2) Chants Healus")]
			_2Chants_Healus = 0xB4,

			[Description("(2) Chants Healusall")]
			_2Chants_Healusall = 0xB5,

			[Description("(2) Chants Heal 2")]
			_2Chants_Heal_2 = 0xB6,

			[Description("(2) Chants Healmore 2")]
			_2Chants_Healmore_2 = 0xB7,

			[Description("(2) Chants Healall 2")]
			_2Chants_Healall_2 = 0xB8,

			[Description("(2) Chants Healus 2")]
			_2Chants_Healus_2 = 0xB9,

			[Description("(2) Chants Healusall 2")]
			_2Chants_Healusall_2 = 0xBA,

			[Description("(2) Calls for reinforcements (Healer)")]
			_2Calls_Reinforcements_Healer = 0xBB,

			[Description("(2) Calls for reinforcements (Granite Titan)")]
			_2Calls_Reinforcements_Granite_Titan = 0xBC,

			[Description("(2) Calls for reinforcements (Hork)")]
			_2Calls_Reinforcements_Hork = 0xBD,

			[Description("(2) Calls for reinforcements (Elysium Bird)")]
			_2Calls_Reinforcements_Elysium_Bird = 0xBE,

			[Description("(2) Calls for reinforcements (Voodoo Shaman)")]
			_2Calls_Reinforcements_Voodoo_Shaman = 0xBF
		}

		#endregion

		private byte[] _raw = new byte[23];
		private string _name = "Unknown";
		private int _offset;

		public string Name //TODO: get from rom
		{
			get { return _name; }
			set { _name = value; }
		}

		public byte Level
		{
			get { return _raw[(int)ByteMap.Level]; }
			set { _raw[(int)ByteMap.Level] = value; }
		}

		public ushort Experience
		{
			get
			{
				return ToShort(
					_raw[(int)ByteMap.Xp_Low],
					_raw[(int)ByteMap.Xp_High]);
			}
			set
			{
				_raw[(int)ByteMap.Xp_Low] = (byte)(value & 0xFF);
				_raw[(int)ByteMap.Xp_High] = (byte)(value >> 8);
			}
		}

		public byte Agility
		{
			get { return _raw[(int)ByteMap.Agility]; }
			set { _raw[(int)ByteMap.Agility] = value; }
		}

		public ushort Gold
		{
			get
			{
				return (ushort)( _raw[(int)ByteMap.Gold_Low]
					+ ((_raw[(int)ByteMap.Gold_High] & 0x03) << 8));
			}

			set
			{
				Set10Bit(value, (int)ByteMap.Gold_Low, (int)ByteMap.Gold_High);
			}
		}

		public ushort Attack
		{
			get
			{
				return (ushort)(_raw[(int)ByteMap.Attack]
					+ ((_raw[(int)ByteMap.Attack_High] & 0x03) << 8));
			}

			set
			{
				Set10Bit(value, (int)ByteMap.Attack, (int)ByteMap.Attack_High);
			}
		}

		public ushort Defense
		{
			get
			{
				return (ushort)(_raw[(int)ByteMap.Defense]
					+ ((_raw[(int)ByteMap.Defense_High] & 0x03) << 8));
			}

			set
			{
				Set10Bit(value, (int)ByteMap.Defense, (int)ByteMap.Defense_High);
			}
		}

		public ushort HitPoints
		{
			get
			{
				return (ushort)(_raw[(int)ByteMap.Hp_Low]
					+ ((_raw[(int)ByteMap.HP_High] & 0x03) << 8));
			}

			set
			{
				Set10Bit(value, (int)ByteMap.Hp_Low, (int)ByteMap.HP_High);
			}
		}

		public byte MagicPoints
		{
			get { return _raw[(int)ByteMap.Mp_Low]; }
			set { _raw[(int)ByteMap.Mp_Low] = value; }
		}

		// TODO: figure out the actual formula that uses this
		public byte OddsOfDrop
		{
			get { return _raw[(int)ByteMap.Drop_Odds]; }
			set { _raw[(int)ByteMap.Drop_Odds] = value; }
		}

		public string ItemDropped
		{
			get
			{
				return Lookups.Items[_raw[(int)ByteMap.Item_Dropped] & 0x7F];
			}

			set
			{
				_raw[(int)ByteMap.Item_Dropped] = (byte)Lookups.Items.First(kvp => kvp.Value == value).Key;
			}
		}

		public MoveList Move1
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_1]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_1] = (byte)value;
			}
		}

		public MoveList Move2
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_2]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_2] = (byte)value;
			}
		}

		public MoveList Move3
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_3]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_3] = (byte)value;
			}
		}

		public MoveList Move4
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_4]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_4] = (byte)value;
			}
		}

		public MoveList Move5
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_5]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_5] = (byte)value;
			}
		}

		public MoveList Move6
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_6]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_6] = (byte)value;
			}
		}

		public MoveList Move7
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_7]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_7] = (byte)value;
			}
		}

		public MoveList Move8
		{
			get
			{
				return (MoveList)(_raw[(int)ByteMap.Move_Set_8]);
			}

			set
			{
				_raw[(int)ByteMap.Move_Set_8] = (byte)value;
			}
		}

		public bool HasBlazeProtection
		{
			get
			{
				return _raw[(int)ByteMap.Added_Effect_1].Bit(7);
			}

			set
			{
				NumberExtensions.SetBit(ref _raw[(int)ByteMap.Added_Effect_1], 7, value);
			}
		}

		public bool HasFireProtection
		{
			get
			{
				return _raw[(int)ByteMap.Added_Effect_1].Bit(6);
			}

			set
			{
				NumberExtensions.SetBit(ref _raw[(int)ByteMap.Added_Effect_1], 6, value);
			}
		}

		public bool HasIceProtection
		{
			get
			{
				return _raw[(int)ByteMap.Added_Effect_1].Bit(5);
			}

			set
			{
				NumberExtensions.SetBit(ref _raw[(int)ByteMap.Added_Effect_1], 5, value);
			}
		}

		public bool HasEff1B4
		{
			// TODO!
			get;
			set;
		}

		public bool HasDefeatProtection
		{
			get
			{
				return _raw[(int)ByteMap.Added_Effect_1].Bit(3);
			}

			set
			{
				NumberExtensions.SetBit(ref _raw[(int)ByteMap.Added_Effect_1], 3, value);
			}
		}

		public bool HasInfernosProtection
		{
			get
			{
				return _raw[(int)ByteMap.Added_Effect_1].Bit(2);
			}

			set
			{
				NumberExtensions.SetBit(ref _raw[(int)ByteMap.Added_Effect_1], 2, value);
			}
		}

		// Dubious to do the formatting in the object but meh, this is quick and dirty
		public string EffectsBits
		{
			get
			{
				var sb = new StringBuilder();
				for (int effect = 0; effect < 4; effect++)
				{
					for (int i = 7; i >= 0; i--)
					{
						sb.Append(_raw[(int)(ByteMap.Added_Effect_1 + effect)].Bit(i) ? '1' : '0');
						if (i == 4)
						{
							sb.Append(' ');
						}
					}

					//Hack for now
					if (effect == 0) { sb.Append(" Gp"); }
					if (effect == 1) { sb.Append(" Att"); }
					if (effect == 2) { sb.Append(" Def"); }
					if (effect == 3) { sb.Append(" Hp"); }

					sb.AppendLine();
				}

				return sb.ToString();
			}
		}

		public IList<byte> Bytes
		{
			get { return _raw.ToList(); }
		}

		public int Offset
		{
			get { return _offset; }
		}

		public Enemy(byte[] enemyBytes, int offset)
		{
			if (enemyBytes.Length != 23)
			{
				throw new ArgumentOutOfRangeException("enemyBytes", "must be precisely 23 bytes");
			}

			_raw = enemyBytes.ToArray();
			_offset = offset;
		}

		public void Save(byte[] rom)
		{
			for (int i = 0; i < 23; i++)
			{
				rom[i + _offset] = _raw[i];
			}
		}

		private ushort ToShort(byte low, byte high)
		{
			return (ushort)(low + (high << 8));
		}

		private void Set10Bit(ushort val, int low, int high)
		{
			_raw[low] = (byte)(val & 0xFF);
			var hb = _raw[high];
			hb = (byte)(hb >> 2 << 2);
			hb += (byte)((val >> 8) & 0x03);
			_raw[high] = hb;
		}

		public static Enemy DefaultInstance
		{
			get
			{
				return new Enemy(new byte[] {
					1, 1, 1, 1,
					1, 1, 1, 1,
					1, 1, 0, 0,
					0, 0, 0, 0,
					0, 0, 0, 0,
					0, 0, 0
				}, 0);
			}
		}
	}
}
