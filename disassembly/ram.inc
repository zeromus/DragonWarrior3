		ORG $0000

byte_0:
		.BYTE	0
byte_1:
		.BYTE	0,0
byte_3:
		.BYTE	0
;----------------------------------------------
; used oftentimes as a u16 temporary value (i call this "temp16")
; occasionally as a u24 temporary value
; also used as the beginning of: u8[4] inventoryReport, containing values analyzed from a PCs inventory (see sub_inv_AnalyzeEquipped)
; also: struct { u8 weapon, armor, shield, helm; } ; see sub_classifyItemType_returnA
word_4: 
		.BYTE	0
word_5
		.BYTE	0
word_6:
		.BYTE	0,0
;----------------------------------------------
byte_8:
		.BYTE	0
byte_9:
		.BYTE	0
byte_A:
		.BYTE	0
byte_B:
		.BYTE	0
;----------------------------------------------
; u16 mdec_dptr
byte_C:
		.BYTE	0
byte_D:
		.BYTE	0
;----------------------------------------------
byte_E:
		.BYTE	0
byte_F:
		.BYTE	0
byte_10:
		.BYTE	0
byte_11:
		.BYTE	0
_tmp12:
		.BYTE	0
_tmp13:
		.BYTE	0
_pads: ; 13
		.BYTE	0,0,0,0,0,0,0			; unused
_nmi_flags:
		.BYTE	0			; bit 01 - sprite insert busy flag
							; bit 02 -
							; bit 04 - 
							; bit 08 -
							; bin 10 - forbid nmi ppu dequeue
_rand_seed:
		.BYTE	0,0
_ppuByteToWrite:
		.BYTE	0
byte_1F: ; ppuDMAList{low}
		.BYTE	0
byte_20: ; ppuDMAList{high}
		.BYTE	0
_tmp21:
		.BYTE	0,0,0
byte_24:
		.BYTE	0
byte_25: ; "tileListCursor_25" - as the map loads its TileList, this cursor increments
		.BYTE	0
byte_26:
		.BYTE	0
byte_27:
		.BYTE	0
byte_28:
		.BYTE	0
byte_29:
		.BYTE	0
byte_2A:
		.BYTE	0
byte_2B:
		.BYTE	0
byte_2C:
		.BYTE	0
byte_2D:
		.BYTE	0
byte_2E:
		.BYTE	0
_location_type:
		.BYTE	0
_playerMapX:
		.BYTE	0
_playerMapY:
		.BYTE	0
_spr_force_shuffle_mode:
		.BYTE	0
_ppu_spr_dma_sent:
		.BYTE	0
_irq_x_saved:
		.BYTE	0
_irq_y_saved:
		.BYTE	0
_irq_a_saved:
		.BYTE	0
byte_37:
		.BYTE	0
byte_38:
		.BYTE	0,0,0
byte_3B:
		.BYTE	0
;----------------------------------------------
word_3C:
		.BYTE	0,0
;----------------------------------------------
word_3E:
		.BYTE	0,0
word_40: ; 41 - "previousMapNumber?"
		.BYTE	0,0
;----------------------------------------------
; 42-47 are used for math...
byte_42:
		.BYTE	0
byte_43:
		.BYTE	0
byte_44:
		.BYTE	0
byte_45: ; "itemSelectedInBattle"
		.BYTE	0
byte_46:
		.BYTE	0
byte_47:
		.BYTE	0
byte_48:
		.BYTE	0
byte_49: ; a dialog box parameter?
		.BYTE	0
;----------------------------------------------
word_4A:
		.BYTE	0,0
byte_4C:
		.BYTE	0
; 4B - "tileReadingRelatedX"
; 4C - "tileReadingRelatedY"
;----------------------------------------------
byte_4D:
		.BYTE	0
byte_4E:
		.BYTE	0
byte_4F:
		.BYTE	0
byte_50:
		.BYTE	0
;----------------------------------------------
; this controls what the enemy does, but it could be a variety of irrational things.
; or, seems to be the current character taking an action? 0..3 is PC and 4+ is enemy
byte_51:
		.BYTE	0
;----------------------------------------------
byte_52:
		.BYTE	0
byte_53:
		.BYTE	0
byte_54: ; "numTilesInTileGroup"
		.BYTE	0
byte_55: ; "bankForTilePtrnLoad"
		.BYTE	0
byte_56:
		.BYTE	0
byte_57: ; "tileNumberForTileLoad_57"
		.BYTE	0
byte_58: ; "tileNumberForTileLoadHi_58"
		.BYTE	0
;----------------------------------------------
; u16 _enemyProp; seems to contain enemy props read from the enemy lib. when querying them, they show up here. MSB is not always cleared, user must know how big the prop is
; sometimes 5A is just used as a temp
byte_59: ; "enemyMiscStats"
		.BYTE	0
byte_5A:
		.BYTE	0
;----------------------------------------------
byte_5B:
		.BYTE	0
byte_5C:
		.BYTE	0
;----------------------------------------------
; u24 _bs_reward_XP ; XP prop from enemy is _accumulated_ into here when queried
byte_5D:
		.BYTE	0
word_5E:
		.BYTE	0,0
