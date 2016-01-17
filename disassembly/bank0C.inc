
		ORG $8000

		PTR_IDX		_bC_s0_npc_anim_script_init
		PTR_IDX		_bC_s1
		PTR_IDX		_bC_s2
		PTR_IDX		_bC_s3
		PTR_IDX		_bC_s4
		PTR_IDX		_bC_s5
		PTR_IDX		_bC_s6
		PTR_IDX		_bC_s9
		PTR_IDX		_bC_sA
		PTR_IDX		_bC_sB
		PTR_IDX		_bC_sC_item_echoing_flute_use
		PTR_IDX		_bC_sD_item_thief_key_use
		PTR_IDX		_bC_sE_item_magic_key_use
		PTR_IDX		_bC_sF_item_final_key_use
		PTR_IDX		_bC_s10_spell_daynight
		PTR_IDX		_bC_s11_item_lamp_of_darkness_use
		PTR_IDX		_bC_s12_sleep_X_sync_50
		PTR_IDX		_bC_s13_item_magic_ball_use
		PTR_IDX		_bC_s14
		PTR_IDX		_bC_s15
		PTR_IDX		_bC_s16
		PTR_IDX		_bC_s17_sys0_spr_effects_call
		PTR_IDX		_bC_s18
		PTR_IDX		_bC_s19_turn_king_of_romaly_on_off
		PTR_IDX		_bC_s1A
		PTR_IDX		_bC_s1B
		PTR_IDX		_bC_s1C
		PTR_IDX		_bC_s1D_run_command_search
		PTR_IDX		_bC_s1E_spell_x_ray_use
		PTR_IDX		_bC_s1F_get_chest_flag_and_idx
		PTR_IDX		_bC_s20_warp_bE_sB_arg0
		PTR_IDX		_bC_s21
		PTR_IDX		_bC_s22
		PTR_IDX		_bC_s23_test_orbs_collected_count
		PTR_IDX		_bC_s24_volcano_event
		PTR_IDX		_bC_s25
		PTR_IDX		_bC_s26_item_common_orbs_use
		PTR_IDX		_bC_s27
		PTR_IDX		_bC_s28
		PTR_IDX		_bC_s2A
		PTR_IDX		_bC_s2B_item_fairy_flute_use
		PTR_IDX		_bC_s2C
		PTR_IDX		_bC_s2D
		PTR_IDX		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		PTR_IDX		_bC_s2F
		PTR_IDX		_bC_s30
		PTR_IDX		_bC_s31
		PTR_IDX		_bC_s32
		PTR_IDX		_bC_s33
		PTR_IDX		_bC_s34
		PTR_IDX		_bC_s35
		PTR_IDX		_bC_s37_get_special_areas_tile_idx
		PTR_IDX		_bC_s38
		PTR_IDX		_bC_s39
		PTR_IDX		_bC_s3A
		PTR_IDX		_bC_s3B

; =============== S U B	R O U T	I N E =======================================
_bC_s1:
		LDA		_npc_anim_script_idx
		BEQ		locret_128081
		CMP		#$40
		BCC		loc_128082
locret_128081:
		RTS
loc_128082:
		CMP		#2
		BNE		loc_128089
		JSR		_wait_for_nmi_is_over_sync
loc_128089:
		LDA		byte_90
		AND		#$F
		BNE		locret_128081
		LDA		_npc_anim_script_phase_count
		STA		word_3C
		LDX		#0
loc_128096:
		TXA
		PHA
		JSR		sub_1280A6
		PLA
		TAX
		INX
		CPX		word_3C
		BNE		loc_128096
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1280A3:
		JMP		loc_1282F0

; =============== S U B	R O U T	I N E =======================================
sub_1280A6:
		LDA		byte_6E8,X
		BNE		sub_1280A3
		INC		byte_6EC,X
		JSR		sub_1283A6
		CMP		#$FF
		BEQ		loc_1280B8
		JMP		loc_1282BB
loc_1280B8:
		LDA		_npc_anim_script_flags
		AND		#8
		BEQ		loc_1280CA
		JSR		sub_128375
		LDY		#3
		LDA		(word_6C),Y
		ORA		#$80
		STA		(word_6C),Y
loc_1280CA:
		LDA		_npc_anim_script_flags
		AND		#$10
		BEQ		loc_1280F5
		JSR		sub_128375
		LDY		#0
		LDA		(word_6C),Y
		TAX
		INY
		LDA		(word_6C),Y
		TAY
		JSR		sub_1777C2
		BCC		loc_1280E5
		JSR		sub_12837F
loc_1280E5:
		LDA		_npc_anim_script_flags
		AND		#4
		BNE		loc_1280F5
		LDY		#0
		LDA		#$80
		STA		(word_6C),Y
		INY
		STA		(word_6C),Y
loc_1280F5:
		DEC		_npc_anim_script_phase_count
		BEQ		loc_1280FB
		RTS
loc_1280FB:
		LDA		_npc_anim_script_flags
		AND		#2
		BEQ		loc_128119
		INC		_npc_anim_script_idx
		LDA		_npc_anim_script_idx
		CMP		#8
		BCC		loc_128113
		CMP		#$B
		BCS		loc_128116
		JSR		sub_1283C3
loc_128113:
		JMP		loc_12820F
loc_128116:
		JMP		loc_1281FA
loc_128119:
		LDA		_npc_anim_script_idx
		CMP		#$1F
		BNE		loc_128154
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$171
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_128139
		MSGX	_msg_m00,$172
		JSR		sub_174D4F
		LDA		#$20
		JSR		_bC_s0_npc_anim_script_init
		JMP		loc_12814E
loc_128139:
		MSGX	_msg_m00,$173
		JSR		sub_174D4F
		LDA		#$21
		JSR		_bC_s0_npc_anim_script_init
		LDA		#0
		STA		byte_6EB
		LDA		#$E
		STA		byte_6EF
loc_12814E:
		PLA
		PLA
		PLA
		JMP		_bC_s1
loc_128154:
		CMP		#$20
		BNE		loc_128175
		LDA		#4
		FARX	_b0_s1_battle_typeA_launch
		LDA		_global_flags_array.byte5
		ORA		#$40
		STA		_global_flags_array.byte5
		LDA		#$80
		STA		_npcs_pos_list
		STA		_npcs_pos_list+4
		STA		_npcs_pos_list+8
		STA		_npcs_pos_list+$C
		BNE		loc_1281BE
loc_128175:
		LDA		_npc_anim_script_idx
		CMP		#$23
		BNE		loc_128185
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$175
		JSR		sub_174D4F
loc_128185:
		LDA		_npc_anim_script_idx
		CMP		#$2C
		BNE		loc_12819A
		LDA		#$C0
		STA		_global_flags_array.byte11
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$186
		JSR		sub_174D4F
loc_12819A:
		LDA		_npc_anim_script_idx
		CMP		#$31
		BNE		loc_1281C4
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		LDA		byte_D2
		STA		_msg_directobject_param
		MSGX	_msg_m00,$181
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$F
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_12B91A
		LDA		#1
		STA		_global_flags_array.byte10
loc_1281BE:
		JSR		sub_174CBD
		PLA
		PLA
		PLA
loc_1281C4:
		LDA		_npc_anim_script_idx
		CMP		#$32
		BNE		loc_1281D3
		LDA		_global_flags_array.byte17
		ORA		#$40
		STA		_global_flags_array.byte17
loc_1281D3:
		LDA		_npc_anim_script_idx
		CMP		#2
		BNE		loc_1281E4
		LDA		#0
		STA		_npc_anim_script_idx
		LDY		#_b7_s1B_fidx
		JMP		_sys0_unsafe
loc_1281E4:
		CMP		#$33
		BNE		loc_1281F4
		FARX	_b0_s52_battle_typeFF_launch
		FARX	_b1B_s0
		JSR		sub_174CBD
		PLA
		PLA
		PLA
loc_1281F4:
		LDA		#0
		STA		_npc_anim_script_idx
		RTS
loc_1281FA:
		CMP		#$D
		BNE		loc_12820F
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$16C
		JSR		sub_174D4F
		LDA		#$D
		JSR		_bC_s0_npc_anim_script_init
		JMP		loc_128275
loc_12820F:
		CMP		#$18
		BNE		loc_12821D
loc_128213:
		PHA
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_s21
		PLA
		BNE		loc_12825F
loc_12821D:
		CMP		#$38
		BEQ		loc_128213
		CMP		#$25
		BNE		loc_128233
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$176
		JSR		_bC_s12_sleep_X_sync_50
		JSR		_bC_s20_warp_bE_sB_arg0
		LDA		#$25
loc_128233:
		CMP		#$26
		BNE		loc_128242
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$177
		JSR		sub_174D4F
		LDA		#$26
loc_128242:
		CMP		#$27
		BNE		loc_128251
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$178
		JSR		sub_174D4F
		LDA		#$27
loc_128251:
		CMP		#$2C
		BNE		loc_12825F
		JSR		_bC_s0_npc_anim_script_init
		LDA		#$14
		STA		byte_6EF
		BNE		loc_128275
loc_12825F:
		JSR		_bC_s0_npc_anim_script_init
		LDA		_npc_anim_script_idx
		CMP		#$E
		BEQ		loc_1282B2
		CMP		#$F
		BEQ		loc_1282A7
		CMP		#$10
		BEQ		loc_12827B
		CMP		#$11
		BEQ		loc_12828A
loc_128275:
		PLA
		PLA
		PLA
		JMP		_bC_s1
loc_12827B:
		PHA
		LDA		#8
		STA		byte_74C0
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$16E
		JMP		loc_128296
loc_12828A:
		PHA
		LDA		#0
		STA		byte_74C0
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$16F
loc_128296:
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#SFX_BLAST_95
		FARX	_bB_s3_apu_load
		JSR		_bC_s20_warp_bE_sB_arg0
		PLA
		SEC
		SBC		#8
		BNE		loc_1282B5
loc_1282A7:
		PHA
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$16D
		JSR		sub_174D4F
		PLA
loc_1282B2:
		SEC
		SBC		#9
loc_1282B5:
		STA		byte_6EF
		JMP		loc_128275
loc_1282BB:
		AND		#$1F
		STA		byte_6E8,X
		LDA		(byte_37),Y
		PHA
		CLC
		AND		#$C0
		ROL
		ROL
		ROL
		PHA
		JSR		sub_128375
		LDY		#3
		LDA		_npc_anim_script_idx
		CMP		#$31
		BEQ		loc_1282E5
		LDA		#$7C
		AND		(word_6C),Y
		STA		(word_6C),Y
		PLA
		ORA		(word_6C),Y
		STA		(word_6C),Y
		PLA
		JMP		loc_1282F3
loc_1282E5:
		LDA		#$7F
		AND		(word_6C),Y
		STA		(word_6C),Y
		PLA
		PLA
		JMP		loc_1282F3
loc_1282F0:
		JSR		sub_1283A6
loc_1282F3:
		AND		#$20
		BNE		loc_128371
		JSR		sub_128375
		TXA
		PHA
		LDX		#$40
		LDA		_npc_anim_script_idx
		CMP		#$2C
		BEQ		loc_12831F
		CMP		#$28
		BEQ		loc_12831F
		LDY		#0
		LDA		(word_6C),Y
		TAX
		INY
		LDA		(word_6C),Y
		TAY
		JSR		_map_ReadTileCheckedXY
		LDX		#$40
		AND		#$E0
		CMP		byte_8C
		BEQ		loc_12831F
		LDX		#0
loc_12831F:
		LDY		#3
		TXA
		ORA		(word_6C),Y
		STA		(word_6C),Y
		PLA
		TAX
		LDA		_npc_anim_script_idx
		CMP		#$31
		BEQ		loc_128368
		LDY		#3
		LDA		(word_6C),Y
		AND		#$3C
		BEQ		loc_128344
		LDA		(word_6C),Y
		AND		#$40
		BEQ		loc_128344
		TXA
		PHA
		FARX	_bD_sA
		PLA
		TAX
loc_128344:
		LDY		#3
		LDA		(word_6C),Y
		AND		#3
		BEQ		loc_128358
		CMP		#1
		BEQ		loc_128364
		CMP		#2
		BEQ		loc_128368
		LDY		#0
		BEQ		loc_12835A
loc_128358:
		LDY		#1
loc_12835A:
		LDA		(word_6C),Y
		SEC
		SBC		#1
		STA		(word_6C),Y
		JMP		loc_128371
loc_128364:
		LDY		#0
		BEQ		loc_12836A
loc_128368:
		LDY		#1
loc_12836A:
		LDA		(word_6C),Y
		CLC
		ADC		#1
		STA		(word_6C),Y
loc_128371:
		DEC		byte_6E8,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128375:
		LDA		_npc_anim_script_phase_slot_list,X
		STA		word_6C
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12837F:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$3C
		BEQ		locret_1283A5

; =============== S U B	R O U T	I N E =======================================
_bC_s9:
		AND		#$3C
		PHA
		FARX	_b5_s3
		LDX		#0
		LDA		#$F8
loc_128391:
		STA		word_4,X
		INX
		CPX		#4
		BNE		loc_128391
		PLA
		TAY
loc_12839A:
		LDX		#4
		JSR		sub_174204
		INY
		TYA
		AND		#3
		BNE		loc_12839A
locret_1283A5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1283A6:
		TXA
		PHA
		LDY		#0
		CPX		#0
		BEQ		loc_1283B8
loc_1283AE:
		LDA		(byte_37),Y
		INY
		CMP		#$FF
		BNE		loc_1283AE
		DEX
		BNE		loc_1283AE
loc_1283B8:
		PLA
		TAX
		TYA
		CLC
		ADC		byte_6EC,X
		TAY
		LDA		(byte_37),Y
locret_1283C2:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1283C3:
		LDA		#SFX_BLAST_95
		FARX	_bB_s3_apu_load
		LDX		#$1C
loc_1283CA:
		TXA
		LSR
		LSR
		STA		word_3C+1
		JSR		sub_12841D
		DEX
		BNE		loc_1283CA
		LDA		_npc_anim_script_idx
		CMP		#$A
		BNE		locret_1283C2
		LDA		#$27
		STA		byte_7C71
		STA		byte_7CD1
		LDA		_playerMapX
		SEC
		SBC		#$2F
		TAX
		LDA		byte_128435,X
		STA		word_4
		LDA		#$18
		STA		word_4+1
		LDA		#7
		JSR		_bC_sA
		INC		word_4+1
		INC		word_4+1
		LDA		#7
		JSR		_bC_sA
		JSR		_ppu_set_dequeue_flag
		LDX		#$F
		JSR		_sleep_X_sync
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$1A5
		JSR		sub_174D4F
		LDA		_global_flags_array.byte1				; set _q_NorudPassageOpened
		ORA		#$20
		STA		_global_flags_array.byte1
		LDA		#$A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12841D:
		LDA		_ppu_scroll_shadow+1
		SEC
		SBC		word_3C+1
		STA		_ppu_scroll_shadow+1
		JSR		_wait_for_nmi_is_over_sync
		LDA		_ppu_scroll_shadow+1
		CLC
		ADC		word_3C+1
		STA		_ppu_scroll_shadow+1
		JMP		_wait_for_nmi_is_over_sync
byte_128435:
		.BYTE	$14,$12,$10, $E, $C

; =============== S U B	R O U T	I N E =======================================
_bC_s0_npc_anim_script_init:
		STA		_npc_anim_script_idx
		ASL
		TAX
		LDA		_anim_scr_lib-2,X
		STA		word_6C
		LDA		_anim_scr_lib-1,X
		STA		word_6C+1
		LDY		#0
		LDA		(word_6C),Y
		STA		_npc_anim_script_flags
		INY
		LDA		(word_6C),Y
		STA		_npc_anim_script_phase_count
		LDX		#0
loc_12845A:
		INY
		LDA		(word_6C),Y
		STA		_npc_anim_script_phase_slot_list,X
		INX
		CPX		_npc_anim_script_phase_count
		BNE		loc_12845A
		INY
		TYA
		CLC
		ADC		word_6C
		STA		byte_37
		LDA		word_6C+1
		ADC		#0
		STA		byte_38
		LDX		#0
		TXA
loc_128476:
		STA		byte_6E8,X
		INX
		CPX		#4
		BNE		loc_128476
		LDA		#$FF
loc_128480:
		STA		byte_6E8,X
		INX
		CPX		#8
		BNE		loc_128480
		LDA		_npc_anim_script_idx
		CMP		#$2B
		BNE		locret_12849B
		LDX		#$11
		LDA		_playerMapY
		CMP		#8
		BNE		loc_128498
		INX
loc_128498:
		STX		byte_6EF
locret_12849B:
		RTS

_anim_scr_lib:
		.WORD	_anim_scr01
		.WORD	_anim_scr02
		.WORD	_anim_scr04
		.WORD	_anim_scr04
		.WORD	_anim_scr05
		.WORD	_anim_scr06
		.WORD	_anim_scr07
		.WORD	_anim_scr08
		.WORD	_anim_scr09
		.WORD	_anim_scr0A
		.WORD	_anim_scr0B
		.WORD	_anim_scr0C
		.WORD	_anim_scr0D
		.WORD	_anim_scr0E
		.WORD	_anim_scr0F
		.WORD	_anim_scr10
		.WORD	_anim_scr11
		.WORD	_anim_scr12
		.WORD	_anim_scr13
		.WORD	_anim_scr14
		.WORD	_anim_scr15
		.WORD	_anim_scr16
		.WORD	_anim_scr17
		.WORD	_anim_scr18
		.WORD	_anim_scr19
		.WORD	_anim_scr1A
		.WORD	_anim_scr1B
		.WORD	_anim_scr1C
		.WORD	_anim_scr1D
		.WORD	_anim_scr1E
		.WORD	_anim_scr1F
		.WORD	_anim_scr20
		.WORD	_anim_scr21
		.WORD	_anim_scr22
		.WORD	_anim_scr23
		.WORD	_anim_scr24
		.WORD	_anim_scr25
		.WORD	_anim_scr26
		.WORD	_anim_scr27
		.WORD	_anim_scr28
		.WORD	_anim_scr29
		.WORD	_anim_scr2A
		.WORD	_anim_scr2B
		.WORD	_anim_scr2C
		.WORD	_anim_scr2D
		.WORD	_anim_scr2E
		.WORD	_anim_scr2F
		.WORD	_anim_scr30
		.WORD	_anim_scr30
		.WORD	_anim_scr32
		.WORD	_anim_scr33
		.WORD	_anim_scr34
		.WORD	_anim_scr35
		.WORD	_anim_scr36
		.WORD	_anim_scr37
		.WORD	_anim_scr38
		.WORD	_anim_scr39
		.WORD	_anim_scr3A
_anim_scr01:
		.BYTE	$58,  1
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	$C2,  2,$41,  5,$C1,  6,$4F,$46,$FF
_anim_scr02:
		.BYTE	$CC,  4
		.BYTE	<[_players_pos_list+4]
		.BYTE	<[_players_pos_list+8]
		.BYTE	<[_players_pos_list+$C]
		.BYTE	<[_npcs_pos_list]
		.BYTE	$C1,  1,$23,$FF
		.BYTE	1,$41,  1,$22,$FF
		.BYTE	2,$C2,  1,$FF
		.BYTE	$41,  1,$E1,$A2,$FF
_anim_scr04:
		.BYTE	$CA,  1
		.WORD	<[_npcs_pos_list]
		.BYTE	1,$44,$81,$FF
_anim_scr05:
		.BYTE	$5E,  1
		.WORD	<[_npcs_pos_list]
		.BYTE	$81,$41,$81,$41,$82,$41,$83,$FF
_anim_scr06:
		.BYTE	$48,  1
		.WORD	<[_npcs_pos_list]
		.BYTE	$FF
_anim_scr07:
		.BYTE	$CA,  1
		.WORD	<[_npcs_pos_list]
		.BYTE	$21,  1,$21,$82,$FF
_anim_scr08:
		.BYTE	$CA,  1
		.WORD	<[_npcs_pos_list]
		.BYTE	$21,  1,$21,$82,$FF
_anim_scr09:
		.BYTE	$CA,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	1,$21,  1,$21,$82,$FF
_anim_scr0A:
		.BYTE	$C8,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$41,$E1,$FF
_anim_scr0B:
		.BYTE	$D8,  1
		.BYTE	<[_npcs_pos_list+$1C]
		.BYTE	$41,$81,$C2,  4,$45,$86,$C8, $A,$FF
_anim_scr0C:
		.BYTE	$C2,  2
		.BYTE	<[_npcs_pos_list+$2C]
		.BYTE	<[_npcs_pos_list+$30]
		.BYTE	$81,$FF
		.BYTE	$81,$FF
_anim_scr0D:
		.BYTE	$E2,  2
		.BYTE	<[_npcs_pos_list+$2C]
		.BYTE	<[_npcs_pos_list+$30]
		.BYTE	$A1,$87,$E4,$C9,$24,$12,$FF
		.BYTE	$A1,$89,$CD,$14,$FF
_anim_scr0E:
		.BYTE	$E2,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	2,$62,$FF
_anim_scr0F:
		.BYTE	$E2,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	$89,$A1,$FF
_anim_scr10:
		.BYTE	$E2,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	$28,$FF
_anim_scr11:
		.BYTE	$E8,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	7,$FF
_anim_scr12:
		.BYTE	$CC,  2
		.BYTE	<[_npcs_pos_list+4]
		.WORD	<[_npcs_pos_list]
		.BYTE	$A1,$FF
		.BYTE	$41,$A1,$FF
_anim_scr13:
		.BYTE	$4C,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$81,$42,$21,$FF
_anim_scr14:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	$41,$A1,$FF
_anim_scr15:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	$C1,$A1,$FF
_anim_scr16:
		.BYTE	$CC,  2
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	<[_npcs_pos_list+$10]
		.BYTE	$41,$21,$FF
		.BYTE	$C1,$21,$FF
_anim_scr17:
		.BYTE	$CE,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	$81,$61,$FF
_anim_scr18:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	1,$A1,$FF
_anim_scr19:
		.BYTE	$5E,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$21,  1,$FF
_anim_scr1A:
		.BYTE	$4C,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	7,$41,$E1,$FF
_anim_scr1B:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+$34]
		.BYTE	$C6,  2,$FF
_anim_scr1C:
		.BYTE	$D8,  1
		.BYTE	<[_npcs_pos_list+$34]
		.BYTE	1,$41,$FF
_anim_scr1D:
		.BYTE	$DE,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$C2,$FF
_anim_scr1E:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$C3,$81,$FF
_anim_scr1F:
		.BYTE	$CC,  2
		.BYTE	<[_npcs_pos_list]
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	$41,$21,$FF
		.BYTE	$C1,$21,$FF
_anim_scr20:
		.BYTE	$CC,  2
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	<[_npcs_pos_list+$C]
		.BYTE	3,$21,$FF
		.BYTE	4,$FF
_anim_scr21:
		.BYTE	$FE,  2
		.BYTE	<[_npcs_pos_list]
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	5,$82,$FF
		.BYTE	5,$82,$FF
_anim_scr22:
		.BYTE	$CC,  2
		.BYTE	<[_npcs_pos_list]
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	$83,$C1,$61,$FF
		.BYTE	$83,$41,$E1,$FF
_anim_scr23:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	$43,$FF
_anim_scr24:
		.BYTE	$CE,  2
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	<[_npcs_pos_list+$14]
		.BYTE	$41,$FF
		.BYTE	$C1,$FF
_anim_scr25:
		.BYTE	$CE,  2
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	<[_npcs_pos_list+$14]
		.BYTE	1,$43,$81,$C1,  1,$41,$81,$E1,$FF
		.BYTE	$C2,$81,$C1,  1,$41,$81,$C1,$62,$FF
_anim_scr26:
		.BYTE	$CE,  2
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	<[_npcs_pos_list+$14]
		.BYTE	$A1,$FF
		.BYTE	$A1,$FF
_anim_scr27:
		.BYTE	$4C,  2
		.BYTE	<[_npcs_pos_list+$18]
		.BYTE	<[_npcs_pos_list+$14]
		.BYTE	 $B,$FF
		.BYTE	 $B,$FF
_anim_scr28:
		.BYTE	$58,  3
		.BYTE	<[_npcs_pos_list+$10]
		.BYTE	<[_npcs_pos_list+$1C]
		.BYTE	<[_npcs_pos_list+$20]
		.BYTE	2,$FF
		.BYTE	2,$FF
		.BYTE	2,$FF
_anim_scr29:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$C3,$83,$47,$FF
_anim_scr2A:
		.BYTE	$D8,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$41,$FF
_anim_scr2B:
		.BYTE	$EA,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$41,$61,$FF
_anim_scr2C:
		.BYTE	$EC,  1
		.BYTE	<[_npcs_pos_list+$10]
		.BYTE	$61,$C1,  6,$42,  3,$4A,  7,$E1,$FF
_anim_scr2D:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$82,$C1,$FF
_anim_scr2E:
		.BYTE	$D8,  2
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	<[_npcs_pos_list]
		.BYTE	$85,$41,$FF
		.BYTE	$84,$FF
_anim_scr2F:
		.BYTE	$58,  4
		.BYTE	<[_npcs_pos_list]
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	<[_npcs_pos_list+$C]
		.BYTE	$81,$47,$FF
		.BYTE	$62,$46,$FF
		.BYTE	$21,  1,$61,$45,$FF
		.BYTE	1,$61,$46,$FF
_anim_scr30:
		.BYTE	$CC,  4
		.BYTE	<[_npcs_pos_list+$28]
		.BYTE	<[_npcs_pos_list+$2C]
		.BYTE	<[_npcs_pos_list+$30]
		.BYTE	<[_npcs_pos_list+$34]
		.BYTE	$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
		.BYTE	$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
		.BYTE	$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
		.BYTE	$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
_anim_scr32:
		.BYTE	$EC,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$B3,$FF
_anim_scr33:
		.BYTE	$E4,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$A5,$FF
_anim_scr34:
		.BYTE	$CC,  2
		.BYTE	<[_npcs_pos_list+4]
		.WORD	<[_npcs_pos_list]
		.BYTE	$A1,$FF
		.BYTE	$41,$A1,$FF
_anim_scr35:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	$41,$A1,$FF
_anim_scr36:
		.BYTE	$CC,  1
		.BYTE	<[_npcs_pos_list+4]
		.BYTE	$C1,$A1,$FF
_anim_scr37:
		.BYTE	$CE,  1
		.BYTE	<[_npcs_pos_list+8]
		.BYTE	$81,$61,$FF
_anim_scr38:
		.BYTE	$CC,  1
		.WORD	<[_npcs_pos_list+8]
		.BYTE	$A1,$FF
_anim_scr39:
		.BYTE	$5E,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	$21,  1,$FF
_anim_scr3A:
		.BYTE	$4C,  1
		.BYTE	<[_npcs_pos_list]
		.BYTE	7,$41,$E1,$FF

; =============== S U B	R O U T	I N E =======================================
; A: tile value to set
; u16[4]: Target X/Y on-screen to set
;
; this should be called _poke_tile_screen but it's better for cah4e3 to rename these kinds of things
;
_bC_sA:
		PHA								; stash target tile
		JSR		_ppu_calc_nt_offset		; calculates NT position of taret X/Y to u16[$1f]
		PLA								; restore target tile
		JSR		_poke_tile_nt
		JMP		sub_12874C				; tailcall

; =============== S U B	R O U T	I N E =======================================
; A: the target tile to set
; u16[$1F]: Target NT address of operation
; 
_poke_tile_nt:
		ASL								; transform a tile number to a 'tileset' address (4 bytes per tile)
		ASL
		TAY
		LDX		_ppu_queue_pos
		JSR		_poke_halftile_NT		; write top 2 patterns of tile to ppu queue
		LDA		byte_1F					; load NT target address
		CLC
		ADC		#$1F					; get us to the next line, minus one--from the topright pattern of the tile to the bottomleft
		STA		byte_1F					; store back to NT target address

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; X: position in PPU queue?
; Y: offset in tileset
; u16[$1F]: Target NT address of operation
;
_poke_halftile_NT:
		JSR		_poke_quartertile_NT	; queue a tile
		INC		byte_1F					; move to next entry in NT
		INY								; move to next pattern in tileset
		JSR		_poke_quartertile_NT	; queue a tile
		INY								; move to next pattern in tileset
		RTS

; =============== S U B	R O U T	I N E =======================================
; X: position in PPU queue?
; Y: Offset in tileset
;
_poke_quartertile_NT:
		LDA		byte_20					; store
		STA		_ppu_queue_buf,X		; the current
		INX								; NT target address
		LDA		byte_1F					; into the
		STA		_ppu_queue_buf,X		; queue
		INX
		LDA		byte_7200,Y				; reference the tileset to get a pattern name
		STA		_ppu_queue_buf,X		; store into the queue
		INX
		INC		_ppu_queue_chunks_count	; queue bookkeeping
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12874C:
		TXA
		PHA
		DEY
		TYA
		LSR
		LSR
		TAY
		LDA		byte_7300,Y
		STA		byte_A
		JSR		sub_174690
		TAY
		PLA
		TAX
		LDA		byte_20
		STA		_ppu_queue_buf,X
		INX
		LDA		byte_1F
		STA		_ppu_queue_buf,X
		INX
		TYA
		STA		_ppu_queue_buf,X
		INX
		INC		_ppu_queue_chunks_count
		STX		_ppu_queue_pos
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s2:
		JSR		sub_128BF0
		LDA		_ppu_queue_chunks_count
		BEQ		loc_128784
		JSR		_ppu_set_dequeue_flag
		JSR		_wait_for_nmi_is_over_sync
