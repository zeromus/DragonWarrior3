using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DW3Editor
{
	public class Spell
	{
		private byte _byte;
		private int _offset;

		public Spell(byte b, int offset, string name)
		{
			_byte = b;
			_offset = offset;
			Name = name;
		}

		public string Name { get; set; }

		public int Cost
		{
			get
			{
				return _byte & 0x3F;
			}
			
			set
			{
				_byte = (byte)
					((_byte >> 6 << 6) +
					(value & 0x3F));
			}
		}

		public bool Targeting
		{
			get
			{
				return _byte.Bit(7);
			}

			set
			{
				SetBit(7, value);
			}
		}

		public bool TargetEnemiesInsteadOfPlayers
		{
			get
			{
				return _byte.Bit(6);
			}

			set
			{
				SetBit(6, value);
			}
		}

		public void Save(byte[] romBytes)
		{
			romBytes[_offset] = _byte;
		}

		private void SetBit(int pos, bool val)
		{
			NumberExtensions.SetBit(ref _byte, pos, val);
		}

		public static Spell DefaultInstance
		{
			get { return new Spell(0, 0, "nothing"); }
		}
	}
}
