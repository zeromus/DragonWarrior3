using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DW3Editor
{
	public partial class EnemyEditor : Form
	{
		private const int EnemyOffset = 0x0032E3;
		private const int enemyTotal = 0x8A;

		private List<Enemy> _enemies = new List<Enemy>();

		public EnemyEditor()
		{
			InitializeComponent();
		}


		private void EnemyEditor_Load(object sender, EventArgs e)
		{
			int counter = 0;

			for (int i = EnemyOffset; i < Global.MainForm.ROM.Length; i += 23)
			{
				var tempArr = new byte[23];
				Array.Copy(Global.MainForm.ROM, i, tempArr, 0, 23);
				_enemies.Add(new Enemy(tempArr, i)
				{
					Name = Lookups.Enemies[counter]
				});

				if (counter == enemyTotal)
				{
					break;
				}

				counter++;
			}

			//*Debug delete me//
			var _e1_b7 = string.Join(",", _enemies.Where(en => en.Bytes[18].Bit(7)).Select(en => en.Name));
			var _e1_b6 = string.Join(",", _enemies.Where(en => en.Bytes[18].Bit(6)).Select(en => en.Name));
			var _e1_b5 = string.Join(",", _enemies.Where(en => en.Bytes[18].Bit(5)).Select(en => en.Name));
			var _e1_b4 = string.Join(",", _enemies.Where(en => en.Bytes[18].Bit(4)).Select(en => en.Name));
			var _e1_b3 = string.Join(",", _enemies.Where(en => en.Bytes[18].Bit(3)).Select(en => en.Name));
			var _e1_b2 = string.Join(",", _enemies.Where(en => en.Bytes[18].Bit(2)).Select(en => en.Name));

			var _e2_b7 = string.Join(",", _enemies.Where(en => en.Bytes[19].Bit(7)).Select(en => en.Name));
			var _e2_b6 = string.Join(",", _enemies.Where(en => en.Bytes[19].Bit(6)).Select(en => en.Name));
			var _e2_b5 = string.Join(",", _enemies.Where(en => en.Bytes[19].Bit(5)).Select(en => en.Name));
			var _e2_b4 = string.Join(",", _enemies.Where(en => en.Bytes[19].Bit(4)).Select(en => en.Name));
			var _e2_b3 = string.Join(",", _enemies.Where(en => en.Bytes[19].Bit(3)).Select(en => en.Name));
			var _e2_b2 = string.Join(",", _enemies.Where(en => en.Bytes[19].Bit(2)).Select(en => en.Name));

			var _e3_b7 = string.Join(",", _enemies.Where(en => en.Bytes[20].Bit(7)).Select(en => en.Name));
			var _e3_b6 = string.Join(",", _enemies.Where(en => en.Bytes[20].Bit(6)).Select(en => en.Name));
			
			var _e3_b5 = string.Join(",", _enemies.Where(en => en.Bytes[20].Bit(5)).Select(en => en.Name));
			var not_e3_b5 = string.Join(",", _enemies.Where(en => !en.Bytes[20].Bit(5)).Select(en => en.Name));
			
			var _e3_b4 = string.Join(",", _enemies.Where(en => en.Bytes[20].Bit(4)).Select(en => en.Name));
			var not_e3_b4 = string.Join(",", _enemies.Where(en => !en.Bytes[20].Bit(4)).Select(en => en.Name));
			
			var _e3_b3 = string.Join(",", _enemies.Where(en => en.Bytes[20].Bit(3)).Select(en => en.Name));
			var _e3_b2 = string.Join(",", _enemies.Where(en => en.Bytes[20].Bit(2)).Select(en => en.Name));

			var _e4_b7 = string.Join(",", _enemies.Where(en => en.Bytes[21].Bit(7)).Select(en => en.Name));

			var _e4_b6 = string.Join(",", _enemies.Where(en => en.Bytes[21].Bit(6)).Select(en => en.Name));
			var not_e4_b6 = string.Join(",", _enemies.Where(en => !en.Bytes[21].Bit(6)).Select(en => en.Name));

			var _e4_b5 = string.Join(",", _enemies.Where(en => en.Bytes[21].Bit(5)).Select(en => en.Name));
			var not_e4_b5 = string.Join(",", _enemies.Where(en => !en.Bytes[21].Bit(5)).Select(en => en.Name));

			var _e4_b4 = string.Join(",", _enemies.Where(en => en.Bytes[21].Bit(4)).Select(en => en.Name));
			var not_e4_b4 = string.Join(",", _enemies.Where(en => !en.Bytes[21].Bit(4)).Select(en => en.Name));

			var _e4_b3 = string.Join(",", _enemies.Where(en => en.Bytes[21].Bit(3)).Select(en => en.Name));
			var _e4_b2 = string.Join(",", _enemies.Where(en => en.Bytes[21].Bit(2)).Select(en => en.Name));


			UpdateEnemyList();
		}

		private void UpdateEnemyList()
		{
			EnemyPicker.Items.AddRange(
				_enemies
				.OrderBy(e => e.Name)
				.Select(e => (object)e.Name)
				.ToArray());
		}

		private void EnemyPicker_SelectedIndexChanged(object sender, EventArgs e)
		{
			var selectedEnemy = _enemies.FirstOrDefault(enemy => enemy.Name == EnemyPicker.SelectedItem.ToString());
			TheEnemyEditControl.SetEnemy(selectedEnemy);
			TheEnemyEditControl.UpdateValues();
		}

		private void OkBtn_Click(object sender, EventArgs e)
		{
			_enemies.ForEach(enemy => enemy.Save(Global.MainForm.ROM));
			Close();
		}

		private void CancelBtn_Click(object sender, EventArgs e)
		{
			Close();
		}
	}
}