loc_128784:
		JSR		sub_1287A7
		JSR		sub_128A2C
		JSR		sub_128A49
		JSR		sub_128BCC
		JSR		sub_128A7E
		JSR		sub_128A91
		JSR		sub_128ABE
		JSR		sub_128B2B
		JSR		sub_128B3D
		JSR		_wait_for_nmi_is_over_sync
		LDA		#0
		STA		byte_28
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1287A7:
		JSR		sub_128979
		JSR		sub_1289A4
loc_1287AD:
		JSR		sub_128972
		JSR		sub_128917
		JSR		sub_128895
		JSR		sub_1287BC
		JMP		loc_1287AD

; =============== S U B	R O U T	I N E =======================================
sub_1287BC:
		DEC		byte_45
		BNE		loc_1287EF
		INC		byte_46
		INC		word_40+1
		LDA		word_40+1
		CMP		#1
		BEQ		loc_1287D3
loc_1287CA:
		AND		#1
		BNE		loc_1287E2
		INC		byte_42
		JMP		loc_1287E2
loc_1287D3:
		LDA		byte_42
		CMP		#2
		BEQ		loc_1287DE
		LDA		word_40+1
		JMP		loc_1287CA
loc_1287DE:
		LDA		#1
		STA		byte_42
loc_1287E2:
		LDA		byte_42
		CMP		#$F
		BNE		loc_1287EB
		PLA
		PLA
		RTS
loc_1287EB:
		LDA		byte_42
		STA		byte_45
loc_1287EF:
		LDA		byte_46
		AND		#3
		BEQ		sub_128835
		CMP		#1
		BEQ		sub_128818
		CMP		#2
		BEQ		sub_128860

; =============== S U B	R O U T	I N E =======================================
sub_1287FD:
		DEC		byte_48
		LDA		word_3C+1
		AND		#$1F
		BNE		loc_128813
		LDA		word_3C+1
		CLC
		ADC		#$1E
		STA		word_3C+1
		LDA		word_3C
		EOR		#4
		STA		word_3C
		RTS
loc_128813:
		DEC		word_3C+1
		DEC		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128818:
		INC		byte_48
		LDA		word_3C+1
		AND		#$1F
		CMP		#$1E
		BNE		loc_128830
		LDA		word_3C+1
		SEC
		SBC		#$1E
		STA		word_3C+1
		LDA		word_3C
		EOR		#4
		STA		word_3C
		RTS
loc_128830:
		INC		word_3C+1
		INC		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128835:
		DEC		byte_49
		LDA		word_3C
		AND		#3
		BNE		loc_128852
		LDA		word_3C+1
		CMP		#$3F
		BCS		loc_128852
		LDA		word_3C+1
		CLC
		ADC		#$80
		STA		word_3C+1
		LDA		word_3C
		CLC
		ADC		#3
		STA		word_3C
		RTS
loc_128852:
		LDA		word_3C+1
		SEC
		SBC		#$40
		STA		word_3C+1
		LDA		word_3C
		SBC		#0
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128860:
		INC		byte_49
		LDA		word_3C
		AND		#3
		CMP		#3
		BNE		loc_12887F
		LDA		word_3C+1
		AND		#$80
		BEQ		loc_12887F
		LDA		word_3C+1
		SEC
		SBC		#$80
		STA		word_3C+1
		LDA		word_3C
		SEC
		SBC		#3
		STA		word_3C
		RTS
loc_12887F:
		LDA		word_3C+1
		CLC
		ADC		#$40
		STA		word_3C+1
		LDA		word_3C
		ADC		#0
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128895:
		BCS		locret_128894
		LDA		#$FF
		STA		_spr_force_shuffle_mode
		LDY		_ppu_queue_pos
		LDA		word_3C
		ORA		#$C0
		STA		_ppu_queue_buf,Y
		STA		_ppu_queue_buf+5,Y
		LDA		#2
		STA		_ppu_queue_buf+1,Y
		STA		_ppu_queue_buf+6,Y
		LDA		word_3C+1
		STA		_ppu_queue_buf+2,Y
		LDA		byte_7200,X
		STA		_ppu_queue_buf+3,Y
		INX
		INX
		LDA		byte_7200,X
		STA		_ppu_queue_buf+4,Y
		DEX
		LDA		word_3C+1
		CLC
		ADC		#1
		STA		_ppu_queue_buf+7,Y
		LDA		byte_7200,X
		STA		_ppu_queue_buf+8,Y
		INX
		INX
		LDA		byte_7200,X
		STA		_ppu_queue_buf+9,Y
		TXA
		LSR
		LSR
		TAX
		LDA		byte_7300,X
		STA		word_40
		JSR		sub_1289B8
		LDA		word_3E
		STA		_ppu_queue_buf+$A,Y
		LDA		word_3E+1
		STA		_ppu_queue_buf+$B,Y
		LDA		word_40
		STA		_ppu_queue_buf+$C,Y
		LDA		_ppu_queue_pos
		CLC
		ADC		#$D
		STA		_ppu_queue_pos
		INC		_ppu_queue_chunks_count
		INC		_ppu_queue_chunks_count
		INC		_ppu_queue_chunks_count
		INC		byte_44
		LDA		byte_44
		CMP		byte_47
		BEQ		loc_128914
		LDA		#0
		STA		_spr_force_shuffle_mode
locret_128894:
		RTS
loc_128914:
		LDA		#0
		STA		_spr_force_shuffle_mode
		JSR		_wait_for_nmi_is_over_sync
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128917:
		LDA		byte_9A
		CMP		#$C
		BCC		loc_128939
		CMP		#$19
		BCC		loc_12892F
		LDA		word_7C
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#7
		BEQ		loc_128965
loc_12892F:
		LDA		word_7C
		AND		#$E0
		CMP		byte_8C
		BEQ		loc_128967
		BNE		loc_128965
loc_128939:
		LDA		byte_43
		BNE		loc_128947
		LDA		word_7C
		AND		#$E0
		CMP		byte_8C
		BEQ		loc_128967
		BNE		loc_128965
loc_128947:
		LDA		byte_8C
		BNE		loc_128957
		LDA		word_7C
		AND		#$E0
		BEQ		loc_128967
		CMP		byte_43
		BEQ		loc_128965
		BNE		loc_128961
loc_128957:
		LDA		word_7C
		AND		#$E0
		CMP		byte_8C
		BEQ		loc_128967
		BNE		loc_128965
loc_128961:
		LDX		#$80
		CLC
		RTS
loc_128965:
		SEC
		RTS
loc_128967:
		LDA		word_7C
		AND		#$1F
		STA		word_7C
		ASL
		ASL
		TAX
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128972:
		LDX		byte_48
		LDY		byte_49
		JMP		_read_tile_XY

; =============== S U B	R O U T	I N E =======================================
sub_128979:
		LDA		_playerMapX
		STA		byte_48
		LDA		_playerMapY
		STA		byte_49
		LDA		#8
		STA		word_4A
		LDA		#$C
		STA		byte_47
		LDA		#7
		STA		word_4A+1
		LDA		#2
		STA		byte_46
		STA		byte_42
		STA		byte_45
		LDA		#0
		STA		word_40+1
		STA		byte_44
		LDA		byte_B
		STA		byte_43
		LDA		#$10
		STA		byte_28
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1289A4:
		LDA		#$10
		STA		word_4
		LDA		#$E
		STA		word_4+1
		JSR		_ppu_calc_nt_offset
		LDA		byte_20
		STA		word_3C
		LDA		byte_1F
		STA		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1289B8:
		LDA		word_3C
		STA		word_4
		LDA		word_3C+1
		STA		word_4+1
		ASL
		ROL		word_4
		LDA		word_4
		AND		#7
		ASL
		ASL
		ASL
		STA		word_3E+1
		LDA		word_4+1
		LSR
		LSR
		AND		#7
		ORA		word_3E+1
		ORA		#$C0
		STA		word_3E+1
		LDA		word_3C
		AND		#4
		ORA		#$23
		STA		word_3E
		LDA		word_3C+1
		AND		#$40
		STA		word_4
		LDA		word_3C+1
		AND		#2
		STA		word_4+1
		LDX		#3
		LDA		word_4
		BEQ		loc_1289FC
		ASL		word_40
		ASL		word_40
		ASL		word_40
		ASL		word_40
		LDX		#$30
loc_1289FC:
		LDA		word_4+1
		BEQ		loc_128A08
		ASL		word_40
		ASL		word_40
		TXA
		ASL
		ASL
		TAX
loc_128A08:
		TXA
		EOR		#$FF
		STA		word_4+1
		LDA		word_3E+1
		SEC
		SBC		#$C0
		STA		word_4
		LDA		word_3E
		AND		#4
		ASL
		ASL
		ASL
		ASL
		ORA		word_4
		TAX
		LDA		_attr_ram_buf,X
		AND		word_4+1
		ORA		word_40
		STA		_attr_ram_buf,X
		STA		word_40
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128A2C:
		LDA		#$F
		STA		byte_45
loc_128A30:
		JSR		sub_128972
		JSR		sub_128917
		JSR		sub_128895
		JSR		sub_128A3F
		JMP		loc_128A30

; =============== S U B	R O U T	I N E =======================================
sub_128A3F:
		DEC		byte_45
		BEQ		loc_128A46
		JMP		sub_128860
loc_128A46:
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128A49:
		JSR		sub_128818
		LDA		word_3C
		EOR		#4
		STA		word_3C
		LDA		byte_48
		SEC
		SBC		#$10
		STA		byte_48
		LDA		#$F
		STA		byte_45
loc_128A5D:
		JSR		sub_128972
		JSR		sub_128917
		JSR		sub_128895
		JSR		sub_128A6C
		JMP		loc_128A5D

; =============== S U B	R O U T	I N E =======================================
sub_128A6C:
		DEC		byte_45
		BEQ		loc_128A73
		JMP		sub_128835
loc_128A73:
		LDA		_ppu_queue_chunks_count
		BEQ		loc_128A7B
		JSR		_wait_for_nmi_is_over_sync
loc_128A7B:
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128A7E:
		LDA		#$F
		STA		byte_45
loc_128A82:
		JSR		sub_128972
		JSR		sub_128B03
		JSR		sub_128895
		JSR		sub_128A3F
		JMP		loc_128A82

; =============== S U B	R O U T	I N E =======================================
sub_128A91:
		JSR		sub_1287FD
		LDA		word_3C
		EOR		#4
		STA		word_3C
		LDA		byte_48
		CLC
		ADC		#$10
		STA		byte_48
		LDA		#$F
		STA		byte_45
loc_128AA5:
		JSR		sub_128972
		JSR		sub_128B03
		JSR		sub_128895
		JSR		sub_128AB4
		JMP		loc_128AA5

; =============== S U B	R O U T	I N E =======================================
sub_128AB4:
		DEC		byte_45
		BEQ		loc_128ABB
		JMP		sub_128835
loc_128ABB:
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128ABE:
		JSR		sub_128AF6
loc_128AC1:
		JSR		sub_128972
		JSR		sub_128B03
		JSR		sub_128895
		JSR		sub_128AD0
		JMP		loc_128AC1

; =============== S U B	R O U T	I N E =======================================
sub_128AD0:
		DEC		byte_45
		BNE		loc_128AF3
		DEC		byte_46
		INC		word_40+1
		LDA		word_40+1
		AND		#1
		BNE		loc_128AE0
		DEC		byte_42
loc_128AE0:
		LDA		byte_42
		BNE		loc_128AEF
		LDA		_ppu_queue_chunks_count
		BEQ		loc_128AEC
		JSR		_wait_for_nmi_is_over_sync
loc_128AEC:
		PLA
		PLA
		RTS
loc_128AEF:
		LDA		byte_42
		STA		byte_45
loc_128AF3:
		JMP		loc_1287EF

; =============== S U B	R O U T	I N E =======================================
sub_128AF6:
		LDA		#$E
		STA		byte_42
		LDA		#$F
		STA		byte_45
		LDA		#3
		STA		byte_46
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128B03:
		LDA		byte_9A
		CMP		#$19
		BCC		loc_128B17
		LDA		word_7C
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#7
		BEQ		loc_128B29
loc_128B17:
		LDA		word_7C
		AND		#$E0
		CMP		byte_8C
		BEQ		loc_128B29
		LDX		#$80
		LDA		byte_8C
		BEQ		loc_128B27
		LDX		#$84
loc_128B27:
		CLC
		RTS
loc_128B29:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128B2B:
		JSR		sub_128B7E
loc_128B2E:
		JSR		sub_128972
		JSR		sub_128B55
		JSR		sub_128895
		JSR		sub_128B43
		JMP		loc_128B2E

; =============== S U B	R O U T	I N E =======================================
sub_128B3D:
		JSR		sub_128BA4
		JMP		loc_128B2E

; =============== S U B	R O U T	I N E =======================================
sub_128B43:
		DEC		byte_45
		BEQ		loc_128B4A
		JMP		sub_128860
loc_128B4A:
		LDA		_ppu_queue_chunks_count
		BEQ		loc_128B52
		JSR		_wait_for_nmi_is_over_sync
loc_128B52:
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128B55:
		LDA		byte_9A
		CMP		#$19
		BCC		loc_128B69
		LDA		word_7C
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#7
		BEQ		loc_128B7B
loc_128B69:
		LDA		word_7C
		AND		#$E0
		CMP		byte_8C
		BEQ		loc_128B7B
		LDX		#$80
		LDA		byte_8C
		BEQ		loc_128B79
		LDX		#$84
loc_128B79:
		CLC
		RTS
loc_128B7B:
		JMP		loc_128967

; =============== S U B	R O U T	I N E =======================================
sub_128B7E:
		LDA		#0
		STA		word_4
		STA		word_4+1
		JSR		_ppu_calc_nt_offset
		LDA		byte_20
		STA		word_3C
		LDA		byte_1F
		STA		word_3C+1
		LDA		byte_48
		SEC
		SBC		#8
		STA		byte_48
		LDA		byte_49
		SEC
		SBC		#7
		STA		byte_49
		LDA		#$F
		STA		byte_45
		JMP		sub_1287FD

; =============== S U B	R O U T	I N E =======================================
sub_128BA4:
		LDA		#$1E
		STA		word_4
		LDA		#0
		STA		word_4+1
		JSR		_ppu_calc_nt_offset
		LDA		byte_20
		STA		word_3C
		LDA		byte_1F
		STA		word_3C+1
		LDA		byte_48
		CLC
		ADC		#$10
		STA		byte_48
		LDA		byte_49
		SEC
		SBC		#$E
		STA		byte_49
		LDA		#$F
		STA		byte_45
		JMP		sub_128818

; =============== S U B	R O U T	I N E =======================================
sub_128BCC:
		LDA		#$F8
		LDX		#0
loc_128BD0:
		STA		_spr_ram,X
		INX
		BNE		loc_128BD0
		STX		byte_175
		LDA		#$F0
		STA		byte_174
		JSR		_bC_s5
		FARX	_bD_sD
		LDA		#0
		STA		byte_28
		JSR		_wait_for_nmi_is_over_sync
		LDA		#$10
		STA		byte_28
locret_128BEF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128BF0:
		LDA		_mapNumber
		CMP		#$CC
		BNE		locret_128BEF
		LDX		#$19
loc_128BF8:
		LDA		_playerMapX
		AND		#$FE
		CMP		byte_128C2B,X
		BNE		loc_128C0A
		LDA		_playerMapY
		AND		#$FE
		CMP		byte_128C2B-1,X
		BEQ		loc_128C0F
loc_128C0A:
		DEX
		DEX
		BPL		loc_128BF8
		RTS
loc_128C0F:
		LDA		_playerMapY
		AND		#1
		ORA		byte_128C45-1,X
		STA		_playerMapY
		TAY
		LDA		_playerMapX
		AND		#1
		ORA		byte_128C45,X
		STA		_playerMapX
		TAX
		JSR		_map_ReadTileCheckedXY
		AND		#$E0
		STA		byte_8C
		RTS
byte_128C2B:
		.BYTE	  0,  8,  8,  0,  8,$10, $E,  8,$10,  8,$14,  2,$14, $E,$20,  0
		.BYTE	$26,  8,$28,  8,$2C,  2,$2C, $E,$32,  8
byte_128C45:
		.BYTE	$18,  8,$14, $C,$14,  4,$26,  8,$28,  8,  8, $E,  8,  2,$2C, $C
		.BYTE	 $E,  8,$10,  8,$20, $E,$20,  2,  2,  8

; =============== S U B	R O U T	I N E =======================================
_bC_s5:
		LDX		_playerMapX
		LDY		_playerMapY
		JMP		sub_128CC1

; =============== S U B	R O U T	I N E =======================================
_bC_s6:
		JSR		sub_128CAB
		LDX		byte_2D
		LDY		byte_2E
		JMP		sub_128C77

; =============== S U B	R O U T	I N E =======================================
_bC_s32:
		JSR		sub_128CAB
		LDX		byte_9E
		LDY		byte_9F

; =============== S U B	R O U T	I N E =======================================
sub_128C77:
		STX		_playerWorldX
		STY		_playerWorldY
		JSR		sub_128CC1
		LDA		word_3C+1
		STA		_playerWorldY
		STA		_players_pos_list+1
		LDA		word_3C
		STA		_playerWorldX
		STA		_players_pos_list
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s31:
		LDA		_playerMapX
		PHA
		LDA		_playerMapY
		PHA
		LDX		byte_2D
		STX		_playerMapX
		LDY		byte_2E
		STY		_playerMapY
		JSR		sub_128CC1
		PLA
		STA		_playerMapY
		STA		_players_pos_list+1
		PLA
		STA		_playerMapX
		STA		_players_pos_list
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128CAB:
		LDA		_playerWorldX
		STA		word_3C
		LDA		_playerWorldY
		STA		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s3:
		LDX		_playerWorldX
		LDY		_playerWorldY
		JSR		sub_176CA4
		STA		byte_92
		LDX		_playerWorldX
		LDY		_playerWorldY

; =============== S U B	R O U T	I N E =======================================
sub_128CC1:
		STX		_players_pos_list
		STY		_players_pos_list+1
		LDA		_players_status+2
		BPL		loc_128CD5
		STX		_players_pos_list+4
		STY		_players_pos_list+5
		JMP		loc_128CE1
loc_128CD5:
		TXA
		EOR		#$80
		STA		_players_pos_list+4
		TYA
		EOR		#$80
		STA		_players_pos_list+5
loc_128CE1:
		LDA		_players_status+4
		BPL		loc_128CEF
		STX		_players_pos_list+8
		STY		_players_pos_list+9
		JMP		loc_128CFB
loc_128CEF:
		TXA
		EOR		#$80
		STA		_players_pos_list+8
		TYA
		EOR		#$80
		STA		_players_pos_list+9
loc_128CFB:
		LDA		_players_status+6
		BPL		loc_128D09
		STX		_players_pos_list+$C
		STY		_players_pos_list+$D
		JMP		loc_128D15
loc_128D09:
		TXA
		EOR		#$80
		STA		_players_pos_list+$C
		TYA
		EOR		#$80
		STA		_players_pos_list+$D
loc_128D15:
		LDA		byte_92
		STA		byte_93
		STA		byte_94
		STA		byte_95
		STA		byte_96
		LDA		_playerFacingDir
		STA		_players_pos_list+3
		STA		byte_6BC
		LDA		#4
		ORA		_playerFacingDir
		STA		_players_pos_list+7
		LDA		#8
		ORA		_playerFacingDir
		STA		_players_pos_list+$B
		LDA		#$C
		ORA		_playerFacingDir
		STA		_players_pos_list+$F
		LDA		#0
		STA		byte_97

; =============== S U B	R O U T	I N E =======================================
sub_128D44:
		LDA		#0
		STA		_players_pos_list+2
		LDA		#1
		STA		_players_pos_list+6
		LDA		#2
		STA		_players_pos_list+$A
		LDA		#3
		STA		_players_pos_list+$E

; =============== S U B	R O U T	I N E =======================================
_bC_s35:
		LDA		byte_AC
		AND		#$1F
		BNE		locret_128D96
		BIT		_global_flags_array.byte10
		BVS		locret_128D96
		LDA		_player_vehicle
		BNE		locret_128D96
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDA		#<[_players_pos_list]
		STA		word_6C
		FARX	_bD_s19
		LDA		_players_status+2
		BPL		loc_128D7E
		LDA		#<[_players_pos_list+4]
		STA		word_6C
		FARX	_bD_s19
loc_128D7E:
		LDA		_players_status+4
		BPL		loc_128D8A
		LDA		#<[_players_pos_list+8]
		STA		word_6C
		FARX	_bD_s19
loc_128D8A:
		LDA		_players_status+6
		BPL		locret_128D96
		LDA		#<[_players_pos_list+$C]
		STA		word_6C
		FARX	_bD_s19
locret_128D96:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s4:
		LDA		_player_vehicle
		BNE		locret_128D96
		LDA		_playerFacingDir
		BEQ		loc_128DE6
		CMP		#1
		BEQ		loc_128DCF
		CMP		#2
		BEQ		loc_128DFD
		JSR		sub_128E92
		LDX		_playerMapX
		STX		_players_pos_list
		INX
		STX		_players_pos_list+4
		INX
		STX		_players_pos_list+8
		INX
		STX		_players_pos_list+$C
		JMP		loc_128E11
loc_128DCF:
		JSR		sub_128E92
		LDX		_playerMapX
		STX		_players_pos_list
		DEX
		STX		_players_pos_list+4
		DEX
		STX		_players_pos_list+8
		DEX
		STX		_players_pos_list+$C
		JMP		loc_128E11
loc_128DE6:
		JSR		sub_128E83
		LDY		_playerMapY
		STY		_players_pos_list+1
		INY
		STY		_players_pos_list+5
		INY
		STY		_players_pos_list+9
		INY
		STY		_players_pos_list+$D
		JMP		loc_128E11
loc_128DFD:
		JSR		sub_128E83
		LDY		_playerMapY
		STY		_players_pos_list+1
		DEY
		STY		_players_pos_list+5
		DEY
		STY		_players_pos_list+9
		DEY
		STY		_players_pos_list+$D
loc_128E11:
		LDA		#4
		ORA		_playerFacingDir
		STA		_players_pos_list+7
		LDA		#8
		ORA		_playerFacingDir
		STA		_players_pos_list+$B
		LDA		#$C
		ORA		_playerFacingDir
		STA		_players_pos_list+$F
		LDA		#$F0
		STA		byte_97
		LDX		_players_pos_list
		LDY		_players_pos_list+1
		JSR		_map_ReadTileCheckedXY
		STA		byte_93
		LDX		_players_pos_list+4
		LDY		_players_pos_list+5
		JSR		_map_ReadTileCheckedXY
		STA		byte_94
		LDX		_players_pos_list+8
		LDY		_players_pos_list+9
		JSR		_map_ReadTileCheckedXY
		STA		byte_95
		LDX		_players_pos_list+$C
		LDY		_players_pos_list+$D
		JSR		_map_ReadTileCheckedXY
		STA		byte_96
		LDA		_players_status+2
		BMI		loc_128E66
		LDA		#$80
		STA		_players_pos_list+4
		STA		_players_pos_list+5
loc_128E66:
		LDA		_players_status+4
		BMI		loc_128E73
		LDA		#$80
		STA		_players_pos_list+8
		STA		_players_pos_list+9
loc_128E73:
		LDA		_players_status+6
		BMI		loc_128E80
		LDA		#$80
		STA		_players_pos_list+$C
		STA		_players_pos_list+$D
loc_128E80:
		JMP		sub_128D44

; =============== S U B	R O U T	I N E =======================================
sub_128E83:
		LDX		_playerMapX
		STX		_players_pos_list
		STX		_players_pos_list+4
		STX		_players_pos_list+8
		STX		_players_pos_list+$C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128E92:
		LDY		_playerMapY
		STY		_players_pos_list+1
		STY		_players_pos_list+5
		STY		_players_pos_list+9
		STY		_players_pos_list+$D
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s34:
		LDA		_playerMapY
		CMP		#$C
		BNE		locret_128F02
		BIT		_global_flags_array.byte10
		BVC		locret_128F02
		SYSX	_apu_load,BGM_QUAKE_21
		JSR		sub_128F03
		JSR		sub_128F24
		JSR		sub_128F4F
		FARX	_bE_s22
		JSR		_pal_fade_out
		LDA		#$C5
		STA		_mapNumber
		LDA		#7
		STA		_playerMapX
		LDA		#5
		STA		_playerMapY
		LDA		#$2F
		STA		_playerWorldX
		LDA		#$15
		STA		_playerWorldY
		LDA		#0
		STA		_playerFacingDir
		JSR		loc_1752EB
		JSR		_bC_s1A
		JSR		_ppu_on_and_fade_in
		LDA		#$80
		STA		_global_flags_array.byte10
		LDA		#$A
		STA		byte_92
		LDX		#$B
loc_128EEB:
		LDA		#$F
		STA		_players_returnable_locations,X
		DEX
		LDA		#$80
		STA		_players_returnable_locations,X
		DEX
		LDA		#0
		STA		_players_returnable_locations,X
		DEX
		BPL		loc_128EEB
		JSR		sub_12A743
locret_128F02:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128F03:
		LDX		#$28
		STX		word_3C
		JSR		sub_128F10
		JSR		sub_128F10
		JSR		sub_128F10

; =============== S U B	R O U T	I N E =======================================
sub_128F10:
		JSR		sub_128F1F
		JSR		sub_128F1F
		JSR		sub_128F1F
		JSR		sub_128F1F
		JSR		sub_128F1F

; =============== S U B	R O U T	I N E =======================================
sub_128F1F:
		LDX		word_3C
		JMP		sub_12A92F

; =============== S U B	R O U T	I N E =======================================
sub_128F24:
		LDA		#$1E
		STA		word_3C
loc_128F28:
		JSR		sub_128F30
		DEC		word_3C
		BNE		loc_128F28
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128F30:
		JSR		_rand
		AND		#$F
		ASL
		STA		word_4
		JSR		_rand
		AND		#$F
		TAX
		DEX
		TAX
		ASL
		STA		word_4+1
		JSR		sub_129074
		SYSX	_apu_load,SFX_BLAST_95
locret_128F49:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128F4A:
		LDX		#$28
		JMP		sub_12ABB4

; =============== S U B	R O U T	I N E =======================================
sub_128F4F:
		LDA		#$A
		STA		word_3C
		STA		word_3E
		LDA		#$1C
		STA		word_3C+1
		STA		word_3E+1
		LDA		#0
		STA		byte_7200
		STA		byte_7201
		STA		byte_7202
		STA		byte_7203
		STA		word_40
loc_128F6B:
		JSR		sub_128F82
		JSR		_ppu_set_dequeue_flag
		JSR		_wait_for_nmi_is_over_sync
		INC		word_40
		LDY		word_40
		CPY		#$15
		BEQ		locret_128F49
		JSR		sub_128F97
		JMP		loc_128F6B

; =============== S U B	R O U T	I N E =======================================
sub_128F82:
		LDX		#0
		JSR		sub_128F89
		LDX		#2

; =============== S U B	R O U T	I N E =======================================
sub_128F89:
		LDA		word_3C,X
		STA		word_4
		LDA		word_3C+1,X
		STA		word_4+1
		LDA		#0
		JSR		_bC_sA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128F97:
		LDX		#0
		LDA		byte_128FB9,Y
		JSR		sub_128FA4
		LDX		#2
		LDA		byte_128FCE,Y

; =============== S U B	R O U T	I N E =======================================
sub_128FA4:
		BEQ		loc_128FAF
		CMP		#1
		BEQ		loc_128FB4
		DEC		word_3C,X
		DEC		word_3C,X
		RTS
loc_128FAF:
		DEC		word_3C+1,X
		DEC		word_3C+1,X
		RTS
loc_128FB4:
		INC		word_3C,X
		INC		word_3C,X
		RTS
byte_128FB9:
		.BYTE	  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  1,  1,  0,  0,  0,  1
		.BYTE	  0,  0,  0,  1,  0
byte_128FCE:
		.BYTE	  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0,  0,  3,  0,  0,  0
		.BYTE	  3,  0,  0,  3,  3

; =============== S U B	R O U T	I N E =======================================
_bC_s1B:
		LDX		#0
		LDA		#$D
loc_128FE7:
		STA		_area_tilemap,X
		INX
		CPX		#$60
		BNE		loc_128FE7
		LDA		#$2E
		STA		_area_tilemap
		LDX		#1
		STX		byte_7474
		INX
		STX		byte_7475
		LDX		#5
		STX		byte_748C
		INX
		STX		byte_748D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129007:
		LDA		_global_flags_array.byte10
		ORA		#$20
		STA		_global_flags_array.byte10
		JSR		_bC_s1B
		FARX	_b5_sA
		JSR		sub_128F03
		LDA		_playerMapY
		AND		#1
		EOR		#1
		ASL
		STA		word_3C+1
		LDA		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		STA		_world_map_steps_count
		LDA		#0
		STA		word_4
