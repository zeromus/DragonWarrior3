using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DW3Editor
{
	public class DW3String
	{
		private byte[] _bytes = new byte[0];
		private int _offset;

		public DW3String(byte[] bytes, int offset)
		{
			_bytes = bytes;
			_offset = offset;
		}

		public int Length
		{
			get { return _bytes.Length; }
		}

		public void Save(byte[] rom)
		{
			for (int i = 0; i < _bytes.Length; i++)
			{
				rom[i + _offset] = _bytes[i];
			}
		}

		public void Set(string str)
		{
			if (str.Length != _bytes.Length)
			{
				throw new InvalidOperationException("string must be the same length!");
			}

			// TODO
			throw new NotImplementedException("Need to make a reverse translate table to do this!");
		}

		public void IncrementChar(int pos)
		{
			if (pos >= _bytes.Length)
			{
				throw new InvalidOperationException("pos is out of range!");
			}

			_bytes[pos]++;
		}

		public void DecrementChar(int pos)
		{
			if (pos >= _bytes.Length)
			{
				throw new InvalidOperationException("pos is out of range!");
			}

			_bytes[pos]--;
		}

		#region Overrides

		public override bool Equals(object obj)
		{
			if (obj is string)
			{
				return this.ToString() == obj as string;
			}
			else if (obj is DW3String)
			{
				return this.ToString() == obj.ToString(); //TODO: expose bytes and compare? for speed
			}

			return base.Equals(obj);
		}

		public override int GetHashCode()
		{
			return _bytes.GetHashCode() + _offset.GetHashCode();
		}

		public override string ToString()
		{
			return DW3String.TranslateString(Encoding.Default.GetString(_bytes));
		}

		#endregion

		#region Operators

		public static implicit operator string(DW3String dw3Str)
		{
			return dw3Str.ToString();
		}

		public static bool operator ==(DW3String dw3, object obj)
		{
			return dw3.Equals(obj);
		}

		public static bool operator !=(DW3String dw3, object obj)
		{
			return !dw3.Equals(obj);
		}

		// Can't do this since you can't derice on offset
		//public static implicit operator DW3String(string str)
		//{
		//	return new DW3String(new byte[0], 0);
		//}

		#endregion

		#region Statics and enums

		public enum eStringTable
		{
			//divided into first and second lines
			ItemLowFirst, ItemLowSecond,
			EnemyLowFirst, EnemyLowSecond,
			Spell, Class, Sex, Location,
			ItemHighFirst, ItemHighSecond, //for items >= 0x40
			EnemyHighFirst, EnemyHighSecond, //for enemies >= 0x40
			Erdrick
		}

		public static string TranslateString(string str)
		{
			StringBuilder ret = new StringBuilder(str.Length);
			foreach (char c in str)
			{
				if (c == 0x00) { } //??
				if (c >= 0x01 && c <= 0x0A) ret.Append((char)('0' + c - 0x01));
				if (c >= 0x0B && c <= 0x24) ret.Append((char)('a' + c - 0x0B));
				if (c >= 0x25 && c <= 0x3E) ret.Append((char)('A' + c - 0x25));
				if (c == 0x3F) { } //??
				if (c == 0x40) ret.Append('H');
				if (c == 0x41) ret.Append('r');
				if (c == 0x42) ret.Append('S');
				if (c == 0x43) ret.Append('r');
				if (c == 0x44) ret.Append('P');
				if (c == 0x45) ret.Append('r');
				if (c == 0x46) ret.Append('W');
				if (c == 0x47) ret.Append('z');
				if (c == 0x48) ret.Append('F');
				if (c == 0x49) ret.Append('r');
				if (c == 0x4A) ret.Append('M');
				if (c == 0x4B) ret.Append('r');
				if (c == 0x4C) ret.Append('G');
				if (c == 0x4D) ret.Append('f');
				if (c == 0x4E) ret.Append('S');
				if (c == 0x4F) ret.Append('g');
				if (c == 0x50) ret.Append(' ');
				if (c == 0x51) { } //??
				if (c == 0x52) ret.Append('t');
				if (c == 0x53) ret.Append('u');
				if (c == 0x54) ret.Append('v');
				if (c == 0x55) ret.Append('w');
				if (c == 0x56) ret.Append('x');
				if (c == 0x57) ret.Append('.');
				if (c == 0x58) ret.Append('-');
				if (c == 0x59) { } //??
				if (c == 0x5A) ret.Append('*');
				if (c == 0x5B) ret.Append("Br");
				if (c == 0x5C) ret.Append("Ma");
				if (c == 0x5D) ret.Append("Bi");
				if (c == 0x5E) ret.Append("Me");
				if (c == 0x5F) ret.Append("|E"); //equipped
				if (c == 0x60) ret.Append(' ');
				if (c == 0x61) { }
				if (c == 0x62) ret.Append('\'');
				if (c == 0x63) ret.Append('\"');
				if (c == 0x65) ret.Append(">");
				if (c == 0x66) ret.Append('\'');
				if (c == 0x67) ret.Append('\'');
				if (c == 0x68) ret.Append('\'');
				if (c == 0x69) ret.Append(".'");
				if (c == 0x6A) ret.Append(",");
				if (c == 0x6B) ret.Append('-');
				if (c == 0x6C) ret.Append('.');
				if (c == 0x6D) ret.Append('(');
				if (c == 0x6E) ret.Append(')');
				if (c == 0x6F) ret.Append('?');
				if (c == 0x70) ret.Append('!');
				if (c == 0x71) ret.Append(';');
				if (c == 0x72) ret.Append('\'');
				if (c == 0x73) ret.Append('>');
				if (c == 0x74) ret.Append("\\/");
				if (c == 0x75) ret.Append(':');
				if (c == 0x76) ret.Append("..");
				if (c >= 0x77 && c <= 0x7F) ret.Append('#');
				if (c == 0xA5) ret.Append('\t');
				if (c >= 0xF0) ret.AppendFormat(@"\x{0:X2}", (int)c);
				else if (c > 0x80) ret.Append('%');
			}

			return ret.ToString();
		}

		#endregion
	}
}