;----------------------------------------------
; u16 _bs_reward_GP; GP prop from enemy is _accumulated_ into here when queried. 
word_60:
		.BYTE	0,0
;----------------------------------------------
; battle type. misnamed a tiny bit
; 00 - Normal battle
; 01 - Enemy auto-battle (for arena) with no PC involvement
; FF - "FIGHT!" battle (different music, screen wipe, etc.) with no PC involvement
_battle_type_fight: ; $62
		.BYTE	0
;----------------------------------------------
byte_63:
		.BYTE	0
;----------------------------------------------
; u8 _actingEnemy - usually contains the index of the acting enemy. but it must have some other use
; used by bank01 (why?)
; used by bank02 (why?)
; used by bank04 (battlesystem)
; used by bank0A (why?)
; used by bank0D (why?)
; used by bank0E (why?)
byte_64:
		.BYTE	0
;----------------------------------------------
byte_65: ; "actionCost" - the cost (MP or otherwise) of the current action?
		.BYTE	0
byte_66:
		.BYTE	0
byte_67:
		.BYTE	0
byte_68:
		.BYTE	0
byte_69:
		.BYTE	0
byte_6A:
		.BYTE	0
byte_6B:
		.BYTE	0
;----------------------------------------------
; various temporary pointers
word_6C: ; "mapEngineTempPtr_6c"
		.BYTE	0,0
;----------------------------------------------
; a tempory pointer
word_6E:
		.BYTE	0,0
;----------------------------------------------
byte_70:
		.BYTE	0
byte_71:
		.BYTE	0
word_72:
		.BYTE	0,0
byte_74: ; "mdec_bitstreamCounter_74"
		.BYTE	0
byte_75: ; "mdec_75_orflag" - controls whether tile writes overwrite the top 3 bits of the byte instead of the whole byte
		.BYTE	0
byte_76: ; "mdec_metatileSize" - nonzero means a 32x32 metatile
		.BYTE	0
byte_77: ; "mdec_ptrSize_77" - this is used for reading xy pointers from the bitstream
		.BYTE	0
byte_78: ; "mdec_deltaDir" - used to control direction of framebuffer increment/decrement
		.BYTE	0
byte_79: ; "mdec_79_tilenum"
		.BYTE	0
byte_7A: ; "mdec_7a_tilenum[1]"
		.BYTE	0
byte_7B: ; "mdec_7b_tilenum[2]"
		.BYTE	0
;----------------------------------------------
word_7C: ; "mdec_7c_tilenum"
		.BYTE	0,0
; 7d - "mdec_7d_stackptr"
;----------------------------------------------
byte_7E:
		.BYTE	0
byte_7F:
		.BYTE	0
byte_80:
		.BYTE	0
byte_81:
		.BYTE	0
byte_82: ; something printing related
		.BYTE	0
byte_83:
		.BYTE	0,0
byte_85:
		.BYTE	0
byte_86:
		.BYTE	0
_heroTileMovePixelsRemain: ; set to $0F to track movement in direction tracked elsewhere
		.BYTE	0
_mapWidth:
		.BYTE	0
_mapHeight:
		.BYTE	0
byte_8A: ; "tilemapOOBtile_8A" - this value is extracted during mdec init from bottom 5 bits of header[2] (OOB = out of bounds)
		.BYTE	0
_mapNumber:
		.BYTE	0
byte_8C:
		.BYTE	0
byte_8D: ; "mdec_bitsPerTile"
		.BYTE	0
byte_8E:
		.BYTE	0
_blockPlayerInputDuringMap: ; nonzero blocks player input. $01 is frozen forever. $02 and up counts until overflow and unfreezes
		.BYTE	0
byte_90: ; "EntityUpdateCycle_90" - used to only allow player DPad once per 16 frames?
		.BYTE	0
byte_91:
		.BYTE	0
byte_92:
		.BYTE	0
byte_93:
		.BYTE	0
byte_94:
		.BYTE	0
byte_95:
		.BYTE	0
byte_96:
		.BYTE	0
byte_97:
		.BYTE	0
byte_98: ; "mapStatePointer" - "block for the current mapStateIndex, in bank 6"
		.BYTE	0
byte_99: ; "contained in GlobalFileID $79"
		.BYTE	0
byte_9A: ; "tilesetNumber_9A" - also if i change it on the world map, majorly whack stuff happens
		.BYTE	0
byte_9B:
		.BYTE	0
byte_9C:
		.BYTE	0
byte_9D:
		.BYTE	0
byte_9E:
		.BYTE	0
byte_9F:
		.BYTE	0
byte_A0:
		.BYTE	0
byte_A1:
		.BYTE	0
byte_A2:
		.BYTE	0,0
_rand_iterations_counter:
		.BYTE	0,0,0,0,0,0
byte_AA:
		.BYTE	0
byte_AB:
		.BYTE	0
byte_AC:
		.BYTE	0
byte_AD:
		.BYTE	0,0,0
byte_B0:
		.BYTE	0,0,0,0
_tmp_ptrB4:
		.BYTE	0,0
_tmp_varB6:
		.BYTE	0
word_B7:
		.BYTE	0,0
byte_B9:
		.BYTE	0
byte_BA:
		.BYTE	0
byte_BB:
		.BYTE	0
byte_BC:
		.BYTE	0