loc_12902A:
		LDA		word_3C+1
		STA		word_4+1
		LDA		#0
		STA		word_3E
loc_129032:
		JSR		sub_129074
		INC		word_4+1
		INC		word_3E
		LDA		word_3E
		CMP		#4
		BNE		loc_129032
		INC		word_4
		INC		word_4
		LDA		word_4
		CMP		#$1E
		BNE		loc_12902A
		LDA		#1
		JSR		sub_129060
		INC		word_4+1
		INC		word_4+1
		LDA		#5
		JSR		sub_129060
loc_129057:
		JSR		_ppu_set_dequeue_flag
		SYSX	_apu_load,SFX_BLAST_95
		JMP		sub_128F4A

; =============== S U B	R O U T	I N E =======================================
sub_129060:
		PHA
		LDX		#$16
		STX		word_4
		JSR		_bC_sA
		INC		word_4
		INC		word_4
		PLA
		TAX
		INX
		TXA
		JSR		_bC_sA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129074:
		JSR		sub_129087
		INC		word_4
		INC		word_4+1
		JSR		sub_129087
		DEC		word_4+1
		JSR		sub_129087
		INC		word_4+1
		DEC		word_4

; =============== S U B	R O U T	I N E =======================================
sub_129087:
		LDA		#0
		JSR		_print_char
		JMP		loc_129057

; =============== S U B	R O U T	I N E =======================================
sub_12908F:
		LDA		_global_flags_array.byte13
		AND		#4
		BEQ		locret_1290E0
		LDA		_playerMapX
		CMP		#$10
		BCC		locret_1290E0
		CMP		#$14
		BCS		locret_1290E0
		LDA		_playerMapY
		CMP		#$D
		BCC		locret_1290E0
		CMP		#$11
		BCS		locret_1290E0
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$193
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#2
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_174CBD
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$194
loc_1290C1:
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1290CC
		MSGX	_msg_m00,$191
		JMP		loc_1290C1
loc_1290CC:
		MSGX	_msg_m00,$192
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$80
		STA		_global_flags_array.byte13
		LDA		#$12
		STA		byte_7579
		LDA		#$2F
		BNE		loc_129117
locret_1290E0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1290E1:
		LDY		_playerMapY
		LDA		_global_flags_array.byte13
		BMI		locret_1290E0
		CMP		#1
		BCS		loc_1290FF
		CPY		#4
		BNE		locret_1290E0
		LDA		#1
		STA		_global_flags_array.byte13
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$18E
		LDA		#$2D
		BNE		loc_129117
loc_1290FF:
		CMP		#3
		BCS		locret_1290E0
		CPY		#6
		BNE		locret_1290E0
		LDA		#3
		STA		_global_flags_array.byte13
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$18F
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$2E
loc_129117:
		JSR		_bC_s0_npc_anim_script_init

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_warp_bE_sB_arg0:
		LDA		#0
		FARX	_bE_sB
locret_12911F:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129120:
		LDA		_global_flags_array.byte13
		BMI		locret_12911F
		AND		#4
		BNE		locret_12911F
		LDA		_playerMapY
		CMP		#8
		BNE		locret_12911F
		LDA		#7
		STA		_global_flags_array.byte13
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$190
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		JSR		_warp_bE_sB_arg0
		LDA		#$1E
		STA		byte_92
		LDX		#$10
		STX		word_4
		LDY		#$E
		STY		word_4+1
		JSR		_bC_sA
		LDA		#0
		JSR		_chest_mark_as_opened
		LDA		#1
		JSR		_chest_mark_as_opened
		JMP		_ppu_force_dequeue

; =============== S U B	R O U T	I N E =======================================
_chest_mark_as_opened:
		JSR		_bC_s1F_get_chest_flag_and_idx
		JMP		_chest_open_flag_set

; =============== S U B	R O U T	I N E =======================================
sub_129162:
		LDA		_global_flags_array.byte2
		BMI		loc_129199
		ORA		_global_flags_array.byte4
		ORA		_global_flags_array.byte15
		BMI		locret_129198
		LDA		_playerMapX
		CMP		#$21
		BNE		locret_129198
		LDA		_playerMapY
		CMP		#$C
		BNE		locret_129198
		LDA		#1
		FARX	_b0_s1_battle_typeA_launch
		LDA		_global_flags_array.byte2
		ORA		#$80
		STA		_global_flags_array.byte2
		LDA		#$AC
		STA		byte_7633
		JSR		sub_174CBD
		JSR		_bC_s12_sleep_X_sync_50
		LDA		#$2A
		JMP		_bC_s0_npc_anim_script_init
locret_129198:
		RTS
loc_129199:
		LDA		_playerMapX
		CMP		#$23
		BNE		locret_129198
		LDA		_playerMapY
		CMP		#$C
		BNE		locret_129198
		LDA		_global_flags_array.byte15
		ORA		#$80
		STA		_global_flags_array.byte15
		FARX	_bE_s22
		JSR		_pal_fade_out
		LDA		#$9D
		STA		_playerWorldX
		LDA		#$93
		STA		_playerWorldY
		LDA		#$15
		STA		_playerMapX
		LDA		#8
		STA		_playerMapY
		LDA		#$17
		STA		_mapNumber
		LDA		#2
		STA		_playerFacingDir
		LDA		#$12
		STA		byte_92
		LDA		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		STA		_world_map_steps_count
		JSR		loc_1752EB
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$198
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
; "DAY-NIGHT" spell usage, change day to night or night to day accordingly
;
_bC_s10_spell_daynight:
		JSR		_is_location_warpable			; determine whether current location can be warped from
		BCS		.loc_return_false				; return false if 'unwarpable' was true
		LDA		_global_flags_array.byte2
		BPL		loc_1291F6						; branch if _f_WarpBlock is clear
		LDA		_mapNumber						; assaram is what employs the _f_WarpBlock bit, so only acknowledge it if in Assaram
		CMP		#$C
		BEQ		.loc_return_false				; return false if we're in Assaram.
		CMP		#$7A
		BEQ		.loc_return_false				; return false if we're in Assaram basement
loc_1291F6:
		JSR		_bC_s20_warp_bE_sB_arg0
		LDA		_world_map_steps_count
		STA		byte_C5							; storing the current time for a day/night palette tweener
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT		; when jumping the daytime is set according closest current
		LDA		#DAYNIGHT_CYCLE_MIDNIGHT		; time of day, if you close to night, then land at a midnight
		BCC		loc_129206						; in other case return at a daylight
		LDA		#DAYNIGHT_CYCLE_NOON
loc_129206:
		STA		_world_map_steps_count			; store noon or midnight back in the clock. heh, kind of weird and befuddling but largely pointless
		JSR		_day_night_spell_palette_effect	; run palette effect
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; "LAMP OF DARKNESS" item use, may be used only at a daytime, if you try
; to use it at night, nothing won't happer by obvious reason
;
_bC_s11_item_lamp_of_darkness_use:
		JSR		_is_location_warpable
		BCS		.loc_return_false
		LDA		_world_map_steps_count
		STA		byte_C5
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_129232
		LDA		#DAYNIGHT_CYCLE_MIDNIGHT
		STA		_world_map_steps_count
		MSGX	_msg_m00,$104	; "A darkness oozed out from..."
		JSR		_sleep_30
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		JSR		_bC_s20_warp_bE_sB_arg0
		JSR		_day_night_spell_palette_effect	; probably re-adjust the palette on account of having changed t ime
		SEC
		RTS
loc_129232:
		MSGX	_msg_m00,$102	; "But nothing happens now"
		FARX	_bE_s33
		SEC
		RTS
.loc_return_false:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_day_night_spell_palette_effect:
		LDA		#0
		STA		byte_AA
		LDA		byte_9A
		BNE		loc_1292B0
		LDX		#6
loc_129246:
		LDA		#_b6_d9_world_map_step_daytime_list_fidx
		JSR		_sys0_byte_read_x
		CMP		byte_C5
		BCC		loc_129254
		BEQ		loc_129254
		DEX
		BNE		loc_129246
loc_129254:
		STX		byte_C5
		LDA		#_b6_dA_world_pal_ofs_list_fidx
		JSR		_sys0_byte_read_x
		TAY
		CPX		#4
		BCS		loc_129264
		LDA		#$2A
		BNE		loc_129266
loc_129264:
		LDA		#$2D
loc_129266:
		SBC		byte_C5
		STA		byte_C5
loc_12926A:
		LDX		#0
loc_12926C:
		TXA
		PHA
		TYA
		PHA
		LDA		#_b6_dB_world_map_palette_lib_fidx
		JSR		_sys0_byte_read_y
		PHA
		LDA		byte_1292A4,X
		TAY
		PLA
		STA		_ram_pal_buf,Y
		PLA
		TAY
		PLA
		TAX
		INY
		INX
		CPX		#$C
		BNE		loc_12926C
		TYA
		PHA
		JSR		_pal_set_no_fade
		LDX		#3
		JSR		_sleep_X_sync
		PLA
		TAY
		CPY		#$54
		BNE		loc_12929A
		LDY		#0
loc_12929A:
		DEC		byte_C5
		LDA		byte_C5
		BNE		loc_12926A
		JSR		_bC_s20_warp_bE_sB_arg0
		RTS

byte_1292A4:
		.BYTE	  1,  4,  7, $A,  2,  5,  8, $B,  3,  6,  9, $C

loc_1292B0:
		JSR		sub_129323
		LDY		#0
loc_1292B5:
		JSR		sub_1292F5
		CPY		#$C
		BNE		loc_1292B5
		JSR		_bC_s20_warp_bE_sB_arg0
		FARX	_bB_s4_apu_set_flag0
		JSR		_pal_fade_out
		JSR		_ppu_disable
		JSR		sub_176C41
		JSR		sub_129323
		JSR		sub_12932E
		JSR		_nmi_allow_ppu_dequeue
		LDA		#$FF
		STA		byte_6F0
		JSR		_map_music_select_and_load
		JSR		_pal_fade_in
		JSR		_pal_set_no_fade
		JSR		_wait_for_nmi_is_over_sync
		JSR		_ppu_enable
		LDY		#$C
loc_1292ED:
		JSR		sub_1292F5
		CPY		#$1B
		BNE		loc_1292ED
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1292F5:
		LDX		#3
loc_1292F7:
		LDA		byte_129308,Y
		STA		byte_C1,X
		INY
		DEX
		BNE		loc_1292F7
		TYA
		PHA
		JSR		sub_129339
		PLA
		TAY
		RTS
byte_129308:
		.BYTE	  1,  8,  1,  5,  8,  0,  5,  8,  0,  5,  4,  1,  5,  4,  2,  1
		.BYTE	  4,  0,  1,  8,  0,  5,  4,  8,  1,  8,  4

; =============== S U B	R O U T	I N E =======================================
sub_129323:
		LDX		#$C
loc_129325:
		LDA		_ram_pal_buf,X
		STA		_tmp_ptrB4+1,X
		DEX
		BNE		loc_129325
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12932E:
		LDA		#$F
		LDX		#$C
loc_129332:
		STA		_ram_pal_buf,X
		DEX
		BNE		loc_129332
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129339:
		LDY		byte_C4
		LDX		#1
		JSR		sub_12937E
		DEY
		BPL		loc_129345
		LDY		#8
loc_129345:
		INX
		JSR		sub_12937E
		JSR		sub_12936E
		JSR		sub_12936E
		JSR		sub_12936E
		DEY
		BPL		loc_129357
		LDY		#8
loc_129357:
		INX
		JSR		sub_12937E
		TYA
		PHA
		JSR		_pal_set_no_fade
		LDX		#3
		JSR		_sleep_X_sync
		PLA
		TAY
		INC		byte_C4
		CPY		byte_C3
		BNE		sub_129339
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12936E:
		INX
		INX
		JSR		sub_12937E
		DEY
		BPL		loc_129378
		LDY		#8
loc_129378:
		DEX
		JSR		sub_12937E
		INX
		INX

; =============== S U B	R O U T	I N E =======================================
sub_12937E:
		TYA
		BEQ		locret_1293C9
		LDA		byte_C2
		BEQ		loc_129394
		LSR
		BCS		loc_12939A
		LSR
		BCS		loc_1293A4
		LSR
		BCS		loc_1293AE
		JSR		loc_12939A
		JMP		loc_1293AE
loc_129394:
		JSR		loc_12939A
		JMP		loc_1293A4
loc_12939A:
		LDA		_ram_pal_buf,X
		CPY		#4
		BCC		loc_1293B8
		BEQ		loc_1293BE
		RTS
loc_1293A4:
		LDA		_ram_pal_buf,X
		CPY		#5
		BEQ		loc_1293C2
		BCS		loc_1293CA
		RTS
loc_1293AE:
		LDA		_ram_pal_buf,X
		CPY		#5
		BEQ		loc_1293C2
		BCS		loc_1293D2
		RTS
loc_1293B8:
		SEC
		SBC		#$10
		BCS		loc_1293C6
		RTS
loc_1293BE:
		LDA		#$F
		BNE		loc_1293C6
loc_1293C2:
		LDA		_tmp_ptrB4+1,X
		AND		#$F
loc_1293C6:
		STA		_ram_pal_buf,X
locret_1293C9:
		RTS
loc_1293CA:
		CMP		#$30
		BCS		locret_1293C9
		ADC		#$10
		BNE		loc_1293C6
loc_1293D2:
		CMP		_tmp_ptrB4+1,X
		BCS		locret_1293C9
		ADC		#$10
		BNE		loc_1293C6

; =============== S U B	R O U T	I N E =======================================
; Classifies the current location according to whether you can warp out of it (Wing of Wyvern, Return)
; Also affects whether the Lamp of Darkness works, oddly. Doesn't that eject you from the location? Yeah....
;
_is_location_warpable:
		LDA		_location_type
		AND		#2
		BNE		.loc_return_true0			; returns true if we're in alefgard
		LDA		_player_vehicle
		CMP		#1
		BNE		loc_1293ED					; branch if we're not in the ship
		BIT		_global_flags_array.byte3	; test a quest flag
		BVC		loc_1293ED					; branch if quest flag isn't set
		SEC
		RTS									; return true
loc_1293ED:
		LDA		_mapNumber
		CMP		#$9C								
		BEQ		.loc_return_true0			; return true if phantom ship 1F
		CMP		#$9D								
		BEQ		.loc_return_true0			; return true if phantom ship B1
		CMP		#$60								
		BEQ		.loc_return_true0			; return true if Samanao town prison basement
		CMP		#$72
		BNE		_location_type_test			; classify further unless we're New Town Ver.1 (why not the others?)
		LDA		_global_flags_array.byte2
		BMI		.loc_return_true0			; return true if we're erdrick (this is puzzling logic)

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; seems to classify areas as CF=1 if the area's a cave-like area
; uses annoying logic comparable in size to a plain 256 byte table
; rejects towers, pyramids
;
_location_type_test:
		LDA		byte_9A						; typically 0 for non-area map
		BEQ		.loc_return_false0			; so return false
		LDA		_mapNumber
		CMP		#8
		BEQ		.loc_return_true0			; return true for Castle of Zoma 1F
		CMP		#$2D
		BCC		.loc_return_false0			; BCC->JB return false for everything less than #$2D (Cave on Promontory B1, first dungeon)
		CMP		#$3C
		BCC		.loc_return_true0			; return true for everything less than #$3C (Pyramid 1F)
		CMP		#$58
		BEQ		.loc_return_true0			; return true for Baramos's Lair
		CMP		#$5B
		BEQ		.loc_return_true0			; return true for Glitched/Dummied!
		CMP		#$85
		BEQ		.loc_return_true0			; return true for Tedanki crypt basement
		CMP		#$9F
		BCC		.loc_return_false0			; BCC->JB return false for everything less than #$9F (Tower of Najima B1)
		CMP		#$A6
		BEQ		.loc_return_false0			; return false for whichever spot it is you jump into alefgard from
		CMP		#$C6
		BCC		.loc_return_true0			; BCC->JB return true for everything less than #$C6 (dummied, but that region is caves)
		CMP		#$CF
		BCC		.loc_return_false0			; BCC->JB return false for everything less than #$CF (Pyramid Golden claw room)
		CMP		#$D6
		BCS		.loc_return_false0			; BCS->JAE return false for everything >= #$D6 (Tower of Najima 2F)
; otherwise return true
.loc_return_true0:
		SEC
		RTS
.loc_return_false0:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_sF_item_final_key_use:
		LDA		#3
		BNE		_item_key_use

; =============== S U B	R O U T	I N E =======================================
_bC_sE_item_magic_key_use:
		LDA		#1
		BNE		_item_key_use

; =============== S U B	R O U T	I N E =======================================
_bC_sD_item_thief_key_use:
		LDA		#0

;; FALLTHROUGH;;

; =============== S U B	R O U T	I N E =======================================
_item_key_use:
		STA		_tmp_varB6
		LDA		#$10
		STA		byte_BA
		STA		word_4
		LDA		#$E
		STA		byte_BB
		STA		word_4+1
		LDX		_playerMapX
		STX		word_B7+1
		LDY		_playerMapY
		STY		byte_B9
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		STA		word_B7
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		BEQ		loc_12946E
		JSR		sub_1294A8
loc_12946E:
		JSR		sub_129581
		LDX		word_B7+1
		LDY		byte_B9
		JSR		_map_ReadTileCheckedXY
		TAX
		AND		#$E0
		STA		byte_BC
		TXA
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#$D
		BNE		loc_129490
		LSR		_tmp_varB6
		BNE		sub_1294D0
		BEQ		loc_1294A0
loc_129490:
		CMP		#$C
		BNE		loc_12949A
		LSR		_tmp_varB6
		BCS		sub_1294D0
		BCC		loc_1294A0
loc_12949A:
		CMP		#$B
		BEQ		sub_1294D0
		CLC
		RTS
loc_1294A0:
		MSGX	_msg_m00,$100	; "The key doesn't fit"
		FARX	_bE_s33
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1294A8:
		JSR		sub_1295B8
		BCC		loc_1294B0
		JSR		sub_129581
loc_1294B0:
		JSR		sub_129581
		JSR		sub_129581
		LDX		word_B7+1
		LDY		byte_B9
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		STA		word_B7
		JSR		sub_1295B8
		BCC		loc_1294C9
		JSR		sub_129589
loc_1294C9:
		JSR		sub_129589
		JSR		sub_129589
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1294D0:
		JSR		_sleep_30
		JSR		_warp_bE_sB_arg0
		LDA		#SFX_OPEN_DOOR
		FARX	_bB_s3_apu_load
		JSR		sub_129526
		JSR		sub_1295B8
		BCC		loc_129518
		JSR		sub_129581
		JSR		sub_129526
		JSR		sub_129585
		LDX		word_B7+1
		LDY		byte_B9
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#$B
		BEQ		loc_12950F
		CMP		#$C
		BEQ		loc_12950F
		CMP		#$D
		BEQ		loc_12950F
		JSR		sub_12958D
		JSR		sub_12958D
loc_12950F:
		JSR		sub_129526
		JSR		sub_129589
		JSR		sub_129526
loc_129518:
		LDA		byte_BC
		CMP		byte_8C
		BNE		loc_129524
		JSR		_ppu_set_dequeue_flag
		JSR		_wait_for_nmi_is_over_sync
loc_129524:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129526:
		JSR		sub_129555
		LDA		word_B7
		LDX		word_B7+1
		LDY		byte_B9
		JSR		_areamap_SetTileXY
		LDA		byte_BC
		CMP		byte_8C
		BNE		locret_129554
		LDA		byte_BA
		LSR
		STA		word_4
		LDA		byte_BB
		LSR
		STA		word_4+1
		FARX	_bE_s9
		BCS		locret_129554
		LDA		byte_BA
		STA		word_4
		LDA		byte_BB
		STA		word_4+1
		LDA		word_B7
		JSR		_bC_sA
locret_129554:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129555:
		LDX		#0
loc_129557:
		LDA		byte_6D40,X
		CMP		#$FF
		BEQ		loc_129568
		INX
		INX
		INX
		INX
		CPX		#$A0
		BNE		loc_129557
		CLC
		RTS
loc_129568:
		LDA		_mapNumber
		STA		byte_6D40,X
		INX
		LDA		word_B7+1
		STA		byte_6D40,X
		INX
		LDA		byte_B9
		STA		byte_6D40,X
		INX
		LDA		word_B7
		STA		byte_6D40,X
		INX
		RTS

; =============== S U B	R O U T	I N E =======================================
; calculate some kind of a 0 degree rotation of the player facing, for orthogonality
;
sub_129581:
		LDA		#0
		BEQ		sub_12958F		; TAILCALL unconditional

; =============== S U B	R O U T	I N E =======================================
; calculate some kind of a clockwise 90 degree rotation of the player facing
;
sub_129585:
		LDA		#1
		BNE		sub_12958F		; TAILCALL unconditional

; =============== S U B	R O U T	I N E =======================================
; calculate some kind of a 180 degree rotation of the player facing
;
sub_129589:
		LDA		#2
		BNE		sub_12958F		; TAILCALL unconditional

; =============== S U B	R O U T	I N E =======================================
; calculate some kind of a counter-clockwise 90 degree rotation of the player facing
;
sub_12958D:
		LDA		#3

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; A: value added to current player facing. delta values are then set accordingly
; 
sub_12958F:
		CLC
		ADC		_playerFacingDir		; add A to playerFacingDir
		AND		#3				; test 2 bits of it
		BEQ		loc_1295AA		; branch if facing 0=up
		LSR						; test rightmost bit
		BEQ		loc_1295A3		; branch if nothing remains, 1=right
		BCC		loc_1295B1		; branch if we rotated out a 1, 2=down
		DEC		word_B7+1		; otherwise it's 3=left: decrement two X pointers
		DEC		byte_BA
		DEC		byte_BA
		RTS
loc_1295A3:						; right: increment two X pointers
		INC		word_B7+1
		INC		byte_BA
		INC		byte_BA
		RTS
loc_1295AA:						; up: decrement two Y pointers
		DEC		byte_B9
		DEC		byte_BB
		DEC		byte_BB
		RTS
loc_1295B1:						; down: increment two Y pointers
		INC		byte_B9
		INC		byte_BB
		INC		byte_BB
		RTS

; =============== S U B	R O U T	I N E =======================================
; classify 
sub_1295B8:
		JSR		_location_type_test
		BCS		locret_1295CC
		LDA		_mapNumber
		CMP		#$9F			; Tower of Najima B1 (first interior map of proper dungeon?)
		BCS		locret_1295CC
		CMP		#$41			; Aliahan upstairs (first interior map?)
		BCS		loc_1295CB
		CMP		#$2D			; First exterior map of proper dungeon?
		BCS		locret_1295CC
loc_1295CB:
		CLC
locret_1295CC:
		RTS

; =============== S U B	R O U T	I N E =======================================
; quick lookup for replacement tile for 4 special locations to redisplay
; them when area is revisited after triggering the event, if any has on this
; map
;
_bC_s37_get_special_areas_tile_idx:
		LDX		#$C
		LDA		_mapNumber
loc_1295D9:
		CMP		_special_tiles_shortcut,X
		BEQ		loc_1295E5
		DEX
		DEX
		DEX
		DEX
		BPL		loc_1295D9
		RTS
loc_1295E5:
		LDA		_special_tiles_shortcut+3,X	; get this tile instantly
		AND		#$7F
		RTS

; =============== S U B	R O U T	I N E =======================================
; A: tile to set to player's current position
; sets that tile in the areamap and refreshes it on-screen 
;
_set_tile_at_player_position:
		PHA									; stash the target tile value
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_areamap_SetTileXY
		LDA		#$10						; set "center of screen" where player stands for an NT refresh
		STA		word_4
		LDA		#$E
		STA		word_4+1
		PLA									; recover target tile value
		JSR		_bC_sA						; set tile to NT
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_tile_collision_type_under_players_feet:
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129610:
		MSGX	_msg_m00,$168		; "The king examines the area at his feet but finds nothing"
		JMP		.done_run_command_search			; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_129616:
		MSGX	_msg_m00,$11C		; "<name> dives headfirst from the ship into the water"
		JMP		.but_nothing_could_be_found

; =============== S U B	R O U T	I N E =======================================
; search command main handler
;
_bC_s1D_run_command_search:
		SYSX	_display_window,$3E			; special handling for the ineffectual king
		LDA		_global_flags_array.byte2
		AND		#$40
		BNE		sub_129610					; figure out who the party leader is, for printing an actor for the search
		FARX	_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
		STA		byte_CE
		LDA		#0
		STA		byte_B9
		LDA		_player_vehicle				; test $_player_vehicle.0.. indicating whether player is on the ship
		LSR
		BCS		sub_129616
		LDA		byte_9A						; this can be handled 2 different ways depending on byte_9A,
		BNE		loc_12963D					; but I don't know what it means yet
		JMP		_leaf_of_world_tree_special_check
loc_12963D:
		JSR		_get_tile_collision_type_under_players_feet
		CMP		#3
		BEQ		loc_129647
		JMP		.begin_search_switch
loc_129647:
		MSGX	_msg_m00,$147	; "<name> examine the ground at <here/his> feet"
		JSR		_get_chest_idx_player_stand_on
		JSR		_bC_s1F_get_chest_flag_and_idx
		PHP									; keep flags of chest status
		TXA
		ASL
		ASL
		ASL
		ADC		word_4						; calc the global chest number
		TAY
		LDA		#_bA_d15_chests_content_list_fidx
		JSR		_sys0_byte_read_y			; read its content
		STA		_tmp_ptrB4					; backup item
		LDY		word_4
		PLP
		BCS		_j.already_opened			; if chest already opened
		JSR		_chest_open_flag_set		; mark chest as opened
		LDA		#SFX_OPEN_CHEST
		FARX	_bB_s3_apu_load				; open sound
		LDA		#$1F
		JSR		_set_tile_at_player_position
		MSGX	_msg_m00,$064	; "<name> opens the treasure chest"
		LDA		_mapNumber
		CMP		#$D3						; special logic for Pyramid 4F (mummy sneak attack)
		BNE		loc_12967D
		JSR		_mummy_sneak_attack_from_chest
loc_12967D:
		LDA		_tmp_ptrB4					; now restore item
		BMI		.non_item_chest				; test for non-item chests
		CMP		#$7F
		BEQ		.money_chest				; special case for money $7F with no flag $80 set
		JMP		.item_found
_j.already_opened:
		JMP		.already_opened
.non_item_chest:
		TAY
		INY
		BEQ		.empty_chest				; $FF empty chest
		INY
		BEQ		.mimic_chest				; $FE mimic chest
		INY
		BEQ		.man_eater_chest			; $FD man-eater
		INY
		BEQ		.meteorite_armband_chest					; $FC Meteorite Armband?
.money_chest:
		LDX		#0
		STX		_msg_number_parameter_F8+2
		STX		byte_D0
		STX		byte_CF
		LDA		_tmp_ptrB4					; get rid of $80 bit
		ASL
		ASL
		ROL		byte_CF						; mul to 8
		ASL
		ROL		byte_CF
		STA		_msg_number_parameter_F8
		STA		byte_CE
		LDA		byte_CF
		STA		_msg_number_parameter_F8+1	; set number param to message display
		JSR		_sram_b0_s1B_player_gold_add	; gold from chest added
		MSGX	_msg_m00,$026
		JMP		.done_run_command_search

.empty_chest:
		MSGX	_msg_m00,$149	; "Chest is empty"
		JMP		.done_run_command_search

.mimic_chest:
		LDA		_global_flags_array.byte10
		BMI		.empty_chest
		MSGX	_msg_m00,$1AC	; "Wow! The treasure chest is a mimic!"
		JSR		_sleep_30
		LDA		#$C
		BNE		loc_1296DF	; unconditional

.man_eater_chest:
		LDA		_global_flags_array.byte10
		BMI		.empty_chest
		MSGX	_msg_m00,$1AD	; "Whoa! The treasure chest is a man-eater!"
		JSR		_sleep_30
		LDA		#$12
loc_1296DF:
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_174CBD
		JMP		.done_run_command_search

.meteorite_armband_chest:
		LDA		#ITEM_METEORITE_ARMBAND
		STA		_tmp_ptrB4
		JSR		.item_found_ex
		FARX	_b6_s18_guard_of_meteorite_armband_show_hide	; show skeleton
		JMP		.done_run_command_search

_mummy_sneak_attack_from_chest:
		LDA		_tmp_ptrB4
		PHA
		MSGX	_msg_m00,$13E		; "From out of nowhere, eerie voices are heard"
		JSR		_sleep_30			; (mummies attack when you open some treasure chests in the pyramid)
		LDA		#$B
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_174CBD
		JSR		_wrap_bE_sD_wnd3E
		PLA
		STA		_tmp_ptrB4
		STA		byte_CE
		RTS

.begin_search_switch:
		LDX		#0					; begin search for a "switch" type interactive object?
.search_switch_next:
		LDA		_special_events_locatoin_list,X		; read record #0 (map number) and test against current map
		INX
		CMP		_mapNumber
		BNE		.no_find_switch3
		LDA		_special_events_locatoin_list,X		; read record #1 (tile x coord) and test against player's position
		INX
		CMP		_playerMapX
		BNE		.no_find_switch2
		LDA		_special_events_locatoin_list,X		; read record #2 (tile y coord) and test against player's position
		INX
		CMP		_playerMapY
		BEQ		.do_special_actor	; jump to actor if search is succeeded and map Y location isn't a special value
		AND		#$7F				; check if map Y coord is a special value ($80 bit set)
		CMP		_playerMapY
		BEQ		.do_more_lookup1	; jump to additional record data search
		AND		#$3F				; check if there are more special values ($40 bit set)
		CMP		_playerMapY
		BNE		.no_find_switch1
		JMP		.do_more_lookup2	; pass#3
.no_find_switch3:
		INX
.no_find_switch2:
		INX
.no_find_switch1:
		INX							; test for end of loop through switch table, size of data, 104 bytes (41 records)
		CPX		#[_special_events_locatoin_end-_special_events_locatoin_list]
		BNE		.search_switch_next
; if this was no special 'switch' location, pretend we were
; searching at our feet, and nothing was found
		MSGX	_msg_m00,$147  ; "<name> examines the ground at <her/his> feet"
.but_nothing_could_be_found:
		MSGX	_msg_m00,$146 ; "But nothing can be found!"
.done_run_command_search:
		FARX	_bE_s33
		RTS

; special switch related?
.do_more_lookup1:
		LDA		_special_events_locatoin_list,X	; grab the final byte of the switch struct (replacement tile) and stash it
		PHA
		MSGX	_msg_m00,$147				; "<name> examines the ground at <her/his> feet"
		PLA
		STA		word_6+1					; stash it again
		JSR		_get_tile_collision_type_under_players_feet	; read some kind of... tileset flags byte and search for special values
		CMP		#1
		BEQ		.but_nothing_could_be_found
		CMP		#$A
		BEQ		.but_nothing_could_be_found
		LDA		word_6+1					; unstash that thing we just stashed
		BPL		loc_12976B					; branch down if it was <$80 (used for samanao only probably)
		LDA		_global_flags_array.byte2	; test if we visited samanao already
		AND		#2
		BEQ		.but_nothing_could_be_found	; nothing can be found.. if we're king.. emergency stopgap?
		LDA		word_6+1					; unstash that thing we just stashed
loc_12976B:										
		AND		#$7F						; mask off special handling flag, left only with tile number
		JSR		_set_tile_at_player_position
		JSR		_ppu_set_dequeue_flag
		LDA		#$F
		BNE		.msg1xx_and_done_search	; unconditional jump

; =============== S U B	R O U T	I N E =======================================
.do_special_actor:
		LDY		_special_events_locatoin_list,X
		BEQ		.do_special_actor0
		DEY
		BEQ		.do_special_actor1
		DEY
		BEQ		.do_special_actor2
		DEY
		BEQ		.do_special_actor3
		DEY
		BEQ		.do_special_actor4
		BNE		.but_nothing_could_be_found		; wrong actor, nothing found instead
; ---------------------------
; a womain hiding in the jar
;
.do_special_actor0:
		LDA		_global_flags_array.byte4
		BMI		.examines_the_ground_at
		LDA		_npcs_pos_list
		CMP		#5
		BEQ		.examines_the_ground_at
		MSGX	_msg_m00,$1B2 ; "Look, there's a woman hiding in this jar!"
		JSR		_sleep_30
		LDA		#$92
		STA		_npcs_pos_list+3
		LDA		#5
		STA		_npcs_pos_list
		LSR
		STA		_npcs_pos_list+1
		LSR
		STA		word_6C+1
		LDA		#<[_npcs_pos_list]
		STA		word_6C
		FARX	_bD_s19
		JMP		.done_run_command_search
; ---------------------------
; wall with inscription at the pyramid
;
.do_special_actor1:
		LDA		_playerFacingDir
		BNE		.examines_the_ground_at
		MSGX	_msg_m00,$13B	; "<name> examines the wall"
		LDA		#$3D	; "Cursed be those..."
.msg1xx_and_done_search:
		JSR		_wrap_msg_m00_arg1
		JMP		.done_run_command_search
; ---------------------------
; door with inscription at the pyramid
;
.do_special_actor2:
		LDA		_playerFacingDir
		CMP		#2
		BNE		.examines_the_ground_at
		LDA		#$42	; "<name> examines the door... It is written about the curse"
		BNE		.msg1xx_and_done_search
; ---------------------------
; stone casket at the pyramid
;
.do_special_actor3:
		MSGX	_msg_m00,$144	; "<name> examined the casket"
		LDA		#$A9	; "The casket is made of stone, too heavy"
		BNE		.msg1xx_and_done_search
; ---------------------------
; golden claw casket at the pyramid
;
.do_special_actor4:
		LDA		_global_flags_array.byte15
		AND		#2
		BNE		.examines_the_ground_at
		MSGX	_msg_m00,$144	; "<name> examined the casket"
		LDA		#$4A			; Golden Claw item
		STA		_tmp_ptrB4
		JMP		.item_found

; leaf of the world tree is there
; we need to use such weird indexes here, because using the common subroutine to test
; other regular entries do_more_lookup2
;
_leaf_of_world_tree_special_check:
		LDX		#$68				; for the overworld, read a very small "table" of one 3-byte entry.
loc_1297EC:							; still part of _special_events_locatoin_list, with to map index in it
		LDA		_leaf_of_world_tree_check_data-$68,X
		INX
		CMP		_playerWorldX
		BNE		loc_1297FB
		LDA		_leaf_of_world_tree_check_data-$68,X
		CMP		_playerWorldY
		BEQ		do_more_lookup2_ex	; branch if matched
loc_1297FB:
		INX							; step through 2 more bytes, meaning uncertain
		INX
		CPX		#$6B				; and stop
		BCC		loc_1297EC			; well theres only one item here so we never loop
									; we should probably do remove all this loop logic
									; or maybe leave it for the future use if any?
									;
.examines_the_ground_at:			; nothing found just searching the overworld:
		MSGX	_msg_m00,$147		; "<name> examines the ground at <her/his> feet."
._but_nothing_could_be_found:
		JMP		.but_nothing_could_be_found

.do_more_lookup2:
		DEX											; we jump here with X pointed to data value of 4-byte record in table
		LDA		_special_events_locatoin_list,X		; look back to get the Y location of the point one more time
		ASL											; and extract it's 80 bit if any
		ROR		byte_B9
		