byte_BD:
		.BYTE	0
byte_BE:
		.BYTE	0
byte_BF:
		.BYTE	0
byte_C0:
		.BYTE	0
byte_C1:
		.BYTE	0
byte_C2:
		.BYTE	0
byte_C3:
		.BYTE	0
byte_C4:
		.BYTE	0
byte_C5:
		.BYTE	0
byte_C6:
		.BYTE	0
byte_C7:
		.BYTE	0
byte_C8:
		.BYTE	0
byte_C9:
		.BYTE	0
_pads_tmp: ;ca
		.BYTE	0,0,0,0
byte_CE: ; "target" - current target for many AI and inventory functions
		.BYTE	0
;----------------------------------------------
; "u16 tempdamage" stores temporary damage values, including MP costs; and many, many other things
byte_CF: 
		.BYTE	0
byte_D0:
		.BYTE	0
;----------------------------------------------
byte_D1:
		.BYTE	0
byte_D2: ; contains the target of a move in battle
		.BYTE	0
byte_D3: ; a dialog box parameter?
		.BYTE	0
byte_D4:
		.BYTE	0
byte_D5:
		.BYTE	0
_apu_chan_pc:
		.BYTE	0,0,0,0,0,0,0,0
byte_DE:
		.BYTE	0
byte_DF:
		.BYTE	0
word_E0:
		.BYTE	0,0
_apu_chan_active:
		.BYTE	0,0,0,0,0,0,0,0
word_EA:
		.BYTE	0,0
_apu_chan_delay:
		.BYTE	0,0,0,0,0,0,0,0
word_F4:
		.BYTE	0,0
_apu_data3:
		.BYTE	0,0,0,0,0,0,0,0
word_FE:
		.BYTE	0,0
_players_pos_list:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
_npcs_pos_list:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
byte_174:
		.BYTE	0
byte_175:
		.BYTE	0
byte_176:
		.BYTE	0
byte_177:
		.BYTE	0
byte_178:
		.BYTE	0
byte_179:
		.BYTE	0
byte_17A:
		.BYTE	0
byte_17B:
		.BYTE	0,0,0,0,0
byte_180:
		.BYTE	0
byte_181:
		.BYTE	0
byte_182:
		.BYTE	0
byte_183:
		.BYTE	0,0
byte_185:
		.BYTE	0
byte_186:
		.BYTE	0,0,0
byte_189:
		.BYTE	0
byte_18A:
		.BYTE	0,0,0
byte_18D:
		.BYTE	0
byte_18E:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0
		
_spr_ram:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

;----------------------------------------------
; buffer format: headered data chunks
; chunk format :
; byte/word 0  : rthhhhhh [cccccccc]
; byte      1  : llllllll
; bytes  1..N  : dddddddd [...]
;
; r - data chunk size
; 	0 - short data chunk, 2 byte header, 1 byte to write
;	1 - long data chunk, 3 byte header, N bytes to write
; t - 2000.2 bit override, used if r = 1
; h - high nibble of ppu address
; c - number of bytes to write, 0 means 256 bytes, only if r = 1
; l - lower hibble of ppu address
; d - data bytes
;
; number of chunks is in _ppu_queue_chunks_count
;
_ppu_queue_buf: ; "ppuDMAList" -- contents of ppu queue (buffer is 231 bytes long)
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0
_ram_pal_buf: ;current logical unfaded palette
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0
_window_draw_buf:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_470:		; window frame header + 2 parameter
		.BYTE	0
byte_471:		; window (frame width / 2) | $10 parameter
		.BYTE	0
_apu_data2:
		.BYTE	0,0,0,0,0,0,0,0
byte_47A:
		.BYTE	0,0
byte_47C:
		.BYTE	0
byte_47D:
		.BYTE	0
byte_47E:
		.BYTE	0
byte_47F:
		.BYTE	0
_attr_ram_buf:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_500:
		.BYTE	0
byte_501:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_510:
		.BYTE	0,0,0,0,0,0,0,0
byte_518:
		.BYTE	0,0,0,0,0,0,0,0
byte_520:
		.BYTE	0
byte_521:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
;----------------------------------------------
; struct { u8 one, two } enemystat[8]
; contains what seems to be enemy status, two bytes per enemy? one copy seems to be the round starting state and another is the current state, or something like that
; hazy notes about meanings: LASCXP??
; S - sleep
; L - alive? clear this bit and it will be kind of like enemies are dead.
; P - "protecting itself". interferes with counting live enemies
; X - same as P?
; A - parrying or otherwise defense-boosted?
; C - confused
; or are the PX bits the enemy type/group? like, there can be 4 enemy types per battle?
byte_530:
		.BYTE	0
byte_531:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
;----------------------------------------------
; u8[12] someBattleActionTable - contains something like targets? 12 entries for 4 PC + 8 monsters
byte_540:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
;----------------------------------------------
; $54C a table indicating the moves selected for each character "movetable"
; perhaps we have 4 entries for player action and then entries for each enemy (0x00 is either 0th action entry, or action type 0)	
; these are cleared to 0 after the action is taken
; for the hero, I had: 
; 80 - attack
; 81 - attack (missing target?)
; 84 - attack
; 90 - chant bang
; A0 - protect myself
; B0 - use item
; so, I think the top nybble is basically the general action, and maybe the low nybble is a parameter?
; 0x - attack party, 1x - cast on party?, etc.
; 8x - attack, 9x - cast, Ax - parry, Bx - item, Cx - nonsense, Dx - nonsense, Ex - equip+attack, Fx - bypassed
; (0x70 was used or uninitialized for missing characters, and this makes sense for Fx bypassed) 
byte_54C:
		.BYTE	0,0,0,0
byte_550:
		.BYTE	0,0,0,0,0,0,0,0
;----------------------------------------------
; "this is a movetable which maps to exact enemy actions. Dont completely understand how the previous one is used, then."
byte_558: ;"moveTable2" - "the actually selected action"
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0 ; one too many?
;----------------------------------------------
byte_565:
		.BYTE	0
;----------------------------------------------
; $566: IIS??????
; I - Ironized. why two bits?
; S - something that can be removed by receiving an attack??
byte_566:
		.BYTE	0
;----------------------------------------------
byte_567:
		.BYTE	0
byte_568:
		.BYTE	0
byte_569:
		.BYTE	0
byte_56A:
		.BYTE	0
byte_56B:
		.BYTE	0
byte_56C:
		.BYTE	0
;----------------------------------------------
; u8[4]
_enemy_roster_index_list:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8 enemyGroupCount[4]
_enemy_group_count:
		.BYTE	0,0,0,0
;----------------------------------------------
byte_575:
		.BYTE	0
byte_576:
		.BYTE	0
_prev_pads: ; 578
		.BYTE	0,0,0,0,0,0
byte_57D:
		.BYTE	0,0
byte_57F:
		.BYTE	0
;----------------------------------------------
;$580-$5FF contains a 1bpp bitmap used to indicate which nametable tiles have been blanked during a pre-battle screen wipe. it seems it's also used for other things
byte_580:
		.BYTE	0
byte_581:
		.BYTE	0
byte_582:
		.BYTE	0
byte_583:
		.BYTE	0
byte_584:
		.BYTE	0
byte_585:
		.BYTE	0
byte_586:
		.BYTE	0
byte_587:
		.BYTE	0
byte_588:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_594:
		.BYTE	0
byte_595:
		.BYTE	0
byte_596:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_5B0:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_61A:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_634:
		.BYTE	0
byte_635:
		.BYTE	0
byte_636:
		.BYTE	0,0
;----------------------------------------------
; well, these are kind of jumbled. do i have them right?
byte_638: ; "s8_topmostMapTileVisible"
		.BYTE	0
byte_639: ; "s8_leftmostMapTileVisible"
		.BYTE	0
byte_63A: ; "leftmostMapTileAccessible"
		.BYTE	0
byte_63B: ; "rightmostMapTileVisible"
		.BYTE	0
byte_63C: ; "topmostTileAccessible"
		.BYTE	0
byte_63D: ; "bottommostTileVisible"
		.BYTE	0
byte_63E:
		.BYTE	0
;----------------------------------------------
; u24 - a numeric parameter displayed in the main message box
_msg_number_parameter_F8:
		.BYTE	0,0,0
;----------------------------------------------
byte_642:
		.BYTE	0
byte_643:
		.BYTE	0
byte_644: ;"playerFacingDir" - 0=up,1=right,2=down,3=left
		.BYTE	0
byte_645: ;"playerAnimTimer"
		.BYTE	0,0
byte_647:
		.BYTE	0
byte_648:
		.BYTE	0,0,0
byte_64B:
		.BYTE	0,0,0,0,0,0,0,0
byte_653:
		.BYTE	0,0,0,0,0,0,0,0
byte_65B:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_667:
		.BYTE	0
byte_668:
		.BYTE	0,0,0
byte_66B:
		.BYTE	0
byte_66C:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0
byte_677:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
byte_68F:
		.BYTE	0,0,0,0,0,0,0
byte_696:
		.BYTE	0
byte_697:
		.BYTE	0
byte_698:
		.BYTE	0
byte_699:
		.BYTE	0
byte_69A:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6B7:
		.BYTE	0
byte_6B8:
		.BYTE	0
byte_6B9:
		.BYTE	0
byte_6BA:
		.BYTE	0
byte_6BB:
		.BYTE	0
byte_6BC: ; "mapEntryFacingRelated"
		.BYTE	0
byte_6BD:
		.BYTE	0,0
byte_6BF:
		.BYTE	0
byte_6C0:
		.BYTE	0,0,0,0,0,0,0
_cur_mmc_cmd:
		.BYTE	0
_cur_chr0_bank_prg_hi:
		.BYTE	0
byte_6C9:
		.BYTE	0,0,0,0,0,0,0
;----------------------------------------------
_ppu_scroll_shadow: ; "ntxscroll/ntyscroll" - pixel X/Y scroll 
		.BYTE	0,0
;----------------------------------------------
_nmi_counter: ; used for text system solely? not sure. <zero> I thought so too last time i debugged the game
		.BYTE	0
;----------------------------------------------
_ppu_ctrl_shadow:
		.BYTE	0
_ppu_mask_shadow: ; "current_2001_setting?"
		.BYTE	0
_mmc_cur_prg_bank:
		.BYTE	0
_nmi_force_dequeue_request_flag:
		.BYTE	0
_spr_shuffle_syncs_counter:
		.BYTE	0
_ppu_queue_pos:
		.BYTE	0
_ppu_queue_chunks_count:
		.BYTE	0
byte_6DA:
		.BYTE	0,0,0
;----------------------------------------------
; 00 is fast, 06 is slow. 07 is slowest, but messages will prompt you to wait between each print
_cur_message_speed: ;6DD
		.BYTE	0
_world_map_step_rand:				; never used in any part of the game, just randomly changes
		.BYTE	0
_world_map_steps_count:				; every step on the map increases this counter
		.BYTE	0					; as well as change the rand value above.
									; steps count up to $CB, then wrap around
									; the day is in range $00..$78, the rest is a night.
_current_pc_status_pal_value:
		.BYTE	0
_npc_anim_script_idx:
		.BYTE	0
_npc_anim_script_flags:
		.BYTE	0
_npc_anim_script_phase_count:
		.BYTE	0
_npc_anim_script_phase_slot_list:
		.BYTE	0,0,0,0
byte_6E8:
		.BYTE	0,0,0
byte_6EB:
		.BYTE	0
byte_6EC:
		.BYTE	0,0,0
byte_6EF:
		.BYTE	0
byte_6F0:
		.BYTE	0
byte_6F1:
		.BYTE	0
byte_6F2:
		.BYTE	0
byte_6F3:
		.BYTE	0
byte_6F4:
		.BYTE	0
byte_6F5:
		.BYTE	0
byte_6F6:
		.BYTE	0
_apu_chan_ret_pc:
		.BYTE	0,0,0,0,0,0,0,0
byte_6FF:
		.BYTE	0
;----------------------------------------------
; u8[4] - LEVEL stat for 4 PCs
;
_players_level:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - STR stat for 4 PCs
;
_players_STR:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - AGI stat for 4 PCs
;
_players_AGI:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - INT stat for 4 PCs
;
_players_INT:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - LUCK stat for 4 PCs
;
_players_LUCK:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - VIT stat for 4 PCs
;
_players_VIT:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - class and gender flag for 4 players
; see class_ids.inc for meaning of classes. please write where the gender was?
;
_players_class_gender:
		.BYTE	0,0,0,0
;----------------------------------------------
; u16[4] - HP for 4 players
;
_players_HP:
		.WORD	0,0,0,0
;----------------------------------------------
; u16[4] - MHP for 4 players
;
_players_MHP:
		.WORD	0,0,0,0
;----------------------------------------------
; u16[4] - MP for 4 players
;
_players_MP:
		.WORD	0,0,0,0
;----------------------------------------------
; u16[4] - MMP for 4 players
;
_players_MMP:
		.WORD	0,0,0,0
;----------------------------------------------
; u16[] pc.status - Status for 4 players
; first byte is a control bytes, to check is player
; actually existst and track status changes
;
; ........ D....R..
; R - Affects enemy spell/breath damage reductions. if set, reductions don't
;     apply (for spells)? Maybe this prevents double reductions from protection spells.
; D - Death flag. Character is dead if clear
;
_players_status:
		.WORD	0,0,0,0
;----------------------------------------------
; u24[4] - EXP stat for 4 players
;
_players_EXP:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
;----------------------------------------------
; u24 pc.returnlist[4] - ? ? dont remember what this was
byte_750:
		.BYTE	0
byte_751:
		.BYTE	0
byte_752:
		.BYTE	0
byte_753:
		.BYTE	0
byte_754:
		.BYTE	0,0
byte_756:
		.BYTE	0
byte_757:
		.BYTE	0,0
byte_759:
		.BYTE	0
byte_75A:
		.BYTE	0,0
;----------------------------------------------
; u8[4][8] 8 character name for 4 players
;
_players_name:
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
;----------------------------------------------
; u8[4][8] PC_inventory - 8 entries for 4 PCs
_players_inventory_list:
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
;----------------------------------------------
; u8[4][8] spells list, 4 for battle, 4 for command
_players_spell:
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
byte_7BC:
		.BYTE	0
byte_7BD:
		.BYTE	0
byte_7BE:
		.BYTE	0
byte_7BF:
		.BYTE	0
byte_7C0:
		.BYTE	0
_players_formation:
		.BYTE	0,0,0,0

		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0

;$0C73#apuCurrentSq1Pitch#
;$0C75#apuCurrSq2Pitch#
		ORG $2000

_PPU_CTRL:
		.BYTE	0
_PPU_MASK:
		.BYTE	0
_PPU_STATUS:
		.BYTE	0
_PPU_OAM_ADDR:
		.BYTE	0
_PPU_OAM_DATA:
		.BYTE	0
_PPU_SCROLL:
		.BYTE	0
_PPU_ADDR:
		.BYTE	0
_PPU_DATA:
		.BYTE	0

		ORG $4000

_APU_PULSE1_ENV:
		.BYTE	0
_APU_PULSE1_SWEEP:
		.BYTE	0
_APU_PULSE1_TIME:
		.BYTE	0
_APU_PULSE1_LEN:
		.BYTE	0
_APU_PULSE2_ENV:
		.BYTE	0
_APU_PULSE2_SWEEP:
		.BYTE	0
_APU_PULSE2_TIME:
		.BYTE	0
_APU_PULSE2_LEN:
		.BYTE	0
_APU_TRI_COUNT:
		.BYTE	0
_APU_TRI_UNUSED:
		.BYTE	0
_APU_TRI_TIME:
		.BYTE	0
_APU_TRI_LEN:
		.BYTE	0
_APU_NOISE_ENV:
		.BYTE	0
_APU_NOISE_UNUSED:
		.BYTE	0
_APU_NOISE_LOOP:
		.BYTE	0
_APU_NOISE_LEN:
		.BYTE	0
_APU_DMC_FREQ:
		.BYTE	0
_APU_DMC_LOAD:
		.BYTE	0
_APU_DMC_ADDR:
		.BYTE	0
_APU_DMC_LEN:
		.BYTE	0
_PPU_OAM_DMA:
		.BYTE	0
_APU_STATUS:
		.BYTE	0
_PAD0_REG:
		.BYTE	0
_PAD1_REG:
		.BYTE	0

		ORG $6000

byte_6000:
		.BYTE	0
byte_6001:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0
byte_600C:
		.BYTE	0
byte_600D:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0
byte_6084:
		.BYTE	0,0,0,0,0,0,0,0
byte_608C:
		.BYTE	0
byte_608D:
		.BYTE	0
byte_608E:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_60A8:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_60B5:
		.BYTE	0
byte_60B6:
		.BYTE	0
;----------------------------------------------
; used by dialog wait loop.. some kind of battle special logic maybe..?
; 60B7.0 seems to change class to Erdrick
byte_60B7:
		.BYTE	0
;----------------------------------------------
byte_60B8:
		.BYTE	0
byte_60B9:
		.BYTE	0
;----------------------------------------------
; if byte_60BA.0 is set, then we're in the "shrine where you may try your courage". After dying you respawn there
byte_60BA:
		.BYTE	0
;----------------------------------------------
byte_60BB:
		.BYTE	0,0,0,0
byte_60BF:
		.BYTE	0
byte_60C0:
		.BYTE	0
byte_60C1:
		.BYTE	0,0
byte_60C3:
		.BYTE	0
byte_60C4:
		.BYTE	0
byte_60C5:
		.BYTE	0
byte_60C6:
		.BYTE	0
byte_60C7:
		.BYTE	0
byte_60C8:
		.BYTE	0
byte_60C9:
		.BYTE	0
byte_60CA: ; "someQuestFlags_60ca" - fiddling with values here can make aliahan look like baramos is dead
		.BYTE	0
byte_60CB: ; "someQuestFlags_60Cb" - fiddling with values here can make aliahan look like baramos is dead
		.BYTE	0
byte_60CC:
		.BYTE	0
byte_60CD:
		.BYTE	0
byte_60CE:
		.BYTE	0
byte_60CF:
		.BYTE	0
byte_60D0:
		.BYTE	0,0,0,0,0,0
; u8[12]
_tavern_chars_level:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_60E2:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_60EE:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_60FA:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_6106:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_6112:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_611E:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
; u16[12]
_tavern_chars_HP:
		.WORD	0,0,0,0,0,0,0,0,0,0,0,0
byte_6142:
		.WORD	0,0,0,0,0,0,0,0,0,0,0,0
byte_615A:
		.WORD	0,0,0,0,0,0,0,0,0,0,0,0
byte_6172:
		.WORD	0,0,0,0,0,0,0,0,0,0,0,0
byte_618A:
		.WORD	0,0,0,0,0,0,0,0,0,0,0,0
; u8[12][3]
_tavern_chars_EXP:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
byte_61C6:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
		
; there are a total 12 different characters that can be registered
; * the first one is always the Hero character
; * then three autogenerated by the game from the 12 predefined characters
; * the rest is registered by the player
;
_tavern_chars_name:
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
byte_624A:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
_tavern_chars_spell:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_630A:
		.BYTE	0,0,0
byte_630D:
		.BYTE	0
byte_630E:
		.BYTE	0
byte_630F:
		.BYTE	0
byte_6310:
		.BYTE	0
byte_6311:
		.BYTE	0
byte_6312:
		.BYTE	0
byte_6313:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_631F:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_63C9:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_63E7:
		.BYTE	0,0
byte_63E9:
		.BYTE	0
byte_63EA:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
byte_693E:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0
_sram_signature0:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
_sram_signature1:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
word_6A2F:
		.BYTE	0,0,0
; some kind of printing status, maybe just for actions or maybe for others.
; Seems to be related to indenting?
;
byte_6A32: ; "printingState"
		.BYTE	0
byte_6A33:
		.BYTE	0
byte_6A34:
		.BYTE	0
byte_6A35:
		.BYTE	0
byte_6A36:
		.BYTE	0,0,0,0,0
byte_6A3B:
		.BYTE	0
byte_6A3C:
		.BYTE	0
byte_6A3D:
		.BYTE	0
byte_6A3E:
		.BYTE	0
byte_6A3F:
		.BYTE	0
byte_6A40:
		.BYTE	0
byte_6A41:
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_6A4B:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
;----------------------------------------------
; controls what _MAIN_ENTRY does, maybe has other functions
byte_6A58:
		.BYTE	0
;----------------------------------------------
byte_6A59:
		.BYTE	0,0,0
byte_6A5C:
		.BYTE	0
byte_6A5D:
		.BYTE	0,0,0,0,0
byte_6A62:
		.BYTE	0
;----------------------------------------------
; setting this nonzero makes enemies go nuts and fight each other and the battle to run oddly
; with maybe no player turn. is it for the arena?
byte_6A63:
		.BYTE	0
;----------------------------------------------
byte_6A64:
		.BYTE	0
byte_6A65:
		.BYTE	0
byte_6A66:
		.BYTE	0
byte_6A67:
		.BYTE	0
byte_6A68:
		.BYTE	0
byte_6A69:
		.BYTE	0
byte_6A6A:
		.BYTE	0
byte_6A6B:
		.BYTE	0
byte_6A6C:
		.BYTE	0
byte_6A6D:
		.BYTE	0
byte_6A6E:
		.BYTE	0
byte_6A6F:
		.BYTE	0,0,0,0
byte_6A73: ; "unk_EnemyStatusPXFieldLookup" - the PX field of enemy status is used to index this table
		.BYTE	0,0,0,0
byte_6A77:
		.BYTE	0,0,0,0
byte_6A7B:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
;----------------------------------------------
; u8 pc.stuff[4] - stuff? for 4 PCs
; pc.stuff.$20 - parrying, or defense++'d? battle order?
byte_6A9B:
		.BYTE	0,0,0,0
;----------------------------------------------
; u8[4] - AGI realtime value cached for 4 players (modified realtime by spells and effects)
_players_rAGI:
		.BYTE	0,0,0,0
;----------------------------------------------
; u16[4] - DEF realtime value cached for 4 players (modified realtime by spells and effects)
_players_rDEF:
		.BYTE	0,0,0,0,0,0,0,0
;----------------------------------------------
; u16[4] - DEF realtime value cached for 4 players (modified realtime by spells and effects)
_players_rATK:
		.BYTE	0,0,0,0,0,0,0,0
;----------------------------------------------
byte_6AB3:
		.BYTE	0
byte_6AB4:
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_6ABE:
		.BYTE	0
byte_6ABF:
		.BYTE	0
byte_6AC0:
		.BYTE	0
_window_frame_tmp6AC1:
		.BYTE	0
_window_frame_width_add_header4_bits_add_1:
		.BYTE	0
_wnd_cmd_byte_pos:
		.BYTE	0
_wnd_cur_cmd_byte:
		.BYTE	0
byte_6AC5:
		.BYTE	0
_window_frame_header4_bits:
		.BYTE	0
byte_6AC7:
		.BYTE	0
byte_6AC8:
		.BYTE	0
_window_frame_tmp6AC9:
		.BYTE	0
_window_frame_tmp6ACA:
		.BYTE	0
byte_6ACB:
		.BYTE	0
byte_6ACC:
		.BYTE	0
byte_6ACD:
		.BYTE	0
byte_6ACE:
		.BYTE	0,0
byte_6AD0: ; text printing related
		.BYTE	0
byte_6AD1:
		.BYTE	0
byte_6AD2:
		.BYTE	0,0,0
byte_6AD5:
		.BYTE	0,0,0,0
byte_6AD9:
		.BYTE	0,0,0,0
byte_6ADD:
		.BYTE	0,0,0,0,0,0,0,0,0
byte_6AE6:
		.BYTE	0,0
byte_6AE8:
		.BYTE	0
_window_frame_width_var:
		.BYTE	0
_window_frame_height_var:
		.BYTE	0
_window_frame_tmp6AEB:
		.BYTE	0
byte_6AEC:
		.BYTE	0
byte_6AED:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_6B09:
		.BYTE	0
byte_6B0A:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0
byte_6B1F:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
_sram_b0_s2_player_HP_read:
		.BYTE	0,0,0,0,0
_sram_b0_s3_player_MAX_HP_read:
		.BYTE	0,0,0,0,0
_sram_b0_s4_player_HP_add:
		.BYTE	0,0,0,0,0
_sram_b0_s5_player_HP_subtract:
		.BYTE	0,0,0,0,0
_sram_b0_s6_player_MP_read:
		.BYTE	0,0,0,0,0
_sram_b0_s7_player_MAX_MP_read:
		.BYTE	0,0,0,0,0
_sram_b0_s8_player_MP_add:
		.BYTE	0,0,0,0,0
_sram_b0_s9_player_MP_subtract:
		.BYTE	0,0,0,0,0
_sram_b0_sB_player_MP_consume:
		.BYTE	0,0,0,0,0
_sram_b0_sC_player_LV_read:
		.BYTE	0,0,0,0,0
_sram_b0_sD:
		.BYTE	0,0,0,0,0
_sram_b0_sE_player_STATUS_read:
		.BYTE	0,0,0,0,0
_sram_b0_sF:
		.BYTE	0,0,0,0,0
_sram_b0_s10:
		.BYTE	0,0,0,0,0
_sram_b0_s11_player_STR_read:
		.BYTE	0,0,0,0,0
_sram_b0_s12_player_AGI_read:
		.BYTE	0,0,0,0,0
_sram_b0_s13_player_VIT_read:
		.BYTE	0,0,0,0,0
_sram_b0_s14_player_INT_read:
		.BYTE	0,0,0,0,0
_sram_b0_s15_player_LUCK_read:
		.BYTE	0,0,0,0,0
_sram_b0_s16_player_ATK_read:
		.BYTE	0,0,0,0,0
_sram_b0_s17:
		.BYTE	0,0,0,0,0
_sram_b0_s18_player_DEF_read:
		.BYTE	0,0,0,0,0
_sram_b0_s19:
		.BYTE	0,0,0,0,0
_sram_b0_s1A:
		.BYTE	0,0,0,0,0
_sram_b0_s1B:
		.BYTE	0,0,0,0,0
_sram_b0_s1C:
		.BYTE	0,0,0,0,0
_sram_b0_s1D:
		.BYTE	0,0,0,0,0
_sram_b0_s1E_player_euipped_item_read:
		.BYTE	0,0,0,0,0
_sram_b0_s1F:
		.BYTE	0,0,0,0,0
_sram_b0_s20:
		.BYTE	0,0,0,0,0
_sram_b0_s21:
		.BYTE	0,0,0,0,0
_sram_b0_s22:
		.BYTE	0,0,0,0,0
_sram_b0_s23:
		.BYTE	0,0,0,0,0
_sram_b0_s24:
		.BYTE	0,0,0,0,0
_sram_b0_s25:
		.BYTE	0,0,0,0,0
_sram_b0_s26:
		.BYTE	0,0,0,0,0
_sram_b0_s28:
		.BYTE	0,0,0,0,0
_sram_b0_s29:
		.BYTE	0,0,0,0,0
_sram_b0_s2A:
		.BYTE	0,0,0,0,0
_sram_b0_s2B:
		.BYTE	0,0,0,0,0
_sram_b0_s2C_player_CLASS_read:
		.BYTE	0,0,0,0,0
_sram_b0_s2E:
		.BYTE	0,0,0,0,0
_sram_b0_s2F_player_gender_read:
		.BYTE	0,0,0,0,0
_sram_b0_s30:
		.BYTE	0,0,0,0,0
_sram_b0_s31:
		.BYTE	0,0,0,0,0
_sram_b0_s32:
		.BYTE	0,0,0,0,0
_sram_b0_s33:
		.BYTE	0,0,0,0,0
_sram_b0_s34:
		.BYTE	0,0,0,0,0
_sram_b0_s35:
		.BYTE	0,0,0,0,0
_sram_b0_s36:
		.BYTE	0,0,0,0,0
_sram_b0_s37:
		.BYTE	0,0,0,0,0
_sram_b0_s38:
		.BYTE	0,0,0,0,0
_sram_b0_s39:
		.BYTE	0,0,0,0,0
_sram_b0_s3A:
		.BYTE	0,0,0,0,0
_sram_b0_s3B:
		.BYTE	0,0,0,0,0
;_sram_b0_sA_player_MP_set_sero:
		.BYTE	0,0,0,0,0
;_sram_b0_s27:
		.BYTE	0,0,0,0,0
;_sram_b0_s2D
		.BYTE	0,0,0,0,0
;_sram_bank0_select_ex:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6C70:
		.BYTE	0
byte_6C71:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6CF0:
		.BYTE	0
byte_6CF1:
		.BYTE	0
byte_6CF2:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6D31:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6D40:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6DE0:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0
byte_6DF3:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_6E00:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7200:
		.BYTE	0
byte_7201:
		.BYTE	0
byte_7202:
		.BYTE	0
byte_7203:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7280:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7300: ; "tileListMetatilingSizeTbl" - How many HWTiles are in each Tile in the map's TileList
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7320:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7400: ;"areaTileMap"
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
byte_7464:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0
byte_7470:
		.BYTE	0,0,0,0
byte_7474:
		.BYTE	0
byte_7475:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7485:
		.BYTE	0,0,0,0,0,0,0
byte_748C:
		.BYTE	0
byte_748D:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0
byte_74C0:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0
byte_7522:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0
byte_753A:
		.BYTE	0
byte_753B:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7558:
		.BYTE	0
byte_7559:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7579:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_75C7:
		.BYTE	0
byte_75C8:
		.BYTE	0
byte_75C9:
		.BYTE	0
byte_75CA:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_75E7:
		.BYTE	0
byte_75E8:
		.BYTE	0
byte_75E9:
		.BYTE	0
byte_75EA:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0
byte_7633:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7673:
		.BYTE	0,0,0,0,0,0,0
byte_767A:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
byte_768E:
		.BYTE	0,0,0,0,0,0,0,0,0
byte_7697:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0
byte_76D4:
		.BYTE	0
byte_76D5:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0
byte_7706:
		.BYTE	0
byte_7707:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0
byte_779A:
		.BYTE	0,0,0,0
byte_779E:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0
byte_7800:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0
byte_7862:
		.BYTE	0,0,0,0
byte_7866:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0
byte_792A:
		.BYTE	0,0,0,0
byte_792E:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0
byte_79F4:
		.BYTE	0
byte_79F5:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0
byte_7A26:
		.BYTE	0
byte_7A27:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0
byte_7C71:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
byte_7CD1:
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		.BYTE	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