; search for "leaf of the world tree" lands here, used the same way
; as in do_more_lookup2 routines, just a little hack for a special tile case
;
do_more_lookup2_ex:
		INX											
		LDA		_special_events_locatoin_list,X		; get the tile index
		PHA											; 
		AND		#$7F								; test if this is a special case (leaf of world tree)
		STA		_tmp_ptrB4
		CMP		#$79
		BNE		loc_12982B							; leaf of the world tree branches here...
		LDA		_global_flags_array.byte18			; test all quest flags in _global_flags_array.byte18.. ? what?
		CMP		#$FF
		BNE		loc_129827
		LDA		_global_flags_array.byte2			; test _f_WarpBlock, oddly (once we thought this was erdrick test but it's not) ?  this is all weird
		BPL		loc_12982B
loc_129827:
		LDA		#$FF								; zero out the received item
		STA		_tmp_ptrB4
loc_12982B:
		TXA
		LSR
		LSR
		CLC
		ADC		#$B6
		STA		_chest_tmp_idx
		PHA
		MSGX	_msg_m00,$147	; "<name> examines the ground at <her/his> feet"
		PLA
		STA		word_4
		PLA											; restore the saved found item, I think
		BMI		loc_12984F							; analyze equip bit? what the hell is this even good for
		ASL		byte_B9
		BCS		loc_12985A
		JSR		_test_chest_open_flag
		BCC		loc_129868
.already_opened:
		LDA		_tmp_ptrB4							; sets up to search a function pointer table
		JSR		_item_obtain_lookup
		JMP		loc_129856
loc_12984F:
		LDX		#0
		LDA		_tmp_ptrB4
		JSR		_item_obtain_handler_exec
loc_129856:
		BCS		._but_nothing_could_be_found
		BCC		.item_found
loc_12985A:
		LDA		byte_6AE6
		AND		#1
		BNE		._but_nothing_could_be_found
		ORA		#1
		STA		byte_6AE6
		BNE		.item_found
loc_129868:
		JSR		_chest_open_flag_set
.item_found:
		LDA		_tmp_ptrB4
		BMI		._but_nothing_could_be_found
.item_found_ex:
		STA		_msg_directobject_param
		MSGX	_msg_m00,$065		; "<name> finds the <item>"
		JSR		_sram_b0_s31_get_party_chars_list
		LDY		word_4
		DEY
		STY		_tmp_ptrB4+1		; store the number of players in party -1
		FARX	_b0_s3C_get_free_inventory_slot
		BCC		loc_129888
		LDA		word_4
		STA		byte_CE
		JMP		loc_129939
loc_129888:
		LDY		#$67				; both $066 and $067 are the identical and it is "Can't carry any item"
		LDA		_tmp_ptrB4+1		; so here is some difference, seems remnant of japanese version
		BNE		loc_12988F
		DEY							; display 66 message (the same)
loc_12988F:
		TYA							; have trying to display different messages for different number of players in party
		JSR		_wrap_msg_m00_arg0
		MSGX	_msg_m00,$145		; "Do you want to discard something?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_1298D1
		LDA		_tmp_ptrB4+1
		BEQ		loc_1298A9
loc_12989F:
		MSGX	_msg_m00,$06A
		SYSX	_display_window,$1C
		CMP		#$FF
		BEQ		loc_1298D1
loc_1298A9:
		STA		_tmp_varB6
		STA		byte_CE
		MSGX	_msg_m00,$068
		SYSX	_display_window,$2D
		CMP		#$FF
		BEQ		loc_1298CD
		STA		byte_CF
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$7F
		TAX
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$10
		BEQ		loc_1298E5
		MSGX	_msg_m00,$12A	; "It must not be trown away"
loc_1298CD:
		LDA		_tmp_ptrB4+1
		BNE		loc_12989F
loc_1298D1:
		JSR		_test_chest_open_flag
		JSR		_chest_open_flag_clear
		LDA		#0
		STA		byte_D2
		LDA		_tmp_ptrB4
		STA		_msg_directobject_param
		MSGX	_msg_m00,$069	; "<name> gives up the <item>"
		JMP		loc_129943
loc_1298E5:
		LDA		_tmp_varB6
		STA		byte_CE
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$7F
		STA		_msg_directobject_param
		STA		byte_D4
		JSR		_sram_b0_s2A_player_inventory_item_remove
		LDY		#$3F
		LDA		_tmp_varB6
		ASL
		TAX
		LDA		_players_status+1,X
		ASL
		BCC		loc_129914
		BMI		loc_129913
		TXA
		LSR
		STA		byte_D2
		LDA		_tmp_ptrB4
		STA		byte_D4
		MSGX	_msg_m00,$14A
		JMP		loc_129935
loc_129913:
		INY
loc_129914:
		TXA
		LSR
		STA		_msg_directobject_param
		LDA		_tmp_ptrB4
		STA		byte_D5
		LDX		#0
loc_12991E:
		LDA		_players_status+1,X
		ASL
		BCC		loc_129926
		BPL		loc_12992D
loc_129926:
		INX
		INX
		CPX		#8
		BNE		loc_12991E
		RTS
loc_12992D:
		TXA
		LSR
		STA		byte_D2
		TYA
		JSR		_wrap_msg_m00_arg1
loc_129935:
		LDA		_tmp_varB6
		STA		byte_CE
loc_129939:
		LDA		_tmp_ptrB4
		STA		byte_CF
		JSR		_sram_b0_s29_player_inventory_item_add
		JSR		loc_129953
loc_129943:
		LDA		_tmp_ptrB4
		CMP		#$5B
		BNE		loc_129950
		LDA		_tmp_varB6
		STA		byte_D2
		MSGX	_msg_m00,$14B	; "A message also found in a treasure chest" - Dream Ruby chestspecial
loc_129950:
		JMP		.done_run_command_search
loc_129953:
		LDA		_tmp_ptrB4
		CMP		#$7A
		BNE		loc_129961
		LDA		_global_flags_array.byte18
		ORA		#8
		STA		_global_flags_array.byte18				; set a newtown flag...
loc_129961:
		LDA		_tmp_ptrB4
		AND		#$7F
		CMP		#$77
		BCC		loc_12997D
		SBC		#$76
		TAX
		LDA		#0
		SEC
loc_12996F:
		ROL
		DEX
		BNE		loc_12996F
		ORA		_q_OrbsCollected
		STA		_q_OrbsCollected
		JSR		_bC_s23_test_orbs_collected_count
		RTS
loc_12997D:
		CMP		#$4E
		BNE		loc_12998F
		LDA		_mapNumber
		CMP		#$57
		BNE		loc_12998F
		LSR		_global_flags_array.byte15
		SEC
		ROL		_global_flags_array.byte15
		RTS
loc_12998F:
		CMP		#$4A
		BNE		locret_12999B
		LDA		_global_flags_array.byte15
		ORA		#2
		STA		_global_flags_array.byte15
locret_12999B:
		RTS

; =============== S U B	R O U T	I N E =======================================
; Test orbs collected flags, if there are 3 orbs or more collected, set flag
; $80 to byte18
;
_bC_s23_test_orbs_collected_count:
		LDY		#6
		LDX		#0
		LDA		_q_OrbsCollected
loc_1299A3:
		LSR
		BCC		loc_1299A7
		INX
loc_1299A7:
		DEY
		BNE		loc_1299A3
		CPX		#3
		BCC		locret_1299B5
		ASL		_global_flags_array.byte18
		SEC
		ROR		_global_flags_array.byte18
locret_1299B5:
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_chest_idx_player_stand_on:
		LDA		#>[_area_tilemap]
		STA		word_6C+1
		LDA		#<[_area_tilemap]
		STA		word_6C
		STA		word_4				; here must be 0. fix it, if _are_tilemap is shifted somehow
loc_1299C0:
		LDY		#0
		LDA		(word_6C),Y			; scan the whole are map
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#3					; test the particular collision glaf
		BNE		loc_1299DD			; look only for type 3 tiles (chest?)
		FARX	_bE_s20_decode_map_ptr_to_XY
		CPY		_playerMapY			; test if this tile is under the players feet
		BNE		loc_1299DB
		CPX		_playerMapX
		BEQ		loc_1299E5
loc_1299DB:
		INC		word_4				; increase counter of chests
loc_1299DD:
		INC		word_6C
		BNE		loc_1299E3
		INC		word_6C+1
loc_1299E3:
		BNE		loc_1299C0
loc_1299E5:
		LDA		word_4				; return chest number for the current map
		RTS

; =============== S U B	R O U T	I N E =======================================
; input argument is a chest index for the current map and current map number
; calculating the global chest number
; test the chest open/close status, return at as well as chest flag indexes:
; X is a chest flag byte idx,
; Y or byte_4 is a chest flag bit number
;
_bC_s1F_get_chest_flag_and_idx:
		TAX									; chest index for the current map (counted from left to right top to bottom tile by tile)
		LDA		_mapNumber					; special case test
		CMP		#$75
		BNE		loc_1299FD
		LDA		_global_flags_array.byte18
		CMP		#$FF
		BNE		loc_1299FD					; test all newtown flags?
		LDA		_global_flags_array.byte2
		BMI		loc_1299FD
		INX									; skip some chests for the particular map
		INX
loc_1299FD:
		TXA
		STA		word_4						; store initial chest number
		LDX		#0
loc_129A02:
		LDA		#_bA_d14_chests_count_list_fidx	; get the mapNumber from table
		JSR		_sys0_byte_read_x
		INX
		CMP		_mapNumber						; and check if we on it
		BEQ		loc_129A1B						; if number doesn't match
		LDA		#_bA_d14_chests_count_list_fidx	; get the number of chests on this location
		JSR		_sys0_byte_read_x
		INX
		CLC
		ADC		word_4						; add to the counter.
		STA		word_4						; so we can find a global index of desired chest on map
		CPX		#$80						; total out of 64 locations with chests
		BCC		loc_129A02					; repeat to the end of table
loc_129A1B:
		LDA		word_4
		STA		_chest_tmp_idx				; sum of chests until we reach particular location in table

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_test_chest_open_flag:
		LDA		_chest_tmp_idx				; we now have the final index, test if chest is aplready opened
		PHA
		LSR
		LSR
		LSR
		TAX
		PLA
		AND		#7
		TAY
		STA		word_4
		LDA		_chest_open_flags,X			; check if we have particular bit is set for some reason
loc_129A31:
		ASL
		DEY
		BPL		loc_129A31					; return only status and index of the chest flag
		LDY		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets the chest opened flag in a global chest list (38 bytes, 38*8 chests max)
;
_chest_open_flag_set:
		SEC
		LDA		#0
loc_129A3B:
		ROR
		DEY
		BPL		loc_129A3B
		ORA		_chest_open_flags,X
		STA		_chest_open_flags,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; you may put an item in the chest back, and so close it sometimes!
;
_chest_open_flag_clear:
		CLC
		LDA		#$FF
loc_129A49:
		ROR
		DEY
		BPL		loc_129A49
		AND		_chest_open_flags,X
		STA		_chest_open_flags,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; searches for the entry A in _item_obtain_extra_handlers, start from index 51 (last entry
;
_item_obtain_search:
		CMP		_item_obtain_extra_handlers,X
		BEQ		.return_CF_1
		DEX
		DEX
		DEX
		BPL		_item_obtain_search
		CLC
		RTS
.return_CF_1:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; performs a complete search of the particular item handler, input argument
; A = item index
;
_item_obtain_lookup:
		LDX		#[_item_obtain_extra_handlers_last_entry-_item_obtain_extra_handlers]	; last entry ($51)
		JSR		_item_obtain_search
		BCC		.return_CF_1

; =============== S U B	R O U T	I N E =======================================
_item_obtain_handler_exec:
		STA		byte_CE
		LDY		_item_obtain_extra_handlers+1,X
		STY		word_B7
		LDY		_item_obtain_extra_handlers+2,X
		STY		word_B7+1
		FARX	_bD_s17_search_vault_for_item
		BCC		.return_CF_1
		FARX	_b0_s4D_is_anybody_owns_item
		BCS		.return_CF_1
		JMP		(word_B7)

; =============== S U B	R O U T	I N E =======================================
; tests bit $08 of quest flag _global_flags_array.byte1
;
_item11_obtain_hndl:
		LDA		_global_flags_array.byte1
		AND		#8
		BNE		.return_CF_1

; =============== S U B	R O U T	I N E =======================================
_item_obtain_dummy_hndl:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; tests bit $80 of quest flag _global_flags_array.byte3
;
_item4F_obtain_hndl:
		LDA		_global_flags_array.byte3
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
; tests bit $20 of quest flag _global_flags_array.byte18
;
_item51_obtain_hndl:
		LDA		_global_flags_array.byte18
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
; performs a _item_obtain_lookup search for target #$6E
;
_item54_obtain_hndl:
		LDA		#$6E
		BNE		_item_obtain_lookup		; unconditional

; =============== S U B	R O U T	I N E =======================================
; tests bit $01 of quest flag _global_flags_array.byte1
;
_item57_obtain_hndl:
		LDA		_global_flags_array.byte1
		LSR
		RTS

; =============== S U B	R O U T	I N E =======================================
; performs a _item_obtain_lookup search for target #$5A
;
_item59_obtain_hndl:
		LDA		#$5A
		BNE		_item_obtain_lookup		; unconditional

; =============== S U B	R O U T	I N E =======================================
; performs a _item_obtain_lookup search for target #$59
;
_item58_obtain_hndl:
		LDA		#$59
		BNE		_item_obtain_lookup		; unconditional

; =============== S U B	R O U T	I N E =======================================
; performs a _item_obtain_lookup search for target #$5C
;
_item5B_obtain_hndl:
		LDA		#$5C
		BNE		_item_obtain_lookup		; unconditional

; =============== S U B	R O U T	I N E =======================================
; tests bit $04 of quest flag _global_flags_array.byte2
;
_item5C_obtain_hndl:
		LDA		_global_flags_array.byte2
		LSR
		LSR
		LSR
		RTS

; =============== S U B	R O U T	I N E =======================================
; tests bit $20 of quest flag _global_flags_array.byte1
;
_item5D_obtain_hndl:
		LDA		_global_flags_array.byte1
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
; tests a quest flag and returns CF=1 or performs a _item_obtain_lookup search for target #$1C
;
_item5E_obtain_hndl:
		LDA		_global_flags_array.byte4
		AND		#$20
		BNE		.return_CF_1
		LDA		#$1C
		BNE		_item_obtain_lookup

; =============== S U B	R O U T	I N E =======================================
; tests bit $40 of quest flag _global_flags_array.byte1
;
_item6B_obtain_hndl:
		LDA		_global_flags_array.byte1
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
; tests bit $20 of quest flag _global_flags_array.byte5
;
_item70_obtain_hndl:
		LDA		_global_flags_array.byte5
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
; performs a _item_obtain_lookup search for target #$76
;
_item10_47_75_obtain_hndl:
		LDA		#$76
		BNE		_item_obtain_lookup		; unconditional

; =============== S U B	R O U T	I N E =======================================
; tests bit $80 of quest flag _global_flags_array.byte1
;
_item76_obtain_hndl:
		LDA		_global_flags_array.byte1
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
; check whether an orb has been acquired
;
_item_orb_obtain_common_hndl:
		LDA		_tmp_ptrB4
		AND		#$7F
		SEC
		SBC		#$76
		TAY
		LDA		_q_OrbsPlaced
loc_129AE6:
		LSR
		DEY
		BNE		loc_129AE6
		RTS

; =============== S U B	R O U T	I N E =======================================
; check the content of the chest, tells you if it's empty,
; not empty chests are glows Blue
; mimic/man-eater chests are glows Red
; at Pyramid 4F all chests glows Yellow
;
_bC_s1E_spell_x_ray_use:
		JSR		_get_tile_collision_type_under_players_feet
		CMP		#3
		BNE		loc_129B23				; skip if not a chest
		JSR		_get_chest_idx_player_stand_on
		JSR		_bC_s1F_get_chest_flag_and_idx
		LDY		#$3A	; $13A "The treasure chest seems to be empty"
		BCC		loc_129AFE
		BNE		loc_129B1D				; branch if chest is open
loc_129AFE:
		TXA								; calculate global chest index
		ASL
		ASL
		ASL
		ADC		word_4					; since we erased Y, use copy in byte_4
		TAX
		LDA		#_bA_d15_chests_content_list_fidx
		JSR		_sys0_byte_read_x		; read it's content
		TAX								; send it to X
		LDA		_mapNumber
		CMP		#$D3
		BEQ		loc_129B1B				; if map is #$D3 msg $138 "A Yellow light glows within the treasure chest"
		INX
		BEQ		loc_129B1D				; $FF the chest is empty inside
		INX
		BEQ		loc_129B1A				; $FE msg $137 "A Red light glows..."
		INX
		BNE		loc_129B1C				; $FD - the same $137, any other value msg $139 "A Blue light glows..."
loc_129B1A:
		DEY
loc_129B1B:
		DEY
loc_129B1C:
		DEY
loc_129B1D:
		TYA
		JSR		_wrap_msg_m00_arg1
		SEC
		RTS
loc_129B23:
		CLC
		RTS

; =============== T A B L E =================================================
; regular values, mostly for Pyramid, only a special places with no other purpose
; than a displaying a message
; struct switch_info {
;   u8 areanum;
;   u8 tx,ty;
;   u8 actor_hndl_idx;
;  } [14]
_special_events_locatoin_list:
		.BYTE	$8A,  5,  3,  0		; jipang, basement with jars
		.BYTE	$3B,$16, $C,  1		; pyramid 1F ; wall inscriptions
		.BYTE	$3B,$17, $C,  1		; pyramid 1F
		.BYTE	$D3, $B,  5,  2		; pyramid 4F ; door inscriptions
		.BYTE	$D3, $C,  5,  2		; pyramid 4F
		.BYTE	$D3,  6,  9,  3		; pyramid 4F ; stone castets around the mummy chests
		.BYTE	$D3,  5, $C,  3		; pyramid 4F
		.BYTE	$D3,  5, $F,  3		; pyramid 4F
		.BYTE	$D3,  6,$12,  3		; pyramid 4F
		.BYTE	$D3,$11,  9,  3		; pyramid 4F
		.BYTE	$D3,$12, $C,  3		; pyramid 4F
		.BYTE	$D3,$12, $F,  3		; pyramid 4F
		.BYTE	$D3,$11,$12,  3		; pyramid 4F
		.BYTE	$CF,$16, $C,  4		; pyramid golden claw room
; special values with ty |= 0x80
; struct switch_info {
;   u8 areanum;
;   u8 tx,ty;
;   u8 tile_replace_idx;
;  } [4]
_special_tiles_shortcut:
		.BYTE	$06,$1C,$86,$89		; Samanao
		.BYTE	$08,$19,$85,$0E		; Castle of Zoma 1F
		.BYTE	$D0,$10,$9B,$0E		; Pyramid B1, secret passage
		.BYTE	$18,$1A,$8B,$09		; House of Pirates
; special values with ty |= 0x40, which is a treated as a special chests as well
; struct switch_info {
;   u8 areanum;
;   u8 tx,ty;
;   u8 ;
;  } [8]
		.BYTE	$75,$04,$42,$79		; New Town (one of the incarnations)
		.BYTE	$1D,$0E,$50,$11		; A shrine
		.BYTE	$1A,$0B,$4C,$70		; Kol
		.BYTE	$19,$0F,$50,$1B		; Soo
		.BYTE	$12,$17,$63,$5E		; Haukness
		.BYTE	$85,$04,$45,$64		; Tedanki basement
		.BYTE	$13,$12,$4D,$63		; Luzami
		.BYTE	$57,$06,$45,$4E		; Isis castle 3F
; the search ends here
_special_events_locatoin_end:

; some kind of hacky-hacky by developers, this item is different as from
; records of data above, its values compared against different variables
; in a special handler, there is no area index, but the tile number value
; should be passed then to a common routine, called by do_more_lookup2
;
_leaf_of_world_tree_check_data:
		.BYTE	    $7B,$4C,$E9

; =============== T A B L E =================================================
; A dictionary for function pointers keyed to special values
; some of these just bounce to searches for other values?
; I think it's some kind of award-only-once check for several kinds of items
;
_item_obtain_extra_handlers:
		.BYTE	$1C
		.WORD	_item_obtain_dummy_hndl
		.BYTE	$10
		.WORD	_item10_47_75_obtain_hndl
		.BYTE	$11
		.WORD	_item11_obtain_hndl
		.BYTE	$47
		.WORD	_item10_47_75_obtain_hndl
		.BYTE	$4F
		.WORD	_item4F_obtain_hndl
		.BYTE	$51
		.WORD	_item51_obtain_hndl
		.BYTE	$52
		.WORD	_item_obtain_dummy_hndl
		.BYTE	$54
		.WORD	_item54_obtain_hndl
		.BYTE	$57
		.WORD	_item57_obtain_hndl
		.BYTE	$58
		.WORD	_item58_obtain_hndl
		.BYTE	$59
		.WORD	_item59_obtain_hndl
		.BYTE	$5A
		.WORD	_item_obtain_dummy_hndl
		.BYTE	$5B
		.WORD	_item5B_obtain_hndl
		.BYTE	$5C
		.WORD	_item5C_obtain_hndl
		.BYTE	$5D
		.WORD	_item5D_obtain_hndl
		.BYTE	$5E
		.WORD	_item5E_obtain_hndl
		.BYTE	$6B
		.WORD	_item6B_obtain_hndl
		.BYTE	$6E
		.WORD	_item_obtain_dummy_hndl
		.BYTE	$70
		.WORD	_item70_obtain_hndl
		.BYTE	$72
		.WORD	_item_obtain_dummy_hndl
		.BYTE	$75
		.WORD	_item10_47_75_obtain_hndl
		.BYTE	$76
		.WORD	_item76_obtain_hndl
		.BYTE	$77
		.WORD	_item_orb_obtain_common_hndl ; first orb, notably, and see there's 6
		.BYTE	$78
		.WORD	_item_orb_obtain_common_hndl
		.BYTE	$79
		.WORD	_item_orb_obtain_common_hndl
		.BYTE	$7A
		.WORD	_item_orb_obtain_common_hndl
		.BYTE	$7B
		.WORD	_item_orb_obtain_common_hndl
_item_obtain_extra_handlers_last_entry:
		.BYTE	$7C
		.WORD	_item_orb_obtain_common_hndl

; =============== S U B	R O U T	I N E =======================================
_bC_s22:
		LDA		_player_vehicle
		EOR		#1
		CLC
		ADC		#$5D	; "<name> sets the <item> afloat on the ocean" or "sets the <item> on the ground"
		JSR		_wrap_msg_m00_arg1
		LDA		_location_type
		LSR
		BCS		loc_129C0E
		LDA		_playerWorldX
		CMP		#$A1
		BCC		loc_129C0E
		CMP		#$A4
		BCS		loc_129C0E
		LDA		_playerWorldY
		CMP		#$38
		BCC		loc_129C0E
		CMP		#$3D
		BCS		loc_129C0E
		LDA		_global_flags_array.byte1
		AND		#4
		BEQ		loc_129C16
loc_129C0E:
		JSR		_sleep_30
		MSGX	_msg_m00,$101	; "But nothing happens here"
		CLC
		RTS
loc_129C16:
		JSR		_sleep_30
		JSR		_bC_s20_warp_bE_sB_arg0
		FARX	_bB_s4_apu_set_flag0
		LDA		_ram_pal_buf+$D
		PHA
		LDA		_ram_pal_buf+$E
		PHA
		LDA		_ram_pal_buf+$F
		PHA
		LDA		_global_flags_array.byte1
		ORA		#4
		STA		_global_flags_array.byte1
		JSR		sub_129E5D
		SYSX	_apu_load,BGM_WIND_24
		JSR		sub_129C94
		JSR		sub_129F07
		LDY		#$10
		JSR		sub_129EA1
		JSR		sub_129CAD
		LDX		#$20
		JSR		sub_12A1F1
		JSR		sub_129D3A
		LDX		#$20
		JSR		sub_12A1F1
		JSR		sub_129CA1
		LDX		#$20
		JSR		sub_12A1F1
		LDX		#0
		JSR		sub_129E07
		LDX		#$20
		JSR		sub_12A1F1
		JSR		sub_129D1B
		SYSX	_apu_load,BGM_WIND_25
		JSR		sub_129EBC
		JSR		sub_129EEB
loc_129C72:
		JSR		sub_129E9B
		JSR		sub_129F24
		LDY		#0
		JSR		sub_129EA1
		FARX	_bD_s22_se_wait_and_map_music_start
		PLA
		STA		_ram_pal_buf+$F
		PLA
		STA		_ram_pal_buf+$E
		PLA
		STA		_ram_pal_buf+$D
		FARX	_bE_s10
loc_129C8F:
		JSR		_pal_set_no_fade
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129C94:
		LDX		#3
loc_129C96:
		LDA		_ram_pal_buf,X
		STA		_ram_pal_buf+$C,X
		DEX
		BNE		loc_129C96
		BEQ		loc_129C8F

; =============== S U B	R O U T	I N E =======================================
sub_129CA1:
		LDA		#$2C
		STA		byte_A
		STA		byte_B
		JSR		sub_129D73
loc_129CAA:
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_129CAD:
		JSR		sub_129D63
		LDX		#0
loc_129CB2:
		STX		byte_D
		JSR		sub_129D90
		LDA		#$2C
		STA		word_4
		LDA		byte_129CF7,X
		PHA
		CLC
		ADC		word_6+1
		STA		word_6+1
		PLA
		AND		#8
		BEQ		loc_129CCB
		INC		word_4
loc_129CCB:
		LDA		byte_129CF7+1,X
		PHA
		CLC
		ADC		byte_8
		STA		byte_8
		PLA
		AND		#8
		BEQ		loc_129CDD
		INC		word_4
		INC		word_4
loc_129CDD:
		LDX		#0
		JSR		sub_129DF0
		LDA		byte_D
		LSR
		ADC		#$2E
		TAY
		LDX		#$3C
		JSR		sub_174204
		LDX		byte_D
		INX
		INX
		CPX		#$24
		BNE		loc_129CB2
		BEQ		loc_129CAA
byte_129CF7:
		.BYTE	  0,$F8,  8,$F8,$F8,  0,$10,  0,$F0,  8,$F8,  8,$10,  8,$18,  8
		.BYTE	$E8,$10,$20,$10,$E8,$18,$20,$18,$F0,$20,$F8,$20,  0,$20,  8,$20
		.BYTE	$10,$20,$18,$20

; =============== S U B	R O U T	I N E =======================================
sub_129D1B:
		LDX		#0
loc_129D1D:
		LDA		byte_129D57,X
		STA		byte_A
		INX
		LDA		byte_129D57,X
		STA		byte_B
		INX
		TXA
		PHA
		JSR		sub_129D73
		LDX		#0
		JSR		sub_12A1E9
		PLA
		TAX
		CPX		#$C
		BNE		loc_129D1D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129D3A:
		LDX		#$C
loc_129D3C:
		LDA		byte_129D57-1,X
		STA		byte_B
		DEX
		LDA		byte_129D57-1,X
		STA		byte_A
		DEX
		TXA
		PHA
		JSR		sub_129D73
		LDX		#0
		JSR		sub_12A1E9
		PLA
		TAX
		BNE		loc_129D3C
		RTS
byte_129D57:
		.BYTE	$30,$34,$38,$3C,$40,$44,$48,$4C,$50,$54,$58,$5C

; =============== S U B	R O U T	I N E =======================================
sub_129D63:
		LDA		#$AA
		SEC
		SBC		_playerWorldX
		STA		word_4+1
		LDA		#$40
		SEC
		SBC		_playerWorldY
		ASL
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129D73:
		JSR		sub_129D63
		LDA		#$1E
		STA		byte_9
		JSR		sub_129DA2
		DEC		word_4+1
		INC		word_6
		INC		word_6
		JSR		sub_129DA2
		INC		word_4+1
		JSR		sub_129DA6
		INC		word_4+1
		JMP		sub_129DA2

; =============== S U B	R O U T	I N E =======================================
sub_129D90:
		LDA		word_4+1
		ASL
		ASL
		ASL
		ASL
		STA		word_6+1
		LDA		word_6
		ASL
		ASL
		ASL
		STA		byte_8
		DEC		byte_8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129DA2:
		LDA		byte_A
		BNE		sub_129DA8

; =============== S U B	R O U T	I N E =======================================
sub_129DA6:
		LDA		byte_B

; =============== S U B	R O U T	I N E =======================================
sub_129DA8:
		STA		word_4
		JSR		sub_129D90
		LDX		#0
		JSR		sub_129DF0
		LDA		word_6+1
		CLC
		ADC		#8
		STA		word_6+1
		PHA
		JSR		sub_129DF0
		LDA		word_4+1
		ASL
		ASL
		ASL
		ASL
		STA		word_6+1
		LDA		byte_8
		CLC
		ADC		#8
		STA		byte_8
		JSR		sub_129DF0
		PLA
		STA		word_6+1
		JSR		sub_129DF0
		LDX		#$3C
		LDY		byte_9
		JSR		sub_129DDF
		STY		byte_9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129DDF:
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129DF0:
		LDA		byte_8
		STA		word_3C,X
		INX
		LDA		word_4
		STA		word_3C,X
		INX
		LDA		byte_E
		STA		word_3C,X
		INX
		LDA		word_6+1
		STA		word_3C,X
		INX
		INC		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129E07:
		LDY		#0
loc_129E09:
		LDA		byte_129E55,X
		STA		word_3C,Y
		INX
		INY
		CPY		#4
		BNE		loc_129E09
		LDA		#$A9
		SEC
		SBC		_playerWorldX
		ASL
		STA		word_4
		LDA		#$40
		SEC
		SBC		_playerWorldY
		ASL
		STA		word_4+1
		INC		word_4
		INC		word_4
		LDA		word_3C
		JSR		_bC_sA
		DEC		word_4
		DEC		word_4
		INC		word_4+1
		INC		word_4+1
		LDA		word_3C+1
		JSR		_bC_sA
		INC		word_4
		INC		word_4
		LDA		word_3E
		JSR		_bC_sA
		INC		word_4
		INC		word_4
		LDA		word_3E+1
		JSR		_bC_sA
		JSR		_ppu_set_dequeue_flag
		LDX		#$20
		JMP		sub_12A1F1
byte_129E55:
		.BYTE	  6,  6,$15,  6,$17,$17,$17,$17

; =============== S U B	R O U T	I N E =======================================
sub_129E5D:
		LDA		#0
		STA		byte_E
		LDA		#2
		STA		_tmp21+2
		LDA		#$C0
		STA		byte_24
		LDA		#0
		STA		byte_25
		LDA		#1
		JSR		_chd_lib_data_send
		INC		_tmp21+2
		LDX		#$28
		JSR		sub_12A1ED
		LDA		#2
		JSR		_chd_lib_data_send
		INC		_tmp21+2
		LDX		#$28
		JSR		sub_12A1ED
		LDA		#3
		JSR		_chd_lib_data_send
		INC		_tmp21+2
		LDX		#$20
		JSR		sub_12A1ED
		LDA		#4
		JSR		_chd_lib_data_send
		LDX		#$20
		JMP		sub_12A1ED

; =============== S U B	R O U T	I N E =======================================
sub_129E9B:
		LDY		#$1E
		LDA		#$22
		BNE		loc_129EA3

; =============== S U B	R O U T	I N E =======================================
sub_129EA1:
		LDA		#4
loc_129EA3:
		STA		byte_8
		LDA		#$F8
		STA		word_4
		STA		word_4+1
		STA		word_6
		STA		word_6+1
loc_129EAF:
		LDX		#4
		JSR		sub_174204
		INY
		DEC		byte_8
		BNE		loc_129EAF
		JMP		_ppu_set_dequeue_flag

; =============== S U B	R O U T	I N E =======================================
sub_129EBC:
		LDX		#8
		JSR		sub_12A1ED
		LDX		#$10
		JSR		sub_12A1ED
		LDX		#$20
		JSR		sub_12A1ED
		LDX		#$28
		JSR		sub_12A1ED
		JSR		_warp_bE_sB_arg0
		LDA		#1
		STA		word_40+1
		LDA		#$40
		STA		word_40
		JSR		sub_176C76
		LDA		#$C0
		STA		word_3E
		LDA		#2
		STA		word_3E+1
		JMP		sub_12AE93

; =============== S U B	R O U T	I N E =======================================
sub_129EEB:
		JSR		sub_176C7A
		LDA		#$80
		STA		word_3E
		LDA		#5
		STA		word_3E+1
		JSR		sub_12AE93
		JSR		sub_176C7E
		LDA		#$C0
		STA		word_3E
		LDA		#5
		STA		word_3E+1
		JMP		sub_12AE93

; =============== S U B	R O U T	I N E =======================================
sub_129F07:
		LDA		#0
		STA		word_4
loc_129F0B:
		CLC
		ADC		#$10
		TAY
		LDX		#$3C
		JSR		sub_1741FD
		LDY		word_4
		LDX		#$3C
		JSR		sub_174204
		INC		word_4
		LDA		word_4
		CMP		#4
		BNE		loc_129F0B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129F24:
		LDA		#0
		STA		word_4
loc_129F28:
		LDY		word_4
		LDX		#$3C
		JSR		sub_1741FD
		LDA		word_4
		CLC
		ADC		#$10
		TAY
		LDX		#$3C
		JSR		sub_174204
		INC		word_4
		LDA		word_4
		CMP		#4
		BNE		loc_129F28
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s25:
		LDA		_global_flags_array.byte1
		AND		#$FB
		STA		_global_flags_array.byte1
		LDA		_ram_pal_buf+$D
		PHA
		LDA		_ram_pal_buf+$E
		PHA
		LDA		_ram_pal_buf+$F
		PHA
		FARX	_bB_s4_apu_set_flag0
		JSR		sub_129E5D
		SYSX	_apu_load,BGM_WIND_24
		JSR		sub_129C94
		JSR		sub_129F07
		LDY		#$10
		JSR		sub_129EA1
		JSR		sub_129CAD
		JSR		sub_129D3A
		JSR		sub_129CA1
		LDX		#4
		JSR		sub_129E07
		SYSX	_apu_load,BGM_WIND_25
		JSR		sub_129EBC
		JMP		loc_129C72

; =============== S U B	R O U T	I N E =======================================
; hardcode logic looking for a specific spot on a map (Magic Ball)
_bC_s13_item_magic_ball_use:
		LDA		_location_type
		LSR
		BCC		loc_129F9D
		LDA		_mapNumber
		CMP		#$A0
		BNE		loc_129F9D
		LDA		_playerMapY
		CMP		#$D
		BNE		loc_129F9D
		LDA		_playerMapX
		CMP		#8
		BEQ		loc_129FA2
		CMP		#9
		BEQ		loc_129FA2
loc_129F9D:
		MSGX	_msg_m00,$118	; "The magic ball can't be used here"
		CLC
		RTS
loc_129FA2:
		MSGX	_msg_m00,$117	; "<name> sets up the <item> on the wall"
		JSR		_sleep_30
		JSR		_warp_bE_sB_arg0
		JSR		sub_129FC3
		SYSX	_apu_load,SFX_MAGICBALL_EXPLODE
		FARX	_b2_s8_screen_hit_blink
		JSR		sub_129FE2
		LDA		_global_flags_array.byte1
		ORA		#2
		STA		_global_flags_array.byte1
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129FC3:
		LDA		#$C
		STA		_tmp21+2
		LDA		#$C0
		STA		byte_24
		LDA		#0
		STA		byte_25
		LDA		#5
		JSR		_chd_lib_data_send
		INC		_tmp21+2
		LDA		#6
		JSR		_chd_lib_data_send
		INC		_tmp21+2
		LDA		#7
		JMP		_chd_lib_data_send

; =============== S U B	R O U T	I N E =======================================
sub_129FE2:
		LDA		#$20
		PHA
		PHA
		PHA
		PHA
		PHA
		PHA
		STA		byte_9
		LDA		#1
		STA		byte_E
		LDA		#8
		STA		word_4+1
		ASL
		STA		word_6
		LDA		byte_12A1DA
		JSR		sub_129DA8
		LDX		#$30
		JSR		sub_12A1F1
		PLA
		STA		byte_9
		LDA		byte_12A1DB
		JSR		sub_129DA8
		LDX		#$30
		JSR		sub_12A1F1
		LDA		#0
		STA		byte_E
		PLA
		STA		byte_9
		LDA		byte_12A1DC
		JSR		sub_129DA8
		LDX		#$30
		JSR		sub_12A1F1
		DEC		word_4+1
		LDA		byte_12A1DD
		STA		byte_A
		LDA		byte_12A1DE
		STA		byte_B
		LDA		#9
		SEC
		SBC		_playerMapX
		STA		byte_C
		PLA
		STA		byte_9
		LDX		#0
		JSR		sub_12A0ED
		LDX		#$30
		JSR		sub_12A1F1
		JSR		sub_12A108
		PLA
		STA		byte_9
		LDX		#2
loc_12A04A:
		JSR		sub_12A0ED
		PHA
		LDX		#$30
		JSR		sub_12A1F1
		PLA
		TAX
		CPX		#$A
		BCC		loc_12A04A
		LDA		byte_C
		PHA
		JSR		sub_12A133
		PLA
		STA		byte_C
		LDA		byte_12A1DD
		STA		byte_A
		LDA		byte_12A1DE
		STA		byte_B
		JSR		sub_12A108
		JSR		sub_12A108
		PLA
		STA		byte_D
		LDX		#5
loc_12A077:
		TXA
		PHA
		LDA		byte_D
		STA		byte_9
		LDX		#2
loc_12A07F:
		JSR		sub_12A0ED
		PHA
		LDX		#$30
		JSR		sub_12A1F1
		PLA
		JSR		sub_12A0B7
		TAX
		CPX		#$A
		BCC		loc_12A07F
		PLA
		TAX
		DEX
		BNE		loc_12A077
		PLA
		STA		byte_9
		LDX		#2
loc_12A09B:
		JSR		sub_12A0ED
		JSR		sub_12A117
		PHA
		LDX		#0
		JSR		sub_12A1ED
		PLA
		TAX
		CPX		#$A
		BCC		loc_12A09B
		LDX		#8
		JSR		sub_12A1ED
		LDX		#$20
		JMP		sub_12A1E9

; =============== S U B	R O U T	I N E =======================================
sub_12A0B7:
		PHA
		TAX
		LDA		byte_9
		PHA
		LDA		byte_A
		PHA
		LDA		byte_B
		PHA
		DEX
		DEX
		DEX
		DEX
		BNE		loc_12A0CA
		LDX		#8
loc_12A0CA:
		TXA
		CLC
		ADC		#6
		ASL
		ASL
		STA		byte_9
		LDA		#$E0
		STA		byte_A
		LDA		#$E4
		STA		byte_B
		JSR		sub_12A0ED
		LDX		#$30
		JSR		sub_12A1F1
		PLA
		STA		byte_B
		PLA
		STA		byte_A
		PLA
		STA		byte_9
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A0ED:
		LDA		byte_12A1DF,X
		CLC
		ADC		byte_C
		STA		word_4+1
		INX
		LDA		byte_12A1DF,X
		STA		word_6
		INX
		TXA
		PHA
		JSR		sub_129DA2
		INC		word_4+1
		JSR		sub_129DA6
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A108:
		LDA		byte_A
		CLC
		ADC		#8
		STA		byte_A
		LDA		byte_B
		CLC
		ADC		#8
		STA		byte_B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A117:
		PHA
		LDA		byte_9
		SEC
		SBC		#8
		TAY
		LDA		#$F8
		LDX		#$F
loc_12A122:
		STA		word_3C,X
		DEX
		BPL		loc_12A122
		LDX		#$3C
		JSR		sub_129DDF
		LDX		#$3C
		JSR		sub_129DDF
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A133:
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		PHA
		PHA
		PHA
		PHA
		PHA
		PHA
		PHA
		PHA
		LDA		#6
		CLC
		ADC		byte_C
		ASL
		STA		word_4
		LDA		#$10
		STA		word_4+1
		LDA		#1
		JSR		_bC_sA
		INC		word_4
		INC		word_4
		PLA
		JSR		_bC_sA
		INC		word_4
		INC		word_4
		PLA
		JSR		_bC_sA
		INC		word_4
		INC		word_4
		LDA		#2
		JSR		_bC_sA
		INC		word_4+1
		INC		word_4+1
		LDA		#6
		JSR		_bC_sA
		DEC		word_4
		DEC		word_4
		PLA
		JSR		_bC_sA
		DEC		word_4
		DEC		word_4
		PLA
		JSR		_bC_sA
		DEC		word_4
		DEC		word_4
		LDA		#5
		JSR		_bC_sA
		LDX		#8
		LDY		#$E
		PLA
		JSR		_areamap_SetTileXY
		LDX		#9
		LDY		#$E
		PLA
		JSR		_areamap_SetTileXY
		LDX		#8
		LDY		#$F
		PLA
		JSR		_areamap_SetTileXY
		LDX		#9
		LDY		#$F
		PLA
		JSR		_areamap_SetTileXY
		LDX		#7
		LDY		#$E
		LDA		#1
		JSR		_areamap_SetTileXY
		LDX		#7
		LDY		#$F
		LDA		#5
		JSR		_areamap_SetTileXY
		LDX		#$A
		LDY		#$E
		LDA		#2
		JSR		_areamap_SetTileXY
		LDX		#$A
		LDY		#$F
		LDA		#6
		JSR		_areamap_SetTileXY
		JSR		_ppu_set_dequeue_flag
		JMP		_wait_for_nmi_is_over_sync
byte_12A1DA:
		.BYTE	$CC
byte_12A1DB:
		.BYTE	$D0
byte_12A1DC:
		.BYTE	$D4
byte_12A1DD:
		.BYTE	$D8
byte_12A1DE:
		.BYTE	$DC
byte_12A1DF:
		.BYTE	  7,$10,  7, $F,  6,$10,  8,$11,  7,$12

; =============== S U B	R O U T	I N E =======================================
sub_12A1E9:
		LDA		#$A
		BNE		sub_12A1F3

; =============== S U B	R O U T	I N E =======================================
sub_12A1ED:
		LDA		#5
		BNE		sub_12A1F3

; =============== S U B	R O U T	I N E =======================================
sub_12A1F1:
		LDA		#1

; =============== S U B	R O U T	I N E =======================================
sub_12A1F3:
		STX		word_4
		TAX
loc_12A1F6:
		TXA
		PHA
		LDX		word_4
		JSR		sub_12A93B
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_12A93B
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_12A93B
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_12A93B
		JSR		_wait_for_nmi_is_over_sync
		PLA
		TAX
		DEX
		BNE		loc_12A1F6
		RTS

; =============== S U B	R O U T	I N E =======================================
; Handles playing the Echoing Flute
;
_bC_sC_item_echoing_flute_use:
		LDA		_location_type
		BEQ		.flute_no_echo				; branch if we're in the overworld
		LDA		_q_OrbsCollected			; load bitset of acquired orbs, we'll shift it around to test the orb for this area
		LDX		#6							; setup a six times loop through _orb_areas_tbl
loc_12A221:
		LDY		_orb_areas_tbl-1,X
		CPY		_mapNumber					; did we match the current map?
		BEQ		.orb_area
		LSR
		DEX
		BNE		loc_12A221
		LDY		#$18 ; House of Pirates		; special: if it's house of pirates (theres two areas for this orb where
		CPY		_mapNumber					; the flute will echo, the building and the basement)
		BNE		.flute_no_echo
		LDA		_q_OrbsCollected
		AND		#2
		BEQ		.flute_echo					; branch straight to echo if we haven't collected this orb yet
											; fall through to the dud if we have collected it
.flute_no_echo:
		SYSX	_apu_load,BGM_JINGLE_ECHOING_FLUTE_DUD				; play the dud music, I would assume
		FARX	_bD_s22_se_wait_and_map_music_start
		MSGX	_msg_m00,$10D
		JSR		_pause_or_skip
		SEC
		RTS
.orb_area:									; matched a map in the table. see whether the orb's still here
		LSR									; test the rotated bit from _q_OrbsCollected
		BCS		.flute_no_echo				; if it's set, we've collected it--theres no echo
		CPX		#4							; orb's still there...
		BNE		.flute_echo					; test for House of Pirates again
		LDY		_global_flags_array.byte18	; if all orbs quests are done
		INY
		BNE		.flute_no_echo				; branch if _global_flags_array.byte18 was anything but #$FF
		LDA		_global_flags_array.byte2	; load THAT DAMN FLAG. seriously, it's overused, what does it mean?
		BMI		.flute_no_echo				; branch if warping is forbidden
.flute_echo:
		SYSX	_apu_load,BGM_JINGLE_ECHOING_FLUTE
		FARX	_bD_s22_se_wait_and_map_music_start
		SEC
		RTS

_orb_areas_tbl:		; a quick list of areas with orbs
		.BYTE	$15	; Tedanki
		.BYTE	$BD ; Navel of the Earth B3
		.BYTE	$17 ; Jipang
		.BYTE	$75 ; New Town Ver.4
		.BYTE	$8B ; House of Pirates B1, treasure
		.BYTE	$20 ; Silver Orb shrine (near Necrogond)

; =============== S U B	R O U T	I N E =======================================
; puts an Orbo to a selected pedestal in particular map only, set corresponding
; bits for placed orbs and used pedestals
;
_bC_s26_item_common_orbs_use:
		LDA		_mapNumber
		CMP		#$25					; Ramia's egg room
		BNE		.fail_exit
		LDX		#$C						; look for the pedestal we use in the first place
loc_12A26F:
		LDA		_orb_pedestal_locations_list-1,X
		DEX
		CMP		_playerMapY
		BNE		loc_12A27E
		LDA		_orb_pedestal_locations_list-1,X
		CMP		_playerMapX
		BEQ		loc_12A283
loc_12A27E:
		DEX
		BNE		loc_12A26F
.fail_exit:
		CLC
		RTS
loc_12A283:
		STX		word_6					; store index
		SEC
		LDA		#0
loc_12A288:
		ROL
		DEX
		DEX
		BPL		loc_12A288				; get the pedestal mask
		STA		word_4					; store it
		AND		_q_OrbsPedestalsUsed	; test if pedestal already used
		BNE		.fail_exit
		LDA		byte_48					; get orb item index
		SEC
		SBC		#$76					; orb item idx - 1
		TAX
		SEC
		LDA		#0
loc_12A29D:
		ROL
		DEX
		BNE		loc_12A29D				; now get the orb flag bit from item idx
		STA		word_4+1				; store it
		AND		_q_OrbsPlaced			; check if we already placed this orb lol
		BNE		.fail_exit
		LDA		_q_OrbsPlaced			; set bits
		ORA		word_4+1
		STA		_q_OrbsPlaced
		LDA		_q_OrbsPedestalsUsed
		ORA		word_4
		STA		_q_OrbsPedestalsUsed
		LDA		word_6					; animation delay
		PHA
		JSR		_sleep_30
		JSR		_bC_s20_warp_bE_sB_arg0
		JSR		_sleep_30
		PLA
		LSR								; set pedestal fire object
		FARX	_b6_s1A_orb_pedestal_fire_start_anim
		SEC
		RTS

; set of coordinates where the pedestals are placed
_orb_pedestal_locations_list:
		.BYTE	  $07,$04
		.BYTE	  $03,$06
		.BYTE	  $0B,$06
		.BYTE	  $03,$0A
		.BYTE	  $0B,$0A
		.BYTE	  $07,$0C

; =============== S U B	R O U T	I N E =======================================
_bC_s2B_item_fairy_flute_use:
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		JSR		_warp_bE_sB_arg0
		JSR		_bC_s3A
		FARX	_bD_s22_se_wait_and_map_music_start
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
		MSGX	_msg_m00,$1B0	; "`Ah! It's like a dream come true! You have broken the seal"
		LDA		#ITEM_SACRED_AMULET
		FARX	_bD_s27_give_item_to_player_msg1
		BCC		loc_12A2FE
		MSGX	_msg_m00,$1B1
		LDA		#0
		BEQ		loc_12A308
loc_12A2FE:
		LDA		_global_flags_array.byte5
		AND		#$DF
		STA		_global_flags_array.byte5
		LDA		#1
loc_12A308:
		PHA
		FARX	_bE_s33
		PLA
		JSR		_bC_s3B
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; Some special effect sequence where the player splits into 4 pieces and flies away
;
sub_12A312:
		FARX	_bE_sD
		LDA		_player_vehicle
		BNE		loc_12A326 ; branch if not on foot
		LDX		#_bC_s16_fidx
		STX		word_3C
		LDX		#_bC_s15_fidx
		STX		word_3C+1
		SYSX	_apu_load,SFX_INVISIBILITY
		JSR		_bC_s17_sys0_spr_effects_call
loc_12A326:
		LDA		#$3E
		FARX	_bE_sC_display_window
		LDX		#1
		LDY		#5
		BIT		byte_AC
		BVC		loc_12A341
		LDA		byte_AC
		AND		#$A0
		STA		byte_AC
		LDA		#$3C
		STA		byte_D2
		LDX		#0
		LDY		#$78
loc_12A341:
		TYA
		FARX	_bE_s4_msg_m00
		JSR		_pause_or_skip
		JMP		_bC_s20_warp_bE_sB_arg0

; =============== S U B	R O U T	I N E =======================================
sub_12A34B:
		LDA		#<[_npcs_pos_list+$28]
		STA		word_6C
		LDA		#>[_npcs_pos_list+$28]
		STA		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s18:
		JSR		sub_12A34B
		BNE		sub_12A35C

; =============== S U B	R O U T	I N E =======================================
_bC_s15:
		JSR		sub_12A39D

; =============== S U B	R O U T	I N E =======================================
sub_12A35C:
		JSR		sub_12A365
		JSR		sub_12A365
		JSR		sub_12A365

; =============== S U B	R O U T	I N E =======================================
sub_12A365:
		JSR		sub_12A3A6
		BCS		loc_12A36D
		FARX	_bD_s19
loc_12A36D:
		LDA		#4
		CLC
		ADC		word_6C
		STA		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s1C:
		JSR		sub_12A34B
		BNE		sub_12A37D

; =============== S U B	R O U T	I N E =======================================
_bC_s16:
		JSR		sub_12A39D

; =============== S U B	R O U T	I N E =======================================
sub_12A37D:
		JSR		sub_12A392
		JSR		sub_12A392
		JSR		sub_12A392
		JSR		sub_12A392
		LDA		#$F0
		ORA		byte_174
		STA		byte_174
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A392:
		JSR		sub_12A3A6
		BCS		loc_12A36D
		JSR		_bC_s38
		JMP		loc_12A36D

; =============== S U B	R O U T	I N E =======================================
sub_12A39D:
		LDA		#<[_players_pos_list]
		STA		word_6C
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A3A6:
		LDA		word_6C
		CMP		#$10
		BCS		loc_12A3B4
		LSR
		LSR
		TAX
		LDA		_party_formation,X
		BMI		sub_12A3DC
loc_12A3B4:
		LDY		#0
		LDA		(word_6C),Y
		SEC
		SBC		_players_pos_list
		CLC
		ADC		#8
		STA		word_4
		INY
		LDA		(word_6C),Y
		SEC
		SBC		_players_pos_list+1
		CLC
		ADC		#7
		STA		word_4+1
		FARX	_bE_s9
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s38:
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDY		#3
		LDA		(word_6C),Y
		JMP		_bC_s9

; =============== S U B	R O U T	I N E =======================================
sub_12A3DC:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s17_sys0_spr_effects_call:
		LDX		#1
loc_12A3E0:
		TXA
		PHA
		LDY		word_3C
		JSR		_sys0_safe
		LDX		#4
		JSR		_sleep_X_sync
		LDY		word_3C+1
		JSR		_sys0_safe
		PLA
		PHA
		TAX
		JSR		_sleep_X_sync
		PLA
		TAX
		INX
		CPX		#9
		BNE		loc_12A3E0
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s39:
		LDA		#<[_npcs_pos_list+$28]
		STA		word_6C
		LDX		#2
		JSR		_bC_sB
		LDA		#$80
		STA		_npcs_pos_list+$28
locret_12A40D:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s3B:
		PHA
		LDA		#<[_npcs_pos_list]
		STA		word_6C
		LDX		#2
		JSR		_bC_sB
		LDA		#$80
		STA		_npcs_pos_list+1
		PLA
		BEQ		locret_12A40D
		LDA		#3
		STA		byte_7673
		LDA		#7
		STA		byte_7697
		LDA		#_bC_s2D_fidx
		STA		word_3C
		LDA		#_bC_s2C_fidx
		STA		word_3C+1
		JMP		_bC_s17_sys0_spr_effects_call

; =============== S U B	R O U T	I N E =======================================
_bC_s3A:
		LDA		#_bC_s2C_fidx
		STA		word_3C
		LDA		#_bC_s2D_fidx
		STA		word_3C+1
		JSR		_bC_s17_sys0_spr_effects_call
		LDA		#$13
		STA		byte_7673
		STA		byte_7697
		LDA		#$F
		STA		_npcs_pos_list
		LDA		#$12
		STA		_npcs_pos_list+1
		LDA		#$92
		STA		_npcs_pos_list+3
		LDA		#$10
		STA		word_6C
		ASL
		ORA		_global_flags_array.byte5
		STA		_global_flags_array.byte5
		LDX		#0

; =============== S U B	R O U T	I N E =======================================
_bC_sB:
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDA		byte_12A47B,X
		STA		word_3C
		LDA		byte_12A47B+1,X
		STA		word_3C+1
		JSR		sub_12A3A6
		BCS		locret_12A47A
		JSR		_bC_s17_sys0_spr_effects_call
locret_12A47A:
		RTS
		
byte_12A47B:
		.BYTE	_bC_s38_fidx
		.BYTE	_bD_s19_fidx
		.BYTE	_bD_s19_fidx
		.BYTE	_bC_s38_fidx

; =============== S U B	R O U T	I N E =======================================
_bC_s2C:
		LDX		#3
		LDA		#7
		BNE		sub_12A488

; =============== S U B	R O U T	I N E =======================================
_bC_s2D:
		LDX		#$13
		TXA

; =============== S U B	R O U T	I N E =======================================
sub_12A488:
		PHA
		LDA		#$F
		SEC
		SBC		_playerMapX
		ASL
		STA		word_4
		LDA		#$10
		CLC
		ADC		word_4
		STA		word_4
		LDA		#$11
		SEC
		SBC		_playerMapY
		ASL
		STA		word_4+1
		LDA		#$E
		CLC
		ADC		word_4+1
		STA		word_4+1
		TXA
		JSR		_bC_sA
		INC		word_4+1
		INC		word_4+1
		PLA
		JSR		_bC_sA
		JMP		_ppu_set_dequeue_flag

; =============== S U B	R O U T	I N E =======================================
sub_12A4B6:
		LDA		_playerMapY
		AND		#$FE
		STA		word_3C+1
		LDY		#0
loc_12A4BE:
		LDA		byte_12A4F8,Y
		CMP		_playerMapX
		BNE		loc_12A4D4
		LDA		byte_12A4F8+1,Y
		CMP		word_3C+1
		BNE		loc_12A4D4
		LDA		byte_12A4F8+2,Y
		CMP		_playerFacingDir
		BEQ		loc_12A4DC
loc_12A4D4:
		INY
		INY
		INY
		CPY		#$27
		BNE		loc_12A4BE
		RTS
loc_12A4DC:
		LDA		#$95
		CPY		#$12
		BCC		loc_12A4EA
		LDA		#$96
		CPY		#$24
		BCC		loc_12A4EA
		LDA		#$97
loc_12A4EA:
		PHA
		JSR		_wrap_bE_sD_wnd3E
		PLA
		LDX		#1
		FARX	_bE_s4_msg_m00
		FARX	_bE_s33
		RTS
byte_12A4F8:
		.BYTE	$23,  2,  3
		.BYTE	 $E,  8,  1
		.BYTE	  8, $E,  1
		.BYTE	 $A, $E,  1
		.BYTE	 $D,$14,  3
		.BYTE	$1F,$14,  3
		.BYTE	$12,  2,  3
		.BYTE	  4, $E,  1
		.BYTE	 $C, $E,  1
		.BYTE	 $E, $E,  1
		.BYTE	  7,$14,  3
		.BYTE	$14,$14,  3
		.BYTE	$14, $E,  3

; =============== S U B	R O U T	I N E =======================================
_bC_s33:
		JSR		sub_177668
		LDA		byte_6BB
		ORA		_npcs_pos_list+$1F
		AND		#$FC
		STA		_npcs_pos_list+$1F
		SYSX	_apu_load,SFX_SKITTER_SKITTER_9E
		JSR		sub_12A55D
		JSR		sub_12A58F
		JSR		sub_12A59F
		SYSX	_apu_load,SFX_KWEHKWEHKWEH_A0
		JSR		sub_12A5CA
		JSR		sub_12A5DB
		LDA		#$B
		JSR		_bC_s0_npc_anim_script_init
		LDA		#$80
		STA		_npcs_pos_list+8
		LDA		#$35
		STA		byte_9E
		LDA		#$F4
		STA		byte_9F
		LDA		_global_flags_array.byte4
		ORA		#$40
		STA		_global_flags_array.byte4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A55D:
		LDA		#$F
		STA		byte_4D
loc_12A561:
		JSR		sub_12A56C
		JSR		sub_12A570
		DEC		byte_4D
		BNE		loc_12A561
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A56C:
		LDA		#2
		BNE		loc_12A572

; =============== S U B	R O U T	I N E =======================================
sub_12A570:
		LDA		#$FE
loc_12A572:
		STA		byte_4C
		JSR		sub_12A5F3
		LDA		word_3E+1
		CLC
		ADC		byte_4C
		STA		word_3E+1
		STA		byte_47
		CLC
		ADC		#8
		STA		byte_43
		STA		word_4A+1
		JSR		sub_12A60A
		LDX		#3
		JMP		_sleep_X_sync

; =============== S U B	R O U T	I N E =======================================
sub_12A58F:
		LDA		#7
		STA		_npcs_pos_list+$1C
		STA		_npcs_pos_list+$1D
		LDA		#$2C
		STA		word_6C
		FARX	_bD_s19
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A59F:
		LDA		#$19
		STA		byte_4C
loc_12A5A3:
		JSR		sub_12A5F3
		JSR		sub_12A621
		JSR		sub_12A621
		JSR		sub_12A621
		JSR		sub_12A60A
		JSR		_wait_for_nmi_is_over_sync
		DEC		byte_4C
		BNE		loc_12A5A3
		LDX		#0
		LDA		#$F8
loc_12A5BD:
		STA		word_3C,X
		INX
		CPX		#$10
		BNE		loc_12A5BD
		JSR		sub_12A60A
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_12A5CA:
		JSR		loc_12A5CD
loc_12A5CD:
		LDX		#$1E
		JSR		_sleep_X_sync
		INC		_npcs_pos_list+$1F

; =============== S U B	R O U T	I N E =======================================
sub_12A5D5:
		FARX	_bD_s19
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_12A5DB:
		LDA		#$64
		STA		word_3C
loc_12A5DF:
		JSR		sub_12A5E7
		DEC		word_3C
		BNE		loc_12A5DF
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A5E7:
		LDA		byte_645
		CLC
		ADC		#$40
		STA		byte_645
		JMP		sub_12A5D5

; =============== S U B	R O U T	I N E =======================================
sub_12A5F3:
		LDA		_npcs_pos_list+$B
		AND		#$3C
		TAY
		LDX		#$3C
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JMP		sub_1741FD

; =============== S U B	R O U T	I N E =======================================
sub_12A60A:
		LDA		_npcs_pos_list+$B
		AND		#$3C
		TAY
		LDX		#$3C
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JMP		sub_174204

; =============== S U B	R O U T	I N E =======================================
sub_12A621:
		DEC		word_3C
		DEC		word_3E+1
		DEC		word_40
		INC		byte_43
		DEC		byte_47
		INC		byte_44
		INC		word_4A+1
		INC		byte_48
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s19_turn_king_of_romaly_on_off:
		BIT		_global_flags_array.byte2
		BVS		loc_12A686
		FARX	_bB_s4_apu_set_flag0
		JSR		_pal_fade_out
		SYSX	_apu_load,BGM_LEVELUP
		FARX	_b0_s56_get_hero_alone_temporary
		LDA		_global_flags_array.byte2
		ORA		#$40
		STA		_global_flags_array.byte2
		FARX	_bB_s7_apu_wait
		JSR		sub_177CFC
		JSR		_ppu_disable
		LDA		#$F
		LDY		#0
		JSR		sub_1762A8
		LDA		#2
		STA		_playerFacingDir
		STA		_players_pos_list+3
		LDA		#$12
		STA		_playerMapX
		STA		_players_pos_list
		LDA		#3
		STA		_playerMapY
		STA		_players_pos_list+1
		JSR		sub_12A6F1
		FARX	_b5_s9
		LDA		#0
		STA		byte_8E
		STA		word_6C
		FARX	_bD_s19
		SYSX	_apu_load,BGM_NOCHANGE_03
		JMP		_ppu_on_and_fade_in
loc_12A686:
		JSR		_pal_fade_out
		FARX	_b0_s4F_return_party_members
		LDA		_global_flags_array.byte2
		AND		#$BF
		STA		_global_flags_array.byte2
		FARX	_bE_s10
		LDA		#$12
		STA		_playerMapX
		LDA		#4
		STA		_playerMapY
		LDA		#$4A
		STA		_mapNumber
		LDA		#0
		STA		_playerFacingDir
		STA		byte_6BC
		JMP		loc_1752EB

; =============== S U B	R O U T	I N E =======================================
_bC_s28:
		LDA		_global_flags_array.byte5
		ORA		#1
		STA		_global_flags_array.byte5
		JSR		sub_12A6C8
		LDY		#$19
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_12A6C4
		LDY		#$39
loc_12A6C4:
		TYA
		JMP		_bC_s0_npc_anim_script_init

; =============== S U B	R O U T	I N E =======================================
sub_12A6C8:
		FARX	_b0_s4E_get_anybody_alone_temporary
		JSR		sub_12A6FD
		LDY		#4
loc_12A6D0:
		LDA		_players_pos_list,Y
		PHA
		TYA
		AND		#3
		CMP		#2
		BEQ		loc_12A6E7
		BCC		loc_12A6E2
		PLA
		ORA		#$80
		BNE		loc_12A6E8
loc_12A6E2:
		LDA		#$80
		STA		_players_pos_list,Y
loc_12A6E7:
		PLA
loc_12A6E8:
		STA		_players_pos_list,X
		INX
		INY
		CPY		#$10
		BNE		loc_12A6D0

; =============== S U B	R O U T	I N E =======================================
sub_12A6F1:
		LDA		#$80
		STA		_players_pos_list+4
		STA		_players_pos_list+8
		STA		_players_pos_list+$C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A6FD:
		LDX		#$10
loc_12A6FF:
		LDA		_players_pos_list+2,X
		CMP		#$FF
		BEQ		locret_12A70C
		INX
		INX
		INX
		INX
		BNE		loc_12A6FF
locret_12A70C:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s2F:
		LDA		#0
		STA		_playerFacingDir
		STA		byte_6BC
		LDA		#$E
		STA		_playerMapX
		LDA		#$C
		STA		_playerMapY
		LDA		#1
		STA		_location_type
		LDA		#$F
		STA		_mapNumber
		LDA		#$6C
		STA		_playerWorldX
		LDA		#$D6
		STA		_playerWorldY
		LDX		#$FF
		TXS
		JMP		loc_174BBB

; =============== S U B	R O U T	I N E =======================================
_bC_s30:
		LDA		_global_flags_array.byte2
		ORA		#$80
		STA		_global_flags_array.byte2
		LDA		#$1B
		JMP		_bC_s0_npc_anim_script_init

; =============== S U B	R O U T	I N E =======================================
_bC_s21:
		FARX	_bE_s22

; =============== S U B	R O U T	I N E =======================================
; Long volcano sounds, then party members seem to fly out of the ground, like a well or a volcano. 
; then the music changes to dungeon
;
sub_12A743:
		SYSX	_apu_load,BGM_QUAKE_22
		LDA		byte_AC
		AND		#$E0
		STA		byte_AC
		JSR		_bC_s1A
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_12A89C
		JSR		sub_12A8C5
		JSR		sub_12A8AE
		JSR		sub_12A78C
		JSR		sub_12A795
		JSR		sub_12A79E
		JSR		sub_12A7A7
		JSR		_bC_s1A
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_12A91B
		JSR		sub_12AA18
		JSR		sub_12A9DC
		JSR		sub_12A9D3
		JSR		sub_12A9CA
		JSR		sub_12A9C1
		JSR		_bC_s5
		SYSX	_apu_load,BGM_QUAKE_21
		JSR		sub_12AA57
		SYSX	_apu_load,BGM_DUNGEON
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A78C:
		LDA		_players_status
		BPL		locret_12A7C0
		LDA		#0
		BEQ		sub_12A7AE

; =============== S U B	R O U T	I N E =======================================
sub_12A795:
		LDA		_players_status+2
		BPL		locret_12A7C0
		LDA		#1
		BNE		sub_12A7AE

; =============== S U B	R O U T	I N E =======================================
sub_12A79E:
		LDA		_players_status+4
		BPL		locret_12A7C0
		LDA		#2
		BNE		sub_12A7AE

; =============== S U B	R O U T	I N E =======================================
sub_12A7A7:
		LDA		_players_status+6
		BPL		locret_12A7C0
		LDA		#3

; =============== S U B	R O U T	I N E =======================================
sub_12A7AE:
		PHA
		JSR		sub_1778D7
		PLA
		JSR		sub_177909
		JSR		sub_12A7DD
loc_12A7B9:
		JSR		sub_12A7C1
		BCC		loc_12A7B9
		INC		word_40
locret_12A7C0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A7C1:
		LDX		#0
loc_12A7C3:
		JSR		sub_12A93B
		STX		byte_43
		JSR		sub_12A828
		LDX		byte_43
		PHP
		PLA
		STA		byte_43
		JSR		_wait_for_nmi_is_over_sync
		CPX		#8
		BNE		loc_12A7C3
		LDA		byte_43
		PHA
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A7DD:
		LDA		byte_42
		STA		_spr_ram
		STA		_spr_ram+4
		CLC
		ADC		#8
		STA		_spr_ram+8
		STA		_spr_ram+$C
		LDA		word_40+1
		STA		_spr_ram+3
		STA		_spr_ram+$B
		CLC
		ADC		#8
		STA		_spr_ram+7
		STA		_spr_ram+$F
		LDA		byte_74
		STA		_spr_ram+1
		LDA		byte_75
		STA		_spr_ram+2
		LDA		byte_76
		STA		_spr_ram+5
		LDA		byte_77
		STA		_spr_ram+6
		LDA		byte_78
		STA		_spr_ram+9
		LDA		byte_79
		STA		_spr_ram+$A
		LDA		byte_7A
		STA		_spr_ram+$D
		LDA		byte_7B
		STA		_spr_ram+$E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A828:
		JSR		sub_12A851
		LDA		_spr_ram
		CMP		#$F7
		BCC		loc_12A834
		LDA		#$FD
loc_12A834:
		SEC
		SBC		#6
		STA		_spr_ram
		STA		_spr_ram+4
		LDA		_spr_ram+8
		CMP		#$F7
		BCS		loc_12A84F
		SEC
		SBC		#6
		STA		_spr_ram+8
		STA		_spr_ram+$C
		CLC
		RTS
loc_12A84F:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A851:
		JSR		sub_12A86B
		TAX
		CLC
		ADC		_spr_ram+3
		STA		_spr_ram+3
		STA		_spr_ram+$B
		TXA
		CLC
		ADC		_spr_ram+7
		STA		_spr_ram+7
		STA		_spr_ram+$F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A86B:
		LDA		_spr_ram+8
		EOR		#$FF
		SEC
		SBC		#$78

; =============== S U B	R O U T	I N E =======================================
sub_12A873:
		PHA
		LDX		word_40
		LDA		word_3C,X
		TAY
		AND		#4
		BNE		loc_12A87F
		LDA		#6
loc_12A87F:
		TAX
		PLA
loc_12A881:
		LSR
		DEX
		BNE		loc_12A881
		PHA
		TYA
		AND		#1
		BNE		loc_12A88F
		PLA
		EOR		#$FF
		RTS
loc_12A88F:
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s1A:
		LDX		#0
		LDA		#$F8
loc_12A895:
		STA		_spr_ram,X
		INX
		BNE		loc_12A895
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A89C:
		LDX		#4
loc_12A89E:
		STX		word_40
		JSR		_rand
		LDX		word_40
		STA		byte_3B,X
		DEX
		BNE		loc_12A89E
		STX		word_40
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A8AE:
		LDA		#$10
		STA		_heroTileMovePixelsRemain
		LDA		#0
		STA		byte_85
loc_12A8B6:
		JSR		sub_175B03
		JSR		sub_12A92A
		LDA		_heroTileMovePixelsRemain
		BNE		loc_12A8B6
		LDA		#$FF
		STA		byte_86
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A8C5:
		LDA		_playerFacingDir
		EOR		#2
		STA		_playerFacingDir
		LDA		#$80
		STA		word_40+1
		LDA		#$6F
		STA		byte_42
		LDA		_playerFacingDir
		AND		#1
		BEQ		loc_12A8EE
		JSR		sub_12A900
		ADC		word_40+1
		STA		word_40+1
		JSR		sub_12A90F
		ADC		_playerMapX
		STA		_playerMapX
		STA		_players_pos_list
		RTS
loc_12A8EE:
		JSR		sub_12A900
		ADC		byte_42
		STA		byte_42
		JSR		sub_12A90F
		ADC		_playerMapY
		STA		_playerMapY
		STA		_players_pos_list+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A900:
		LDX		#$10
		ASL
		EOR		_playerFacingDir
		AND		#2
		BEQ		loc_12A90C
		LDX		#$F0
loc_12A90C:
		TXA
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A90F:
		TXA
		AND		#$80
		CLC
		ROL
		ROL
		ROL
		SEC
		SBC		#1
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A91B:
		LDX		#0
loc_12A91D:
		TXA
		PHA
		JSR		sub_12A92A
		PLA
		TAX
		INX
		CPX		#8
		BNE		loc_12A91D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A92A:
		JSR		loc_12A92D
loc_12A92D:
		LDX		#0

; =============== S U B	R O U T	I N E =======================================
sub_12A92F:
		JSR		sub_12A93B
		JSR		_wait_for_nmi_is_over_sync
		TXA
		AND		#7
		BNE		sub_12A92F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A93B:
		LDY		#0
		JSR		sub_12A941
		INY

; =============== S U B	R O U T	I N E =======================================
sub_12A941:
		LDA		_ppu_scroll_shadow,Y
		PHA
		CLC
		ADC		byte_12A967,X
		STA		_ppu_scroll_shadow,Y
		JSR		_spr_Y_pos_adjust_safe
		PLA
		CPY		#0
		BEQ		loc_12A956
loc_12A954:
		INX
		RTS
loc_12A956:
		EOR		_ppu_scroll_shadow,Y
		AND		#$80
		BEQ		loc_12A954
		LDA		_ppu_ctrl_shadow
		EOR		#1
		STA		_ppu_ctrl_shadow
		INX
		RTS
byte_12A967:
		.BYTE	  3,  3,  0,$FE,$FD,  2,  0,$FD
		.BYTE	  2,  2,  0,$FF,$FE,  2,  0,$FD
		.BYTE	  2,  2,  0,$FF,$FE,  1,  0,$FE
		.BYTE	  2,  2,  0,$FF,$FE,  1,  0,$FE
		.BYTE	  1,  1,  0,  0,$FF,  0,  0,$FF
		.BYTE	  1,  0,$FF,  0,  0,  0,  0,  0
		.BYTE	  4,  4,  0,$FD,$FC,  3,  0,$FC

; =============== S U B	R O U T	I N E =======================================
_spr_Y_pos_adjust_safe:
		TYA
		PHA
		JSR		_spr_Y_pos_adjust
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
_spr_Y_pos_adjust:
		LDY		#0
		CMP		#0
		BNE		loc_12A9AF
		LDY		#3
loc_12A9AF:
		LDA		_spr_ram,Y
		SEC
		SBC		byte_12A967,X
		STA		_spr_ram,Y
		TYA
		CLC
		ADC		#4
		TAY
		BCC		loc_12A9AF
locret_12A9C0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A9C1:
		LDA		_players_status
		BPL		locret_12A9C0
		LDA		#0
		BEQ		loc_12A9E3

; =============== S U B	R O U T	I N E =======================================
sub_12A9CA:
		LDA		_players_status+2
		BPL		locret_12A9C0
		LDA		#4
		BNE		loc_12A9E3

; =============== S U B	R O U T	I N E =======================================
sub_12A9D3:
		LDA		_players_status+4
		BPL		locret_12A9C0
		LDA		#8
		BNE		loc_12A9E3

; =============== S U B	R O U T	I N E =======================================
sub_12A9DC:
		LDA		_players_status+6
		BPL		locret_12A9C0
		LDA		#$C
loc_12A9E3:
		STA		byte_44
		LDX		#0
loc_12A9E7:
		TXA
		PHA
		ASL
		AND		#6
		TAX
		JSR		sub_12A93B
		JSR		sub_12A9FE
		JSR		_wait_for_nmi_is_over_sync
		PLA
		TAX
		INX
		CPX		#$20
		BNE		loc_12A9E7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A9FE:
		LDY		byte_44
loc_12AA00:
		LDX		#$45
		JSR		sub_1741FD
		LDA		byte_45
		CLC
		ADC		#4
		STA		byte_45
		LDX		#$45
		JSR		sub_174204
		INY
		TYA
		AND		#3
		BNE		loc_12AA00
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AA18:
		LDA		#<[_players_pos_list]
		STA		word_6C
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDA		#2
		STA		_playerFacingDir
		JSR		sub_12AA2E
		JSR		sub_12AA2E
		JSR		sub_12AA2E

; =============== S U B	R O U T	I N E =======================================
sub_12AA2E:
		LDA		word_6C
		LSR
		TAX
		LDA		_players_status,X
		BPL		loc_12AA4F
		LDA		_playerMapX
		STA		byte_80
		LDA		_playerMapY
		SEC
		SBC		#8
		STA		byte_81
		LDY		#3
		LDA		(word_6C),Y
		AND		#$FC
		ORA		#2
		STA		(word_6C),Y
		FARX	_bD_s1A
loc_12AA4F:
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AA57:
		LDX		#8
		STX		word_3C
		JSR		sub_12AA67
		JSR		sub_12AA67
		JSR		sub_12AA67
		JSR		sub_12AA67

; =============== S U B	R O U T	I N E =======================================
sub_12AA67:
		LDA		#0
		STA		word_3C+1
loc_12AA6B:
		LDX		word_3C
		JSR		sub_12A92F
		INC		word_3C+1
		LDA		word_3C+1
		CMP		#$C
		BNE		loc_12AA6B
		LDA		word_3C
		CLC
		ADC		#8
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
; Sword of gaia thrown into volcano. Eruption! Lava flows over path
;
_bC_s24_volcano_event:
		LDA		_playerWorldX
		CMP		#$4A ; check for special world location (near volcano). this has already been checked, but I guess this is a double check
		BNE		loc_12AA8C
		LDA		_playerWorldY
		CMP		#$90
		BEQ		loc_12AA8E
loc_12AA8C:
		CLC
		RTS
loc_12AA8E:
		JSR		_bC_s20_warp_bE_sB_arg0
		JSR		sub_12AE73
		JSR		sub_12AB1E
		JSR		_volcano_rumble
		SYSX	_apu_load,BGM_QUAKE_22
		JSR		sub_12AB31
		JSR		_volcano_eruption_spew
		JSR		sub_12AC5C
		JSR		sub_12ADB1
		JSR		sub_12AD96
		SYSX	_apu_load,BGM_VOLCANO_HISSING
		JSR		sub_12AC79
		JSR		sub_12ADD7
		JSR		sub_12AC69
		LDX		#$2D
		JSR		_sleep_X_sync
		JSR		sub_12AE80
		JSR		sub_12AF78
		SYSX	_apu_load,#BGM_OVERWORLD ; resume overworld music
		LDA		_global_flags_array.byte1 ; set _q_VolcanoErupted
		ORA		#8
		STA		_global_flags_array.byte1
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
;
;
_volcano_rumble:
		LDX		#$28
		STX		word_3C
		SYSX	_apu_load,BGM_QUAKE_20
		JSR		sub_12AAEA
		JSR		sub_12AAEA
		SYSX	_apu_load,BGM_QUAKE_21
		JSR		sub_12AAEA
		JSR		sub_12AAEA

; =============== S U B	R O U T	I N E =======================================
sub_12AAEA:
		LDA		#0
		STA		word_3C+1
loc_12AAEE:
		LDX		word_3C
		JSR		sub_12A92F
		INC		word_3C+1
		LDA		word_3C+1
		AND		#3
		BNE		loc_12AAFE
		JSR		sub_12AB0C
loc_12AAFE:
		LDA		word_3C+1
		CMP		#$10
		BNE		loc_12AAEE
		LDA		word_3C
		SEC
		SBC		#8
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB0C:
		LDA		word_3C+1
		AND		#4
		LSR
		LSR

; =============== S U B	R O U T	I N E =======================================
sub_12AB12:
		CLC
		ADC		#$F
		STA		byte_45
		LDY		#$18
		STY		byte_46
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12AB1E:
		JSR		sub_12ADB7
		LDY		#$18
		JSR		sub_12ADC6
		LDY		#$18
		STY		byte_46
		LDA		#$10
		STA		byte_45
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12AB31:
		LDA		#0
		STA		word_3C
loc_12AB35:
		JSR		sub_12AB49
		INC		word_3C
		LDA		word_3C
		AND		#2
		LSR
		JSR		sub_12AB12
		LDA		word_3C
		CMP		#$20
		BNE		loc_12AB35
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB49:
		LDX		#$30
loc_12AB4B:
		JSR		sub_12A93B
		JSR		_wait_for_nmi_is_over_sync
		TXA
		AND		#7
		BNE		loc_12AB4B
		LDA		_ppu_mask_shadow
		EOR		#1
		STA		_ppu_mask_shadow
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB5F:
		LDA		#0
		STA		word_3C
loc_12AB63:
		JSR		_rand
		LDX		word_3C
		STA		word_40+1,X
		INX
		STX		word_3C
		CPX		#$10
		BCC		loc_12AB63
		LDA		#$7F
		STA		word_4
		LDA		#$FF
		STA		word_4+1
		LDA		#1
		STA		word_6
		LDA		#$84
		STA		word_6+1
loc_12AB81:
		LDY		#$30
		STY		word_3C
loc_12AB85:
		LDX		#4
		JSR		sub_174204
		INY
		CPY		#$40
		BNE		loc_12AB85
		RTS

; =============== S U B	R O U T	I N E =======================================
_volcano_eruption_spew:
		LDA		#0
		STA		word_3E+1
loc_12AB94:
		SYSX	_apu_load,SFX_VOLCANO_ERUPTION_SPEW
		JSR		sub_12ABC3
		INC		word_3E+1
		LDA		word_3E+1
		ASL
		ASL
		TAX
loc_12ABA1:
		TXA
		PHA
		LDX		#$10
		JSR		sub_12ABB4
		PLA
		TAX
		DEX
		BNE		loc_12ABA1
		LDA		word_3E+1
		CMP		#4
		BNE		loc_12AB94
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12ABB4:
		JSR		sub_12ABBD
		JSR		sub_12ABBD
		JSR		sub_12ABBD

; =============== S U B	R O U T	I N E =======================================
sub_12ABBD:
		JSR		sub_12A93B
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_12ABC3:
		JSR		sub_12AB5F
		LDA		#0
		STA		word_3C+1
		LDA		#$30
		STA		word_3E
		LDA		#0
		JSR		sub_12AB12
loc_12ABD3:
		LDA		#5
		STA		word_40
		LDA		#$30
		STA		word_3C
		JSR		sub_12AC0E
		LDX		word_3E
		JSR		sub_12A93B
		TXA
		AND		#7
		BNE		loc_12ABED
		TXA
		SEC
		SBC		#8
		TAX
loc_12ABED:
		STX		word_3E
		JSR		_wait_for_nmi_is_over_sync
		INC		word_3C+1
		LDA		word_3C+1
		CMP		#$10
		BCC		loc_12ABD3
		AND		#7
		BNE		loc_12ABD3
		LDA		#1
		JSR		sub_12AB12
		LDA		#8
		STA		word_3E
		LDA		word_3C+1
		CMP		#$40
		BNE		loc_12ABD3
locret_12AC0D:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AC0E:
		LDA		_nmi_counter
		AND		#1
		BEQ		locret_12AC0D
		LDY		word_3C
		LDX		#4
		JSR		sub_1741FD
		LDA		word_4
		EOR		#$7F
		JSR		sub_12A873
		CLC
		ADC		word_6+1
		STA		word_6+1
		JSR		sub_12AC3C
		LDY		word_3C
		LDX		#4
		JSR		sub_174204
		INC		word_40
		INY
		STY		word_3C
		CPY		#$40
		BNE		sub_12AC0E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AC3C:
		LDA		word_4
		CMP		#$F0
		BCS		loc_12AC55
		LDX		word_40
		LDA		word_3C,X
		AND		#$F
		CMP		#4
		BCS		loc_12AC4E
		ORA		#4
loc_12AC4E:
		SBC		word_4
		EOR		#$FF
		STA		word_4
		RTS
loc_12AC55:
		LDA		#$F8
		STA		word_4
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AC5C:
		LDA		#$F8
		STA		word_4
		STA		word_4+1
		STA		word_6
		STA		word_6+1
		JMP		loc_12AB81

; =============== S U B	R O U T	I N E =======================================
sub_12AC69:
		LDA		#8
		STA		word_4
		LDA		#$18
		STA		word_4+1
		LDA		#$26
		JSR		_bC_sA
		JMP		_ppu_force_dequeue

; =============== S U B	R O U T	I N E =======================================
sub_12AC79:
		LDA		#0
		STA		word_3C
		STA		word_3C+1
		LDA		#$18
		STA		word_3E
		LDA		#$20
		STA		word_3E+1
loc_12AC87:
		JSR		sub_12AD00
		LDA		word_3E
		AND		#$38
		LSR
		LSR
		LSR
		TAX
		INX
loc_12AC93:
		TXA
		PHA
		JSR		sub_12ACEB
		JSR		_wait_for_nmi_is_over_sync
		PLA
		TAX
		DEX
		BNE		loc_12AC93
		INC		word_3C
		LDA		word_3C
		AND		#$F
		BNE		loc_12AC87
		LDX		word_3C+1
		LDA		byte_12ADF4,X
		CMP		#2
		BEQ		loc_12ACB8
		DEC		word_4
		DEC		word_4
		JMP		loc_12ACBC
loc_12ACB8:
		INC		word_4+1
		INC		word_4+1
loc_12ACBC:
		LDX		#1
		LDA		word_3C
		CMP		#$11
		BCS		loc_12ACC6
		LDX		#5
loc_12ACC6:
		TXA
		JSR		_bC_sA
		JSR		_ppu_set_dequeue_flag
		JSR		sub_12AD3F
		JSR		sub_12AE3D
		INC		word_3C+1
		LDA		word_3C
		AND		#$10
		BEQ		loc_12ACE4
		LDA		word_3E+1
		STA		word_3E
		CLC
		ADC		#8
		STA		word_3E+1
loc_12ACE4:
		LDA		word_3C
		CMP		#$70
		BCC		loc_12AC87
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12ACEB:
		LDX		word_3E
		CPX		#$30
		BCS		locret_12ACFF
		JSR		sub_12A93B
		TXA
		CMP		word_3E+1
		BCC		loc_12ACFD
		LDA		word_3E
		AND		#$38
loc_12ACFD:
		STA		word_3E
locret_12ACFF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AD00:
		LDY		#$3C
		LDX		word_3C+1
		LDA		byte_12ADF4,X
		CMP		#2
		BEQ		loc_12AD17
		JSR		sub_12AD23
		JSR		sub_12AD23
		JSR		sub_12AD23
		JMP		sub_12AD23
loc_12AD17:
		JSR		sub_12AD31
		JSR		sub_12AD31
		JSR		sub_12AD31
		JMP		sub_12AD31

; =============== S U B	R O U T	I N E =======================================
sub_12AD23:
		LDX		#$48
		JSR		sub_1741FD
		DEC		word_4A+1
		LDX		#$48
		JSR		sub_174204
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AD31:
		LDX		#$48
		JSR		sub_1741FD
		INC		byte_48
		LDX		#$48
		JSR		sub_174204
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AD3F:
		LDA		word_3C+1
		ASL
		ASL
		CLC
		ADC		#$18
		TAY
		LDX		#$48
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		JSR		sub_1741FD
		INY
		STY		byte_46
		LDA		word_3C+1
		TAX
		CLC
		ADC		#8
		STA		byte_45
		LDA		byte_12ADF4,X
		CMP		#2
		BEQ		loc_12AD7D
		LDX		#3
loc_12AD6C:
		LDA		byte_48,X
		SEC
		SBC		#$10
		STA		byte_48,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_12AD6C
		BCS		loc_12AD8E
loc_12AD7D:
		LDX		#0
loc_12AD7F:
		LDA		byte_48,X
		CLC
		ADC		#$10
		STA		byte_48,X
		INX
		INX
		INX
		INX
		CPX		#$10
		BCC		loc_12AD7F
loc_12AD8E:
		JSR		sub_12ADC6
		LDY		byte_46
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12AD96:
		LDA		#$10
		STA		word_4
		LDA		#$10
		STA		word_4+1
		JSR		sub_12ADB7
		LDY		#$18
		JSR		sub_12ADC6
		LDY		#$18
		STY		byte_46
		LDA		#8
		STA		byte_45
		JMP		sub_12AE45

; =============== S U B	R O U T	I N E =======================================
sub_12ADB1:
		JSR		sub_12ADB7
		JMP		sub_12ADC4

; =============== S U B	R O U T	I N E =======================================
sub_12ADB7:
		LDX		#0
loc_12ADB9:
		LDA		byte_12ADE4,X
		STA		byte_48,X
		INX
		CPX		#$10
		BNE		loc_12ADB9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12ADC4:
		LDY		#$3C

; =============== S U B	R O U T	I N E =======================================
sub_12ADC6:
		LDX		#$48
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JMP		sub_174204

; =============== S U B	R O U T	I N E =======================================
sub_12ADD7:
		LDX		#0
		LDA		#$F8
loc_12ADDB:
		STA		byte_48,X
		INX
		CPX		#$10
		BNE		loc_12ADDB
		BEQ		sub_12ADC4
byte_12ADE4:
		.BYTE	$7F,$F4,  1,$80,$7F,$F5,  1,$88,$87,$F5,$81,$80,$87,$F4,$81,$88
byte_12ADF4:
		.BYTE	  3,  3,  2,  3,  2,  3,  2,  2
byte_12ADFC:
		.BYTE	  1,  0,  1,  0,  1,  0,  1,  0,  1,  2,  3,  2,  3,  2,  0,  4
		.BYTE	  5
word_12AE0D:
		.WORD	 $1F1,$41F0, $1F0,$41F1, $1F4, $1F5,$81F5,$81F4
		.WORD	 $1F3, $1F5, $1F0, $1F2,$C1F2,$C1F0,$C1F5,$C1F3
		.WORD	 $1FA, $1FB, $1F6, $1F7, $1FC, $1FD, $1F8, $1F9

; =============== S U B	R O U T	I N E =======================================
sub_12AE3D:
		LDY		#$3C
		STY		byte_46
		LDA		word_3C+1
		STA		byte_45

; =============== S U B	R O U T	I N E =======================================
sub_12AE45:
		LDX		#$48
		JSR		sub_1741FD
		LDX		byte_45
		LDA		byte_12ADFC,X
		ASL
		ASL
		ASL
		STA		byte_47
		TYA
		SEC
		SBC		byte_46
		ASL
		CLC
		ADC		byte_47
		TAX
		LDA		word_12AE0D,X
		STA		byte_49
		LDA		word_12AE0D+1,X
		STA		word_4A
		LDX		#$48
		JSR		sub_174204
		INY
		TYA
		AND		#3
		BNE		sub_12AE45
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AE73:
		LDA		#$F
		STA		_tmp21+2
		LDA		#0
		STA		byte_24
		STA		byte_25
		JMP		_chd_lib_data_send

; =============== S U B	R O U T	I N E =======================================
sub_12AE80:
		JSR		sub_174DF6
		LDA		#0
		STA		word_3E
		LDA		#$F
		STA		word_3E+1
		LDA		#$60
		STA		word_40
		LDA		#6
		STA		word_40+1

; =============== S U B	R O U T	I N E =======================================
sub_12AE93:
		LDX		#0
		STX		word_3C
loc_12AE97:
		LDA		word_3C
		ASL
		TAY
		LDA		word_12AEF8,Y
		STA		word_3C+1
		TAX
loc_12AEA1:
		LDA		byte_7800,X
		AND		word_12AEF8+1,Y
		STA		byte_7800,X
		TXA
		CLC
		ADC		#8
		TAX
		CPX		word_40
		BCC		loc_12AEA1
		LDX		_ppu_queue_pos
loc_12AEB6:
		LDA		word_3E+1
		STA		_ppu_queue_buf,X
		INX
		LDA		word_3C+1
		TAY
		CLC
		ADC		word_3E
		STA		_ppu_queue_buf,X
		INX
		LDA		byte_7800,Y
		STA		_ppu_queue_buf,X
		INX
		TYA
		CLC
		ADC		#8
		TAY
		STY		word_3C+1
		CPY		word_40
		BCC		loc_12AEB6
		STX		_ppu_queue_pos
		LDA		word_40
		LSR
		LSR
		LSR
		CLC
		ADC		_ppu_queue_chunks_count
		STA		_ppu_queue_chunks_count
		JSR		_ppu_set_dequeue_flag
		LDX		word_40+1
		JSR		_sleep_X_sync
		INC		word_3C
		LDA		word_3C
		CMP		#$40
		BNE		loc_12AE97
		RTS
word_12AEF8:
		.WORD	$7F01,$7F06,$BF03,$7F00,$FE05,$FE01,$FD07,$F702
		.WORD	$BF06,$7F03,$FE06,$BF04,$F707,$FD04,$F701,$7F07
		.WORD	$7F02,$FB07,$F700,$7F05,$FB04,$FD01,$FB02,$F706
		.WORD	$FB05,$FB06,$DF03,$FE04,$BF01,$FD02,$FE00,$EF02
		.WORD	$FE03,$7F04,$EF01,$BF05,$F704,$FE07,$EF00,$EF06
		.WORD	$F705,$DF01,$FE02,$BF07,$BF02,$FD06,$FD05,$F703
		.WORD	$FD03,$FB03,$FD00,$DF04,$EF05,$FB00,$FB01,$DF00
		.WORD	$DF02,$DF07,$DF06,$EF03,$EF07,$EF04,$DF05,$BF00

; =============== S U B	R O U T	I N E =======================================
sub_12AF78:
		LDA		#$18
		STA		word_3C
		LDA		#$F8
		STA		word_3C+1
		STA		word_3E
		STA		word_3E+1
		STA		word_40
		LDY		word_3C
loc_12AF88:
		LDX		#$3D
		JSR		sub_174204
		INY
		CPY		#$40
		BNE		loc_12AF88
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
; handling for taking steps?
;
_bC_s14:
		LDA		_npc_anim_script_idx
		BNE		loc_12AFA9
		JSR		sub_12B041
		JSR		sub_12B080
		JSR		sub_12B0B0
		JSR		_item_staff_of_change_timer
		JSR		sub_12B0FA
loc_12AFA9:
		LDA		byte_9A
		BNE		loc_12AFB3
		JSR		_bC_s29 ; some special event
		JMP		locret_12AFC6
loc_12AFB3:
		LDX		#0
		LDA		_mapNumber
loc_12AFB7:
		CMP		byte_12AFC7,X ; check for special map numbers
		BEQ		loc_12AFC3
		INX
		CPX		#$17
		BNE		loc_12AFB7
		BEQ		locret_12AFC6
loc_12AFC3:
		JSR		sub_12AFDE
locret_12AFC6:
		RTS

byte_12AFC7:
		.BYTE	$BD ; Navel of the Earth B3
		.BYTE	$D2 ; Pyramid 3F
		.BYTE	$61 ; Samanao Castle
		.BYTE	$4F ; Romaly Castle 4F
		.BYTE	$02 ; Eginbear
		.BYTE	$01 ; Romaly
		.BYTE	$75 ; New Town Ver.4 (run into the ground by merchant)
		.BYTE	$0F ; Lancel
		.BYTE	$0C ; Assaram
		.BYTE	$7A ; Assaram, basement, "this is a nice town, especially at night!"
		.BYTE	$CB ; Castle of Zoma B4
		.BYTE	$08 ; Castle of Zoma 1F
		.BYTE	$B2 ; Isis Castle B2 (Meteorite Armband treasure room)
		.BYTE	$A3 ; Cave West of Noaniels B2 
		.BYTE	$CC ; Castle of Zoma B5 ; ultimately goes to some eruption from the ground effect sequence
		.BYTE	$C3 ; Cave Northwest of Tantegal B2 
		.BYTE	$41 ; Aliahan upstairs, Hero's apartment
		.BYTE	$47 ; Aliahan Castle throne room
		.BYTE	$EB ; Tower of Shanpane 4F
		.BYTE	$EC ; Tower of Shanpane 5F
		.BYTE	$EE ; Tower of Shanpane 6F
		.BYTE	$BB ; Cave of Jipang B2
		.BYTE	$6B ; Tantegal Castle 2F, throne room

; =============== S U B	R O U T	I N E =======================================
; X: an index into function pointer table off_12AFEE
;
sub_12AFDE:
		TXA
		ASL
		TAX
		LDA		off_12AFEE,X
		STA		word_3C
		LDA		off_12AFEE+1,X
		STA		word_3C+1
		JMP		(word_3C)
off_12AFEE:
		.WORD	sub_12A4B6
		.WORD	sub_12B189
		.WORD	sub_12B200
		.WORD	sub_12B241
		.WORD	sub_12B263
		.WORD	sub_12B29D
		.WORD	sub_12B2BD
		.WORD	sub_12B2EB
		.WORD	sub_12B3D1
		.WORD	sub_12B493
		.WORD	sub_12B518
		.WORD	sub_12B5AD
		.WORD	sub_12B6AF
		.WORD	sub_12B7C8
		.WORD	sub_12B7E1 ; ultimately goes to some eruption from the ground effect sequence
		.WORD	sub_12B97E
		.WORD	sub_12B999
		.WORD	sub_12B99D
		.WORD	sub_12908F
		.WORD	sub_1290E1
		.WORD	sub_129120
		.WORD	sub_129162
		.WORD	sub_12B9A1

; =============== S U B	R O U T	I N E =======================================
_item_staff_of_change_timer:
		LDA		_player_vehicle
		BNE		locret_12B040
		LDA		_global_flags_array.byte14
		AND		#$3F
		BEQ		locret_12B040
		DEC		_global_flags_array.byte14
		LDA		_global_flags_array.byte14
		AND		#$3F
		BNE		locret_12B040
		JSR		_wait_for_nmi_is_over_sync
		FARX	_bE_s10
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$1AF	; "The Staff of Change effect wears off"
		FARX	_bE_s33
locret_12B040:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B041:
		LDA		_player_vehicle
		BNE		locret_12B040 ; branch if not on foot
		LDA		byte_AC
		AND		#$1F
		BEQ		locret_12B040
		LDA		byte_9A
		BEQ		loc_12B070
		LDA		_mapNumber
		CMP		#$61
		BNE		loc_12B070
		LDA		_playerMapX
		CMP		#$E
		BNE		loc_12B070
		LDA		_playerMapY
		CMP		#$D
		BNE		loc_12B070
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT ; probably
		BCS		loc_12B070
		LDA		byte_AC
		AND		#$E0
		ORA		#1
		STA		byte_AC
loc_12B070:
		LDA		byte_AC
		SEC
		SBC		#1
		STA		byte_AC
		AND		#$1F
		BEQ		loc_12B07C
		RTS
loc_12B07C:
		JSR		sub_12A312
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B080:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		word_3C
		JSR		sub_12B0EB
loc_12B08A:
		JSR		sub_12B0A6
		BPL		loc_12B09D
		LDY		word_3C+1
		LDA		_party_equipment_buffs,Y
		AND		#2
		BEQ		loc_12B09D
		STY		byte_CE
		JSR		_sram_b0_s4_player_HP_add
loc_12B09D:
		INC		word_3C+1
		LDA		word_3C+1
		CMP		word_3C
		BNE		loc_12B08A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B0A6:
		LDX		word_3E
		INC		word_3E
		INC		word_3E
		LDA		_players_status+1,X
locret_12B0AF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B0B0:
		LDA		byte_9A
		BNE		locret_12B0AF
		LDA		_player_vehicle
		BNE		locret_12B0AF
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		word_3C
		JSR		sub_12B0EB
		STA		word_3E+1
loc_12B0C4:
		JSR		sub_12B0A6
		BPL		loc_12B0DB
		LDY		word_3E+1
		LDA		_party_equipment_buffs,Y
		AND		#4
		BEQ		loc_12B0DB
		STY		byte_CE
		JSR		_sram_b0_s1A_player_EXP_add
		LDA		#$FF
		STA		word_3C+1
loc_12B0DB:
		INC		word_3E+1
		LDA		word_3E+1
		CMP		word_3C
		BNE		loc_12B0C4
		LDA		word_3C+1
		BEQ		locret_12B0EA
		FARX	_b0_s46_players_level_up_test
locret_12B0EA:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B0EB:
		LDA		#1
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		STA		byte_D1
		STA		word_3C+1
		STA		word_3E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B0FA:
		JSR		_sram_b0_s31_get_party_chars_list
		LDY		#0
loc_12B0FF:
		LDA		byte_93,Y
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		CMP		#5
		BEQ		locret_12B123
		CMP		#6
		BEQ		locret_12B123
		INY
		CPY		word_4
		BNE		loc_12B0FF
		LDA		byte_AC
		AND		#$A0
		CMP		#$A0
		BNE		locret_12B123
		LDA		byte_AC
		AND		#$7F
		STA		byte_AC
locret_12B123:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s29:
		LDA		_global_flags_array.byte1
		AND		#$40
		BNE		locret_12B163
		LDA		_playerWorldX ; check for special world location, east of romaly. are shoals or wreckage there?
		CMP		#$56
		BNE		locret_12B163
		LDA		_playerWorldY
		CMP		#$48
		BNE		locret_12B163
		LDA		_player_vehicle
		CMP		#VEHICLE_SHIP
		BNE		locret_12B163 ; branch if we're not in the ship
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$10A ; "From out of nowhere, a plaintive voice is heard..."
		SYSX	_apu_load,BGM_SILENCE
		SYSX	_apu_load,BGM_OLIVIA
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		JSR		_bC_s20_warp_bE_sB_arg0
		LDA		#0
		STA		byte_6EB
		LDA		#$C
		STA		byte_6EF
		LDA		#$40
		STA		_npc_anim_script_idx
		LDA		#$A8
		STA		_npc_anim_script_flags
locret_12B163:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s2A:
		LDA		_mapNumber
		CMP		#$2F
		BNE		locret_12B163
		LDA		_playerMapY
		CMP		#$11
		BNE		locret_12B163
		LDA		_npcs_pos_list
		CMP		#$31
		BNE		locret_12B163
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$1A4
		JSR		sub_174D4F
		LDA		#7
		STA		_npc_anim_script_idx
		JSR		_bC_s0_npc_anim_script_init
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B189:
		LDA		_playerMapY
		CMP		#$1A
		BNE		locret_12B1A1
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$141
		FARX	_bE_s1C_yes_or_no_question
		BEQ		sub_12B1A2

; =============== S U B	R O U T	I N E =======================================
; wraps _bE_sB with an argument of u8[$8E]=A=0
;
_bC_s20_warp_bE_sB_arg0:
		LDA		#0
		STA		byte_8E
		FARX	_bE_sB
locret_12B1A1:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B1A2:
		LDA		_playerMapX
		CMP		#$1A
		BEQ		loc_12B1B2
		CMP		#3
		BEQ		loc_12B1CB
loc_12B1AC:
		LDA		#8
		STA		_tile_type_and_collision_flags+$13
		RTS
loc_12B1B2:
		FARX	_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
		MSGX	_msg_m00,$1AE
		LDA		_global_flags_array.byte2
		AND		#8
		BNE		loc_12B1F9
		LDA		#8
		ORA		_global_flags_array.byte2
		STA		_global_flags_array.byte2
		BNE		loc_12B1FC
loc_12B1CB:
		LDA		_global_flags_array.byte2
		TAX
		AND		#8
		BEQ		loc_12B1AC
		TXA
		AND		#$10
		BNE		loc_12B1F9
		TXA
		ORA		#$10
		STA		_global_flags_array.byte2
		SYSX	_apu_load,SFX_PYRAMID_BOULDER_MOVE
		FARX	_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
		MSGX	_msg_m00,$180 ; "<name> pushes the button<br>"
		LDA		#$13
		STA		byte_753A
		STA		byte_753B
		STA		byte_7558
		STA		byte_7559
		BNE		loc_12B1FC
loc_12B1F9:
		MSGX	_msg_m00,$040 ; "But nothing happens!"
loc_12B1FC:
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B200:
		LDA		_playerMapX
		CMP		#$E
		BNE		locret_12B21A
		LDA		_playerMapY
		CMP		#$D
		BNE		locret_12B21A
		LDA		_global_flags_array.byte18
		AND		#$20
		BNE		locret_12B21A						; test _q_SamanaoDone
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_12B21B
locret_12B21A:
		RTS
loc_12B21B:
		JSR		_wrap_bE_sD_wnd3E
		LDA		_global_flags_array.byte4
		AND		#1
		BEQ		loc_12B22B
		MSGX	_msg_m00,$170
		JMP		loc_12B236
loc_12B22B:
		LDA		_global_flags_array.byte4
		ORA		#1
		STA		_global_flags_array.byte4
		MSGX	_msg_m00,$16A
loc_12B236:
		MSGX	_msg_m00,$16B
		LDA		#$C
		JSR		_bC_s0_npc_anim_script_init
		JMP		sub_174D4F

; =============== S U B	R O U T	I N E =======================================
sub_12B241:
		LDA		_playerMapX
		CMP		#$B
		BCC		locret_12B262
		LDA		_playerMapY
		AND		#$FE
		CMP		#$A
		BNE		locret_12B262
		LDA		_npcs_pos_list+1
		CMP		#7
		BNE		locret_12B262
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		locret_12B262
		LDA		#$13
		JSR		_bC_s0_npc_anim_script_init
locret_12B262:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B263:
		LDA		_playerMapY
		CMP		#$25
		BNE		locret_12B262
		LDA		_playerFacingDir
		CMP		#2
		BEQ		locret_12B262
		LDA		byte_AC
		AND		#$1F
		BNE		locret_12B262
		LDX		#$14
		LDY		#$14
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_12B285
		LDX		#$14
		LDY		#$35
loc_12B285:
		LDA		_playerMapX
		CMP		_players_pos_list,X
		BEQ		locret_12B262
		CMP		#$D
		BEQ		loc_12B298
		CMP		#$E
		BNE		locret_12B262
		TYA
		JMP		_bC_s0_npc_anim_script_init
loc_12B298:
		INY
		TYA
		JMP		_bC_s0_npc_anim_script_init

; =============== S U B	R O U T	I N E =======================================
sub_12B29D:
		BIT		_global_flags_array.byte2
		BVC		locret_12B2BC
		LDA		_playerMapX
		AND		#$FE
		CMP		#$10
		BNE		locret_12B2BC
		LDA		_playerMapY
		CMP		#$2D
		BNE		locret_12B2BC
		LDA		_npcs_pos_list+$18
		CMP		#$F
		BNE		locret_12B2BC
		LDA		#$16
		JSR		_bC_s0_npc_anim_script_init
locret_12B2BC:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B2BD:
		LDA		_playerFacingDir
		CMP		#3
		BNE		locret_12B2BC
		LDA		_global_flags_array.byte18
		CMP		#$FF
		BNE		loc_12B2D0
		LDA		_global_flags_array.byte2
		BPL		locret_12B2BC
loc_12B2D0:
		LDA		_playerMapX
		CMP		#$1C
		BNE		locret_12B2BC
		LDA		_playerMapY
		CMP		#$18
		BNE		locret_12B2BC
		LDY		#$17
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_12B2E7
		LDY		#$37
loc_12B2E7:
		TYA
		JMP		_bC_s0_npc_anim_script_init

; =============== S U B	R O U T	I N E =======================================
sub_12B2EB:
		LDA		_playerMapX
		CMP		#$E
		BNE		locret_12B30C
		LDA		_playerMapY
		CMP		#3
		BNE		locret_12B30C
		LDA		_global_flags_array.byte5
		AND		#2
		BNE		loc_12B30D
		FARX	_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$626
		FARX	_bE_s33
locret_12B30C:
		RTS
loc_12B30D:
		LDA		#0
		STA		byte_6BC
		STA		_playerFacingDir
		FARX	_b0_s4F_return_party_members
		LDA		_global_flags_array.byte5
		AND		#$FC
		STA		_global_flags_array.byte5
		LDA		#0
		JSR		sub_12B353
		JSR		_wrap_bE_sD_wnd3E
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#1
		BEQ		loc_12B34C
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F_player_gender_read
		LDA		#1
		STA		byte_D2
		LDA		word_4
		BNE		loc_12B346
		MSGX	_msg_m00,$629
		JMP		loc_12B349
loc_12B346:
		MSGX	_msg_m00,$62A
loc_12B349:
		MSGX	_msg_m00,$62B
loc_12B34C:
		MSGX	_msg_m00,$62C
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B353:
		ASL
		TAX
		LDA		off_12B3CD,X
		STA		word_6E
		LDA		off_12B3CD+1,X
		STA		word_6E+1
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		JSR		_sram_b0_s31_get_party_chars_list
		JSR		sub_12A6FD
		LDA		word_4
		SEC
		SBC		#1
		ASL
		ASL
		STA		word_6C
		TXA
		PHA
		SEC
		SBC		word_6C
		STA		word_6C
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_6ABE
		PHA
loc_12B382:
		DEC		byte_6ABE
		BEQ		loc_12B393
		JSR		_bC_s38
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BNE		loc_12B382
loc_12B393:
		PLA
		SEC
		SBC		#1
		ASL
		ASL
		TAY
		PLA
		TAX
		DEY
		BMI		loc_12B3AF
loc_12B39F:
		LDA		#$FF
		STA		word_FE+1,X
		LDA		(word_6E),Y
		AND		#$7F
		STA		_players_pos_list+4,Y
		DEX
		DEY
		BPL		loc_12B39F
loc_12B3AF:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_6ABE
		LDA		#4
		STA		word_6C
loc_12B3BB:
		DEC		byte_6ABE
		BEQ		locret_12B3CC
		FARX	_bD_s19
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BNE		loc_12B3BB
locret_12B3CC:
		RTS
off_12B3CD:
		.WORD	byte_12BA57
		.WORD	_assaram_player_chars_npc_list

; =============== S U B	R O U T	I N E =======================================
sub_12B3D1:
		LDA		_global_flags_array.byte2
		BPL		locret_12B42D
		LDA		_playerMapX
		CMP		#7
		BNE		locret_12B42D
		LDA		_playerMapY
		CMP		#$12
		BNE		locret_12B42D
		LDA		_global_flags_array.byte5
		AND		#$10
		BNE		loc_12B453
		LDA		_npcs_pos_list+$34
		BMI		locret_12B42D
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		_party_chars_count_tmp
		CMP		#1
		BEQ		loc_12B443
		FARX	_bE_sD
		LDA		#$44
		STA		word_6C
		LDA		_npcs_pos_list+$37
		AND		#3
		BNE		loc_12B41C
		LDA		_npcs_pos_list+$37
		AND		#$FC
		ORA		#1
		JSR		loc_12B448
		LDA		_npcs_pos_list+$37
		AND		#$FC
		ORA		#2
		JSR		loc_12B448
loc_12B41C:
		SYSX	_display_window,$3E
		MSGX	_msg_m00,$699
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_12B42E
		MSGX	_msg_m00,$69A
		FARX	_bE_s33
locret_12B42D:
		RTS
loc_12B42E:
		LDA		#0
		JSR		sub_12A6C8
		LDA		#$64
		STA		word_4
		LDA		#0
		STA		word_4+1
		STA		word_6
		JSR		_sram_b0_s1B_player_gold_subtract
		JSR		_bC_s20_warp_bE_sB_arg0
loc_12B443:
		LDA		#$1C
		JMP		_bC_s0_npc_anim_script_init
loc_12B448:
		STA		_npcs_pos_list+$37
		FARX	_bD_s19
		LDX		#$A
		JMP		_sleep_X_sync
loc_12B453:
		LDA		_party_chars_count_tmp
		CMP		#1
		BEQ		locret_12B492
		LDA		#0
		STA		byte_6BC
		STA		_playerFacingDir
		FARX	_b0_s4F_return_party_members
		LDA		#1
		JSR		sub_12B353
		JSR		_wrap_bE_sD_wnd3E
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F_player_gender_read
		LDA		#1
		STA		byte_D2
		STA		byte_D4
		LDA		word_4
		BEQ		loc_12B484
		MSGX	_msg_m00,$6AA
		JMP		loc_12B487
loc_12B484:
		MSGX	_msg_m00,$6A5
loc_12B487:
		JSR		sub_174D4F
		LDA		_global_flags_array.byte2
		AND		#$7F
		STA		_global_flags_array.byte2
locret_12B492:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B493:
		LDA		_global_flags_array.byte5
		AND		#$10
		BNE		locret_12B492
		LDA		_playerMapX
		CMP		#7
		BNE		locret_12B492
		LDA		_npcs_pos_list+4
		BMI		locret_12B492
		LDA		_global_flags_array.byte5
		ORA		#$10
		STA		_global_flags_array.byte5
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$69D
		MSGX	_msg_m00,$69E
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_12B4BE
		MSGX	_msg_m00,$69F
loc_12B4BE:
		MSGX	_msg_m00,$6A0
		JSR		_bC_s12_sleep_X_sync_50
		JSR		_pal_fade_out
		JSR		_ppu_screen_clear
		JSR		_bC_s1A
		SYSX	_display_window,$3E
		JSR		_pal_fade_in
		MSGX	_msg_m00,$6A1
		JSR		_pal_fade_out
		LDA		#8
		STA		_playerMapX
		STA		_players_pos_list
		LDA		#3
		STA		_playerMapY
		STA		_players_pos_list+1
		LDA		#7
		STA		_npcs_pos_list
		DEC		_npcs_pos_list+1
		DEC		_npcs_pos_list+5
		LDA		_npcs_pos_list+3
		AND		#$FC
		ORA		#1
		STA		_npcs_pos_list+3
		FARX	_b5_s9
		LDA		#<[_players_pos_list]
		STA		word_6C
		FARX	_bD_s19
		JSR		_ppu_on_and_fade_in
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$6A2
		JSR		sub_174D4F
		LDA		#$1D
		JMP		_bC_s0_npc_anim_script_init
locret_12B517:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B518:
		LDA		_global_flags_array.byte4
		AND		#$10
		BNE		locret_12B517
		LDA		_playerMapX
		CMP		#$E
		BNE		locret_12B517
		LDA		_playerMapY
		AND		#$FE
		CMP		#$1C
		BNE		locret_12B517
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$18A
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		_cur_message_speed
		PHA
		LDA		#3
		STA		_cur_message_speed
		LDA		#0
		FARX	_b0_s1_battle_typeA_launch
		PLA
		STA		_cur_message_speed
		LDA		#$80
		STA		_npcs_pos_list
		STA		_npcs_pos_list+4
		LDY		_playerMapY
		INY
		STY		_npcs_pos_list+9
		JSR		sub_174CBD
		JSR		_wrap_bE_sD_wnd3E
		LDA		byte_6A65
		BNE		loc_12B564
		MSGX	_msg_m00,$18B
loc_12B564:
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		MSGX	_msg_m00,$18C
		LDA		#$80
		STA		_npcs_pos_list+8
		LDA		#>[_npcs_pos_list+8]
		STA		word_6C+1
		LDA		#<[_npcs_pos_list+8]
		STA		word_6C
		JSR		_bC_s38
		LDY		_playerMapY
		INY
		STY		_npcs_pos_list+$D
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDA		#<[_players_pos_list]
		STA		word_6C
		FARX	_bD_sD
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$80
		STA		_npcs_pos_list+$C
		LDA		#>[_npcs_pos_list+$C]
		STA		word_6C+1
		LDA		#<[_npcs_pos_list+$C]
		STA		word_6C
		JSR		_bC_s38
		LDA		_global_flags_array.byte4
		ORA		#$10
		STA		_global_flags_array.byte4
		FARX	_bE_s33
		SYSX	_apu_load,BGM_DUNGEON
locret_12B5AC:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B5AD:
		LDA		_global_flags_array.byteF
		BMI		locret_12B5AC
		LDA		_playerMapX
		CMP		#$14
		BCC		loc_12B5F3
		CMP		#$1E
		BCS		loc_12B5F3
		LDA		_playerMapY
		CMP		#$1E
		BCS		loc_12B5EA
		CMP		#$1A
		BNE		loc_12B5F3
		LDA		_global_flags_array.byteF
		AND		#$1F
		BNE		locret_12B5AC
		LDX		#$10
		STX		byte_79F4
		INX
		STX		byte_79F5
		LDX		#$14
		STX		byte_7A26
		INX
		STX		byte_7A27
		LDA		#1
		STA		_global_flags_array.byteF
		SYSX	_apu_load,SFX_BLAST_95
		JMP		loc_12B6A2
loc_12B5EA:
		LDA		_global_flags_array.byteF
		AND		#$80
		STA		_global_flags_array.byteF
		RTS
loc_12B5F3:
		LDA		_global_flags_array.byteF
		AND		#$1F
		BEQ		locret_12B5AC
		INC		_global_flags_array.byteF
		LDA		_global_flags_array.byteF
		AND		#$1F
		CMP		#$1B
		BNE		loc_12B615
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$17F ; "From out of nowhere, ominous voices are heard...<br>"
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		JMP		loc_12B61D
byte_12B612:
		.BYTE	 $E, $E, $E
loc_12B615:
		CMP		#$1D
		BEQ		loc_12B61D
		CMP		#$1F
		BNE		locret_12B682
loc_12B61D:
		LDA		_global_flags_array.byteF
		AND		#$1F
		SEC
		SBC		#$1B
		LSR
		TAX
		LDA		byte_12B612,X
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_174CBD
		LDA		_global_flags_array.byteF
		CLC
		ADC		#$20
		STA		_global_flags_array.byteF
		AND		#$60
		LSR
		LSR
		LSR
		CLC
		ADC		#$E
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDX		#word_4
		LDA		_mapWidth
		JSR		_mul16_to_8
		LDA		#$16
		LDY		#byte_74
		JSR		_add16_to_16
		JSR		sub_12B672
		JSR		sub_12B667
		LDA		_global_flags_array.byteF
		AND		#$60
		CMP		#$60
		BEQ		sub_12B683
		JMP		loc_12B6A2

; =============== S U B	R O U T	I N E =======================================
sub_12B667:
		LDA		word_4
		CLC
		ADC		#4
		STA		word_4
		BCC		sub_12B672
		INC		word_4+1

; =============== S U B	R O U T	I N E =======================================
sub_12B672:
		LDA		#$13
		LDY		#0
		STA		(word_4),Y
		INY
		STA		(word_4),Y
		LDY		_mapWidth
		STA		(word_4),Y
		INY
		STA		(word_4),Y
locret_12B682:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B683:
		LDA		#$80
		STA		_global_flags_array.byteF
		LDA		#$13
		STA		byte_76D4
		STA		byte_76D5
		STA		byte_7706
		STA		byte_7707
		STA		byte_79F4
		STA		byte_79F5
		STA		byte_7A26
		STA		byte_7A27
loc_12B6A2:
		FARX	_bE_sD
		LDA		#0
		STA		byte_8E
		LDA		#$F
		FARX	_bE_sB
locret_12B6AE:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B6AF:
		BIT		_global_flags_array.byte5
		BMI		locret_12B6AE
		BVS		loc_12B71C
		LDA		_playerMapY
		CMP		#$D
		BNE		loc_12B6C9
		LDA		_playerMapX
		AND		#$FE
		CMP		#$C
		BNE		locret_12B6AE
		LDA		#$1F
		JMP		_bC_s0_npc_anim_script_init
loc_12B6C9:
		LDA		_npcs_pos_list+$14
		CMP		#$C
		BNE		locret_12B6AE
		LDA		_playerMapY
		CMP		#$11
		BEQ		loc_12B73A
		AND		#$FE
		CMP		#$E
		BNE		locret_12B6AE
		LDA		_playerMapX
		CMP		#$B
		BCC		locret_12B6AE
		CMP		#$F
		BCS		locret_12B6AE
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$17A
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#3
		FARX	_b0_s1_battle_typeA_launch
		LDA		#$80
		STA		_npcs_pos_list+$14
		STA		_npcs_pos_list+$18
		ORA		_global_flags_array.byte5
		STA		_global_flags_array.byte5
		JSR		sub_12B7AD
		JSR		sub_174CBD
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$17B
loc_12B70E:
		MSGX	_msg_m00,$17C
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_12B74D
		MSGX	_msg_m00,$17D
		JMP		loc_12B70E
loc_12B71C:
		LDA		_playerFacingDir
		CMP		#2
		BNE		locret_12B739
		LDA		_playerMapY
		CMP		#$17
		BNE		loc_12B757
		LDA		_npcs_pos_list+$14
		CMP		#$10
		BNE		locret_12B739
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$174
		JSR		sub_174D4F
locret_12B739:
		RTS
loc_12B73A:
		LDA		_global_flags_array.byte2
		BMI		locret_12B739
		ORA		#$80
		STA		_global_flags_array.byte2
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$179
		JMP		sub_174D4F
loc_12B74D:
		MSGX	_msg_m00,$17E
		JSR		sub_174D4F
		LDA		#$28
		BNE		loc_12B764
loc_12B757:
		CMP		#$18
		BNE		loc_12B767
		LDA		_npcs_pos_list+$18
		CMP		#6
		BNE		locret_12B739
		LDA		#$23
loc_12B764:
		JMP		_bC_s0_npc_anim_script_init
loc_12B767:
		CMP		#$1D
		BNE		locret_12B739
		LDA		_playerMapX
		CMP		#$D
		BNE		locret_12B739
		LDA		_npcs_pos_list+$14
		CMP		#$10
		BNE		locret_12B739
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$141
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_12B786
		JMP		_bC_s20_warp_bE_sB_arg0
loc_12B786:
		LDA		#$73
		LDX		#0
loc_12B78A:
		STA		byte_767A,X
		INX
		CPX		#6
		BNE		loc_12B78A
loc_12B792:
		STA		byte_768E,X
		INX
		CPX		#$C
		BNE		loc_12B792
		JSR		sub_12B7AD
		LDA		_global_flags_array.byte5
		AND		#$BF
		STA		_global_flags_array.byte5
		JSR		_bC_s20_warp_bE_sB_arg0
		LDA		#$24
		JMP		_bC_s0_npc_anim_script_init

; =============== S U B	R O U T	I N E =======================================
sub_12B7AD:
		LDY		#$C
		STY		_npcs_pos_list+$21
		STY		_npcs_pos_list+$1D
		INY
		STY		_npcs_pos_list+$11
		LDA		#$80
		STA		_npcs_pos_list
		STA		_npcs_pos_list+4
		STA		_npcs_pos_list+8
		STA		_npcs_pos_list+$C
locret_12B7C7:
		RTS

; =============== S U B	R O U T	I N E =======================================
; looks like the heal shrine in the cave of at the beginning of the game
;
sub_12B7C8:
		LDA		_playerMapX
		CMP		#$19
		BNE		locret_12B7C7
		LDA		_playerMapY
		CMP		#$25
		BNE		locret_12B7C7
		FARX	_b2_s7_screen_spell_blink
		FARX	_b0_s54_heal_us_all_max
		FARX	_bD_s11
		FARX	_b4_s1A_status_pal_adjust_and_update
locret_12B7E0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B7E1:
		LDA		_global_flags_array.byte10
		ASL
		BCS		loc_12B819
		ASL
		ASL
		ASL
		ASL
		ASL
		BCS		sub_12B820
		LDX		#0
		LDY		#9
loc_12B7F2:
		ASL
		BCS		loc_12B801
		INY
		INY
		INY
		INY
		INY
		INY
		INX
		CPX		#2
		BNE		loc_12B7F2
		DEY
loc_12B801:
		CPY		_playerMapY
		BNE		locret_12B7E0
		CPY		#$14
		BEQ		sub_12B877
		LDA		byte_12B81D,X
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_12B91A
		JSR		sub_174CBD
		ASL		_global_flags_array.byte10
		RTS
loc_12B819:
		JSR		_bC_s34
locret_12B81C:
		RTS

byte_12B81D:
		.BYTE	  7,  9, $F

; =============== S U B	R O U T	I N E =======================================
sub_12B820:
		LDA		_playerMapX
		SEC
		SBC		#$A
		CMP		#4
		BCS		locret_12B81C
		LDA		_playerMapY
		SEC
		SBC		#4
		CMP		#4
		BCS		locret_12B81C
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		MSGX	_msg_m00,$182
		JSR		_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#8
		FARX	_b0_s1_battle_typeA_launch
		JSR		sub_12B91A
		JSR		sub_174CBD
		JSR		_wrap_bE_sD_wnd3E
		FARX	_bD_sB_get_hero_and_its_gender_and_status
		MSGX	_msg_m00,$1A7
		LDA		#_bC_s18_fidx
		STA		word_3C
		LDA		#_bC_s1C_fidx
		STA		word_3C+1
		JSR		_bC_s17_sys0_spr_effects_call
		LDA		#$80
		STA		_npcs_pos_list+$28
		STA		_npcs_pos_list+$2C
		STA		_npcs_pos_list+$30
		STA		_npcs_pos_list+$34
		JSR		_wait_for_nmi_is_over_sync
		JSR		sub_174D4F
		LDA		#$C0
		STA		_global_flags_array.byte10
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B877:
		FARX	_bE_s1D_get_map_buf_end_ptr
		JSR		sub_12B8F4
		FARX	_bE_sD
		JSR		sub_12B92A
		LDA		#<[_npcs_pos_list]
		STA		word_6C
		JSR		_bC_s12_sleep_X_sync_50
loc_12B88A:
		FARX	_bD_s19
		SYSX	_apu_load,SFX_LIGHT_FIRE
		JSR		_bC_s12_sleep_X_sync_50
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		CMP		#$28
		BNE		loc_12B88A
		JSR		sub_1287A7
		JSR		sub_128A2C
		JSR		sub_128A49
		LDA		#>[_npcs_pos_list+$28]
		STA		word_6C+1
		LDA		#<[_npcs_pos_list+$28]
		STA		word_6C
		JSR		sub_12B8E9
		JSR		sub_12B8E9
		JSR		sub_12B8E9
		JSR		sub_12B8E9
		JSR		_wait_for_nmi_is_over_sync
		LDA		#0
		STA		byte_28
		LDA		#$31
		JMP		_bC_s0_npc_anim_script_init

; =============== S U B	R O U T	I N E =======================================
_bC_s2E_sleep_X_sync_50_wait_50_or_skip:
		JSR		_bC_s12_sleep_X_sync_50
		LDA		#$3C
		STA		byte_6AE8
loc_12B8CF:
		JSR		_wait_for_nmi_is_over_sync
		JSR		_calc_pads
		LDA		_pads
		BNE		locret_12B8DE
		DEC		byte_6AE8
		BNE		loc_12B8CF
locret_12B8DE:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s12_sleep_X_sync_50:
		LDX		#$3C
		JMP		_sleep_X_sync

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_12B8E4:
;		STA		word_6C
;		JMP		_bC_s38

; =============== S U B	R O U T	I N E =======================================
sub_12B8E9:
		FARX	_bD_s19
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B8F4:
		LDY		#0
loc_12B8F6:
		LDA		(word_6C),Y
		AND		#$E0
		CMP		#$40
		BEQ		loc_12B90F
loc_12B8FE:
		DEC		word_6C
		LDA		word_6C
		CMP		#$FF
		BNE		loc_12B8F6
		DEC		word_6C+1
		LDA		word_6C+1
		CMP		#$73
		BNE		loc_12B8F6
		RTS
loc_12B90F:
		LDA		(word_6C),Y
		AND		#$1F
		ORA		#$20
		STA		(word_6C),Y
		JMP		loc_12B8FE

; =============== S U B	R O U T	I N E =======================================
sub_12B91A:
		LDA		#$28
		STA		byte_6ABF
		BNE		sub_12B92F
		LDA		#$38
		STA		byte_6ABF
		LDA		#$FF
		BNE		sub_12B931

; =============== S U B	R O U T	I N E =======================================
sub_12B92A:
		LDA		#$38
		STA		byte_6ABF

; =============== S U B	R O U T	I N E =======================================
sub_12B92F:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_12B931:
		STA		byte_6ABE
		LDX		#0
loc_12B936:
		LDA		byte_12B946,X
		ORA		byte_6ABE
		STA		_npcs_pos_list,X
		INX
		CPX		byte_6ABF
		BNE		loc_12B936
		RTS
byte_12B946:
		.BYTE	  9, $E,  4,$92, $D, $E,  4,$96,  9,$11,  4,$9A, $D,$11,  4,$9E
		.BYTE	  8,$14,  4,$A2, $E,$14,  4,$A6,  9,  8,  4,$82, $D,  8,  4,$82
		.BYTE	  9, $B,  4,$82, $D, $B,  4,$82, $B, $D,  5,$A8, $C, $D,  5,$AD
		.BYTE	 $B, $E,  5,$B2, $C, $E,  5,$B7

; =============== S U B	R O U T	I N E =======================================
sub_12B97E:
		LDA		_global_flags_array.byte10
		BPL		locret_12B998
		AND		#$20
		BNE		locret_12B998
		LDA		_playerMapX
		CMP		#$11
		BNE		locret_12B998
		LDA		_playerMapY
		AND		#$FE
		CMP		#6
		BNE		locret_12B998
		JSR		sub_129007
locret_12B998:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B999:
		FARX	_bA_s10
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B99D:
		FARX	_bA_s11
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B9A1:
		FARX	_b7_s1A
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s27:
		LDX		#0
loc_12B9A7:
		LDA		byte_12B9B4,X
		CMP		_mapNumber
		BEQ		loc_12B9CE
		INX
		CMP		#$FF
		BNE		loc_12B9A7
		RTS
byte_12B9B4:
		.BYTE	$4A, $F, $A,$91, $C,$7A,$CB,$EF,$B2,  0,$EB,$EC,$EE,$BB,$2F,$30
		.BYTE	$70,$58, $E,$25,$47,$18,$17,$79,$41,$FF
loc_12B9CE:
		TXA
		ASL
		TAX
		LDA		off_12B9DE,X
		STA		word_6C
		LDA		off_12B9DE+1,X
		STA		word_6C+1
		JMP		(word_6C)
off_12B9DE:
		.WORD	nullsub_14
		.WORD	sub_12BA11
		.WORD	sub_12BA63
		.WORD	sub_12BAC3
		.WORD	sub_12BAD3
		.WORD	sub_12BB1E
		.WORD	sub_12BB2F
		.WORD	nullsub_16
		.WORD	sub_12BB41
		.WORD	sub_12BB64
		.WORD	sub_12BB96
		.WORD	sub_12BBAC
		.WORD	sub_12BBBF
		.WORD	sub_12BBC9
		.WORD	sub_12BBDA
		.WORD	sub_12BBDA
		.WORD	sub_12BAB8
		.WORD	sub_12BBF1
		.WORD	nullsub_15
		.WORD	sub_12BBFD
		.WORD	sub_CBF80	; sub_174D1B
		.WORD	sub_CBF97 ; sub_174D26
		.WORD	sub_CBFAE ; sub_174D31
		.WORD	_clear_WarpBlock_flag
		.WORD	sub_12BC33

; =============== S U B	R O U T	I N E =======================================
nullsub_14:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BA11:
		LDA		_global_flags_array.byte5
		AND		#1
		BEQ		nullsub_14
		LDX		#$10
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_12BA23
		LDX		#$10
loc_12BA23:
		LDA		#$F
		STA		_players_pos_list,X
		LDA		#3
		STA		_players_pos_list+1,X
		LDA		_players_pos_list+3,X
		AND		#$FC
		ORA		#3
		STA		_players_pos_list+3,X
		JSR		sub_12A6FD
		LDY		#0
		LDA		_party_chars_count_tmp
		STA		byte_6ABE
loc_12BA42:
		DEC		byte_6ABE
		BEQ		locret_12BA56
loc_12BA47:
		LDA		byte_12BA57,Y
		STA		_players_pos_list,X
		INX
		INY
		TYA
		AND		#3
		BNE		loc_12BA47
		BEQ		loc_12BA42
locret_12BA56:
		RTS
byte_12BA57:
		.BYTE	 $E,  4,  1,$84, $E,  5,  2,$88, $E,  6,  3,$8C

; =============== S U B	R O U T	I N E =======================================
sub_12BA63:
		LDY		#$18
		LDY		#$18
loc_12BA67:
		LDX		#0
loc_12BA69:
		LDA		_npcs_pos_list,X
		PHA
		LDA		_players_pos_list,Y
		STA		_npcs_pos_list,X
		PLA
		STA		_players_pos_list,Y
		INY
		INX
		CPX		#4
		BNE		loc_12BA69
		LDA		_mapNumber
		CMP		#$91
		BEQ		sub_12BA9A
		LDA		_global_flags_array.byte3
		BPL		sub_12BAA5
		AND		#$40
		BEQ		sub_12BAA5
		LDA		#3
		STA		byte_2D
		LDA		#8
		STA		byte_2E
		JSR		sub_12BA9A
		JMP		sub_12BAA5

; =============== S U B	R O U T	I N E =======================================
sub_12BA9A:
		LDA		byte_2D
		STA		_npcs_pos_list
		LDA		byte_2E
		STA		_npcs_pos_list+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAA5:
		LDA		_global_flags_array.byte16
		BPL		locret_12BAB7
		LDA		#$80
		STA		_npcs_pos_list+$14
		LDA		#$19
		STA		_npcs_pos_list+$D
		STA		_npcs_pos_list+$11
locret_12BAB7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAB8:
		LDA		_global_flags_array.byte16
		BPL		locret_12BAB7
		LDA		#$80
		STA		_npcs_pos_list
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAC3:
		LDY		#$18
		LDA		_player_vehicle
		BNE		loc_12BA67
		LDA		#$A
		STA		byte_2D
		LDA		#$13
		STA		byte_2E
		BNE		loc_12BA67

; =============== S U B	R O U T	I N E =======================================
; Assaram entry init handler
;
sub_12BAD3:
		LDA		_global_flags_array.byte2	; test if warp flag is disabled, occurs when you accept the fortune 
		BMI		loc_12BAE1					; teller offer and leave all party members after the door
		LDA		_global_flags_array.byte5	; 
		AND		#$10
		BNE		loc_12BB0C
		BEQ		locret_12BB11
loc_12BAE1:
		LDA		_world_map_steps_count		; to be sure she isn't called you during day somehow lol
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_12BAF1
		LDA		_global_flags_array.byte2	; remove warp disable flag then, never happen, you just couldn't
		AND		#$7F						; get there not at night
		STA		_global_flags_array.byte2
		RTS
loc_12BAF1:
		LDA		_party_chars_count_tmp
		STA		byte_6ABE
		LDX		#0
loc_12BAF9:
		DEC		byte_6ABE
		BEQ		loc_12BB0C
loc_12BAFE:
		LDA		_assaram_player_chars_npc_list,X	; insert your party members as npc to the map to block the door
		STA		_npcs_pos_list+$44,X
		INX
		TXA
		AND		#3
		BNE		loc_12BAFE
		BEQ		loc_12BAF9
loc_12BB0C:
		LDX		#$44
		JSR		_disable_npc
locret_12BB11:
		RTS
_assaram_player_chars_npc_list:
		.BYTE	  7,$13,  1,$84,  7,$14,  2,$8B,  8,$14,  3,$8F

; =============== S U B	R O U T	I N E =======================================
sub_12BB1E:
		LDA		_global_flags_array.byte2
		BMI		locret_12BB11
		LDA		_global_flags_array.byte5
		AND		#$10
		BNE		locret_12BB11
		LDX		#$14
		JMP		_disable_npc

; =============== S U B	R O U T	I N E =======================================
sub_12BB2F:
		LDA		_global_flags_array.byte4
		AND		#$10
		BEQ		locret_12BB11
		LDX		#$10
		JSR		_disable_npc
		LDX		#$14
		JMP		_disable_npc

; =============== S U B	R O U T	I N E =======================================
nullsub_16:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB41:
		LDA		#$80
		BIT		_global_flags_array.byte5
		BMI		loc_12BB4B
		BVS		loc_12BB51
		RTS
loc_12BB4B:
		STA		_npcs_pos_list+$18
		STA		_npcs_pos_list+$14
loc_12BB51:
		STA		_npcs_pos_list
		STA		_npcs_pos_list+4
		STA		_npcs_pos_list+8
		STA		_npcs_pos_list+$C
		RTS

; =============== S U B	R O U T	I N E =======================================
_disable_npc:
		LDA		#$80
		STA		_players_pos_list,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB64:
		LDA		_npc_anim_script_idx
		BEQ		loc_12BB89
		CMP		#$2B
		BEQ		loc_12BB71
		CMP		#$2C
		BNE		loc_12BB80
loc_12BB71:
		LDX		#5
		LDY		#$27
		LDA		#3
loc_12BB77:
		STX		_npcs_pos_list+$10
		STY		_npcs_pos_list+$11
		STA		_npcs_pos_list+$13
loc_12BB80:
		LDA		_global_flags_array.byte2
		AND		#$7F
		STA		_global_flags_array.byte2
		RTS
loc_12BB89:
		LDA		_global_flags_array.byte11
		BPL		loc_12BB80
		LDX		#$10
		LDY		#$17
		LDA		#$80
		BNE		loc_12BB77

; =============== S U B	R O U T	I N E =======================================
sub_12BB96:
		LDA		_global_flags_array.byte13
		AND		#4
		BNE		locret_12BBAB
loc_12BB9D:
		LDA		#$80
		STA		_npcs_pos_list+8
		STA		_npcs_pos_list+$C
loc_12BBA5:
		STA		_npcs_pos_list
		STA		_npcs_pos_list+4
locret_12BBAB:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBAC:
		LDA		_global_flags_array.byte13
		BMI		loc_12BBA5
		AND		#3
		ORA		#$80
		CMP		#$83
		BEQ		loc_12BBA5
		LDA		#0
		STA		_global_flags_array.byte13
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBBF:
		LDA		_global_flags_array.byte13
		BMI		loc_12BB9D
		AND		#4
		BNE		loc_12BB9D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBC9:
		LDA		_global_flags_array.byte4
		ORA		_global_flags_array.byte2
		ORA		_global_flags_array.byte15
		BPL		locret_12BBD9
		LDA		#$80
		STA		_npcs_pos_list
locret_12BBD9:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBDA:
		LDA		_global_flags_array.byte1
		AND		#$20
		BEQ		locret_12BBF0
		LDA		#$32
		STA		_npcs_pos_list
		LDA		#$15
		STA		_npcs_pos_list+1
		LDA		#$83
		STA		_npcs_pos_list+3
locret_12BBF0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBF1:
		LDA		_global_flags_array.byte16
		BPL		locret_12BBFB
		LDA		#$80
		STA		_npcs_pos_list
locret_12BBFB:
		RTS

; =============== S U B	R O U T	I N E =======================================
nullsub_15:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBFD:
		LDX		#0
		LDA		_q_OrbsPedestalsUsed
		STA		word_4
loc_12BC04:
		LSR		word_4
		BCC		loc_12BC14
		LDY		byte_12BC24,X
		LDA		_players_pos_list+1,Y
		SEC
		SBC		#$34
		STA		_players_pos_list+1,Y
loc_12BC14:
		INX
		CPX		#6
		BNE		loc_12BC04
		BIT		_global_flags_array.byte4
		BVC		locret_12BC23
		LDA		#$80
		STA		_npcs_pos_list+8
locret_12BC23:
		RTS
byte_12BC24:
		.BYTE	$24,$34,$30,$20,$1C,$28

; =============== S U B	R O U T	I N E =======================================
sub_CBF80:
		LDA		_global_flags_array.byte16
		AND		#$10
		BEQ		locret_CBF96
		LDA		#$80
		LDX		#$18
loc_CBF8B:
		STA		_players_pos_list,X
		INX
		INX
		INX
		INX
		CPX		#$34
		BNE		loc_CBF8B
locret_CBF96:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_CBF97:
		LDA		_playerMapX
		CMP		#5
		BNE		locret_CBFAD
		LDX		#$14
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_CBFA8
		LDX		#$14
loc_CBFA8:
		LDA		#$A
		STA		_players_pos_list+1,X
locret_CBFAD:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_CBFAE:
		LDA		_global_flags_array.byte4
		BMI		locret_CBFCB
		LDA		_global_flags_array.byte15
		BPL		locret_CBFCB
		LDX		#6
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCC		loc_CBFCC
		ROR		_npcs_pos_list+$21
		STX		_npcs_pos_list+$11
		INX
		STX		_npcs_pos_list+$15
locret_CBFCB:
		RTS
loc_CBFCC:
		SEC
		ROR		_npcs_pos_list+$21
		STX		_npcs_pos_list+$11
		INX
		STX		_npcs_pos_list+$15
		RTS

; =============== S U B	R O U T	I N E =======================================
_clear_WarpBlock_flag:
		LDA		_global_flags_array.byte2
		AND		#$7F
		STA		_global_flags_array.byte2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BC33:
		BIT		_global_flags_array.byte11
		BVC		locret_12BC40
		LDA		_npcs_pos_list+3
		AND		#$FC
		STA		_npcs_pos_list+3
locret_12BC40:
		RTS

		ECHO "bank 0C free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB