
		ORG $8000

_bE_s0_display_window_ex_ptr:
		.WORD	_bE_s0_display_window_ex
_bE_s1_MainLoopCheckAButton_ptr:
		.WORD	_bE_s1_MainLoopCheckAButton
_bE_s2_ptr:
		.WORD	_bE_s2
_bE_s3_ptr:
		.WORD	_bE_s3
_bE_s4_msg_m00_ptr:
		.WORD	_bE_s4_msg_m00
_bE_s5_ptr:
		.WORD	_bE_s5
_bE_s6_msg_mFF_ptr:
		.WORD	_bE_s6_msg_mFF
_bE_s9_ptr:
		.WORD	_bE_s9
_bE_sB_ptr:
		.WORD	_bE_sB
_bE_sC_display_window_ptr:
		.WORD	_bE_sC_display_window
_bE_sD_ptr:
		.WORD	_bE_sD
_bE_sE_ptr:
		.WORD	_bE_sE
_bE_sF_ptr:
		.WORD	_bE_sF
_bE_s10_ptr:
		.WORD	_bE_s10
_bE_s11_ptr:
		.WORD	_bE_s11
_bE_s12_ptr:
		.WORD	_bE_s12
_bE_s13_ptr:
		.WORD	_bE_s13
_bE_s14_ptr:
		.WORD	_bE_s14
_bE_s16_ptr:
		.WORD	_bE_s16
_bE_s18_ptr:
		.WORD	_bE_s18
_bE_s19_ptr:
		.WORD	_bE_s19
_bE_s1A_ptr:
		.WORD	_bE_s1A
_bE_s1B_ptr:
		.WORD	_bE_s1B
_bE_s1C_ptr:
		.WORD	_bE_s1C
_bE_s1D_ptr:
		.WORD	_bE_s1D
_bE_s20_ptr:
		.WORD	_bE_s20
_bE_s21_ptr:
		.WORD	_bE_s21
_bE_s22_ptr:
		.WORD	_bE_s22
_bE_s23_ptr:
		.WORD	_bE_s23
_bE_s24_ptr:
		.WORD	_bE_s24
_bE_s25_ptr:
		.WORD	_bE_s25
_bE_s26_ptr:
		.WORD	_bE_s26
_bE_s2E_ptr:
		.WORD	_bE_s2E
_bE_s2F_ptr:
		.WORD	_bE_s2F
_bE_s30_ptr:
		.WORD	_bE_s30
_bE_s31_get_map_music_idx_ptr:
		.WORD	_bE_s31_get_map_music_idx
_bE_s32_ptr:
		.WORD	_bE_s32
_bE_s33_ptr:
		.WORD	_bE_s33
_bE_s34_ptr:
		.WORD	_bE_s34
_bE_s36_ptr:
		.WORD	_bE_s36
_bE_s38_print_char_force_dequeue_ptr:
		.WORD	_bE_s38_print_char_force_dequeue

; =============== S U B	R O U T	I N E =======================================
; called from main loop
;
;"sub_MainLoopCheckAButton"
_bE_s1_MainLoopCheckAButton:
		LDA		_heroTileMovePixelsRemain	; heroTileMovePixelsRemain
		BNE		.processRemainingPixelMove
		LDA		byte_86						; this affects NPC motion some way i dont understand.
											; bitmask for autopilot entities or NPCs or autopiloted player?
		BEQ		.processRemainingPixelMove
		LDA		_blockPlayerInputDuringMap
		BNE		locret_158092
.okToReadInput:
		JSR		_calc_pads					; if above checks pass, we're OK to read A button input
		LDA		_pads
		ORA		byte_6BD
		STA		byte_6BD
		LDA		byte_90 ; EntityUpdateCycle_90
		AND		#$F							; only handle input every 16th frame
		BNE		locret_158092
		JMP		sub_15812C
locret_158092:
		RTS
.processRemainingPixelMove:
		LDA		_npc_anim_script_idx
		BEQ		locret_158092
		LDA		_npc_anim_script_flags
		AND		#$40
		BNE		locret_158092
		BEQ		.okToReadInput

; =============== S U B	R O U T	I N E =======================================
sub_1580A1:
		LDA		byte_8E
		BPL		locret_158092
		LDA		#0
		STA		byte_8E
		JMP		_bE_sB

; =============== S U B	R O U T	I N E =======================================
sub_1580AC:
		LDX		byte_9E
		LDY		byte_9F
		JSR		sub_176CA4
		TAX
		LDA		byte_6DE0,X
		AND		#$80
		BNE		sub_15811B
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#1
		BEQ		sub_15811B
		CMP		#2
		BEQ		sub_15811B
		LDA		byte_9E
		STA		byte_74
		LDA		byte_9F
		STA		byte_75
		JSR		sub_175923
		BCS		sub_15811B
		LDA		byte_9E
		CMP		#$62
		BCC		loc_1580E9
		CMP		#$6C
		BCS		loc_1580E9
		LDA		byte_9F
		CMP		#$D5
		BCC		loc_1580E9
		CMP		#$DB
		BCC		sub_15811B
loc_1580E9:
		LDX		#0
loc_1580EB:
		LDA		_spr_ram,X
		STA		word_3C,X
		LDA		#$F8
		STA		_spr_ram,X
		INX
		CPX		#$10
		BNE		loc_1580EB
		LDX		#$3C
		LDY		#$18
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		LDA		#0
		STA		byte_2C
		FARX	_bC_s32
		FARX	_bD_s18
		SYSX	_apu_load,$04
locret_15811A:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15811B:
		JSR		_bE_sD
		SYSX	_display_window,$3E
		SYSX	_sys06_msg_m00_arg0,$BE
		LDA		#0
		STA		byte_6BD
		JMP		_bE_s33

; =============== S U B	R O U T	I N E =======================================
; something about trying to handle player input on map
sub_15812C:
		LDA		byte_6BD
		AND		#1
		BEQ		locret_15811A
		LDA		#0
		STA		byte_6BD
		LDA		_npc_anim_script_idx
		BEQ		loc_158144
		LDA		_npc_anim_script_flags
		AND		#$40
		BNE		locret_15811A
loc_158144:
		LDA		_pads+2
		ORA		#1
		STA		_pads+2
		LDA		byte_2C
		CMP		#2
		BNE		loc_158153
		JMP		sub_1580AC
loc_158153:
		LDA		byte_2A
		CMP		byte_9E
		BNE		sub_15819F
		LDA		byte_2B
		CMP		byte_9F
		BNE		sub_15819F
		LDA		_location_type
		BNE		sub_15819F
		JSR		sub_1580A1
		JSR		_bE_s32
		LDX		#$10
loc_15816B:
		LDA		_spr_ram,X
		CMP		#$6F
		BEQ		loc_158178
loc_158172:
		INX
		INX
		INX
		INX
		BNE		loc_15816B
loc_158178:
		LDA		_spr_ram+3,X
		CMP		#$80
		BNE		loc_158172
		LDY		#0
loc_158181:
		LDA		_spr_ram,X
		STA		_spr_ram,Y
		LDA		#$F8
		STA		_spr_ram,X
		INX
		INY
		CPY		#$10
		BNE		loc_158181
		LDA		#2
		STA		byte_2C
		SYSX	_apu_load,$0E
		LDA		#0
		STA		byte_6C9
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15819F:
		LDA		#$FF
		STA		byte_8E
		JSR		_bE_sD
		JSR		sub_15856C
		SYSX	_apu_load,$85
		SYSX	_display_window,$14
		CMP		#$FF
		BNE		loc_1581B8
		LDA		#3
		JMP		_bE_sB
loc_1581B8:
		CMP		#0
		BEQ		sub_1581E1
		CMP		#1
		BEQ		loc_1581D0
		CMP		#2
		BEQ		loc_1581D4
		CMP		#3
		BEQ		loc_1581D7
		CMP		#5
		BEQ		loc_1581DE
		FARX	_bC_s1D
		RTS
loc_1581D0:
		FARX	_b0_s5B
		RTS
loc_1581D4:
		JMP		sub_158377
loc_1581D7:
		FARX	_b0_s5D
		FARX	_b0_s50
		RTS
loc_1581DE:
		JMP		sub_158409

; =============== S U B	R O U T	I N E =======================================
sub_1581E1:
		LDA		_mapNumber
		CMP		#$F
		BNE		sub_158203
		LDA		_playerMapY
		CMP		#3
		BNE		sub_158203
		LDA		_players_pos_list+3
		AND		#3
		CMP		byte_644
		BEQ		sub_158203
		STA		byte_644
		JSR		sub_158203
		LDA		#0
		STA		byte_644
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158203:
		LDA		_playerMapX
		STA		word_6
		LDA		_playerMapY
		STA		word_6+1
		LDA		#0
		STA		byte_8
		JSR		sub_1582F8
		LDX		word_6
		LDY		word_6+1
		JSR		sub_176F34
		AND		#$1F
		CMP		#$E
		BNE		loc_158227
		INC		byte_8
		JSR		sub_1582F8
		JMP		loc_158238
loc_158227:
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#$D
		BNE		loc_158238
		INC		byte_8
		INC		byte_8
		JSR		sub_1582F8
loc_158238:
		LDA		#<[_npcs_pos_list]
		STA		word_6C
		LDA		#>[_npcs_pos_list]
		STA		word_6C+1
loc_158240:
		LDY		#0
		LDA		(word_6C),Y
		CMP		#$FF
		BEQ		loc_158255
		CMP		word_6
		BEQ		loc_15825E
loc_15824C:
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BCC		loc_158240
loc_158255:
		SYSX	_display_window,$3E
		SYSX	_sys07_msg_m00_arg1,$0E
		JMP		_bE_s33
loc_15825E:
		TAX
		INY
		LDA		(word_6C),Y
		CMP		word_6+1
		BNE		loc_15824C
		TAY
		JSR		sub_176F34
		AND		#$E0
		CMP		byte_8C
		BNE		loc_158255
		JSR		sub_15830F
		LDA		word_6C
		SEC
		SBC		#$10
		LSR
		LSR
		STA		word_4
		LDA		word_6C
		PHA
		LDA		word_6C+1
		PHA
		JSR		sub_177EFC
		PLA
		STA		word_6C+1
		PLA
		STA		word_6C
		LDA		word_4
		ORA		word_4+1
		BEQ		loc_158255
		LDA		word_6
		AND		#$20
		BNE		loc_1582D6
		LDA		_mapNumber
		CMP		#$60
		BEQ		loc_1582AE
		CMP		#$B
		BEQ		loc_1582A5
		CMP		#$78
		BNE		loc_1582BF
loc_1582A5:
		LDA		_global_game_flags
		AND		#4
		BNE		loc_1582BF
		BEQ		loc_1582D6
loc_1582AE:
		LDA		word_6C
		CMP		#$18
		BNE		loc_1582BF
		LDA		byte_644
		BNE		loc_1582D6
		LDA		#3
		STA		byte_8
		BNE		loc_1582D6
loc_1582BF:
		LDA		byte_8
		PHA
		LDA		byte_644
		EOR		#2
		STA		byte_8
		LDY		#3
		LDA		(word_6C),Y
		AND		#$FC
		ORA		byte_8
		STA		(word_6C),Y
		PLA
		STA		byte_8
loc_1582D6:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		word_6
		PHA
		LDA		byte_8
		PHA
		FARX	_bD_s19
		SYSX	_display_window,$3E
		PLA
		STA		byte_8
		PLA
		STA		word_6
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		FARX	_bD_s16
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1582F8:
		LDX		byte_644
		BEQ		loc_158306
		DEX
		BEQ		loc_158309
		DEX
		BEQ		loc_15830C
		DEC		word_6
		RTS
loc_158306:
		DEC		word_6+1
		RTS
loc_158309:
		INC		word_6
		RTS
loc_15830C:
		INC		word_6+1
locret_15830E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15830F:
		LDA		_mapNumber
		CMP		#$C
		BNE		loc_158349
		LDA		_world_map_steps_count
		CMP		#$78
		BCC		locret_15830E
		LDA		word_6C
		CMP		#$54
		BNE		locret_15830E
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F_player_gender_read
		LDX		#1
		STX		byte_D2
		LDA		word_4
		BEQ		loc_158335
		LDA		#$9D
		BNE		loc_158337
loc_158335:
		LDA		#$9C
loc_158337:
		PHA
		TXA
		PHA
		JSR		sub_174CCF
		PLA
		TAX
		PLA
		JSR		_bE_s4_msg_m00
		JSR		_bE_s33
		PLA
		PLA
		RTS
loc_158349:
		CMP		#$F
		BNE		locret_158373
		LDX		#$44
		LDA		_world_map_steps_count
		CMP		#$78
		BCC		loc_158358
		LDX		#$2C
loc_158358:
		CPX		word_6C
		BNE		locret_158373
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F_player_gender_read
		LDA		#1
		STA		byte_D2
		LDX		#6
		LDA		#$24
		LDY		word_4
		BEQ		loc_158337
		LDA		#$25
		BNE		loc_158337
locret_158373:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158377:
		BIT		_global_game_flags
		BVC		loc_158385
		SYSX	_display_window,$3E
		SYSX	_sys07_msg_m00_arg1,$66
		JMP		_bE_s33
loc_158385:
		SYSX	_display_window,$1E
		CMP		#$FF
		BEQ		loc_158374
		CMP		#1
		BEQ		sub_1583C2
		CMP		#2
		BEQ		_wrap_b6_s1E
		SYSX	_display_window,$23
		CMP		#$FF
		BEQ		loc_158374
		STA		byte_CE
		SYSX	_display_window,$68
		SYSX	_display_window,$09
		JSR		__pause_or_skip
		SYSX	_apu_load,$85
		SYSX	_display_window,$08
		SYSX	_display_window,$0A
		JSR		__pause_or_skip
		SYSX	_apu_load,$85
		LDA		#1
		STA		byte_D0
		JSR		sub_1583D0
		JSR		sub_1583D0
loc_158374:
		JMP		sub_1580A1
_wrap_b6_s1E:
		FARX	_b6_s1E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1583C2:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CLC
		ADC		#$D
		JSR		_bE_sC_display_window
		JMP		_bE_s33

; =============== S U B	R O U T	I N E =======================================
sub_1583D0:
		JSR		_sram_b0_s39
		LDA		word_4
		ORA		word_4+1
		ORA		word_6
		ORA		word_6+1
		BEQ		loc_1583FC
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		BEQ		loc_1583EA
		SYSX	_display_window,$0B
		JMP		loc_1583ED
loc_1583EA:
		SYSX	_display_window,$65
loc_1583ED:
		JSR		__pause_or_skip
		SYSX	_apu_load,$85
		SYSX	_display_window,$0C
		JSR		__pause_or_skip
		SYSX	_apu_load,$85
loc_1583FC:
		INC		byte_D0
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s33:
		JSR		__pause_or_skip
		JMP		sub_1580A1

; =============== S U B	R O U T	I N E =======================================
sub_158409:
		BIT		_global_game_flags
		BVC		loc_158417
		SYSX	_display_window,$3E
		SYSX	_sys07_msg_m00_arg1,$65
		JMP		_bE_s33
loc_158417:
		SYSX	_display_window,$24
		CMP		#$FF
		BNE		loc_158421
		JMP		sub_1580A1
loc_158421:
		STA		byte_CE
		JSR		_sram_b0_s1E_player_euipped_item_read
		LDA		word_4+1
		STA		byte_6AB3
		SEC
loc_15842C:
		JSR		sub_158516
loc_15842F:
		PHP
		JSR		_sram_b0_s1F_get_weapon_from_inventory
		PLP
		LDX		word_4
		BNE		loc_15843C
		BCC		loc_158443
		BCS		loc_158461
loc_15843C:
		SYSX	_display_window,$25
		CMP		#$FF
		BNE		loc_158449
loc_158443:
		JSR		sub_1584ED
		JMP		sub_1580A1
loc_158449:
		STA		byte_CF
		LDA		#0
		JSR		sub_15858D
		BCS		loc_158461
		JSR		_sram_b0_s1F_get_weapon_from_inventory
		JSR		sub_15851F
		BCC		loc_15842F
		JSR		_sram_b0_s23_player_equip_weapon
		SEC
loc_15845E:
		JSR		sub_158516
loc_158461:
		PHP
		JSR		_sram_b0_s21_get_armor_from_inventory
		PLP
		LDX		word_4
		BNE		loc_15846E
		BCC		loc_15842F
		BCS		loc_15848E
loc_15846E:
		SYSX	_display_window,$26
		CMP		#$FF
		CLC
		BEQ		loc_15842C
		STA		byte_CF
		LDA		#1
		JSR		sub_15858D
		BCS		loc_15848E
		JSR		_sram_b0_s21_get_armor_from_inventory
		JSR		sub_15851F
		BCC		loc_158461
		JSR		_sram_b0_s25_player_equip_armor
		SEC
loc_15848B:
		JSR		sub_158516
loc_15848E:
		PHP
		JSR		_sram_b0_s21_shield_from_inventory
		PLP
		LDX		word_4
		BNE		loc_15849B
		BCC		loc_158461
		BCS		loc_1584BB
loc_15849B:
		SYSX	_display_window,$27
		CMP		#$FF
		CLC
		BEQ		loc_15845E
		STA		byte_CF
		LDA		#2
		JSR		sub_15858D
		BCS		loc_1584BB
		JSR		_sram_b0_s21_shield_from_inventory
		JSR		sub_15851F
		BCC		loc_15848E
		JSR		_sram_b0_s24_player_equip_shield
		SEC
		JSR		sub_158516
loc_1584BB:
		PHP
		JSR		_sram_b0_s22_helm_from_inventory
		PLP
		LDX		word_4
		BNE		loc_1584C8
		BCC		loc_15848E
		BCS		loc_1584E7
loc_1584C8:
		SYSX	_display_window,$28
		CMP		#$FF
		CLC
		BEQ		loc_15848B
		STA		byte_CF
		LDA		#3
		JSR		sub_15858D
		BCS		loc_1584E7
		JSR		_sram_b0_s22_helm_from_inventory
		JSR		sub_15851F
		BCC		loc_1584BB
		JSR		_sram_b0_s24_player_equip_helm
		JSR		sub_158516
loc_1584E7:
		JSR		sub_1584ED
		JMP		_bE_s33

; =============== S U B	R O U T	I N E =======================================
sub_1584ED:
		JSR		_sram_b0_s1E_player_euipped_item_read
		LDA		word_4+1
		CMP		byte_6AB3
		BEQ		loc_158507
		JSR		sub_15850B
		BEQ		loc_158504
		LDA		byte_6AB3
		JSR		sub_15850B
		BNE		loc_158507
loc_158504:
		JSR		_bE_s10
loc_158507:
		FARX	_b0_s50
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15850B:
		CMP		#$AA
		BEQ		locret_158515
		CMP		#$B1
		BEQ		locret_158515
		CMP		#$B2
locret_158515:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158516:
		PHP
		SYSX	_display_window,$0D
		JSR		sub_158581
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15851F:
		LDA		word_4+1
		AND		#$7F
		CMP		#$7F
		BEQ		loc_15854E
		STA		byte_D2
		STA		byte_D3
		TAX
		PHA
		LDA		byte_CF
		PHA
		STX		byte_CF
		FARX	_b0_s5E_check_if_item_can_be_equipped
		PLA
		STA		byte_CF
		PLA
		TAX
		BCC		loc_158550
		LDA		#[_b0_d42_item_use_effects_list_idx-_sys_idx_lib]>>1
		JSR		_sys0_byte_read_x
		AND		#8
		BEQ		loc_15854E
		SYSX	_display_window,$3E
		SYSX	_sys07_msg_m00_arg1,$51
		JSR		sub_1585B8
loc_15854E:
		SEC
		RTS
loc_158550:
		SYSX	_display_window,$3E
		LDA		byte_CE
		STA		byte_D2
		SYSX	_sys06_msg_m00_arg0,$BC
		JSR		sub_15855F
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15855F:
		JSR		__pause_or_skip

; =============== S U B	R O U T	I N E =======================================
sub_158562:
		LDA		#$A
		JSR		_bE_sB
		LDA		#$E

; =============== S U B	R O U T	I N E =======================================
sub_158569:
		JSR		_bE_sB

; =============== S U B	R O U T	I N E =======================================
sub_15856C:
		LDA		byte_CE
		PHA
		JSR		_sram_b0_s31_get_party_chars_list
		DEC		word_4
		LDA		word_4
		JSR		_bE_sC_display_window
		PLA
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_15857D:
;		LDA		#$A
;		BNE		sub_158569

; =============== S U B	R O U T	I N E =======================================
sub_158581:
		LDA		byte_CE
		PHA
		LDA		#1
		JSR		_bE_sB
		PLA
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15858D:
		PHA
		JSR		_sram_b0_s1E_player_euipped_item_read
		PLA
		TAX
		LDA		word_4,X
		AND		#$7F
		STA		byte_D2
		TAX
		LDA		#[_b0_d42_item_use_effects_list_idx-_sys_idx_lib]>>1
		JSR		_sys0_byte_read_x
		AND		#8
		BNE		loc_1585A5
		CLC
		RTS
loc_1585A5:
		SYSX	_display_window,$3E
		SYSX	_sys07_msg_m00_arg1,$52
		JSR		sub_1585B8
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1585B0:
		SYSX	_apu_load,$17
		FARX	_bD_s22
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1585B8:
		JSR		sub_1585B0
		JMP		sub_158562

; =============== S U B	R O U T	I N E =======================================
_bE_s13:
		PHA
		JSR		sub_1585C4
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1585C4:
		LDA		_location_type
		AND		#1
		BNE		loc_1585CD
		JMP		sub_15868F
loc_1585CD:
		JSR		sub_158643
		JSR		sub_1585D6
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_1585D6:
		LDY		#2
		LDA		(word_6C),Y
		CMP		#$FF
		BNE		loc_1585DF
		RTS
loc_1585DF:
		LDY		#0
		LDA		(word_6C),Y
		SEC
		SBC		word_6
		CMP		#$10
		BCC		loc_1585F4
loc_1585EA:
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BPL		sub_1585D6
		RTS
loc_1585F4:
		STA		word_4
		INY
		LDA		(word_6C),Y
		SEC
		SBC		word_6+1
		CMP		#$F
		BCC		loc_158603
		JMP		loc_1585EA
loc_158603:
		STA		word_4+1
		JSR		_bE_s9
		BCC		loc_1585EA
		LDA		word_6C
		CMP		#$10
		BCC		loc_158615
		JSR		sub_158678
		BNE		loc_1585EA
loc_158615:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$3C
		TAY
		JSR		sub_158622
		JMP		loc_1585EA

; =============== S U B	R O U T	I N E =======================================
sub_158622:
		LDA		#$F8
		STA		byte_8
		STA		byte_9
		STA		byte_A
		STA		byte_B
		LDX		#8
		JSR		sub_174204
		INY
		LDX		#8
		JSR		sub_174204
		INY
		LDX		#8
		JSR		sub_174204
		INY
		LDX		#8
		JMP		sub_174204

; =============== S U B	R O U T	I N E =======================================
sub_158643:
		JSR		sub_158655
		LDA		_playerMapX
		SEC
		SBC		#8
		STA		word_6
		LDA		_playerMapY
		SEC
		SBC		#7
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158655:
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDX		#<[_players_pos_list]
		LDA		byte_AC
		AND		#$1F
		BEQ		loc_158663
		LDX		#<[_npcs_pos_list]
loc_158663:
		STX		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158666:
		JSR		sub_158655
		LDA		byte_2A
		SEC
		SBC		#8
		STA		word_6
		LDA		byte_2B
		SEC
		SBC		#7
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158678:
		LDA		_location_type
		AND		#1
		BEQ		locret_15868E
		LDY		#0
		LDA		(word_6C),Y
		TAX
		INY
		LDA		(word_6C),Y
		TAY
		JSR		sub_176F34
		AND		#$E0
		CMP		byte_8C
locret_15868E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15868F:
		JSR		sub_158666
		JSR		sub_1585D6
		JSR		sub_1586C5
		BCS		loc_1586A4
		JSR		_bE_s9
		BCC		loc_1586A4
		LDY		#$10
		JSR		sub_158622
loc_1586A4:
		JSR		sub_1586D5
		BCS		loc_1586B3
		JSR		_bE_s9
		BCC		loc_1586B3
		LDY		#$14
		JSR		sub_158622
loc_1586B3:
		JSR		sub_1586CE
		BCS		loc_1586C2
		JSR		_bE_s9
		BCC		loc_1586C2
		LDY		#$18
		JSR		sub_158622
loc_1586C2:
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_1586C5:
		LDX		byte_2D
		LDY		byte_2E
		JMP		loc_1586D9

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_1586CC:
;		SEC
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1586CE:
		LDX		byte_9E
		LDY		byte_9F
		JMP		loc_1586D9

; =============== S U B	R O U T	I N E =======================================
sub_1586D5:
		LDX		byte_9B
		LDY		byte_9C
loc_1586D9:
		TXA
		SEC
		SBC		word_6
		CMP		#$10
		BCS		locret_1586EB
		STA		word_4
		TYA
		SEC
		SBC		word_6+1
		CMP		#$F
		STA		word_4+1
locret_1586EB:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s34:
		LDA		_location_type
		AND		#1
		BNE		loc_1586F5
		JMP		sub_15874F
loc_1586F5:
		JSR		sub_158643
		JSR		sub_1586FE
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_1586FE:
		LDA		byte_2C
		BEQ		loc_158706
		LDA		#<[_npcs_pos_list]
		STA		word_6C
loc_158706:
		LDY		#2
		LDA		(word_6C),Y
		CMP		#$FF
		BEQ		locret_1586EB
		LDY		#0
		LDA		(word_6C),Y
		SEC
		SBC		word_6
		CMP		#$10
		BCC		loc_158723
loc_158719:
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BPL		loc_158706
		RTS
loc_158723:
		STA		word_4
		INY
		LDA		(word_6C),Y
		SEC
		SBC		word_6+1
		CMP		#$F
		BCC		loc_158731
		BCS		loc_158719
loc_158731:
		STA		word_4+1
		JSR		_bE_s9
		BCS		loc_158719
		JSR		sub_158678
		BNE		loc_158719
		LDA		word_6
		PHA
		LDA		word_6+1
		PHA
		FARX	_bD_s19
		PLA
		STA		word_6+1
		PLA
		STA		word_6
		JMP		loc_158719

; =============== S U B	R O U T	I N E =======================================
sub_15874F:
		JSR		sub_158666
		LDA		byte_2C
		BNE		loc_158759
		JSR		sub_1586FE
loc_158759:
		JSR		sub_1586C5
		BCS		loc_158766
		JSR		_bE_s9
		BCS		loc_158766
		FARX	_bD_s1E
loc_158766:
		JSR		sub_158666
		JSR		sub_1586D5
		BCS		loc_158776
		JSR		_bE_s9
		BCS		loc_158776
		FARX	_bD_s1C
loc_158776:
		JSR		sub_158666
		JSR		sub_1586CE
		BCS		loc_158786
		JSR		_bE_s9
		BCS		loc_158786
		FARX	_bD_s1D
loc_158786:
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
_bE_s1C:
		SYSX	_apu_load,$86
		SYSX	_display_window,$1D
		PHA
		LDA		byte_80
		PHA
		LDA		byte_81
		PHA
		LDA		#6
		JSR		_bE_sB
		LDX		#0
		TXA
loc_15879E:
		STA		_window_draw_buf+$60,X
		INX
		CPX		#$10
		BNE		loc_15879E
		PLA
		STA		byte_81
		PLA
		STA		byte_80
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_sC_display_window:
		STA		byte_7E
		JSR		sub_159E55
		JSR		_bE_s13
		JMP		_display_window_common

; =============== S U B	R O U T	I N E =======================================
_bE_s0_display_window_ex:
		STA		byte_7E

; =============== S U B	R O U T	I N E =======================================
_display_window_common:
		JSR		_display_single_window
		JSR		sub_159F6D
		CMP		#$40
		BNE		locret_1587CE
		LDY		#7
		LDA		(word_6C),Y
		AND		#$7F
		JMP		_bE_s0_display_window_ex
locret_1587CE:
		RTS

; =============== S U B	R O U T	I N E =======================================
_display_single_window:
		JSR		_window_display_init_ex
		JSR		_window_buf_full_clear
		JSR		_window_buf_draw_frame_top_side
		JSR		sub_158BAD
loc_1587DB:
		JSR		_window_buf_char_clear
		JSR		_window_buf_draw_bottom_side
		JSR		sub_1587F0
		JSR		sub_17474C
		JSR		_window_frame_scroll_up_16px
		DEC		_window_frame_height_var
		BNE		loc_1587DB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1587F0:
		LDA		_window_frame_height_var
		CMP		#1
		BEQ		locret_15880C
		LDA		_window_frame_width_add_header4_bits_add_1
		JSR		sub_15881A
		LDA		_window_frame_height_var
		CMP		#2
		BEQ		locret_15880C
		LDY		#5
		LDA		(word_6C),Y
		AND		#$40
		BNE		loc_15880D
locret_15880C:
		RTS
loc_15880D:
		LDA		_window_frame_width_add_header4_bits_add_1
		CLC
		ADC		_window_frame_width_var
		STA		_window_frame_tmp6AEB
		JMP		loc_15883A

; =============== S U B	R O U T	I N E =======================================
sub_15881A:
		STA		_window_frame_tmp6AEB
		LDY		#5
		LDA		(word_6C),Y
		BPL		loc_15883A
		LDX		_window_frame_tmp6AC1
		BNE		loc_158835
		AND		#$40
		BEQ		loc_158835
loc_15882C:
		JSR		_wnd_fetch_cmd_byte
		CMP		#$FF
		BNE		loc_15882C
		BEQ		loc_15883A
loc_158835:
		LDA		#$B
		STA		_wnd_cmd_byte_pos
loc_15883A:
		JSR		_wnd_fetch_cmd_byte
		BPL		loc_158870
		CMP		#$FF
		BEQ		loc_158876
		AND		#$1F
		CMP		#$10
		BCC		loc_158895
		CMP		#$12
		BCC		loc_15887A
		CMP		#$14
		BCC		loc_158880
		CMP		#$16
		BCC		loc_158883
		CMP		#$17
		BCC		loc_158886
		CMP		#$18
		BCC		loc_158889
		CMP		#$19
		BCC		loc_15888C
		CMP		#$1A
		BCC		loc_15888F
		CMP		#$1B
		BCC		loc_158892
		CMP		#$1F
		BCC		loc_15887D
		JMP		loc_158876
loc_158870:
		JSR		sub_158DB9
		JMP		loc_15883A
loc_158876:
		INC		_window_frame_tmp6AC1
		RTS
loc_15887A:
		JMP		loc_1588F4
loc_15887D:
		JMP		sub_158B81
loc_158880:
		JMP		sub_15897F
loc_158883:
		JMP		sub_158985
loc_158886:
		JMP		loc_1589E8
loc_158889:
		JMP		sub_1588D3
loc_15888C:
		JMP		sub_158AA6
loc_15888F:
		JMP		loc_158970
loc_158892:
		JMP		loc_158B0E
loc_158895:
		CMP		#$E
		BNE		loc_1588A3
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B47
		LDX		#$E
		BNE		loc_1588AF
loc_1588A3:
		PHA
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B95
		JSR		sub_158C89
		PLA
		TAX
loc_1588AF:
		LDA		_sys_idx_list0,X				; list of main param routines indexes (in filesystem)
		PHA										; backup
		JSR		_sys_safe_select				; call it
		PLA
		JSR		_char_special_status_display	; a special test for DE/PO etc. statuses.
loc_1588BA:
		JSR		_wnd_fetch_cmd_byte
		JSR		sub_158E72
		JMP		loc_15883A

; this is part of menu/message display routines, which can display
; as well the players parameters, they requested with common param
; read functions in bank0.
; every param in menu windows described with special code, so they
; need a table of param read routines coresponding to special codes
;
_sys_idx_list0:
		.BYTE	[_b0_s2_player_HP_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s6_player_MP_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s3_player_MHP_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s7_player_MMP_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s11_player_STR_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s12_player_AGI_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s13_player_VIT_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s14_player_INT_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s15_player_LUCK_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s16_player_ATK_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s18_player_DEF_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s1B_players_gold_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s19_player_EXP_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_sC_player_LV_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_sD_tavern_char_LV_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b7_sF_player_log_read_idx-_sys_idx_lib]>>1

; =============== S U B	R O U T	I N E =======================================
sub_1588D3:
		LDA		byte_C9
		BNE		loc_1588DD
		JSR		_wnd_fetch_cmd_byte
		JMP		loc_15883A
loc_1588DD:
		LDA		_window_frame_tmp6AC1
		LSR
		TAX
		FARX	_bD_s15
		TAX
		FARX	_bD_s12
		LDX		#2
loc_1588EB:
		LDA		byte_C0,X
		STA		word_4,X
		DEX
		BPL		loc_1588EB
		BMI		loc_1588BA
loc_1588F4:
		CMP		#$11
		BNE		loc_15893F
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B47
		JSR		_sram_b0_s10_tavern_char_name_read
		LDA		word_4
		CMP		#$FF
		BEQ		loc_15890A
		JMP		sub_158B52
loc_15890A:
		LDX		#0
loc_15890C:
		JSR		_wnd_fetch_cmd_byte
		INX
		CPX		#$D
		BNE		loc_15890C
		LDA		_window_frame_tmp6ACA
		BNE		loc_15892F
		LDA		byte_C6
		CMP		#6
		BNE		loc_15892F
		LDY		#0
loc_158921:
		LDA		_txt_another_world,Y
		JSR		sub_158DB9
		INY
		CPY		#$D
		BNE		loc_158921
		STY		_window_frame_tmp6ACA
loc_15892F:
		JMP		loc_15883A

_txt_another_world:
		.BYTE	_A,_N,_O,_T,_H,_E,_R,0,_W,_O,_R,_L,_D

loc_15893F:
		LDA		_wnd_cur_cmd_byte
		PHA
		JSR		_wnd_fetch_cmd_byte
		LDX		_window_frame_tmp6AC1
		LSR
		PLA
		BCS		loc_158951
		JSR		sub_158B95
		TAX
loc_158951:
		TXA
		JSR		sub_158C89
		JSR		_sram_b0_sF_unassigned_formation_char_name_read
		LDA		byte_CE
		ASL
		TAX
		LDY		#0
		LDA		_players_status+1,X
		BMI		loc_15896B
		LDA		byte_7E
		CMP		#$4E
		BNE		loc_15896B
		LDY		#$5A
loc_15896B:
		STY		byte_8
		JMP		sub_158B55
loc_158970:
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B95
		JSR		sub_158C89
		FARX	_b7_sE_player_log_list
		JMP		sub_158B52

; =============== S U B	R O U T	I N E =======================================
sub_15897F:
		LDX		#5
		LDA		#[_b0_s2C_player_CLASS_read_idx-_sys_idx_lib]>>1
		BNE		loc_158989

; =============== S U B	R O U T	I N E =======================================
sub_158985:
		LDX		#6
		LDA		#[_b0_s2F_player_gender_read_idx-_sys_idx_lib]>>1

; =============== S U B	R O U T	I N E =======================================
loc_158989:
		STX		byte_6AC5
		PHA
		LDA		_wnd_cur_cmd_byte
		LSR
		LDA		_wnd_cur_cmd_byte
		BCC		loc_1589A0
		JSR		sub_158B47
		TSX
		INC		_players_pos_list+1,X
		JMP		loc_1589A6
loc_1589A0:
		JSR		sub_158B95
		JSR		sub_158C89
loc_1589A6:
		PLA
		PHA
		JSR		_sys_safe_select
		LDA		word_4
		PHA
		LDX		byte_6AC5
		FARX	_b2_sC
		PLA
		TAX
		PLA
		CMP		#$2B
		BNE		loc_1589D5
		JSR		_wnd_fetch_cmd_byte
		AND		#$F0
		CMP		#$20
		BNE		loc_1589D2
		TXA
		ASL
		TAX
		LDA		_txt_classes_disp_chars_lib,X
		STA		word_4
		INX
		LDA		_txt_classes_disp_chars_lib,X
		STA		word_4+1
loc_1589D2:
		JMP		sub_158B55
loc_1589D5:
		JMP		sub_158B52

_txt_classes_disp_chars_lib:
		.BYTE	$40,$41	; Hr
		.BYTE	$46,$47	; Wz
		.BYTE	$44,$45	; Pr
		.BYTE	$4E,$4F	; Sg
		.BYTE	$42,$43	; Sr
		.BYTE	$4A,$4B	; Mr
		.BYTE	$48,$49	; Fr
		.BYTE	$4C,$4D	; Gf

loc_1589E8:
		LDA		_wnd_cur_cmd_byte
		PHA
		JSR		_wnd_fetch_cmd_byte
		AND		#$F
		TAX
		PHA
		LDA		_window_frame_tmp6AC1
		LSR
		CPX		#9
		BCC		loc_158A04
		TAX
		FARX	_bD_s15
		STA		word_4
		JMP		loc_158A15
loc_158A04:
		CMP		#8
		BCS		loc_158A3D
		LDY		#$A
		CLC
		ADC		(word_6C),Y
		STA		byte_CF
		LDA		_sys_idx_list1,X
		JSR		_sys_safe_select
loc_158A15:
		PLA
		TAX
		PLA
		JSR		sub_158B95
		TAY
		LDA		byte_158A76,X
		TAX
		LDA		byte_0,X
		BPL		loc_158A31
		CMP		#$FF
		BEQ		loc_158A43
		CPY		#1
		BEQ		loc_158A31
		PHA
		JSR		sub_158A80
		PLA
loc_158A31:
		PHA
		TYA
		TAX
		PLA
		AND		#$7F
		FARX	_b2_sC
		JMP		sub_158B55
loc_158A3D:
		PLA
		PLA
		JSR		sub_158B95
		TAY
loc_158A43:
		CPY		#1
		BEQ		loc_158A5E
		LDA		byte_7E
		CMP		#$25
		BCC		loc_158A5E
		CMP		#$29
		BCS		loc_158A5E
		LDY		#0
loc_158A53:
		LDA		_txt_non_equipped,Y
		JSR		sub_158DB9
		INY
		CPY		#$C
		BNE		loc_158A53
loc_158A5E:
		JMP		loc_15883A

_txt_non_equipped:
		.BYTE	_N,_O,_N,0,_E,_Q,_U,_I,_P,_P,_E,_D

_sys_idx_list1:
		.BYTE	[_b0_s1F_get_weapon_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s21_get_armor_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s21_shield_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s22_helm_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s28_player_inventory_item_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s1E_player_euipped_item_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s1E_player_euipped_item_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s1E_player_euipped_item_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s1E_player_euipped_item_read_idx-_sys_idx_lib]>>1
byte_158A76:
		.BYTE	  5,  5,  5,  5,  5,  4,  5,  6,  7,  4

; =============== S U B	R O U T	I N E =======================================
sub_158A80:
		LDA		_window_frame_tmp6AEB
		PHA
		TAX
loc_158A85:
		LDA		_window_draw_buf,X
		CMP		#$77
		BEQ		loc_158A94
		CMP		#$5F
		BEQ		loc_158A94
		DEX
		JMP		loc_158A85
loc_158A94:
		STX		_window_frame_tmp6AEB
		LDA		#$5F
		JSR		sub_158DB9
		LDA		_window_frame_tmp6AC1
		STA		byte_7F
		PLA
		STA		_window_frame_tmp6AEB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158AA6:
		LDA		_window_frame_tmp6AC1
		LSR
		LDX		byte_7E
		CPX		#$66
		BNE		loc_158AC3
		TAX
		LDA		_enemy_roster_index_list,X
		STA		byte_59
		LDA		byte_6AD5,X
		STA		byte_5A
		LDA		byte_6AD9,X
		STA		byte_5B
		JMP		loc_158AC8
loc_158AC3:
		STA		byte_64
		FARX	_b4_s2
loc_158AC8:
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B95
		PHA
		CLC
		ADC		#2
		TAX
		LDA		byte_59
		FARX	_b2_sC
		JSR		_wnd_fetch_cmd_byte
		JSR		sub_158B5B
		PLA
		BNE		loc_158B0B
		LDA		byte_7E
		CMP		#$66
		BNE		loc_158B04
		LDA		#$5A
		JSR		sub_158DB9
		LDA		byte_5A
		STA		word_4
		LDA		#0
		STA		word_4+1
		STA		word_6
		LDA		#3
		JSR		sub_158E72
		LDA		#$6C
		JSR		sub_158DB9
		LDA		byte_5B
		STA		byte_5A
loc_158B04:
		INC		byte_5A
		LDA		byte_5A
		JSR		sub_158DB9
loc_158B0B:
		JMP		loc_15883A
loc_158B0E:
		LDA		_window_frame_tmp6AC1
		STA		byte_CF
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B95
		CMP		#0
		BEQ		loc_158B26
		ASL		byte_CF
		AND		#1
		CLC
		ADC		byte_CF
		STA		byte_CF
loc_158B26:
		JSR		_wnd_fetch_cmd_byte
		AND		#1
		TAX
		LDA		_sys_idx_list2,X
		JSR		_sys_safe_select
		LDA		word_4
		CMP		#$FF
		BEQ		loc_158B40
		LDX		#4
		FARX	_b2_sC
		JMP		sub_158B55
loc_158B40:
		LDY		#9
		JMP		sub_158B8A

_sys_idx_list2:
		.BYTE	[_b0_s34_read_spell_related_data_byte_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s35_idx-_sys_idx_lib]>>1

; =============== S U B	R O U T	I N E =======================================
sub_158B47:
		JSR		sub_158B95
		ASL
		CLC
		ADC		_window_frame_tmp6AC1
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158B52:
		JSR		_wnd_fetch_cmd_byte

; =============== S U B	R O U T	I N E =======================================
sub_158B55:
		JSR		sub_158B5B
		JMP		loc_15883A

; =============== S U B	R O U T	I N E =======================================
sub_158B5B:
		LSR		_wnd_cur_cmd_byte
		LSR		_wnd_cur_cmd_byte
		LSR		_wnd_cur_cmd_byte
		LSR		_wnd_cur_cmd_byte
		LDY		#0
loc_158B69:
		LDA		word_4,Y
		PHA
		AND		#$F0
		CMP		#$A0
		BNE		loc_158B76
		JMP		sub_158EF8
loc_158B76:
		PLA
		JSR		sub_158DB9
		INY
loc_158B7B:
		CPY		_wnd_cur_cmd_byte
		BNE		loc_158B69
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158B81:
		LDA		_wnd_cur_cmd_byte
		JSR		sub_158B95
		TAY
		INY
		INY

; =============== S U B	R O U T	I N E =======================================
sub_158B8A:
		LDA		#0
loc_158B8C:
		JSR		sub_158DB9
		DEY
		BNE		loc_158B8C
		JMP		loc_15883A

; =============== S U B	R O U T	I N E =======================================
sub_158B95:
		CLC
		AND		#$60
		ROL
		ROL
		ROL
		ROL
		RTS

; =============== S U B	R O U T	I N E =======================================
_wnd_fetch_cmd_byte:
		LDY		_wnd_cmd_byte_pos
		INC		_wnd_cmd_byte_pos
		LDA		(word_6C),Y
		STA		_wnd_cur_cmd_byte
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158BAD:
		LDY		#3
		LDA		(word_6C),Y				; header + 3 parameter
		BPL		loc_158C01
loc_158BB3:
		STA		byte_6AC0
		AND		#7
		CMP		#7
		BNE		loc_158BBE
		LDA		#8
loc_158BBE:
		STA		_window_frame_tmp6AEB
		LDA		(word_6C),Y
		LSR
		LSR
		LSR
		LSR
		LSR
		AND		#3
		TAX
		INX
		STX		byte_6ABE
		LDA		#4
		STA		byte_6ABF
loc_158BD4:
		JSR		sub_158C26
		LDA		byte_6AC0
		AND		#$18
		LSR
		LSR
		LSR
		CLC
		ADC		_window_frame_tmp6AEB
		STA		_window_frame_tmp6AEB
		INC		byte_6ABF
		DEC		byte_6ABE
		BNE		loc_158BD4
loc_158BEE:
		LDY		#5
		LDA		(word_6C),Y
		AND		#$40
		BEQ		locret_158C00
		LDA		_window_frame_header4_bits
		CLC
		ADC		_window_frame_width_var
		JSR		sub_15881A
locret_158C00:
		RTS
loc_158C01:
		LDA		byte_7E
		CMP		#$34
		BEQ		loc_158C16
		CMP		#$3B
		BNE		loc_158BEE
		JSR		_sram_b0_s28_player_inventory_item_read
		LDA		word_4
		CMP		#5
		BCC		loc_158BEE
		BCS		loc_158C1F
loc_158C16:
		JSR		_sram_b0_s32_get_tavern_chars_list
		LDA		word_4
		CMP		byte_C6
		BCC		loc_158BEE
loc_158C1F:
		LDY		#3
		LDA		(word_6C),Y
		JMP		loc_158BB3

; =============== S U B	R O U T	I N E =======================================
sub_158C26:
		LDY		byte_6ABF
		LDA		(word_6C),Y
		AND		#$3F
		CMP		#$20
		BCC		loc_158C42
		CMP		#$24
		BCC		loc_158C68
		LDX		#4
		CMP		#$25
		BCC		loc_158C6E
		LDX		#8
		CMP		#$26
		BCC		loc_158C6E
		RTS
loc_158C42:
		LDY		#0
		TAX
		CPX		#0
		BEQ		loc_158C54
loc_158C49:
		LDA		_txt_window_names_lib,Y
		INY
		CMP		#$FF
		BNE		loc_158C49
		DEX
		BNE		loc_158C49
loc_158C54:
		LDA		#$79
		JSR		sub_158DB9
loc_158C59:
		LDA		_txt_window_names_lib,Y
		CMP		#$FF
		BEQ		locret_158C67
		JSR		sub_158DB9
		INY
		JMP		loc_158C59
locret_158C67:
		RTS
loc_158C68:
		SBC		#$1F
		STA		byte_CE
		LDX		#4
loc_158C6E:
		TXA
		PHA
		JSR		_sram_b0_sF_unassigned_formation_char_name_read
		LDA		#$79
		JSR		sub_158DB9
		PLA
		STA		_tmp12+1
		LDY		#0
loc_158C7D:
		LDA		word_4,Y
		JSR		sub_158DB9
		INY
		DEC		_tmp12+1
		BNE		loc_158C7D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158C89:
		PHA
		STA		byte_CE
		TYA
		PHA
		LDY		#8
		LDA		(word_6C),Y
		AND		#$40
		BEQ		loc_158C9B
		LDA		byte_6AC7
		STA		byte_CE
loc_158C9B:
		PLA
		TAY
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_window_display_init_ex:
		JSR		_window_display_init
		LDA		byte_7E
		CMP		#$3E					; check for window indexes 3E, 3D
		BEQ		loc_158CAC
		CMP		#$3D
		BNE		locret_158CB8
loc_158CAC:
		LDX		#0
		STX		byte_80
		STX		byte_81
		STX		byte_6ACB
		JSR		_bE_s5
locret_158CB8:
		RTS

; =============== S U B	R O U T	I N E =======================================
_window_display_init:
		LDA		byte_7E					; window res idx
		ASL
		TAX
		LDA		_windows_lib,X
		STA		word_6C
		LDA		_windows_lib+1,X
		STA		word_6C+1
		LDA		byte_CE
		STA		byte_6AC7
		LDY		#2
		LDA		(word_6C),Y				; header + 2
		STA		byte_470				; screen position?
		STA		byte_6AC8
		LDY		#0
		LDA		(word_6C),Y				; header + 0
		BPL		loc_158CF5				; check for special flag, $80
		INY								; if it is, read additional
		LDA		(word_6C),Y				; screen position, then get ptr
		STA		byte_470				; to other frame window resource
		STA		byte_6AC8				; so you haven't keep similar
		INY								; copies of windows with different
		LDA		(word_6C),Y				; positions on the screen
		PHA
		INY
		LDA		(word_6C),Y
		STA		word_6C+1
		PLA
		STA		word_6C
		LDY		#0						; reread the window width
		LDA		(word_6C),Y
loc_158CF5:
		STA		_window_frame_width_var	; otherwise it's is a parameter
		LSR
		ORA		#$10
		STA		byte_471
		JSR		_window_height_calc_setup
		LDA		#$FF
		STA		byte_8E
		STA		byte_7F
		LDY		#4
		LDA		(word_6C),Y				; header + 4 param ?
		CLC
		ROL
		ROL
		ROL
		AND		#3
		STA		_window_frame_tmp6AEB				; extract higher 2 bits
		STA		_window_frame_header4_bits
		LDA		_window_frame_width_var
		ASL
		CLC
		ADC		_window_frame_tmp6AEB
		STA		_window_frame_width_add_header4_bits_add_1
		INC		_window_frame_width_add_header4_bits_add_1
		INC		_window_frame_header4_bits
		LDA		#0
		STA		_window_frame_tmp6AEB
		STA		_window_frame_tmp6AC1
		STA		_window_frame_tmp6AC9
		STA		_window_frame_tmp6ACA
		LDA		#$B						; header is 11 bytes wide, the actual
		STA		_wnd_cmd_byte_pos		; data starts at $B position, so set it
		RTS

; =============== S U B	R O U T	I N E =======================================
; read the window resource height parameter, calculates a special window
; heights based on various displaying parameters, adjust heights parameters
;
_window_height_calc_setup:
		LDY		#1
		LDA		(word_6C),Y					; header + 1 window type
		CMP		#$10
		BCS		loc_158D4C					; simple window types, less than $10 rows
		STA		_window_frame_height_var	; do no more else, just keep the height
		STA		word_7C+1					; and actual lines in window temp =
		DEC		word_7C+1					; (_window_frame_height_var - 1)
		RTS
loc_158D4C:
		SBC		#$10						; check how many extra lines is here
		CMP		#7
		BEQ		loc_158D60
		CMP		#8
		BEQ		loc_158D68
		CMP		#9
		BEQ		loc_158D72
		CMP		#$A
		BEQ		loc_158D85
		BNE		loc_158D98
loc_158D60:
		FARX	_bD_s14						; extra 7 lines (23)
		STA		word_4
		JMP		loc_158DA7
loc_158D68:
		FARX	_b4_s1						; extra 8 lines (24)
		LDA		byte_59
		STA		word_4
		JMP		loc_158DA7
loc_158D72:									; extra 9 lines (25)
		LDX		#1
loc_158D74:
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_158D80
		INX
		CPX		#4
		BNE		loc_158D74
loc_158D80:
		STX		word_4
		JMP		loc_158DA7
loc_158D85:
		JSR		_sram_b0_s32_get_tavern_chars_list				; extra 10 lines (26)
		LDA		#7
		STA		_window_frame_height_var
		LDA		word_4
		CMP		#6
		BCC		loc_158D95
		LDA		#6
loc_158D95:
		STA		word_7C+1
		RTS
loc_158D98:
		PHA									; less than 7 or more than 10
		TAX
		LDA		_sys_idx_list3,X
		JSR		_sys_safe_select
		PLA
		CMP		#2
		BCC		loc_158DA7
		INC		word_4
loc_158DA7:
		LDA		word_4
		STA		_window_frame_height_var
		STA		word_7C+1
		INC		_window_frame_height_var
		RTS
_sys_idx_list3:
		.BYTE	[_b0_s31_get_party_chars_list_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s28_player_inventory_item_read_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s1F_get_weapon_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s21_get_armor_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s21_shield_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s22_helm_from_inventory_idx-_sys_idx_lib]>>1
		.BYTE	[_b0_s31_get_party_chars_list_idx-_sys_idx_lib]>>1

; =============== S U B	R O U T	I N E =======================================
sub_158DB9:
		LDX		_window_frame_tmp6AEB
		BNE		loc_158DC2
		CMP		#$79
		BEQ		loc_158DC5
loc_158DC2:
		STA		_window_draw_buf,X
loc_158DC5:
		INC		_window_frame_tmp6AEB
		CMP		#$64
		BNE		locret_158DD6
		PHA
		LDA		_window_frame_tmp6AC9
		ORA		#$80
		STA		_window_frame_tmp6AC9
		PLA
locret_158DD6:
		RTS

; =============== S U B	R O U T	I N E =======================================
_window_buf_full_clear:
		LDY		#$6F
		LDX		#0
		BEQ		_window_buf_clear_ex

; =============== S U B	R O U T	I N E =======================================
_window_buf_char_clear:
		LDA		_window_frame_width_var
		ASL
		TAX
		TAY
		DEY

; =============== S U B	R O U T	I N E =======================================
_window_buf_clear_ex:
		LDA		#0
loc_158DE6:
		STA		_window_draw_buf,X
		INX
		DEY
		BPL		loc_158DE6
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_158DEE:
;		LDA		#0
;		TAX
;loc_158DF1:
;		STA		_window_draw_buf+$60,X
;		INX
;		CPX		#$10
;		BNE		loc_158DF1
;		RTS

; =============== S U B	R O U T	I N E =======================================
; fills window buffer with +----+ topmost frame line and additionally
; one empty row sides      |    |
;
_window_buf_draw_frame_top_side:
		LDA		#$7A							; CHR idx for top-left square
		STA		_window_draw_buf
		LDX		_window_frame_width_var
		DEX
		LDA		#$7D
		STA		_window_draw_buf,X						; CHR top-right square
		DEX
		LDA		#$78							; fills with top line between two
loc_158E0B:
		STA		_window_draw_buf,X
		DEX
		BNE		loc_158E0B
		LDX		_window_frame_width_var

; =============== S U B	R O U T	I N E =======================================
; fills window buffer with |    | of the current window row
;
_window_buf_draw_row_sides:
		LDA		#$77							; left side CHR tile
		STA		_window_draw_buf,X
		TXA
		CLC
		ADC		_window_frame_width_var
		TAX
		DEX
		LDA		#$7C							; right side CHR tile
		STA		_window_draw_buf,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; draws at least one more  |    | after the topmost side (2 rows above)
; can draw one more if any |    |, then
; fills the bottom frame   +----+
;
_window_buf_draw_bottom_side:
		LDA		_window_frame_width_var
		ASL
		TAX
		JSR		_window_buf_draw_row_sides
		INX
		LDA		_window_frame_height_var
		CMP		#2
		BNE		_window_buf_draw_row_sides
		LDA		#$7B							; bottom-left corner
		STA		_window_draw_buf,X
		TXA
		CLC
		ADC		_window_frame_width_var
		TAX
		DEX
		LDA		#$7F							; bottom-right corner
		STA		_window_draw_buf,X
		DEX
		LDY		_window_frame_width_var
		DEY
		DEY
		LDA		#$7E							; fills with bottom line between
loc_158E4F:
		STA		_window_draw_buf,X
		DEX
		DEY
		BNE		loc_158E4F
		RTS

; =============== S U B	R O U T	I N E =======================================
; copy width*4 line to width*2 line in window frame buffer
;
_window_frame_scroll_up_16px:
		LDA		byte_470
		CLC
		ADC		#$10
		STA		byte_470
		LDA		_window_frame_width_var
		ASL
		TAY
		ASL
		TAX
loc_158E67:
		LDA		_window_draw_buf-1,X
		STA		_window_draw_buf-1,Y
		DEX
		DEY
		BNE		loc_158E67
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158E72:
		PHA
		JSR		_bE_s14
		LDA		#0
		STA		word_6+1
		LDX		#0
loc_158E7C:
		INC		byte_8,X
		INX
		CPX		#8
		BNE		loc_158E7C
		PLA
		EOR		#7
		TAY
		TAX
loc_158E88:
		LDA		byte_8,X
		BNE		loc_158E9C
		DEX
		BPL		loc_158E88
		TYA
loc_158E90:
		LDA		byte_9,Y
		JSR		sub_158EA8
		INY
		CPY		#7
		BNE		loc_158E90
		RTS
loc_158E9C:
		TYA
		LDA		#$A
loc_158E9F:
		JSR		sub_158EA8
		INY
		CPY		#7
		BNE		loc_158E9F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158EA8:
		PHA
		LDA		word_6+1
		BEQ		loc_158EB8
		PLA
		LDX		_window_frame_tmp6AEB
		STA		byte_580,X
		INC		_window_frame_tmp6AEB
		RTS
loc_158EB8:
		PLA
		JMP		sub_158DB9

; =============== S U B	R O U T	I N E =======================================
_bE_s14:
		LDX		#$FF
		TXA
loc_158EBF:
		STA		byte_9,X
		INX
		CPX		#7
		BNE		loc_158EBF
loc_158EC6:
		JSR		sub_158ED9
		LDA		word_6+1
		STA		byte_8,X
		LDA		word_4
		ORA		word_4+1
		ORA		word_6
		BEQ		locret_158ED8
		DEX
		BPL		loc_158EC6
locret_158ED8:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158ED9:
		LDY		#$18
		LDA		#0
		STA		word_6+1
loc_158EDF:
		ASL		word_4
		ROL		word_4+1
		ROL		word_6
		ROL		word_6+1
		LDA		word_6+1
		SEC
		SBC		#$A
		BCC		loc_158EF2
		STA		word_6+1
		INC		word_4
loc_158EF2:
		DEY
		BNE		loc_158EDF
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_158EF8:
		PLA
		AND		#$F
		STA		byte_6A34
		LDA		word_6+1
		PHA
		LDA		word_6
		PHA
		LDA		byte_6A34
		STY		byte_6A34
		ASL
		TAX
		LDA		off_158F33,X
		STA		word_6
		LDA		off_158F33+1,X
		STA		word_6+1
		LDY		#0
loc_158F18:
		LDA		(word_6),Y
		CMP		#$FE
		BEQ		loc_158F27
		JSR		sub_158DB9
		INY
		INC		byte_6A34
		BNE		loc_158F18
loc_158F27:
		LDY		byte_6A34
		PLA
		STA		word_6
		PLA
		STA		word_6+1
		JMP		loc_158B7B
off_158F33:
		.WORD	byte_158F43
		.WORD	byte_158F45
		.WORD	byte_158F48
		.WORD	byte_158F4B
		.WORD	byte_158F4D
		.WORD	byte_158F4F
		.WORD	byte_158F51
		.WORD	byte_158F53
byte_158F43:
		.BYTE	$23,$FE
byte_158F45:
		.BYTE	 $B,$18,$FE
byte_158F48:
		.BYTE	$19,$16,$FE
byte_158F4B:
		.BYTE	$13,$FE
byte_158F4D:
		.BYTE	  0,$FE
byte_158F4F:
		.BYTE	  0,$FE
byte_158F51:
		.BYTE	 $B,$FE
byte_158F53:
		.BYTE	  0,$FE

; =============== S U B	R O U T	I N E =======================================
; when displaying a level, there must be non-numeric values according to
; special statuses retrieved previously in _b0_sC_player_LV_read_idx in
; temp var word_4+1, so here we check to this particular routine and wether
; it return any special codes. if any, display special status instead of
; number and break back to the main window display loop
;
_char_special_status_display:
		CMP		#[_b0_sC_player_LV_read_idx-_sys_idx_lib]>>1
		BNE		locret_158F79
		LDX		word_4+1
		BEQ		locret_158F79
		DEX
		TXA
		ASL
		TAX
		LDA		_char_status_abbreviations_list,X
		STX		word_4+1
		JSR		sub_158DB9
		LDX		word_4+1
		LDA		_char_status_abbreviations_list+1,X
		JSR		sub_158DB9
		JSR		_wnd_fetch_cmd_byte
		PLA
		PLA
		JMP		loc_15883A
locret_158F79:
		RTS

_char_status_abbreviations_list:
		.BYTE	_P,_O
		.BYTE	_N,_M
		.BYTE	_D,_E
		.BYTE	_S,_L
		.BYTE	_C,_F

_windows_lib:
		.WORD	_wnd00
		.WORD	_wnd01
		.WORD	_wnd02
		.WORD	_wnd03
		.WORD	_wnd04
		.WORD	_wnd05
		.WORD	_wnd06
		.WORD	_wnd07
		.WORD	_wnd08
		.WORD	_wnd09
		.WORD	_wnd0A
		.WORD	_wnd0B
		.WORD	_wnd0C
		.WORD	_wnd0D
		.WORD	_wnd0E
		.WORD	_wnd0F
		.WORD	_wnd10
		.WORD	_wnd11
		.WORD	_wnd12
		.WORD	_wnd13
		.WORD	_wnd14
		.WORD	_wnd15
		.WORD	_wnd16
		.WORD	_wnd17
		.WORD	_wnd18
		.WORD	_wnd19
		.WORD	_wnd1A
		.WORD	_wnd1B
		.WORD	_wnd1C
		.WORD	_wnd1D
		.WORD	_wnd1E
		.WORD	_wnd1F
		.WORD	_wnd20
		.WORD	_wnd21
		.WORD	_wnd22
		.WORD	_wnd23
		.WORD	_wnd24
		.WORD	_wnd25
		.WORD	_wnd26
		.WORD	_wnd27
		.WORD	_wnd28
		.WORD	_wnd29
		.WORD	_wnd2A
		.WORD	_wnd2A
		.WORD	_wnd2C
		.WORD	_wnd2D
		.WORD	_wnd2E
		.WORD	_wnd2F
		.WORD	_wnd2F
		.WORD	_wnd2F
		.WORD	_wnd2F
		.WORD	_wnd2F
		.WORD	_wnd2F
		.WORD	_wnd35
		.WORD	_wnd36
		.WORD	_wnd37
		.WORD	_wnd38
		.WORD	_wnd39
		.WORD	_wnd3A
		.WORD	_wnd3A
		.WORD	_wnd3C
		.WORD	_wnd3D
		.WORD	_wnd3E
		.WORD	_wnd3F
		.WORD	_wnd40
		.WORD	_wnd41
		.WORD	_wnd42
		.WORD	_wnd43
		.WORD	_wnd44
		.WORD	_wnd45
		.WORD	_wnd46
		.WORD	_wnd47
		.WORD	_wnd48
		.WORD	_wnd48
		.WORD	_wnd4A
		.WORD	_wnd4B
		.WORD	_wnd4C
		.WORD	_wnd37
		.WORD	_wnd4E
		.WORD	_wnd4F
		.WORD	_wnd50
		.WORD	_wnd51
		.WORD	_wnd52
		.WORD	_wnd53
		.WORD	_wnd54
		.WORD	_wnd55
		.WORD	_wnd56
		.WORD	_wnd57
		.WORD	_wnd58
		.WORD	_wnd59
		.WORD	_wnd5A
		.WORD	_wnd5B
		.WORD	_wnd5C
		.WORD	_wnd5D
		.WORD	_wnd5E
		.WORD	_wnd5F
		.WORD	_wnd60
		.WORD	_wnd61
		.WORD	_wnd62
		.WORD	_wnd63
		.WORD	_wnd45
		.WORD	_wnd65
		.WORD	_wnd66
		.WORD	_wnd67
		.WORD	_wnd68
		.WORD	_wnd69
		.WORD	_wnd6A
		.WORD	_wnd6B

; the window resource format:
; header: 11 bytes
;  header byte  0   - window width
;  header byte  1   - window height or special type
;  header byte  2   - window pos?
;  header byte  3   -
;  header byte  4-11-
; lines data [header byte 1] chunks, each $FF terminated
;  immediate data ($80 clear)
;  commands ($80 set)
;
_wnd00:
		.BYTE	  8,  4,$AA,$81,$60,$21,$22,$23,  0,  0,  0
		.BYTE	$2C,$80,  3,$FF
		.BYTE	$31,$81,  3,$FF
		.BYTE	$92,$20,$8D,  2,$FF
_wnd01:
		.BYTE	 $C,  4,$A8,$A0,$20,$21,$22,$23,  0,  0,  0
		.BYTE	$2C,$80,  3,  0,$2C,$A0,  3,$FF
		.BYTE	$31,$81,  3,  0,$31,$A1,  3,$FF
		.BYTE	$92,$20,$8D,  2,  0,$B2,$20,$AD,  2,$FF
_wnd02:
		.BYTE	$12,  4,$A5,$C1,$60,$21,$22,$23,  0,  0,  0
		.BYTE	$2C,$80,  3,  0,$2C,$A0,  3,  0,$2C,$C0,  3,$FF
		.BYTE	$31,$81,  3,  0,$31,$A1,  3,  0,$31,$C1,  3,$FF
		.BYTE	$92,$20,$8D,  2,  0,$B2,$20,$AD,  2,  0,$D2,$20,$CD,  2,$FF
_wnd03:
		.BYTE	$16,  4,$A3,$E0,$20,$21,$22,$23,  0,  0,  0
		.BYTE	$2C,$80,  3,  0,$2C,$A0,  3,  0,$2C,$C0,  3,  0,$2C,$E0,  3,$FF
		.BYTE	$31,$81,  3,  0,$31,$A1,  3,  0,$31,$C1,  3,  0,$31,$E1,  3,$FF
		.BYTE	$92,$20,$8D,  2,  0,$B2,$20,$AD,  2,  0,$D2,$20,$CD,  2,  0,$F2,$20,$ED,  2,$FF
_wnd04:
		.BYTE	$80,$12
		.WORD	_wnd00
_wnd05:
		.BYTE	$80,$12
		.WORD	_wnd01
_wnd06:
		.BYTE	$80,$12
		.WORD	_wnd02
_wnd07:
		.BYTE	$80,$12
		.WORD	_wnd03
_wnd08:
		.BYTE	 $C,  6,$32,$81,$25,$21,$22,$23,$40,  0,  0
		.BYTE	  0,$92,$80,$FF
		.BYTE	 _S,_E,_X,_col,$94,$60,$FF
		.BYTE	 _L,_E,_V,_E,_L,_col,$8D,  2,$FF
		.BYTE	$9E,_H,_P,_col,$80,  3,$FF
		.BYTE	$9E,_M,_P,_col,$81,  3,$FF
_wnd09:
		.BYTE	$14, $B,$34,  0,$20,$61,$22,$23,$40,  0,  0
		.BYTE	$FE,  0,_S,_t,_r,_e,_n,_g,_t,_h,_col,$84,  3,$FF,$FF
		.BYTE	$FE,$9E,_A,_g,_i,_l,_i,_t,_y,_col,$85,  3,$FF,$FF
		.BYTE	$FE,  0,_V,_i,_t,_a,_l,_i,_t,_y,_col,$86,  3,$FF,$FF
		.BYTE	$9E,_I,_n,_t,_e,_l,_l,_i,_g,_e,_n,_c,_e,_col,$87,  3,$FF,$FF
		.BYTE	$FE,$FE,_L,_u,_c,_k,_col,$88,  3,$FF,$FF
		.BYTE	$9E,_M,_a,_x,_i,_m,_u,_m,0,_H,_dot,_P,_dot,_col,$82,  3,$FF,$FF
		.BYTE	$9E,_M,_a,_x,_i,_m,_u,_m,0,_M,_dot,_P,_dot,_col,$83,  3,$FF,$FF
		.BYTE	$9E,_A,_t,_t,_a,_c,_k,0,_P,_o,_w,_e,_r,_col,$89,  3,$FF,$FF
		.BYTE	  0,_D,_e,_f,_e,_n,_c,_e,0,_P,_o,_w,_e,_r,_col,$8A,  3,$FF,$FF
		.BYTE	 _E,_x,_p,_e,_r,_i,_e,_n,_c,_e,$FF
		.BYTE	$DE,_P,_o,_i,_n,_t,_s,_col,$8C,  7,$FF
_wnd0A:
		.BYTE	$10,  5,$92,  0,$60,$61,$22,$23,$C0,  0,  0
		.BYTE	$96,$D5,$FF,$9E,$B6,$B5,$FF
		.BYTE	$96,$D6,$FF,$9E,$B6,$B6,$FF
		.BYTE	$96,$D7,$FF,$9E,$B6,$B7,$FF
		.BYTE	$96,$D8,$FF,$9E,$B6,$B8,$FF
		.BYTE	$FF
_wnd0B:
		.BYTE	$18, $D,$12,$87,$4E,$A1,$22,$23,$40,  0,  0
		.BYTE	$DA,$90,$9E,$FA,$90,$FF
_wnd0C:
		.BYTE	 $C,  9,$18,$82,$40,$A1,$22,$23,$40,  0,  0,$9A,$91,$FF
_wnd0D:
		.BYTE	 $A,  4,$31,  0,$20,$61,$22,$23,$40,  0,  0,$25,$38,$38,$25,$27
		.BYTE	$2F,$FF,  0,$34,$33,$3B,$29,$36,$FF,$FE,$89,  3,$FF,$28,$29,$2A
		.BYTE	$29,$32,$27,$29,$FF,  0,$34,$33,$3B,$29,$36,$FF,$FE,$8A,  3,$FF
		.BYTE	$FF
_wnd0E:
		.BYTE	  8,  6,$47,  0,$60,$61,$22,$23,  0,  0,  0,$FF,$90,$40,$FF,$FF
		.BYTE	$2C,$80,  3,$FF,  0,$58,$58,$58,$FF,  0,$82,  3,$FF,$FF,$31,$81
		.BYTE	  3,$FF,  0,$58,$58,$58,$FF,  0,$83,  3,$FF,$FF
_wnd0F:
		.BYTE	 $C,  6,$45,  0,$20,$61,$22,$23,  0,  0,  0,$FF,$90,$40,  0,$B0
		.BYTE	$40,$FF,$FF,$2C,$80,  3,  0,$2C,$A0,  3,$FF,  0,$58,$58,$58,$9E
		.BYTE	$58,$58,$58,$FF,  0,$82,  3,$9E,$A2,  3,$FF,$FF,$31,$81,  3,  0
		.BYTE	$31,$A1,  3,$FF,  0,$58,$58,$58,$9E,$58,$58,$58,$FF,  0,$83,  3
		.BYTE	$9E,$A3,  3,$FF,$FF
_wnd10:
		.BYTE	$12,  6,$44,  0,$60,$61,$22,$23,  0,  0,  0,$FF,$90,$40,  0,$B0
		.BYTE	$40,  0,$D0,$40,$FF,$FF,$2C,$80,  3,  0,$2C,$A0,  3,  0,$2C,$C0
		.BYTE	  3,$FF,  0,$58,$58,$58,$9E,$58,$58,$58,$9E,$58,$58,$58,$FF,  0
		.BYTE	$82,  3,$9E,$A2,  3,$9E,$C2,  3,$FF,$FF,$31,$81,  3,  0,$31,$A1
		.BYTE	  3,  0,$31,$C1,  3,$FF,  0,$58,$58,$58,$9E,$58,$58,$58,$9E,$58
		.BYTE	$58,$58,$FF,  0,$83,  3,$9E,$A3,  3,$9E,$C3,  3,$FF,$FF
_wnd11:
		.BYTE	$16,  6,$42,  0,$20,$61,$22,$23,  0,  0,  0,$FF,$90,$40,  0,$B0
		.BYTE	$40,  0,$D0,$40,  0,$F0,$40,$FF,$FF,$2C,$80,  3,  0,$2C,$A0,  3
		.BYTE	  0,$2C,$C0,  3,  0,$2C,$E0,  3,$FF,  0,$58,$58,$58,$9E,$58,$58
		.BYTE	$58,$9E,$58,$58,$58,$9E,$58,$58,$58,$FF,  0,$82,  3,$9E,$A2,  3
		.BYTE	$9E,$C2,  3,$9E,$E2,  3,$FF,$FF,$31,$81,  3,  0,$31,$A1,  3,  0
		.BYTE	$31,$C1,  3,  0,$31,$E1,  3,$FF,  0,$58,$58,$58,$9E,$58,$58,$58
		.BYTE	$9E,$58,$58,$58,$9E,$58,$58,$58,$FF,  0,$83,  3,$9E,$A3,  3,$9E
		.BYTE	$C3,  3,$9E,$E3,  3,$FF,$FF
_wnd12:
		.BYTE	  8,  2,$1B,  0,$20,$21,$22,$23,$40,  0,  0,$2B,$8B,  5,$FF
_wnd13:
		.BYTE	$10,$16,$54,  0,$60,$21,$22,$23,  0,  0,  0,$BE,$2B,$75,$9E,$8B
		.BYTE	  5,$FF,$90,$40,$75,$8C,  7,$FF,$B0,$40,$75,$AC,  7,$FF,$D0,$40
		.BYTE	$75,$CC,  7,$FF,$F0,$40,$75,$EC,  7,$FF
_wnd14:
		.BYTE	$10,  4,$12,$83,$40,  0,  0,$80,$11,$62,  0,$38,$25,$30,$2F,$DE
		.BYTE	$37,$34,$29,$30,$30,$FF,$37,$38,$25,$38,$39,$37,$9E,$2D,$38,$29
		.BYTE	$31,$FF,$37,$29,$25,$36,$27,$2C,$9E,$29,$35,$39,$2D,$34,$FF
_wnd15:
		.BYTE	 $C,  4,$53,  0,$A0,$21,$22,$A3,  2,  2,  0,$39,$37,$29,$FF,$38
		.BYTE	$36,$25,$32,$37,$2A,$29,$36,$FF,$28,$2D,$37,$27,$25,$36,$28,$FF
_wnd16:
		.BYTE	  8,  3,$3A,  0,$60,$21,$22,$A3,  1,  2,  0,$26,$39,$3D,$FF,$37
		.BYTE	$29,$30,$30,$FF
_wnd17:
		.BYTE	 $E,  4,$57,  0,$60,$21,$22,$A3,  1,  2,  0,$28,$29,$38,$33,$3C
		.BYTE	$2D,$27,$25,$38,$29,$FF,$39,$32,$27,$39,$36,$37,$29,$FF,$36,$29
		.BYTE	$3A,$2D,$3A,$29,$FF
_wnd18:
		.BYTE	  8,  5,$92,$81,$64,$21,$22,$A3,  1,  2,  0,$2A,$2D,$2B,$2C,$38
		.BYTE	$FF,$37,$34,$29,$30,$30,$FF,$36,$39,$32,$FF,$2D,$38,$29,$31,$FF
_wnd19:
		.BYTE	  8,  5,$92,$81,$64,$21,$22,$A3,  1,  2,  0,$2A,$2D,$2B,$2C,$38
		.BYTE	$FF,$37,$34,$29,$30,$30,$FF,$34,$25,$36,$36,$3D,$FF,$2D,$38,$29
		.BYTE	$31,$FF
_wnd1A:
		.BYTE	  8,  5,$92,$81,$64,$21,$22,$A3,  1,  2,  0,$2A,$2D,$2B,$2C,$38
		.BYTE	$FF,$36,$39,$32,$FF,$34,$25,$36,$36,$3D,$FF,$2D,$38,$29,$31,$FF
_wnd1B:
		.BYTE	  8,  4,$92,$81,$64,$21,$22,$A3,  1,  2,  0,$2A,$2D,$2B,$2C,$38
		.BYTE	$FF,$34,$25,$36,$36,$3D,$FF,$2D,$38,$29,$31,$FF
_wnd1C:
		.BYTE	$80,$3B
		.WORD	_wnd2A
_wnd1D:
		.BYTE	  6,  3,$3B,  0,$60,$21,$22,$A3,  1,  2,  0,$3D,$29,$37,$FF,$32
		.BYTE	$33,$FF
_wnd1E:
		.BYTE	 $C,  4,$32,$81,$41,$21,$22,$A3,  1,  2,  0,$2D,$32,$2A,$33,$FF
		.BYTE	$27,$33,$32,$28,$2D,$38,$2D,$33,$32,$FF,$2A,$33,$36,$31,$25,$38
		.BYTE	$2D,$33,$32,$FF
_wnd1F:
		.BYTE	 $A,  3,$59,  0,$60,$21,$22,$A3,  1,  2,  0,$30, $F, $B,$20, $F
		.BYTE	$FF,$34,$13, $D,$15,  0,$39,$1A,$FF
_wnd20:
		.BYTE	  8,  3,$3A,  0,$60,$21,$22,$A3,  1,  2,  0,$2B,$33,$30,$28,$FF
		.BYTE	$2D,$38,$29,$31,$FF
_wnd21:
		.BYTE	  8,  3,$B3,  0,$60,$21,$22,$A3,  1,  2,  0,$39,$37,$29,$FF,$29
		.BYTE	$35,$39,$2D,$34,$FF
_wnd22:
		.BYTE	 $A,  3,$B2,$81,$44,$21,$22,$A3,  1,  2,  0,$3B,$13,$24, $B,$1C
		.BYTE	 $E,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF
_wnd23:
		.BYTE	  8,$10,$45,  0,$60,$A1,$22,$A3,  1,  2,  0,$90,$41,$FF
_wnd24:
		.BYTE	 $A,$10,$46,$81,$85,$A1,$22,$A3,  2,  2,  0,$90,$41,$FF
_wnd25:
		.BYTE	$10,$12,$16,$84,$46,$E1,$22,$A3,$41,  1,  0,$9E,$B6,$B0,$FF,$96
		.BYTE	$D0,$FF,$FF
_wnd26:
		.BYTE	$10,$13,$16,$84,$47,$E1,$22,$A3,$41,  1,  0,$9E,$B6,$B1,$FF,$96
		.BYTE	$D1,$FF,$FF
_wnd27:
		.BYTE	$10,$14,$16,$84,$48,$E1,$22,$A3,$41,  1,  0,$9E,$B6,$B2,$FF,$96
		.BYTE	$D2,$FF,$FF
_wnd28:
		.BYTE	$10,$15,$16,$84,$49,$E1,$22,$A3,$41,  1,  0,$9E,$B6,$B3,$FF,$96
		.BYTE	$D3,$FF,$FF
_wnd29:
		.BYTE	 $A,$10,$26,$81,$84,$A1,$22,$A3,  2,  2,  0,$90,$41,$FF
_wnd2A:
		.BYTE	  8,$10,$33,  0,$60,$A1,$22,$A3,  1,  2,  0,$90,$41,$FF
_wnd2C:
		.BYTE	 $A,$10,$35,$83,$42,$A1,$22,$23,  0,  0,  0,$90,$41,$FF
_wnd2D:
		.BYTE	$10,$11,$16,  0,$60,$E1,$22,$A3,$41,  1,  0,$9E,$B6,$B4,$FF,$96
		.BYTE	$D4,$FF,$FF
_wnd2E:
		.BYTE	 $A,$10,$25,$83,$8F,$A1,$22,$A3,  2,  2,  0,$90,$41,$FF
_wnd2F:
		.BYTE	$18,$1A,$22,  0,$4D,$A1,$22,$B5,  1,  2,  0,$91,$81,  0,$30,$8E
		.BYTE	  2,  0,$93,$31,  0,$6B,  0,$95,$11,$FF
_wnd35:
		.BYTE	$18,  7,$22,$80,$4D,$A1,$22,$B4,  1,  2,  6,$F1,$80,  0,$30,$EE
		.BYTE	  2,  0,$F3,$30,  0,$6B,  0,$F5,$10,$FF
_wnd36:
		.BYTE	$14,$17,$11,  0,$60,$E1,$22,$A3,  1,  1,  0,$9E,$B6,$A9,$FF,$96
		.BYTE	$C9,$97,  5,$FF,$FF
_wnd37:
		.BYTE	  8,  2,$3A,  0,$60,$21,$22,$A3,  0,  0,  0,  1,  1,  1,  1,  1
		.BYTE	$FF
_wnd38:
		.BYTE	  8,$10,$9A,$80,$4D,$A1,  0,$B9,  1,  2,  0,$90,$41,$FF
_wnd39:
		.BYTE	$10,$18,$96,$80,$4D,$E1,  0,$B8,  1,$81,$80,  0,$B8,$C0,$FF,$98
		.BYTE	$C0,$FF,$FF
_wnd3A:
		.BYTE	$10,  5,$96,  0,$4D,$E1,$22,$E7,$41,  1,  0,$9E,$B6,$B4,$FF,$96
		.BYTE	$D4,$FF,$FF
_wnd3C:
		.BYTE	  8,$10,$54,  0,$60,$A1,$22,$A3,  1,  2,  0,$90,$41,$FF
_wnd3D:
		.BYTE	$18,  5,$92,  0,$60,$A1,$22,$23,  0,  0,  0
		.BYTE	$FF
_wnd3E:
		.BYTE	$80,$92
		.WORD	_wnd3D
_wnd3F:
		.BYTE	$10,$18,$96,  0,$60,$E1,$22,$23,  1,$81,  0,  0,$B8,$C0,$FF,$98
		.BYTE	$C0,$FF,$FF
_wnd40:
		.BYTE	$18,  7,$42,  0,$60,$21,$22,$23,  0,  0,  0,$25,  0,$26,  0,$27
		.BYTE	  0,$28,  0,$29,  0,$2A,  0,$2B,  0,$2C,  0,$2D,  0,$2E,  0,$2F
		.BYTE	$FF,$30,  0,$31,  0,$32,  0,$33,  0,$34,  0,$35,  0,$36,  0,$37
		.BYTE	  0,$38,  0,$39,  0,$3A,$FF,$3B,  0,$3C,  0,$3D,  0,$3E,  0,$6B
		.BYTE	  0,$68,  0,$70,  0,$6F,  0,$6D,  0,$6E,$FF, $B,  0, $C,  0, $D
		.BYTE	  0, $E,  0, $F,  0,$10,  0,$11,  0,$12,  0,$13,  0,$14,  0,$15
		.BYTE	$FF,$16,  0,$17,  0,$18,  0,$19,  0,$1A,  0,$1B,  0,$1C,  0,$1D
		.BYTE	  0,$1E,  0,$1F,  0,$20,$FF,$21,  0,$22,  0,$23,  0,$24,  0,$6A
		.BYTE	  0,$6C,  0,$26,$25,$27,$2F,$9E,$29,$32,$28,$FF
_wnd41:
		.BYTE	 $C,  3,$25,$83,$4C,$21,$22,$23,  0,  0,  0,$5A,$5A,$5A,$5A,$5A
		.BYTE	$5A,$5A,$5A,$FF,$FF
_wnd42:
		.BYTE	 $A,  3,$68,$83,$4B,$21,$22,$A3,  1,  2,  0,$31,$25,$30,$29,$FF
		.BYTE	$2A,$29,$31,$25,$30,$29,$FF
_wnd43:
		.BYTE	 $C,  7,$54,$82,$4A,$21,$22,$A3,  1,  2,  0,$37,$19,$16, $E,$13
		.BYTE	 $F,$1C,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF,$3B,$13,$24, $B,$1C
		.BYTE	 $E,$FF,$2A,$13,$11,$12,$1E, $F,$1C,$FF,$31, $F,$1C, $D,$12, $B
		.BYTE	$18,$1E,$FF,$2B,$19,$19,$10,$6B,$19,$10,$10,$FF
_wnd44:
		.BYTE	$10,  2,$13,  0,$20,$61,$22,$23,  0,  0,  0,$2D,$1D,  0,$1E,$12
		.BYTE	$13,$1D,  0,$1E,$12, $F,$FF,$1C,$13,$11,$12,$1E,  0,$1A, $F,$1C
		.BYTE	$1D,$19,$18,$6F,$FF
_wnd45:
		.BYTE	$80,$1B
		.WORD	_wnd1D
_wnd46:
		.BYTE	$10,  4,$56,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$28,  0,$31
		.BYTE	$29,$31,$26,$29,$36,$FF,$30,$29,$25,$3A,$29,  0,$31,$29,$31,$26
		.BYTE	$29,$36,$FF,$37,$29,$29,  0,$30,$2D,$37,$38,$FF
_wnd47:
		.BYTE	 $C,  7,$18,$82,$4A,$21,$22,$A3,  1,  2,  0,$37,$19,$16, $E,$13
		.BYTE	 $F,$1C,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF,$3B,$13,$24, $B,$1C
		.BYTE	 $E,$FF,$2A,$13,$11,$12,$1E, $F,$1C,$FF,$31, $F,$1C, $D,$12, $B
		.BYTE	$18,$1E,$FF,$37, $B,$11, $F,$FF
_wnd48:
		.BYTE	 $A,  3,$58,  0,$60,$21,$22,$23,  0,  0,  0,  2,$FF,  3,$FF
_wnd4A:
		.BYTE	 $A,  4,$58,  0,$60,$21,$22,$23,  0,  0,  0,  2,$FF,  3,$FF,  4
		.BYTE	$FF
_wnd4B:
		.BYTE	 $A,  5,$58,  0,$60,$21,$22,$23,  0,  0,  0,  2,$FF,  3,$FF,  4
		.BYTE	$FF,  5,$FF
_wnd4C:
		.BYTE	 $C,  5,$53,  0,$A0,$21,$22,$A3,  2,  2,  0,$39,$37,$29,$FF,$38
		.BYTE	$36,$25,$32,$37,$2A,$29,$36,$FF,$28,$2D,$37,$27,$25,$36,$28,$FF
		.BYTE	$25,$34,$34,$36,$25,$2D,$37,$29,$FF
_wnd4E:
		.BYTE	  8,$10,$3B,  0,$60,$A1,$22,$A3,  1,  2,  0,$90,$51,$FF
_wnd4F:
		.BYTE	 $C,  6,$18,$82,$4A,$21,$22,$A3,  1,  2,  0,$37,$19,$16, $E,$13
		.BYTE	 $F,$1C,$FF,$34,$13,$16,$11,$1C,$13,$17,$FF,$3B,$13,$24, $B,$1C
		.BYTE	 $E,$FF,$2A,$13,$11,$12,$1E, $F,$1C,$FF,$31, $F,$1C, $D,$12, $B
		.BYTE	$18,$1E,$FF
_wnd50:
		.BYTE	$14,  2,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$FF
_wnd51:
		.BYTE	$14,  2,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$FF
_wnd52:
		.BYTE	$14,  3,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$FF,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$FF
_wnd53:
		.BYTE	$14,  2,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$FF
_wnd54:
		.BYTE	$14,  3,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$FF,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$FF
_wnd55:
		.BYTE	$14,  3,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$FF,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$FF
_wnd56:
		.BYTE	$14,  4,$95,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$FF,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$FF,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$FF
_wnd57:
		.BYTE	$12,  6,$74,  0,$20,$61,$22,$A3,$31,  8,  0,  0,$37, $F,$16, $F
		.BYTE	 $D,$1E,  0,$1E,$12, $F,$FF,$FF,  0,$17, $F,$1D,$1D, $B,$11, $F
		.BYTE	  0,$1D,$1A, $F, $F, $E,$FF,$FF,  0,$23,$19,$1F,  0,$16,$13,$15
		.BYTE	 $F,$6C,$FF,$FF,$FF,  0,  2,  0,  3,  0,  4,  0,  5,  0,  6,  0
		.BYTE	  7,  0,  8,  0,  9,$FF,$FF,  0,$2A, $B,$1D,$1E,$FE,$9E,$37,$16
		.BYTE	$19,$21,$FF,$FF
_wnd58:
		.BYTE	$14,  2,$73,  0,$60,$21,$22,$23,  0,  0,  0,$2D,$32,$34,$39,$38
		.BYTE	  0,$3D,$33,$39,$36,  0,$32,$25,$31,$29,$70,$FF
_wnd59:
		.BYTE	$14,  6,$73,  0,$20,$21,$22,$23,$40,  0,  0,  0,$99,$80,$FF,  0
		.BYTE	$30,$29,$3A,$29,$30,$9E,$8F,  2,$FF,  0,$28,$19,  0,$23,$19,$1F
		.BYTE	  0,$21, $B,$18,$1E,  0,$1E,$19,$FF,  0, $F,$1C, $B,$1D, $F,  0
		.BYTE	$1E,$12,$13,$1D,$FF,  0,$1B,$1F, $F,$1D,$1E,$6F,$FF
_wnd5A:
		.BYTE	$18,  2,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$75,$99,$40,$FF
_wnd5B:
		.BYTE	$18,  2,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$75,$B9,$40,$FF
_wnd5C:
		.BYTE	$18,  3,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$75,$99,$40,$FF,$25,$28
		.BYTE	$3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$75,$B9,$40
		.BYTE	$FF
_wnd5D:
		.BYTE	$18,  2,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$75,$D9,$40,$FF
_wnd5E:
		.BYTE	$18,  3,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$75,$99,$40,$FF,$25,$28
		.BYTE	$3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$75,$D9,$40
		.BYTE	$FF
_wnd5F:
		.BYTE	$18,  3,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$75,$B9,$40,$FF,$25,$28
		.BYTE	$3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4,$75,$D9,$40
		.BYTE	$FF
_wnd60:
		.BYTE	$18,  4,$63,  0,$60,$21,$22,$A3,  1,  2,  0,$25,$28,$3A,$29,$32
		.BYTE	$38,$39,$36,$29,  0,$30,$33,$2B,  0,  2,$75,$99,$40,$FF,$25,$28
		.BYTE	$3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,  3,$75,$B9,$40
		.BYTE	$FF,$25,$28,$3A,$29,$32,$38,$39,$36,$29,  0,$30,$33,$2B,  0,  4
		.BYTE	$75,$D9,$40,$FF
_wnd61:
		.BYTE	$18,  6,$42,  0,$60,$21,$22,$A3,  1,  2,  0,$27,$33,$32,$38,$2D
		.BYTE	$32,$39,$29,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$26,$29,$2B,$2D
		.BYTE	$32,  0,$25,  0,$32,$29,$3B,  0,$35,$39,$29,$37,$38,$FF,$27,$33
		.BYTE	$34,$3D,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$29,$36,$25,$37,$29
		.BYTE	  0,$25,  0,$35,$39,$29,$37,$38,$FF,$27,$2C,$25,$32,$2B,$29,  0
		.BYTE	$31,$29,$37,$37,$25,$2B,$29,  0,$37,$34,$29,$29,$28,$FF
_wnd62:
		.BYTE	$18,  4,$42,  0,$60,$21,$22,$A3,  1,  2,  0,$27,$33,$32,$38,$2D
		.BYTE	$32,$39,$29,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$29,$36,$25,$37
		.BYTE	$29,  0,$25,  0,$35,$39,$29,$37,$38,$FF,$27,$2C,$25,$32,$2B,$29
		.BYTE	  0,$31,$29,$37,$37,$25,$2B,$29,  0,$37,$34,$29,$29,$28,$FF
_wnd63:
		.BYTE	$18,  2,$42,  0,$60,$21,$22,$A3,  1,  2,  0,$26,$29,$2B,$2D,$32
		.BYTE	  0,$25,  0,$32,$29,$3B,  0,$35,$39,$29,$37,$38,$FF
_wnd65:
		.BYTE	$18,  9,$12,$87,$4E,$A1,$22,$23,  0,  0,  0,$DA,$90,$9E,$FA,$90
		.BYTE	$FF
_wnd66:
		.BYTE	$16,$19,$43,  0,$60,$E1,$22,$A3,  1,  1,  0,  0,$B8,$C0,$FF,$98
		.BYTE	$C0,$FF,$FF
_wnd67:
		.BYTE	$10,  5,$96,$80,$4D,$E1,$22,$BB,$41,  1,  4,$9E,$B6,$B4,$FF,$96
		.BYTE	$D4,$FF,$FF
_wnd68:
		.BYTE	$80,$1A
		.WORD	_wnd12
_wnd69:
		.BYTE	$10,  9,$18,  0,$60,$A1,$22,$23,  0,  0,  0
		.BYTE	$FF
_wnd6A:
		.BYTE	  8,$10,$35,$83,$42,$A1,$22,$A3,  1,  2,  0
		.BYTE	$90,$41,$FF
_wnd6B:
		.BYTE	$10,  9,$18,  0,$60,$E1,$22,$A3,$41,  1,  0
		.BYTE	$9E,$B6,$B4,$FF
		.BYTE	$96,$D4,$FF,$FF

_txt_window_names_lib:
		.BYTE	_C,_O,_M,_M,_A,_N,_D,$FF
		.BYTE	_S,_T,_A,_T,_U,_S,$FF
		.BYTE	_I,_T,_E,_M,$FF
		.BYTE	_W,_H,_O,_M,$FF
		.BYTE	_S,_P,_E,_L,_L,$FF
		.BYTE	_E,_Q,_U,_I,_P,$FF
		.BYTE	_W,_E,_A,_P,_O,_N,$FF
		.BYTE	_A,_R,_M,_O,_R,$FF
		.BYTE	_S,_H,_I,_E,_L,_D,$FF
		.BYTE	_H,_E,_L,_M,_E,_T,$FF
		.BYTE	_C,_L,_A,_S,_S,$FF
		.BYTE	_S,_E,_X,$FF
		.BYTE	_N,_A,_M,_E,$FF
		.BYTE	  0,_arrow,$FF
		.BYTE	_F,_I,_G,_H,_T,$FF
		.BYTE	_T,_O,$FF

; =============== S U B	R O U T	I N E =======================================
sub_159D86:
		TYA
		PHA
		TXA
		PHA
		JSR		sub_17474C
		PLA
		TAX
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_159DA4:
;		LDA		#0
;		STA		byte_80
;		LDA		#1
;		STA		byte_81
;		LDA		#$2C
;		STA		byte_471
;		LDA		#$92
;		STA		byte_470
;		LDA		#$7A
;		STA		byte_74
;		LDA		#$78
;		STA		byte_75
;		LDA		#$7D
;		STA		byte_76
;		LDA		#$17
;		STA		byte_77
;		LDX		#0
;		JSR		sub_159E25
;		LDA		#$2F
;		STA		byte_77
;		JSR		sub_159E3C
;		JSR		sub_159E4F
;		JSR		sub_159E42
;		LDA		#$B2
;		STA		byte_470
;		LDA		#$2C
;		STA		byte_471
;		LDX		#0
;		JSR		sub_159E13
;		JSR		sub_159E4F
;		LDA		#$D2
;		STA		byte_470
;		LDA		#$1C
;		STA		byte_471
;		LDA		#$17
;		STA		byte_77
;		LDX		#0
;		JSR		sub_159E3C
;		LDA		#$2F
;		STA		byte_77
;		LDA		#$7B
;		STA		byte_74
;		LDA		#$7E
;		STA		byte_75
;		LDA		#$7F
;		STA		byte_76
;		JSR		sub_159E25
;		JMP		sub_159D86

; =============== S U B	R O U T	I N E =======================================
sub_159E13:
		LDA		#$17
		JSR		sub_159E23
		LDA		#$2F
		BNE		sub_159E23

; =============== S U B	R O U T	I N E =======================================
sub_159E1C:
		LDA		#$47
		JSR		sub_159E23
		LDA		#$5F

; =============== S U B	R O U T	I N E =======================================
sub_159E23:
		STA		byte_77

; =============== S U B	R O U T	I N E =======================================
sub_159E25:
		LDA		byte_74
		STA		_window_draw_buf,X
		INX
		LDA		byte_75
loc_159E2D:
		STA		_window_draw_buf,X
		INX
		CPX		byte_77
		BNE		loc_159E2D
		LDA		byte_76
		STA		_window_draw_buf,X
		INX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159E3C:
		JSR		sub_159E42
		JMP		sub_159E25

; =============== S U B	R O U T	I N E =======================================
sub_159E42:
		LDA		#$77
		STA		byte_74
		LDA		#0
		STA		byte_75
		LDA		#$7C
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159E4F:
		JSR		sub_159E1C
		JMP		sub_159D86

; =============== S U B	R O U T	I N E =======================================
sub_159E55:
		PHA
		STA		byte_7E
		JSR		_window_display_init
		JSR		sub_159E63
		JSR		_bE_s12
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_159E63:
		LDA		_window_frame_width_var
		LSR
		STA		byte_75
		LDA		_window_frame_height_var
		STA		byte_74
		LDA		byte_470
		AND		#$F
		STA		byte_77
		LDA		byte_470
		LSR
		LSR
		LSR
		LSR
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s12:
		LDA		byte_77
		CMP		#8
		BCS		loc_159EA1
		JSR		loc_159EAA
		JSR		loc_159EC5
		LDA		#8
		SEC
		SBC		byte_77
		TAX
loc_159E91:
		DEC		byte_75
		DEX
		BNE		loc_159E91
		LDA		byte_75
		BMI		locret_159E9C
		BNE		loc_159E9D
locret_159E9C:
		RTS
loc_159E9D:
		LDA		#8
		STA		byte_77
loc_159EA1:
		JSR		loc_159EA7
		JMP		loc_159ECB
loc_159EA7:
		SEC
		SBC		#8
loc_159EAA:
		TAX
		LDA		#$80
		CPX		#0
		BEQ		loc_159EB5
loc_159EB1:
		LSR
		DEX
		BNE		loc_159EB1
loc_159EB5:
		STA		byte_78
		LDX		byte_75
		LDA		#0
loc_159EBB:
		ORA		byte_78
		LSR		byte_78
		DEX
		BNE		loc_159EBB
		STA		byte_78
		RTS
loc_159EC5:
		LDA		byte_76
		ASL
		TAX
		BNE		loc_159ED0
loc_159ECB:
		LDA		byte_76
		ASL
		TAX
		INX
loc_159ED0:
		LDA		byte_74
		TAY
loc_159ED3:
		LDA		byte_78
		ORA		byte_647,X
		STA		byte_647,X
		INX
		INX
		DEY
		BNE		loc_159ED3
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_sD:
		LDX		#$1E
		LDA		#0
loc_159EE5:
		DEX
		STA		byte_647,X
		BNE		loc_159EE5
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s9:
		LDA		word_4+1
		ASL
		TAX
		INC		word_4
		LDA		word_4
		CMP		#9
		BCC		loc_159EFC
		SEC
		SBC		#8
		INX
loc_159EFC:
		TAY
		LDA		#$80
loc_159EFF:
		LSR
		DEY
		BNE		loc_159EFF
		ROL
		AND		byte_647,X
		CLC
		BEQ		locret_159F0B
		SEC
locret_159F0B:
		RTS

; =============== S U B	R O U T	I N E =======================================
_print_00_74_char_force_dequeue:
		LDA		byte_76
		CLC
		ADC		#8
		STA		byte_76
		BMI		_print_00_char_force_dequeue
		LDA		#$74
		BNE		_bE_s38_print_char_force_dequeue

; =============== S U B	R O U T	I N E =======================================
_print_00_73_char_force_dequeue:
		LDA		byte_76
		CLC
		ADC		#8
		STA		byte_76
		BMI		_print_00_char_force_dequeue

; =============== S U B	R O U T	I N E =======================================
_print_73_char_force_dequeue:
		LDA		#$73
		BNE		_bE_s38_print_char_force_dequeue

; =============== S U B	R O U T	I N E =======================================
_print_00_char_force_dequeue:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
_bE_s38_print_char_force_dequeue:
		STA		word_6+1
		PHA
		TXA
		PHA
		TYA
		PHA
		LDA		word_6+1
		JSR		_print_char
		JSR		_ppu_set_dequeue_flag
		LDA		#2
		STA		_nmi_force_dequeue_request_flag
		JSR		_wait_for_nmi_is_over_sync
		LDA		#0
		STA		_nmi_force_dequeue_request_flag
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_159F2E:
;		LDA		#$87
;		JSR		_get_syscall0_data_cur_byte0	; 87 - bankE, ofs 1E is zeroed, so this is definitely unused leftover
;		STA		byte_10
;		LDA		#$87
;		JSR		_get_syscall0_data_cur_byte1
;		STA		byte_11
;loc_159F3C:
;		TXA
;		PHA
;		LDA		#0
;		STA		_tmp12+1
;		LDX		byte_7A
;		INX
;		INX
;		TXA
;		LDX		#_tmp12
;		JSR		_mul16_to_8
;		LDY		#0
;		LDA		_tmp12
;		LDY		_tmp12+1
;		LDX		#byte_10
;		JSR		_add16_to_16
;		PLA
;		TAX
;		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_159F5A:
;		LDA		#$87
;		JSR		_get_syscall0_data_cur_byte0
;		STA		byte_10
;		LDA		#$87
;		JSR		_get_syscall0_data_cur_byte1
;		STA		byte_11
;		JMP		loc_159F3C

; =============== S U B	R O U T	I N E =======================================
sub_159F6D:
		LDY		#7
		LDA		(word_6C),Y
		BMI		loc_159F76
		LDA		#$FF
		RTS
loc_159F76:
		JSR		sub_15A0A4
		LDA		byte_7E
		CMP		#$37
		BEQ		loc_159FAB
		CMP		#$4D
		BEQ		loc_159FAB
		JSR		sub_15A0AC
		LDA		byte_7E
		CMP		#$6B
		BNE		loc_159F93
		JSR		sub_15A185
		STA		word_7C+1
		DEC		word_7C+1
loc_159F93:
		JSR		_calc_pads
		JSR		sub_159FAE
		JSR		sub_159FEB
		JSR		sub_15A028
		JSR		sub_15A048
		JSR		sub_15A068
		JSR		_print_00_73_char_force_dequeue
		JMP		loc_159F93
loc_159FAB:
		JMP		sub_15A1AA

; =============== S U B	R O U T	I N E =======================================
sub_159FAE:
		LDA		_pads
		AND		#$10
		BEQ		locret_159FCA
		LDA		byte_75
		BEQ		loc_159FCB
		LDA		_pads+2
		ORA		#$10
		STA		_pads+2
		JSR		_print_00_char_force_dequeue
		DEC		byte_75
		DEC		word_4+1
		DEC		word_4+1
		JSR		sub_15A180
locret_159FCA:
		RTS
loc_159FCB:
		BIT		_window_frame_tmp6AC9
		BPL		locret_159FCA
		BVS		locret_159FCA
		LDA		_window_frame_tmp6AC9
		ORA		#$40
		STA		_window_frame_tmp6AC9
		LDA		_pads+2
		ORA		#$10
		STA		_pads+2
		JSR		_print_00_char_force_dequeue
		LDA		_window_frame_tmp6ACA
		STA		word_4+1
		JMP		sub_15A180

; =============== S U B	R O U T	I N E =======================================
sub_159FEB:
		LDA		_pads
		AND		#$20
		BEQ		locret_15A00E
		BIT		_window_frame_tmp6AC9
		BVS		loc_15A00F
		LDA		byte_75
		CMP		word_7C+1
		BEQ		locret_15A00E
		LDA		_pads+2
		ORA		#$20
		STA		_pads+2
		JSR		_print_00_char_force_dequeue
		INC		byte_75
		INC		word_4+1
		INC		word_4+1
		JSR		sub_15A180
locret_15A00E:
		RTS
loc_15A00F:
		LDA		_window_frame_tmp6AC9
		AND		#$BF
		STA		_window_frame_tmp6AC9
		LDA		_pads+2
		ORA		#$20
		STA		_pads+2
		JSR		_print_00_char_force_dequeue
		LDA		byte_6ACB
		STA		word_4+1
		JMP		sub_15A180

; =============== S U B	R O U T	I N E =======================================
sub_15A028:
		LDA		_pads
		AND		#$40
		BEQ		locret_15A047
		LDA		byte_74
		BEQ		locret_15A047
		LDA		_pads+2
		ORA		#$40
		STA		_pads+2
		JSR		_print_00_char_force_dequeue
		DEC		byte_74
		LDA		word_4
		SEC
		SBC		byte_79
		STA		word_4
		JSR		sub_15A180
locret_15A047:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A048:
		LDA		_pads
		BPL		locret_15A067
		LDA		byte_74
		CMP		word_7C
		BEQ		locret_15A067
		LDA		_pads+2
		ORA		#$80
		STA		_pads+2
		JSR		_print_00_char_force_dequeue
		INC		byte_74
		LDA		word_4
		CLC
		ADC		byte_79
		STA		word_4
		JSR		sub_15A180
locret_15A067:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A068:
		LDA		_pads
		LSR
		BCS		loc_15A075
		LSR
		BCC		locret_15A074
		PLA
		PLA
		LDA		#$FF
locret_15A074:
		RTS
loc_15A075:
		SYSX	_apu_load,$85
		JSR		_print_73_char_force_dequeue
		PLA
		PLA
		BIT		_window_frame_tmp6AC9
		BVS		loc_15A0A1
		LDA		#0
		STA		word_4+1
		LDX		word_7C
		INX
		STX		word_4
		LDX		#word_4
		LDA		byte_75
		JSR		_mul16_to_8
		LDA		word_4
		CLC
		ADC		byte_74
		STA		word_4
		LDY		#$A
		LDA		(word_6C),Y
		CLC
		ADC		word_4
		RTS
loc_15A0A1:
		LDA		#$40
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A0A4:
		JSR		_calc_pads
		LDA		_pads
		BNE		sub_15A0A4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A0AC:
		LDA		#0
		STA		byte_74
		STA		byte_75
		LDA		byte_6AC8
		PHA
		AND		#$F
		ASL
		STA		word_4
		LDY		#8
		LDA		(word_6C),Y
		AND		#$F
		CLC
		ADC		word_4
		STA		word_4
		PLA
		AND		#$F0
		LSR
		LSR
		LSR
		STA		word_4+1
		STA		_window_frame_tmp6ACA
		INY
		LDA		byte_7E
		CMP		#$25
		BCC		loc_15A0F1
		CMP		#$29
		BCS		loc_15A0F1
		LDA		byte_7F
		CMP		#$FF
		BNE		loc_15A0E8
		LDA		word_7C+1
		SEC
		SBC		#1
		ASL
loc_15A0E8:
		STA		byte_75
		LSR		byte_75
		CLC
		ADC		word_4+1
		STA		word_4+1
loc_15A0F1:
		LDA		(word_6C),Y
		AND		#$F
		CLC
		ADC		word_4+1
		STA		word_4+1
		STA		byte_6ACB
		LDA		(word_6C),Y
		AND		#$70
		LSR
		LSR
		LSR
		LSR
		CLC
		ADC		#2
		STA		byte_79
		LDY		#8
		LDA		(word_6C),Y
		AND		#$30
		LSR
		LSR
		LSR
		LSR
		CMP		#3
		BNE		loc_15A129
		LDA		_cur_message_speed
		STA		byte_74
		ASL
		CLC
		ADC		word_4
		STA		word_4
		LDA		#1
		STA		word_7C+1
		LDA		#7
loc_15A129:
		STA		word_7C
		LDA		byte_7E
		CMP		#$34
		BEQ		loc_15A15D
		CMP		#$35
		BEQ		loc_15A13F
		CMP		#$3B
		BEQ		loc_15A16B
		CMP		#$67
		BEQ		loc_15A176
		BNE		loc_15A17E
loc_15A13F:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		_sram_b0_s32_get_tavern_chars_list
		LDA		word_4
		SEC
		SBC		#6
		STA		word_7C+1
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		LDA		byte_C6
		CMP		#6
		BNE		loc_15A17E
		BEQ		sub_15A180
loc_15A15D:
		LDA		word_7C+1
		CMP		#6
		BEQ		loc_15A17E
		LDA		byte_C6
		CMP		#6
		BEQ		sub_15A180
		BNE		loc_15A17E
loc_15A16B:
		JSR		sub_15A185
		CMP		#5
		BCC		loc_15A17C
		LDA		#4
		BNE		loc_15A17C
loc_15A176:
		JSR		sub_15A185
		SEC
		SBC		#4
loc_15A17C:
		STA		word_7C+1
loc_15A17E:
		DEC		word_7C+1

; =============== S U B	R O U T	I N E =======================================
sub_15A180:
		LDA		#$F8
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A185:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		_sram_b0_s28_player_inventory_item_read
		LDX		word_4
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		TXA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A1AA:
		JSR		sub_15A2B0
loc_15A1AD:
		LDA		byte_79
		AND		#3
		BEQ		loc_15A1C2
		JSR		_calc_pads
		JSR		sub_15A1D0
		JSR		sub_15A1EC
		JSR		sub_15A21E
		JSR		sub_15A205
loc_15A1C2:
		JSR		sub_15A24B
		JSR		sub_15A238
		JSR		sub_15A291
		INC		byte_79
		JMP		loc_15A1AD

; =============== S U B	R O U T	I N E =======================================
sub_15A1D0:
		LDA		_pads
		AND		#$10
		BEQ		locret_15A1EB
		LDA		_pads+2
		ORA		#$10
		STA		_pads+2
		JSR		sub_15A2A7
		INY
		CPY		#$A
		BCC		loc_15A1E6
		LDY		#0
loc_15A1E6:
		STY		byte_74,X
		JSR		sub_15A28C
locret_15A1EB:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A1EC:
		LDA		_pads
		AND		#$20
		BEQ		locret_15A1EB
		LDA		_pads+2
		ORA		#$20
		STA		_pads+2
		JSR		sub_15A2A7
		DEY
		BPL		loc_15A200
		LDY		#9
loc_15A200:
		STY		byte_74,X
		JMP		sub_15A28C

; =============== S U B	R O U T	I N E =======================================
sub_15A205:
		LDA		_pads
		BPL		locret_15A21D
		LDA		word_4
		CMP		#$17
		BEQ		locret_15A21D
		LDA		_pads+2
		ORA		#$80
		STA		_pads+2
		JSR		sub_15A29A
		INC		word_4
		JMP		sub_15A180
locret_15A21D:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A21E:
		LDA		_pads
		AND		#$40
		BEQ		locret_15A21D
		LDA		word_4
		CMP		#$16
		BEQ		locret_15A21D
		LDA		_pads+2
		ORA		#$40
		STA		_pads+2
		JSR		sub_15A29A
		DEC		word_4
		JMP		sub_15A180

; =============== S U B	R O U T	I N E =======================================
sub_15A238:
		LDA		_pads
		AND		#2
		BEQ		nullsub_17
		LDA		#0
		STA		word_4
		STA		word_4+1
		STA		word_6
		PLA
		PLA
		LDA		#$FF
nullsub_17:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A24B:
		LDA		_pads
		LSR
		BCC		nullsub_17
		JSR		sub_15A2A1
		LDA		#0
		STA		word_4
		STA		word_4+1
		STA		word_6
		PLA
		PLA
		LDX		byte_74
		LDY		#0
		JSR		sub_15A268
		LDX		byte_75
		LDY		#2

; =============== S U B	R O U T	I N E =======================================
sub_15A268:
		CPX		#0
		BEQ		loc_15A284
loc_15A26C:
		LDA		byte_15A287,Y
		CLC
		ADC		word_4
		STA		word_4
		LDA		byte_15A287+1,Y
		ADC		word_4+1
		STA		word_4+1
		LDA		#0
		ADC		word_6
		STA		word_6
		DEX
		BNE		loc_15A26C
loc_15A284:
		LDA		#0
		RTS
byte_15A287:
		.BYTE	$10,$27,$E8,  3

; =============== S U B	R O U T	I N E =======================================
sub_15A28C:
		LDA		#$78
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A291:
		LDA		byte_76
		CLC
		ADC		#8
		STA		byte_76
		BPL		sub_15A2A1

; =============== S U B	R O U T	I N E =======================================
sub_15A29A:
		JSR		sub_15A2A7
		INY
		JMP		sub_15A2A3

; =============== S U B	R O U T	I N E =======================================
sub_15A2A1:
		LDY		#$5A

; =============== S U B	R O U T	I N E =======================================
sub_15A2A3:
		TYA
		JMP		_bE_s38_print_char_force_dequeue

; =============== S U B	R O U T	I N E =======================================
sub_15A2A7:
		LDA		word_4
		SEC
		SBC		#$16
		TAX
		LDY		byte_74,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A2B0:
		LDA		#$17
		STA		word_4
		LDA		#8
		STA		word_4+1
		LDA		#0
		STA		byte_74
		STA		byte_75
		STA		byte_79
		LDA		#$F8
		STA		byte_76
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_sB:
		TAX
		LDA		byte_80
		PHA
		LDA		byte_81
		PHA
		TXA
		JSR		sub_15A325
		JSR		sub_15A2DA
		PLA
		STA		byte_81
		PLA
		STA		byte_80
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A2DA:
		JSR		sub_15A38D
		JSR		sub_159D86
		DEC		byte_7F
		BEQ		loc_15A2F0
		LDA		byte_470
		SEC
		SBC		#$10
		STA		byte_470
		JMP		sub_15A2DA
loc_15A2F0:
		JSR		sub_15A5F4
		LDX		#$1E
		LDA		byte_7E
		CMP		#2
		BEQ		loc_15A31E
		CMP		#8
		BEQ		loc_15A317
		LDX		#$3E
		CMP		#$13
		BEQ		loc_15A31E
		CMP		#$E
		BEQ		loc_15A31C
		CMP		#1
		BNE		loc_15A322
		JSR		_sram_b0_s31_get_party_chars_list
		DEC		word_4
		LDA		word_4
		JMP		loc_15A319
loc_15A317:
		LDA		#$3E
loc_15A319:
		JSR		sub_159E55
loc_15A31C:
		LDX		#$14
loc_15A31E:
		TXA
		JSR		sub_159E55
loc_15A322:
		JMP		_bE_s34

; =============== S U B	R O U T	I N E =======================================
sub_15A325:
		STA		byte_7E
		ASL
		TAX
		LDA		byte_15A346,X
		LSR
		LSR
		LSR
		LSR
		STA		byte_7F
		LDA		byte_15A346,X
		STA		byte_82
		AND		#$F
		ORA		#$10
		STA		byte_471
;		INX
		LDA		byte_15A346+1,X
		STA		byte_470
		RTS

byte_15A346:
		.BYTE	$DF,$D1,$B8,$A6,$54,$94,$48,$42,$4B,$D3,$55,$98,$33,$5B,$8E,$81
		.BYTE	$98,$96,$47,$87,$5C,$D2,$35,$79,$24,$4A,$34,$5A,$98,$86,$FE,$E1
		.BYTE	$8C,$82,$48,$86,$54,$7B,$98,$96

; =============== S U B	R O U T	I N E =======================================
sub_15A36E:
		LDA		byte_7F
		CMP		#$B
		BEQ		loc_15A381
		CMP		#6
		BCS		loc_15A3A6
		CMP		#2
		BCC		loc_15A3A6
		SBC		#1
		JMP		loc_15A3BB
loc_15A381:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		ASL
		CLC
		ADC		#$A
		JMP		loc_15A3BC

; =============== S U B	R O U T	I N E =======================================
sub_15A38D:
		JSR		sub_15A5DD
		LDA		byte_7E
		CMP		#2
		BEQ		loc_15A3D4
		CMP		#8
		BEQ		loc_15A3B1
		CMP		#1
		BEQ		sub_15A36E
		CMP		#$E
		BEQ		sub_15A36E
		CMP		#$13
		BEQ		loc_15A3A9
loc_15A3A6:
		JMP		sub_15A472
loc_15A3A9:
		LDA		byte_7F
		CMP		#9
		BEQ		loc_15A3C5
		BNE		loc_15A3A6
loc_15A3B1:
		LDA		byte_7F
		CMP		#9
		BEQ		loc_15A3C5
		CMP		#5
		BCS		loc_15A3A6
loc_15A3BB:
		ASL
loc_15A3BC:
		TAX
		LDY		#$20
		JSR		sub_15A3E1
		JMP		loc_15A47E
loc_15A3C5:
		LDX		#0
		LDA		byte_595
		CMP		#$7D
		BNE		loc_15A3D0
		LDX		#$A
loc_15A3D0:
		LDY		#$20
		BNE		sub_15A3E1
loc_15A3D4:
		LDA		byte_7F
		CMP		#3
		BCS		loc_15A3A6
		ASL
		CLC
		ADC		#$12
		TAX
		LDY		#$10

; =============== S U B	R O U T	I N E =======================================
sub_15A3E1:
		STY		byte_6ABE
		LDA		off_15A4F9,X
		STA		word_6C
		LDA		off_15A4F9+1,X
		STA		word_6C+1
		LDX		#0
		LDY		#0
loc_15A3F2:
		LDA		(word_6C),Y
		BEQ		loc_15A414
		CMP		#$FB
		BCS		loc_15A41B
		CMP		#$EC
		BCS		loc_15A442
		STA		_window_draw_buf,X
		INX
loc_15A402:
		INY
		CPX		byte_6ABE
		BCC		loc_15A3F2
		LDX		#0
		TXA
loc_15A40B:
		STA		_window_draw_buf+$60,X
		INX
		CPX		#9
		BNE		loc_15A40B
		RTS
loc_15A414:
		LDA		#0
		STA		byte_6AC0
		BEQ		loc_15A45A
loc_15A41B:
		CMP		#$FF
		BEQ		loc_15A455
		SEC
		SBC		#$FB
		STA		byte_CE
		STY		byte_6ABF
		TXA
		PHA
		JSR		_sram_b0_sF_unassigned_formation_char_name_read
		PLA
		TAX
		LDY		#0
loc_15A430:
		LDA		word_4,Y
		STA		_window_draw_buf,X
		INX
		INY
		CPY		#4
		BCC		loc_15A430
		LDY		byte_6ABF
		JMP		loc_15A402
loc_15A442:
		STY		byte_6ABF
		SBC		#$E5
		TAY
		LDA		byte_580,Y
		STA		_window_draw_buf,X
		INX
		LDY		byte_6ABF
		JMP		loc_15A402
loc_15A455:
		LDA		#$FF
		STA		byte_6AC0
loc_15A45A:
		INY
		STY		byte_6ABF
		LDA		(word_6C),Y
		TAY
		LDA		byte_6AC0
loc_15A464:
		STA		_window_draw_buf,X
		INX
		DEY
		BNE		loc_15A464
		LDY		byte_6ABF
		JMP		loc_15A402

; =============== S U B	R O U T	I N E =======================================
sub_15A472:
		LDX		#0
		LDA		#$FF
loc_15A476:
		STA		_window_draw_buf,X
		INX
		CPX		#$40
		BNE		loc_15A476
loc_15A47E:
		LDA		byte_470
		TAY
		LSR
		LSR
		LSR
		LSR
		CLC
		ADC		byte_75
		SEC
		SBC		#7
		STA		byte_11
		TYA
		AND		#$F
		CLC
		ADC		byte_74
		SEC
		SBC		#8
		STA		byte_10
		LDA		byte_471
		AND		#$F
		STA		word_6
		ASL
		SEC
		SBC		#1
		STA		word_6+1
		LDA		#0
		STA		word_4+1
loc_15A4AA:
		LDX		byte_10
		LDY		byte_11
		JSR		sub_176C99
		JSR		sub_175B72
		JSR		sub_15A4BE
		INC		byte_10
		DEC		word_6
		BNE		loc_15A4AA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A4BE:
		LDA		_window_draw_buf,Y
		CMP		#$FF
		BNE		locret_15A4F8
		LDA		byte_7200,X
		STA		_window_draw_buf,Y
		INY
		INX
		LDA		byte_7200,X
		STA		_window_draw_buf,Y
		INX
		TYA
		CLC
		ADC		word_6+1
		TAY
		LDA		byte_7200,X
		STA		_window_draw_buf,Y
		INX
		INY
		LDA		byte_7200,X
		STA		_window_draw_buf,Y
		TXA
		LSR
		LSR
		TAX
		LDA		byte_7300,X
		PHA
		LDA		word_4+1
		LSR
		TAY
		DEY
		PLA
		STA		_window_draw_buf+$60,Y
locret_15A4F8:
		RTS
off_15A4F9:
		.WORD	byte_15A511
		.WORD	byte_15A531
		.WORD	byte_15A540
		.WORD	byte_15A54F
		.WORD	byte_15A55F
		.WORD	byte_15A573
		.WORD	byte_15A593
		.WORD	byte_15A5A0
		.WORD	byte_15A5AE
		.WORD	byte_15A5B8
		.WORD	byte_15A5C2
		.WORD	byte_15A5CD
byte_15A511:
		.BYTE	$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$7D
		.BYTE	$EC,$ED,$EE,$EF,$F0,$F1,$F2,$F3,$F4,$F5,$F6,$F7,$F8,$F9,$FA,$7C
byte_15A531:
		.BYTE	$25,$32,$28,$78,$78,$78,$78,$7D,$FF,  8,  0,  7,$7C,$FF,  8
byte_15A540:
		.BYTE	  0,  2,$37,$34,$29,$30,$30,$7C,$FF,  8,  0,  7,$7C,$FF,  8
byte_15A54F:
		.BYTE	  0,  2,$2D,$38,$29,$31,  0,  1,$7C,$FF,  8,  0,  7,$7C,$FF,  8
byte_15A55F:
		.BYTE	  0,  2,$29,$35,$39,$2D,$34,$7C,$FF,  8,$7E,$7E,$7E,$7E,$7E,$7E
		.BYTE	$7E,$7F,$FF,  8
byte_15A573:
		.BYTE	$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$78,$7D
		.BYTE	$EC,$ED,$EE,$EF,$F0,$F1,$F2,$F3,$7A,$78,$78,$78,$78,$78,$7D,$7C
byte_15A593:
		.BYTE	$FF,  8,$7A,$79,$FB,$78,$7D,$FF,  8,$77,  0,  6,$7C
byte_15A5A0:
		.BYTE	$FF,  4,$7A,$FB,$79,$FC,$78,$7D,$FF,  4,$77,  0, $A,$7C
byte_15A5AE:
		.BYTE	$FB,$79,$FC,$79,$FD,$78,$7D,  0, $F,$7C
byte_15A5B8:
		.BYTE	$FC,$79,$FD,$79,$FE,$78,$7D,  0, $F,$7C
byte_15A5C2:
		.BYTE	$32,$28,$2D,$38,$2D,$33,$32,$7C,  0,  7,$7C
byte_15A5CD:
		.BYTE	$36,$31,$25,$38,$2D,$33,$32,$7C,$7E,$7E,$7E,$7E,$7E,$7E,$7E,$7F

; =============== S U B	R O U T	I N E =======================================
sub_15A5DD:
		LDA		byte_2A
		STA		byte_74
		LDA		byte_2B
		STA		byte_75
		LDA		_location_type
		AND		#1
		BEQ		locret_15A5F3
		LDA		_playerMapX
		STA		byte_74
		LDA		_playerMapY
		STA		byte_75
locret_15A5F3:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A5F4:
		LDA		byte_470
		AND		#$F
		STA		byte_77
		LDA		byte_470
		LSR
		LSR
		LSR
		LSR
		STA		byte_76
		LDA		byte_82
		AND		#$F
		STA		byte_75
		LDA		byte_82
		LSR
		LSR
		LSR
		LSR
		STA		byte_74
		LDA		byte_77
		CMP		#8
		BCS		loc_15A63B
		CMP		#7
		BEQ		loc_15A61F
		TAX
		INX
		TXA
loc_15A61F:
		JSR		sub_15A644
		JSR		sub_15A65C
		LDA		#8
		SEC
		SBC		byte_77
		TAX
loc_15A62B:
		DEC		byte_75
		DEX
		BNE		loc_15A62B
		LDA		byte_75
		BMI		locret_15A636
		BNE		loc_15A637
locret_15A636:
		RTS
loc_15A637:
		LDA		#8
		STA		byte_77
loc_15A63B:
		JSR		sub_15A641
		JMP		loc_15A663

; =============== S U B	R O U T	I N E =======================================
sub_15A641:
		SEC
		SBC		#7

; =============== S U B	R O U T	I N E =======================================
sub_15A644:
		TAX
		LDA		#$80
loc_15A647:
		LSR
		DEX
		BNE		loc_15A647
		ASL
		STA		byte_78
		LDX		byte_75
		LDA		#0
loc_15A652:
		ORA		byte_78
		LSR		byte_78
		DEX
		BNE		loc_15A652
		STA		byte_78
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A65C:
		LDA		byte_76
		ASL
		TAX
		JMP		loc_15A668
loc_15A663:
		LDA		byte_76
		ASL
		TAX
		INX
loc_15A668:
		LDA		byte_74
		TAY
loc_15A66B:
		LDA		byte_78
		EOR		#$FF
		AND		byte_647,X
		STA		byte_647,X
		INX
		INX
		DEY
		BNE		loc_15A66B
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s4_msg_m00:
		STA		byte_6A33
		LDA		byte_CE
		PHA
		LDA		byte_6A33
		LDY		#0
		JSR		_msg_display
		PLA
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s6_msg_mFF:
		STA		byte_6A33
		LDA		byte_CE
		PHA
		LDA		byte_6A33
		LDY		#$FF
		JSR		_msg_display
		PLA
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
_msg_display:
		STY		byte_78
		JSR		_get_msg_ptr
		JSR		sub_15AB4F
loc_15A6A7:
		JSR		sub_15A6B6
		JSR		sub_15AB9E
		JSR		sub_15A6F5
		JSR		sub_15AB31
		JMP		loc_15A6A7

; =============== S U B	R O U T	I N E =======================================
sub_15A6B6:
		JSR		sub_15AF01
		BCC		loc_15A6D4
loc_15A6BB:
		JSR		sub_15A95A
		CMP		#$EC
		BNE		loc_15A6C8
		JSR		sub_15A787
		JMP		sub_15A6B6
loc_15A6C8:
		PHA
		AND		#$F0
		CMP		#$A0
		BNE		loc_15A6D2
		JMP		sub_15ACE2
loc_15A6D2:
		PLA
locret_15A6D3:
		RTS
loc_15A6D4:
		BMI		loc_15A6D7
		RTS
loc_15A6D7:
		CMP		#$FF
		BEQ		locret_15A6D3
		CMP		#$FE
		BEQ		sub_15A6B6
		CMP		#$FD
		BEQ		locret_15A6D3
		CMP		#$EF
		BEQ		locret_15A6D3
		CMP		#$EE
		BEQ		locret_15A6D3
		CMP		#$EB
		BEQ		locret_15A6D3
		JSR		sub_15A7B5
		JMP		loc_15A6BB

; =============== S U B	R O U T	I N E =======================================
sub_15A6F5:
		JSR		sub_15AC10
		TAX
		BPL		loc_15A6FE
		JMP		sub_15A79E
loc_15A6FE:
		CMP		#$66
		BNE		loc_15A709
loc_15A702:
		PHA
		JSR		sub_15AC05
		PLA
		BNE		loc_15A70D
loc_15A709:
		CMP		#$51
		BEQ		loc_15A702
loc_15A70D:
		PHA
		LDA		word_4
		PHA
		LDA		byte_80
		STA		word_4
		TXA
		LDX		#0
loc_15A718:
		CMP		#0
		BEQ		loc_15A74A
		CMP		#$60
		BEQ		loc_15A74A
		CMP		#$61
		BEQ		loc_15A74A
		CMP		#$EF
		BEQ		loc_15A74A
		CMP		#$FF
		BEQ		loc_15A74A
		CMP		#$EE
		BEQ		loc_15A74A
		CMP		#$EB
		BEQ		loc_15A74A
		CMP		#$FD
		BEQ		loc_15A73A
		INC		word_4
loc_15A73A:
		LDA		word_4
		CMP		#$17
		BCS		loc_15A747
		LDA		byte_6B0A,X
		INX
		JMP		loc_15A718
loc_15A747:
		JSR		sub_15A75A
loc_15A74A:
		PLA
		STA		word_4
		PLA
		STA		byte_6ACD
		JMP		sub_15A99E

; =============== S U B	R O U T	I N E =======================================
sub_15A754:
		JSR		sub_15AA07
		JMP		loc_15A76E

; =============== S U B	R O U T	I N E =======================================
sub_15A75A:
		BIT		byte_6A32
		BPL		loc_15A765
		LDA		byte_80
		BEQ		nullsub_18
		BNE		sub_15A76B
loc_15A765:
		LDA		byte_80
		CMP		#2
		BCC		nullsub_18

; =============== S U B	R O U T	I N E =======================================
sub_15A76B:
		JSR		sub_15A9E8
loc_15A76E:
		JSR		sub_15A999
		BCS		loc_15A777
		JSR		sub_15AA5F
		RTS
loc_15A777:
		JSR		sub_15AA51
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A77B:
		JSR		sub_15A76B
		JMP		sub_15A791

; =============== S U B	R O U T	I N E =======================================
sub_15A781:
		JSR		sub_15A75A
		JMP		sub_15A791

; =============== S U B	R O U T	I N E =======================================
sub_15A787:
		LDA		byte_82
		AND		#$7F
		STA		byte_82
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A78E:
		JSR		sub_15AA51

; =============== S U B	R O U T	I N E =======================================
sub_15A791:
		LDA		byte_6ACB
		BNE		loc_15A79B
		LDA		byte_81
		STA		byte_6ACB
loc_15A79B:
		PLA
		PLA

; =============== S U B	R O U T	I N E =======================================
nullsub_18:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A79E:
		CMP		#$FF
		BEQ		sub_15A78E
		CMP		#$EB
		BEQ		sub_15A75A
		CMP		#$FD
		BEQ		loc_15A7EC
		CMP		#$EF
		BEQ		sub_15A77B
		CMP		#$EE
		BEQ		sub_15A781
loc_15A7B2:
		JMP		loc_15A7B2

; =============== S U B	R O U T	I N E =======================================
sub_15A7B5:
		CMP		#$F9
		BCS		loc_15A7EF
		CMP		#$F8
		BEQ		loc_15A7F2
		CMP		#$F5
		BEQ		loc_15A7F5
		CMP		#$F4
		BEQ		loc_15A80C
		CMP		#$F3
		BEQ		loc_15A836
		CMP		#$F2
		BEQ		loc_15A7F8
		CMP		#$F1
		BEQ		loc_15A7FB
		CMP		#$F0
		BEQ		loc_15A841
		CMP		#$ED
		BEQ		loc_15A7FE
		CMP		#$F7
		BEQ		loc_15A801
		PHA
		AND		#$F0
		CMP		#$B0
		BEQ		loc_15A804
		CMP		#$C0
		BEQ		loc_15A808
		PLA
		AND		#$7F
		RTS
loc_15A7EC:
		JMP		sub_15A8D3
loc_15A7EF:
		JMP		loc_15A8AE
loc_15A7F2:
		JMP		sub_15A91C
loc_15A7F5:
		JMP		loc_15A849
loc_15A7F8:
		JMP		loc_15A87B
loc_15A7FB:
		JMP		loc_15A8A3
loc_15A7FE:
		JMP		sub_15A946
loc_15A801:
		JMP		sub_15AD6E
loc_15A804:
		PLA
		JMP		sub_15AC41
loc_15A808:
		PLA
		JMP		loc_15ACD3
loc_15A80C:
		JSR		sub_15A987
		LDX		#0
		JSR		sub_15A96C
		PHA
		LDA		#$60
		STA		byte_6AEC,Y
		INY
		PLA
		LDX		#1
		STY		byte_83
		PHA
		FARX	_b2_sC
		PLA
		LDY		byte_83
		LDX		word_4
		CPX		#$60
		BNE		loc_15A82E
		DEY
loc_15A82E:
		LDX		#1
loc_15A830:
		JSR		sub_15A96E
loc_15A833:
		JMP		sub_15A962
loc_15A836:
		JSR		sub_15A987
		LDX		#4
loc_15A83B:
		JSR		sub_15A96C
		JMP		loc_15A833
loc_15A841:
		JSR		sub_15A987
		LDX		#5
		JMP		loc_15A83B
loc_15A849:
		JSR		sub_15A987
		BPL		loc_15A8B1
		AND		#3
		STA		byte_64
		FARX	_b4_s2
		LDA		byte_59
		LDX		#2
		JSR		sub_15A96C
		PHA
		LDA		#$60
		STA		byte_6AEC,Y
		INY
		PLA
		LDX		#3
		STY		byte_83
		PHA
		FARX	_b2_sC
		PLA
		LDY		byte_83
		LDX		word_4
		CPX		#$60
		BNE		loc_15A876
		DEY
loc_15A876:
		LDX		#3
		JMP		loc_15A830
loc_15A87B:
		LDA		byte_82
		AND		#$7F
		TAX
		DEX
		LDY		#0
		LDA		byte_D2,X
		BPL		loc_15A89D
		AND		#$3C
		LSR
		LSR
		CMP		#8
		BCS		loc_15A89D
		PHA
		LDA		#$6B
		STA		byte_6AEC,Y
		INY
		PLA
		ADC		#$25
		STA		byte_6AEC,Y
		INY
loc_15A89D:
		JSR		sub_15A992
		JMP		sub_15A962
loc_15A8A3:
		JSR		sub_15A987
		STA		byte_CE
		JSR		_sram_b0_s10_tavern_char_name_read
		JMP		loc_15A8B9
loc_15A8AE:
		SEC
		SBC		#$F9
loc_15A8B1:
		STA		byte_CE
		STA		byte_6A35
		JSR		_sram_b0_sF_unassigned_formation_char_name_read
loc_15A8B9:
		LDY		#0
loc_15A8BB:
		LDA		word_4,Y
		STA		byte_6AEC,Y
		INY
		CPY		#8
		BNE		loc_15A8BB
loc_15A8C6:
		DEY
		LDA		byte_6AEC,Y
		BEQ		loc_15A8C6
		INY
loc_15A8CD:
		JSR		sub_15A962
		JMP		sub_15A992

; =============== S U B	R O U T	I N E =======================================
sub_15A8D3:
		LDA		byte_80
		CMP		#2
		BCC		loc_15A8DC
		JSR		sub_15A75A
loc_15A8DC:
		JSR		sub_15AA2A
		LDA		#$F8
		STA		byte_76
		LDA		#$F
		STA		word_4
loc_15A8E7:
		JSR		sub_15A8F0
		JSR		_print_00_74_char_force_dequeue
		JMP		loc_15A8E7

; =============== S U B	R O U T	I N E =======================================
sub_15A8F0:
		JSR		_calc_pads
		LDA		_pads
		AND		#3
		BNE		loc_15A8FA
		RTS
loc_15A8FA:
		JSR		_print_00_char_force_dequeue
		SYSX	_apu_load,$85
		LDX		#2
		JSR		_sleep_X_sync
		LDA		byte_580
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A91C:
		LDX		#2
loc_15A91E:
		LDA		_msg_number_parameter_F8,X
		STA		word_4,X
		DEX
		BPL		loc_15A91E
		JSR		_bE_s14
		LDX		#0
loc_15A92B:
		INC		byte_9,X
		INX
		CPX		#7
		BNE		loc_15A92B
		LDX		#0
		LDY		#0
loc_15A936:
		LDA		byte_9,X
		BEQ		loc_15A93E
		STA		byte_6AEC,Y
		INY
loc_15A93E:
		INX
		CPX		#7
		BNE		loc_15A936
		JMP		loc_15A8CD

; =============== S U B	R O U T	I N E =======================================
sub_15A946:
		LDY		#0
loc_15A948:
		LDA		byte_6AD1,Y
		CMP		#$FF
		BEQ		loc_15A957
		STA		byte_6AEC,Y
		INY
		CPY		#8
		BNE		loc_15A948
loc_15A957:
		JMP		loc_15A8CD

; =============== S U B	R O U T	I N E =======================================
sub_15A95A:
		LDX		byte_83
		INC		byte_83
		LDA		byte_6AEC,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A962:
		LDA		#$EC
		STA		byte_6AEC,Y
		LDA		#0
		STA		byte_83
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A96C:
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_15A96E:
		STY		byte_83
		PHA
		FARX	_b2_sC
		LDY		byte_83
		LDX		#0
loc_15A978:
		LDA		word_4,X
		CMP		#$60
		BEQ		loc_15A985
		STA		byte_6AEC,Y
		INX
		INY
		BNE		loc_15A978
loc_15A985:
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A987:
		JSR		sub_15A992
		INC		byte_82
		AND		#$7F
		TAX
		LDA		byte_D2,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A992:
		LDA		byte_82
		ORA		#$80
		STA		byte_82
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A999:
		LDA		byte_78
		CMP		#$80
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15A99E:
		PHA
		PHA
		JSR		sub_15AA2A
		PLA
		STA		byte_580,X
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		sub_15A9D9
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		PLA
		LDX		byte_78
		BEQ		loc_15A9C3
		BCC		loc_15A9D6
		JSR		_print_char
		JMP		loc_15AA56
loc_15A9C3:
		PHP
		JSR		_bE_s38_print_char_force_dequeue
		LDA		byte_6AD0
		BEQ		loc_15A9CF
		SYSX	_apu_load,$96
loc_15A9CF:
		PLP
		BCC		locret_15A9D5
		JSR		sub_15AA5F
locret_15A9D5:
		RTS
loc_15A9D6:
		JMP		_print_char

; =============== S U B	R O U T	I N E =======================================
sub_15A9D9:
		INC		byte_80
		LDX		byte_80
		CPX		#$16
		BCC		nullsub_19
		LDA		byte_6B0A
		CMP		#$FD
		BEQ		nullsub_19

; =============== S U B	R O U T	I N E =======================================
sub_15A9E8:
		JSR		sub_15A999
		BCS		sub_15AA0B
		BIT		byte_6A32
		BMI		sub_15AA0B
		LDA		byte_6B0A
		BEQ		sub_15AA07
		CMP		#$66
		BEQ		sub_15AA07
		CMP		#$51
		BEQ		sub_15AA07
		CMP		#$60
		BEQ		sub_15AA07
		LDA		#1
		BNE		sub_15AA1C

; =============== S U B	R O U T	I N E =======================================
sub_15AA07:
		LDA		#0
		BEQ		sub_15AA1C

; =============== S U B	R O U T	I N E =======================================
sub_15AA0B:
		LDA		byte_6B0A
		BEQ		loc_15AA14
		CMP		#$60
		BNE		sub_15AA07
loc_15AA14:
		JSR		sub_15A6B6
		JSR		sub_15AB9E
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_15AA1C:
		STA		byte_80
		INC		byte_81
		LDA		byte_6A32
		AND		#$FE
		STA		byte_6A32
		SEC

; =============== S U B	R O U T	I N E =======================================
nullsub_19:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AA2A:
		LDA		#$16
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		byte_81
		PHA
		LDX		#word_4
		JSR		_mul16_to_8
		LDA		byte_80
		PHA
		LDX		#word_4
		JSR		_add8_to_16
		LDX		word_4
		PLA
		CLC
		ADC		#5
		STA		word_4
		PLA
		CLC
		ADC		#$13
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AA51:
		JSR		sub_15A999
		BCC		locret_15AA5E
loc_15AA56:
		LDA		_ppu_queue_chunks_count
		BEQ		locret_15AA5E
		JSR		_ppu_force_dequeue
locret_15AA5E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AA5F:
		LDA		byte_81
		CMP		#8
		BCC		locret_15AA83
		LDA		#$1C
		STA		byte_471
		LDA		#$92
		STA		byte_470
		JSR		sub_15AB15
		JSR		sub_15AA84
		JSR		sub_15AAA2
		JSR		sub_15AAA6
		JSR		sub_15AAAA
		JSR		sub_15AABF
		DEC		byte_81
locret_15AA83:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AA84:
		LDA		#$7A
		STA		_window_draw_buf
		LDX		#1
		LDA		#$78
		JSR		sub_15AB09
		LDA		#$7D
		STA		_window_draw_buf,X
		JSR		sub_15AAFC
		LDX		#$19
		LDY		#0
		JSR		sub_15AAE7
		JMP		sub_15AADA

; =============== S U B	R O U T	I N E =======================================
sub_15AAA2:
		LDY		#$16
		BNE		sub_15AAAC

; =============== S U B	R O U T	I N E =======================================
sub_15AAA6:
		LDY		#$42
		BNE		sub_15AAAC

; =============== S U B	R O U T	I N E =======================================
sub_15AAAA:
		LDY		#$6E

; =============== S U B	R O U T	I N E =======================================
sub_15AAAC:
		LDX		#1
		JSR		sub_15AAE7
		LDX		#$19
		JSR		sub_15AAE7
		JSR		sub_15AAF8
		JSR		sub_15AAFC
		JMP		sub_15AADA

; =============== S U B	R O U T	I N E =======================================
sub_15AABF:
		JSR		sub_15AAFC
		LDX		#1
		LDA		#0
		JSR		sub_15AB09
		LDA		#$7B
		STA		_window_draw_buf+$18
		LDA		#$7E
		LDX		#$19
		JSR		sub_15AB09
		LDA		#$7F
		STA		_window_draw_buf,X

; =============== S U B	R O U T	I N E =======================================
sub_15AADA:
		JSR		sub_159D86
		LDA		byte_470
		CLC
		ADC		#$10
		STA		byte_470
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AAE7:
		LDA		#$16
		STA		word_4
loc_15AAEB:
		LDA		byte_580,Y
		STA		_window_draw_buf,X
		INX
		INY
		DEC		word_4
		BNE		loc_15AAEB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AAF8:
		LDX		#0
		BEQ		loc_15AAFE

; =============== S U B	R O U T	I N E =======================================
sub_15AAFC:
		LDX		#$18
loc_15AAFE:
		LDA		#$77
		STA		_window_draw_buf,X
		LDA		#$7C
		STA		_window_draw_buf+$17,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AB09:
		LDY		#0
loc_15AB0B:
		STA		_window_draw_buf,X
		INX
		INY
		CPY		#$16
		BNE		loc_15AB0B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AB15:
		LDA		byte_595
		LDX		#0
loc_15AB1A:
		LDA		byte_596,X
		STA		byte_580,X
		INX
		CPX		#$9A
		BNE		loc_15AB1A
		LDA		#0
		TAX
loc_15AB28:
		STA		byte_61A,X
		INX
		CPX		#$16
		BNE		loc_15AB28
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AB31:
		LDA		byte_6ACD
		BNE		locret_15AB4E
		LDX		#0
loc_15AB38:
		LDA		byte_6B0A,X
		BMI		loc_15AB43
		BEQ		loc_15AB43
		INX
		JMP		loc_15AB38
loc_15AB43:
		TXA
		CLC
		ADC		byte_80
		CMP		#$17
		BCC		locret_15AB4E
		JSR		sub_15A75A
locret_15AB4E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AB4F:
		LDA		#0
		STA		byte_82
		STA		byte_6ACC
		LDA		byte_6A32
		AND		#$DF
		STA		byte_6A32
; next char
loc_15AB5E:
		JSR		sub_15A6B6
		JSR		sub_15ABC3
		LDX		byte_6ACC
		STA		byte_6B0A,X
		INX
		STX		byte_6ACC
; checking against width of textbox
		CPX		#$16
		BNE		loc_15AB5E
		LDA		byte_6B0A
		CMP		#$66
		BEQ		loc_15AB86
		CMP		#$51
		BEQ		loc_15AB86
		LDY		#0
		LDA		byte_6A32
		ORA		#$80
		BNE		loc_15AB8D
loc_15AB86:
		LDY		#1
		LDA		byte_6A32
		AND		#$7F
loc_15AB8D:
		LDX		byte_81
		BNE		loc_15AB95
		ORA		#1
		BNE		loc_15AB97
loc_15AB95:
		AND		#$FE
loc_15AB97:
		STY		byte_6AD0
		STA		byte_6A32
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AB9E:
		PHA
		LDY		byte_6B0A
		LDX		#1
; next char
loc_15ABA4:
		LDA		byte_6B0A,X
		STA		byte_6B09,X
		INX
		CPX		#$16
; checking against width of textbox
		BNE		loc_15ABA4
		PLA
		STA		byte_6B1F
		JSR		sub_15ABC3
		TYA
		BPL		loc_15ABBF
		CMP		#$FE
		BNE		loc_15ABBF
		LDA		#0
loc_15ABBF:
		STA		byte_6ACD
		RTS

; =============== S U B	R O U T	I N E =======================================
; check some special string characters
sub_15ABC3:
		CMP		#$EF
		BEQ		loc_15ABD0
		CMP		#$FF
		BEQ		loc_15ABD0
		CMP		#$EE
		BEQ		loc_15ABD0
		RTS
loc_15ABD0:
		PHA
		LDA		byte_6A32
		ORA		#$20
		STA		byte_6A32
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s2:
		LDX		#0
		STX		byte_6ACB
		LDY		#2
		BNE		sub_15ABED

; =============== S U B	R O U T	I N E =======================================
_bE_s3:
		LDA		byte_6ACB
		TAX
		ASL
		CLC
		ADC		#2
		TAY

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_15ABED:
		STX		byte_81
		STY		byte_28
		JSR		_wait_for_nmi_is_over_sync
		LDA		#0
		STA		byte_80
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s5:
		LDA		#0
		TAX
loc_15ABFC:
		STA		byte_580,X
		INX
		CPX		#$B0
		BNE		loc_15ABFC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AC05:
		LDA		byte_6A32
		LSR
		BCC		loc_15AC0C
		RTS
loc_15AC0C:
		JSR		sub_15A754
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AC10:
		PHA
; analyzing special string codes?  not 100% sure yet so i didnt change to macros yet. this does appear to be related possibly to indenting
		CMP		#$66 ; "apostrophe left up"
		BEQ		loc_15AC32
		CMP		#$51 ; some kind of space
		BEQ		loc_15AC32
		CMP		#$67 ; "apostrope left down"
		BEQ		loc_15AC23
		CMP		#$69 ; "semicolon" ?
		BEQ		loc_15AC23
		PLA
		RTS
loc_15AC23:
; when handling "apostrophe left down" or "semicolon" set the $80 bit in byte_6A32
		LDA		byte_6A32
		ORA		#$80
		STA		byte_6A32
		LDA		#0
		STA		byte_6AD0
		PLA
		RTS
loc_15AC32:
; when handling "apostrophe left up" or some kind of space, clear the $80 bit in byte_6A32 and store $1 in byte_6AD0
		LDA		byte_6A32
		AND		#$7F
		STA		byte_6A32
		LDA		#1
		STA		byte_6AD0
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AC41:
		TAX
		LDA		word_6+1
		PHA
		LDA		word_6
		PHA
		TXA
		AND		#$F
		CMP		#8
		BEQ		loc_15ACB3
		CMP		#7
		BEQ		loc_15ACB6
		PHA
		CMP		#6
		BNE		loc_15AC63
		PHA
		FARX	_bD_sB
		PLA
		LDA		word_6+1
		BEQ		loc_15AC77
		BNE		loc_15AC87
loc_15AC63:
		CMP		#4
		BNE		loc_15AC6B
		LDY		#0
		BEQ		loc_15AC6E
loc_15AC6B:
		LDY		byte_6A35
loc_15AC6E:
		LDA		_players_class_gender,Y
		LSR
		LSR
		LSR
		LSR
		BCS		loc_15AC87
loc_15AC77:
		PLA
		ASL
		TAX
		LDA		off_15AD9D,X
		STA		word_6
		LDA		off_15AD9D+1,X
		STA		word_6+1
		JMP		loc_15AC94
loc_15AC87:
		PLA
		ASL
		TAX
		LDA		off_15ADAB,X
		STA		word_6
		LDA		off_15ADAB+1,X
		STA		word_6+1
loc_15AC94:
		LDY		#0
		LDX		#0
loc_15AC98:
		LDA		(word_6),Y
		CMP		#$FE
		BEQ		loc_15ACA5
		STA		byte_6AEC,X
		INX
		INY
		BNE		loc_15AC98
loc_15ACA5:
		JSR		sub_15A992
		TXA
		TAY
		PLA
		STA		word_6
		PLA
		STA		word_6+1
		JMP		sub_15A962
loc_15ACB3:
		JMP		sub_15AE80
loc_15ACB6:
		PLA
		PLA
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#3
		BCC		loc_15ACC8
		LDA		#2
		STA		_msg_number_parameter_F8
		BNE		loc_15ACD3
loc_15ACC8:
		LDA		#0
		STA		_msg_number_parameter_F8
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
loc_15ACD3:
		JSR		sub_15AD31
		BCC		loc_15ACDD
		PLA
		PLA
		JMP		sub_15A6B6
loc_15ACDD:
		PLA
		PLA
		LDA		#$1D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15ACE2:
		PLA
		AND		#$F
		STA		byte_6A33
		LDA		word_6+1
		PHA
		LDA		word_6
		PHA
		LDA		byte_6A33
		ASL
		TAX
		BIT		byte_6A32
		BVC		loc_15ACFD
		JSR		sub_15AD31
		BCC		loc_15AD0A
loc_15ACFD:
		LDA		off_15ADB9,X
		STA		word_6
		LDA		off_15ADB9+1,X
		STA		word_6+1
		JMP		loc_15AD14
loc_15AD0A:
		LDA		off_15ADC9,X
		STA		word_6
		LDA		off_15ADC9+1,X
		STA		word_6+1
loc_15AD14:
		LDX		byte_83
		LDY		#0
loc_15AD18:
		LDA		(word_6),Y
		CMP		#$FE
		BEQ		loc_15AD28
		JSR		sub_15AD4C
		STA		byte_6AEC,X
		INX
		INY
		BNE		loc_15AD18
loc_15AD28:
		PLA
		STA		word_6
		PLA
		STA		word_6+1
		JMP		loc_15A6BB

; =============== S U B	R O U T	I N E =======================================
sub_15AD31:
		PHA
		TXA
		PHA
		LDA		_msg_number_parameter_F8+2
		ORA		_msg_number_parameter_F8+1
		BNE		loc_15AD47
		LDX		_msg_number_parameter_F8
		BEQ		loc_15AD44
		DEX
		BNE		loc_15AD47
loc_15AD44:
		SEC
		BCS		loc_15AD48
loc_15AD47:
		CLC
loc_15AD48:
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AD4C:
		PHA
		TXA
		PHA
		TYA
		PHA
		LDY		#0
loc_15AD53:
		LDA		byte_6AEC,X
		CMP		#$EC
		BEQ		loc_15AD5E
		INX
		INY
		BNE		loc_15AD53
loc_15AD5E:
		LDA		byte_6AEC,X
		STA		byte_6AED,X
		DEX
		DEY
		BPL		loc_15AD5E
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15AD6E:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		_msg_number_parameter_F8
		ASL
		TAX
		LDA		off_15ADD9,X
		STA		word_4
		LDA		off_15ADD9+1,X
		STA		word_4+1
		LDY		#0
		LDX		#0
loc_15AD87:
		LDA		(word_4),Y
		CMP		#$FE
		BEQ		loc_15AD94
		STA		byte_6AEC,X
		INY
		INX
		BNE		loc_15AD87
loc_15AD94:
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		JMP		loc_15A8CD
off_15AD9D:
		.WORD	byte_15ADEB
		.WORD	byte_15ADEF
		.WORD	byte_15ADF7
		.WORD	byte_15ADFA
		.WORD	byte_15ADFE
		.WORD	byte_15AE02
		.WORD	byte_15AE07
off_15ADAB:
		.WORD	byte_15AE0B
		.WORD	byte_15AE0F
		.WORD	byte_15AE17
		.WORD	byte_15AE1B
		.WORD	byte_15AE1F
		.WORD	byte_15AE24
		.WORD	byte_15AE2A
off_15ADB9:
		.WORD	byte_15AE33
		.WORD	byte_15AE35
		.WORD	byte_15AE38
		.WORD	byte_15AE3B
		.WORD	byte_15AE3D
		.WORD	byte_15AE3E
		.WORD	byte_15AE3F
		.WORD	byte_15AE41
off_15ADC9:
		.WORD	byte_15AE42
		.WORD	byte_15AE46
		.WORD	byte_15AE49
		.WORD	byte_15AE4D
		.WORD	byte_15AE50
		.WORD	byte_15AE53
		.WORD	byte_15AE55
		.WORD	byte_15AE57
off_15ADD9:
		.WORD	byte_15AE58
		.WORD	byte_15AE58
		.WORD	byte_15AE5C
		.WORD	byte_15AE60
		.WORD	byte_15AE66
		.WORD	byte_15AE6B
		.WORD	byte_15AE70
		.WORD	byte_15AE74
		.WORD	byte_15AE7A
byte_15ADEB:
		.BYTE	$12,$13,$1D,$FE
byte_15ADEF:
		.BYTE	$12,$13,$17,$1D, $F,$16,$10,$FE
byte_15ADF7:
		.BYTE	$12, $F,$FE
byte_15ADFA:
		.BYTE	$12,$13,$17,$FE
byte_15ADFE:
		.BYTE	$17, $B,$18,$FE
byte_15AE02:
		.BYTE	$2C, $F,$68,$1D,$FE
byte_15AE07:
		.BYTE	$1D,$19,$18,$FE
byte_15AE0B:
		.BYTE	$12, $F,$1C,$FE
byte_15AE0F:
		.BYTE	$12, $F,$1C,$1D, $F,$16,$10,$FE
byte_15AE17:
		.BYTE	$1D,$12, $F,$FE
byte_15AE1B:
		.BYTE	$12, $F,$1C,$FE
byte_15AE1F:
		.BYTE	$16, $B, $E,$23,$FE
byte_15AE24:
		.BYTE	$37,$12, $F,$68,$1D,$FE
byte_15AE2A:
		.BYTE	 $E, $B,$1F,$11,$12,$1E, $F,$1C,$FE
byte_15AE33:
		.BYTE	$23,$FE
byte_15AE35:
		.BYTE	 $B,$18,$FE
byte_15AE38:
		.BYTE	$19,$16,$FE
byte_15AE3B:
		.BYTE	$13,$FE
byte_15AE3D:
		.BYTE	$FE
byte_15AE3E:
		.BYTE	$FE
byte_15AE3F:
		.BYTE	 $B,$FE
byte_15AE41:
		.BYTE	$FE
byte_15AE42:
		.BYTE	$13, $F,$1D,$FE
byte_15AE46:
		.BYTE	 $F,$18,$FE
byte_15AE49:
		.BYTE	$16,$16,$1D,$FE
byte_15AE4D:
		.BYTE	$16,$1D,$FE
byte_15AE50:
		.BYTE	 $F,$1D,$FE
byte_15AE53:
		.BYTE	$1D,$FE
byte_15AE55:
		.BYTE	 $F,$FE
byte_15AE57:
		.BYTE	$FE
byte_15AE58:
		.BYTE	$33,$18, $F,$FE
byte_15AE5C:
		.BYTE	$38,$21,$19,$FE
byte_15AE60:
		.BYTE	$38,$12,$1C, $F, $F,$FE
byte_15AE66:
		.BYTE	$2A,$19,$1F,$1C,$FE
byte_15AE6B:
		.BYTE	$2A,$13,$20, $F,$FE
byte_15AE70:
		.BYTE	$37,$13,$22,$FE
byte_15AE74:
		.BYTE	$37, $F,$20, $F,$18,$FE
byte_15AE7A:
		.BYTE	$29,$13,$11,$12,$1E,$FE

; =============== S U B	R O U T	I N E =======================================
sub_15AE80:
		PLA
		PLA
		PLA
		PLA
		LDA		byte_6A32
		AND		#$7F
		STA		byte_6A32
		LDA		#$51
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_msg_ptr:
;		NOP
		TAY
		CMP		#$96
		TXA
		SBC		#1
		BCC		loc_15AED2
		TYA
		CMP		#$66
		TXA
		SBC		#3
		BCC		loc_15AED6
		TYA
		CMP		#$44
		TXA
		SBC		#4
		BCC		loc_15AEE3
		TYA
		CMP		#$A3
		TXA
		SBC		#5
		BCC		loc_15AEF0
		TYA
		CMP		#$7E
		TXA
		SBC		#6
		BCC		loc_15AEC5
		TYA
		SEC
		SBC		#$7E
		TAY
		TXA
		SBC		#6
		TAX
		LDA		#$15
		BNE		loc_15AEFB
loc_15AEC5:
		TYA
		SEC
		SBC		#$A3
		TAY
		TXA
		SBC		#5
		TAX
		LDA		#$14
		BNE		loc_15AEFB
loc_15AED2:
		LDA		#$10
		BNE		loc_15AEFB
loc_15AED6:
		TYA
		SEC
		SBC		#$96
		TAY
		TXA
		SBC		#1
		TAX
		LDA		#$11
		BNE		loc_15AEFB
loc_15AEE3:
		TYA
		SEC
		SBC		#$66
		TAY
		TXA
		SBC		#3
		TAX
		LDA		#$12
		BNE		loc_15AEFB
loc_15AEF0:
		TYA
		SEC
		SBC		#$44
		TAY
		TXA
		SBC		#4
		TAX
		LDA		#$13
loc_15AEFB:
		STA		word_7C
		TYA
		JMP		_get_msg_ptr_by_idx

; =============== S U B	R O U T	I N E =======================================
sub_15AF01:
		LDA		byte_6A32
		AND		#$20
		BNE		loc_15AF20
		LDA		byte_82
		BMI		loc_15AF1E
		LDA		word_7C
		LDX		#word_72
		LDY		#0
		JSR		_far_byte_read_by_ptr
		INC		word_72
		BNE		loc_15AF1B
		INC		word_72+1
loc_15AF1B:
		TAX
		CLC
		RTS
loc_15AF1E:
		SEC
		RTS
loc_15AF20:
		LDA		#$60
		BNE		loc_15AF1B

; =============== S U B	R O U T	I N E =======================================
_bE_s1D:
		LDA		#0
		STA		word_4
		STA		word_6C+1
		LDA		_mapWidth
		STA		word_6C
		LDA		_mapHeight
		LDX		#word_6C
		JSR		_mul16_to_8
		LDA		#<[byte_7400-1]
		CLC
		ADC		word_6C
		STA		word_6C
		LDA		#>[byte_7400-1]
		ADC		word_6C+1
		STA		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; "map_DecodePointer6CToXY"
; turns a tilemap pointer at $6C into X/Y tile position (in X and Y). don't modify $6C.
_bE_s20:
		LDA		word_6C
		PHA
		LDA		word_6C+1
		PHA
		LDX		#word_6C
		LDY		#>[byte_7400]
		LDA		#<[byte_7400]
; remove buffer base #$7400
		JSR		_add16_to_neg16
		LDA		_mapWidth
; divide by width
		JSR		_div16_to_8
; setup result in X and Y
		TAX
		LDA		word_6C
		TAY
; restore word_6c
		PLA
		STA		word_6C+1
		PLA
		STA		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s21:
		LDX		word_3C
		LDY		word_3C+1
		STX		byte_74
		STY		byte_77
		DEC		_mapWidth
		LDA		_mapWidth
		INC		_mapWidth
		CMP		byte_74
		BCC		loc_15AF96
		DEC		_mapHeight
		LDA		_mapHeight
		INC		_mapHeight
		CMP		byte_77
		BCC		loc_15AF96
		LDX		word_3C
		LDY		word_3C+1
		JSR		sub_176F34
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#4
		BEQ		loc_15AF98
		LDA		byte_6DE0,X
		BPL		loc_15AF98
loc_15AF96:
		SEC
		RTS
loc_15AF98:
		LDA		word_72
		SEC
		SBC		#$10
		LSR
		LSR
		STA		word_4
		JSR		sub_177EFC
		LDA		word_6
		CMP		#$1D
		BEQ		loc_15AFAC
		SEC
		RTS
loc_15AFAC:
		LDX		word_72
		LDY		#1
		STY		word_72+1
		DEY
		STY		word_72
loc_15AFB5:
		LDA		(word_72),Y
		CMP		word_3C
		BEQ		loc_15AFC9
		INY
loc_15AFBC:
		INY
		LDA		(word_72),Y
		CMP		#$FF
		BEQ		loc_15AFD2
		INY
		INY
		BNE		loc_15AFB5
		BEQ		loc_15AFD2
loc_15AFC9:
		INY
		LDA		(word_72),Y
		CMP		word_3C+1
		BNE		loc_15AFBC
		SEC
		RTS
loc_15AFD2:
		STX		word_72
		STX		byte_91
		LDA		word_3C
		LDY		#0
		STA		(word_72),Y
		STA		byte_6BF
		INY
		LDA		word_3C+1
		STA		(word_72),Y
		STA		byte_6C0
		INY
		INY
		LDA		(word_72),Y
		ORA		#$40
		AND		#$FC
		STA		(word_72),Y
		LDA		byte_6AE6
		ORA		#$80
		STA		byte_6AE6
		LDA		_mapNumber
		CMP		#9
		BNE		loc_15B007
		LDA		_global_game_flags
		ORA		#$80
		STA		_global_game_flags
loc_15B007:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s22:
		FARX	_bD_s5
		SYSX	_apu_load,$93
		LDA		#$F8
		LDX		#0
loc_15B013:
		STA		_spr_ram,X
		INX
		CPX		#$10
		BNE		loc_15B013
		LDA		#2
		STA		_blockPlayerInputDuringMap
loc_15B01F:
		FARX	_bD_s7
		FARX	_bD_s7
		LDA		#1
		STA		word_72+1
		LDA		#0
		STA		word_72
loc_15B02D:
		JSR		sub_177259
		JSR		sub_174E10
		JSR		sub_174E10
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		CMP		#$10
		BNE		loc_15B02D
		JSR		_wait_for_nmi_is_over_sync
		INC		_blockPlayerInputDuringMap
		INC		_blockPlayerInputDuringMap
		LDA		_blockPlayerInputDuringMap
		JSR		sub_15B08E
		LDA		_blockPlayerInputDuringMap
		BNE		loc_15B01F
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s32:
		FARX	_bD_s5
		JSR		sub_15B0EF
		LDA		#2
		STA		_blockPlayerInputDuringMap
loc_15B05C:
		FARX	_bD_s7
		LDA		#1
		STA		word_72+1
		LDA		#0
		STA		word_72
loc_15B067:
		JSR		sub_177259
		JSR		sub_174E10
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		CMP		#$10
		BNE		loc_15B067
		JSR		_wait_for_nmi_is_over_sync
		INC		_blockPlayerInputDuringMap
		LDA		_blockPlayerInputDuringMap
		JSR		sub_15B08E
		LDA		_blockPlayerInputDuringMap
		BNE		loc_15B05C
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s26:
		FARX	_bD_s7
		INC		_blockPlayerInputDuringMap ; increment timer
		LDA		_blockPlayerInputDuringMap

; =============== S U B	R O U T	I N E =======================================
sub_15B08E:
		CMP		#$12			; checking weird special values..
		BEQ		loc_15B09B
		CMP		#$22
		BEQ		loc_15B0A2
		CMP		#$32
		BEQ		loc_15B0A9
		RTS
loc_15B09B:
		FARX	_bD_s5
		LDY		#4
		BNE		sub_15B0D5
loc_15B0A2:
		FARX	_bD_s5
		LDY		#8
		BNE		sub_15B0D5
loc_15B0A9:
		FARX	_bD_s5
		LDY		#$C
		JSR		sub_15B0D5
		LDA		#0
		STA		_blockPlayerInputDuringMap
		LDA		byte_2C
		CMP		#1
		BNE		locret_15B0D4
		SYSX	_apu_load,$0B
		LDA		byte_2A
		CMP		#$A2
		BNE		locret_15B0D4
		LDA		byte_2B
		CMP		#$3B
		BNE		locret_15B0D4
		LDA		byte_60B6
		AND		#4
		BEQ		locret_15B0D4
		FARX	_bC_s25
locret_15B0D4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B0D5:
		LDA		#$F8
		STA		word_4
		STA		word_4+1
		STA		word_6
		STA		word_6+1
		JSR		sub_15B0E8
		JSR		sub_15B0E8
		JSR		sub_15B0E8

; =============== S U B	R O U T	I N E =======================================
sub_15B0E8:
		LDX		#4
		JSR		sub_174204
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B0EF:
		LDX		#0
		LDA		#$F8
loc_15B0F3:
		STA		_spr_ram,X
		INX
		CPX		#$10
		BNE		loc_15B0F3
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s25:
		JSR		sub_15B0EF
		LDA		#1
		STA		byte_2C
		LDA		byte_60CD
		AND		#1
		BEQ		loc_15B112
		LDA		byte_60CD
		ORA		#2
		STA		byte_60CD
loc_15B112:
		INC		_blockPlayerInputDuringMap
		FARX	_bD_s5
locret_15B117:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s23:
		JSR		_bE_s24
loc_15B11B:
		LDA		byte_6ACE
		AND		#3
		BNE		locret_15B117
; test status bits on all 4 PCs
; TODO - re-code this so it doesnt reference 73F, etc. directly
		LDA		_players_status+1
		ORA		_players_status+3
		ORA		_players_status+5
		ORA		_players_status+7
		AND		#$20
		BEQ		locret_15B117
		JSR		sub_15B1BD
		LDY		#1
		STY		byte_64
		LDA		#$16
		STA		byte_63
		DEY
		STY		_battle_type_fight
loc_15B140:
		LDY		byte_67
		LDA		byte_68,Y
		STA		byte_CE
		ASL
		TAY
		LDA		_players_status+1,Y
		AND		#$20
		BEQ		loc_15B161
		LDA		_battle_type_fight
		BNE		loc_15B15E
		JSR		sub_15B24B
		JSR		sub_15B276
		LDA		#$FF
		STA		_battle_type_fight
loc_15B15E:
		JSR		sub_15B288
loc_15B161:
		INC		byte_67
		LDA		byte_67
		CMP		byte_66
		BNE		loc_15B140
locret_15B169:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s24:
		LDA		byte_60C5
		BMI		locret_15B169
		LDA		byte_60CB
		AND		#$90
		CMP		#$80
		BEQ		locret_15B169
		LDA		_players_status+1
		ORA		_players_status+3
		ORA		_players_status+5
		ORA		_players_status+7
		AND		#$40
		BEQ		loc_15B1B7
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		ASL
		STA		byte_65
		LDX		#0
loc_15B192:
		TXA
		PHA
		LDA		_players_status+1,X
		AND		#$40
		BEQ		loc_15B1AF
		JSR		_rand
		AND		#$F
		BNE		loc_15B1AF
		PLA
		TAX
		LDA		_players_status+1,X
		AND		#$BF
		STA		_players_status+1,X
		JMP		loc_15B1B1
loc_15B1AF:
		PLA
		TAX
loc_15B1B1:
		INX
		INX
		CPX		byte_65
		BNE		loc_15B192
loc_15B1B7:
		JSR		sub_15B1BD
		JMP		sub_15B1EE

; =============== S U B	R O U T	I N E =======================================
sub_15B1BD:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_65
		LDA		#0
		STA		byte_66
		STA		byte_CE
loc_15B1CA:
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4+1
		BPL		loc_15B1D9
		LDX		byte_66
		LDA		byte_CE
		STA		byte_68,X
		INC		byte_66
loc_15B1D9:
		INC		byte_CE
		LDA		byte_CE
		CMP		byte_65
		BNE		loc_15B1CA
		LDA		byte_66
		STA		byte_48
		LDA		#0
		STA		byte_67
		STA		_battle_type_fight
		STA		byte_D0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B1EE:
		LDY		byte_67
		LDX		byte_93,Y
		LDA		byte_9A
		BNE		loc_15B200
		CPX		#7
		BNE		loc_15B217
		LDX		#2
		LDY		#$16
		BNE		loc_15B229
loc_15B200:
		TXA
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		LDX		#2
		LDY		#$16
		CMP		#5
		BEQ		loc_15B229
		LDX		#$F
		LDY		#$10
		CMP		#6
		BEQ		loc_15B229
loc_15B217:
		INC		byte_67
		LDA		byte_67
		CMP		byte_66
		BNE		sub_15B1EE
		LDA		byte_9A
		CMP		#$C
		BCC		locret_15B228
		JMP		loc_15B11B
locret_15B228:
		RTS
loc_15B229:
		STX		byte_64
		STY		byte_63
		LDX		byte_67
		LDY		byte_68,X
		STY		byte_CE
		LDA		byte_AC
		ORA		#$20
		STA		byte_AC
		BMI		loc_15B217
		LDA		_battle_type_fight
		BNE		sub_15B282
		JSR		sub_15B24B
		JSR		sub_15B265
		JSR		sub_15B276
		JMP		sub_15B282

; =============== S U B	R O U T	I N E =======================================
sub_15B24B:
		JSR		_wait_for_nmi_is_over_sync
		LDA		#$F
		STA		_ram_pal_buf
		LDX		#0
		LDA		byte_63
loc_15B257:
		STA		_ram_pal_buf+1,X
		INX
		CPX		#$C
		BNE		loc_15B257
		JSR		_pal_set_no_fade
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_15B265:
		LDX		#$84
		LDA		byte_63
		CMP		#$16
		BEQ		loc_15B26F
		LDX		#$81
loc_15B26F:
		TXA
		STA		_battle_type_fight
		FARX	_bB_s3_apu_load
locret_15B275:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B276:
		JSR		_wait_for_nmi_is_over_sync
		JSR		_location_palette_and_rand_update
		JSR		_pal_set_no_fade
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
sub_15B282:
		JSR		sub_15B288
		JMP		loc_15B217

; =============== S U B	R O U T	I N E =======================================
sub_15B288:
		LDA		byte_64 ; "actingEnemy"
		STA		byte_CF ; "tempdamage" - whats this doing in this bank?
		JSR		_sram_b0_s5_player_HP_subtract
		PHA
		FARX	_b4_s1A
		PLA
		BNE		locret_15B275
		LDA		byte_CE
		STA		byte_D2
		ASL
		TAX
		LDA		#0
		STA		_players_status+1,X
		DEC		byte_48
		FARX	_b4_s1A
		JSR		_bE_sD
		JSR		_bE_s10
		JSR		_bE_s34
		SYSX	_display_window,$3E
		LDA		byte_48
		BNE		loc_15B2D0
		SYSX	_apu_load,$13
		LDA		#0
		STA		byte_D2
		LDX		#$27
		LDA		byte_65
		CMP		#1
		BEQ		loc_15B2C7
		LDX		#$2B
loc_15B2C7:
		TXA
		LDX		#0
		JSR		_bE_s4_msg_m00
		JMP		_MAIN_ENTRY
loc_15B2D0:
		SYSX	_sys06_msg_m00_arg0,$27
		JSR		_bE_s33
		LDA		#0
		STA		_battle_type_fight
		RTS

; =============== S U B	R O U T	I N E =======================================
; select and return the current map music index, mostly used in conjunction
; with _apu_load FARX call. even if there is a macro subroutine in the system
; bank exists that calls both at the same time, they were used mostly two
; opcodes in a lot of places. now replaced with macro subroutine
;
_bE_s31_get_map_music_idx:
		LDA		byte_60C5
		BPL		loc_15B2F5
		LDA		_mapNumber
		CMP		#$6B
		BNE		loc_15B2F5
		LDA		#$32							; special case for particular location
		FARX	_bC_s0_npc_anim_script_init		; start the npc automation script
		LDA		#$1C
		STA		byte_6EF
		LDA		#0
		STA		byte_6EB
loc_15B2F5:
		LDA		_location_type
		AND		#2
		BNE		loc_15B30A
		LDA		byte_2A
		CMP		byte_9B
		BNE		loc_15B30A
		LDA		byte_2B
		CMP		byte_9C
		BNE		loc_15B30A
		LDA		#$11
		RTS
loc_15B30A:
		LDA		byte_2C
		BEQ		loc_15B318
		LDX		#$B
		CMP		#1
		BEQ		loc_15B316
		LDX		#$E
loc_15B316:
		TXA
		RTS
loc_15B318:
		LDA		byte_9A
		BNE		loc_15B327
		LDA		_location_type
		LDX		#4
		AND		#2
		BEQ		loc_15B316
		LDA		#5
		RTS
loc_15B327:
		LDA		_mapNumber
		LDY		#0
loc_15B32B:
		LDX		_map_mus_list0,Y			; short music lookup list
		BEQ		loc_15B338
		CMP		_map_lookup_table0,Y		; faster music select for common locations
		BEQ		loc_15B316
		INY
		BNE		loc_15B32B
loc_15B338:
		LDX		#0							; if nothing found in the first list
loc_15B33A:
		CMP		_map_lookup_table1,X		; check a larger one
		BCC		loc_15B342
		INX
		BNE		loc_15B33A
loc_15B342:
		LDA		_map_mus_list1,X			; don't know, why they need so weird behaviour
		RTS

_map_lookup_table0:
		.BYTE	  4,  8,$17,$71,$87,$8A,$33,  3,$5C,$6D,$6E,  9
_map_mus_list0:
		.BYTE	 $A,  7,  6,  3, $F,  6,  3,  7,  3, $D, $D, $D,  0

; note, that at least two locations sits in both lists with different music assigned for them
; is there are some special cases or just dead links?
; map $04 - A or 3
; map $6D - D or 3
;
_map_lookup_table1:
		.BYTE	  1,  4,$13,$1B,$2D,$3B,$3C,$41,$45,$50,$53,$58,$5D,$5F,$65,$68
		.BYTE	$6D,$82,$8F,$96,$97,$99,$9B,$9F,$CD,$D6,$FF
_map_mus_list1:
		.BYTE	 $F,  3, $F, $D, $A,  7,  9,  8, $F,  3, $F,  3,  7, $F,  3, $F
		.BYTE	  3, $F, $D, $A, $F,  7, $F,  3,  7,  9,  8

; =============== S U B	R O U T	I N E =======================================
; unused
;_bE_s2B:
;		ASL
;		ASL
;		TAY
;		LDA		_npcs_pos_list,Y
;		TAX
;		LDA		_npcs_pos_list+1,Y
;		TAY
;		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s2E:
		LDX		#0
loc_15B3A3:
		LDA		byte_15B3C2,X
		CMP		_mapNumber
		BEQ		loc_15B3B2
		CMP		#$FF
		BEQ		locret_15B3B1
		INX
		BNE		loc_15B3A3
locret_15B3B1:
		RTS
loc_15B3B2:
		TXA
		ASL
		TAX
		LDA		off_15B3D7,X
		STA		word_6C
		LDA		off_15B3D7+1,X
		STA		word_6C+1
		JMP		(word_6C)
byte_15B3C2:
		.BYTE	$A0,$2F,$30,  6,$73,$74,$75,$D2,  8,$EF,$CC,$C3,$BB,$48,$87,$99
		.BYTE	$9A,$62,$EB,$17,$FF
off_15B3D7:
		.WORD	sub_15B445
		.WORD	sub_15B435
		.WORD	sub_15B435
		.WORD	sub_15B46D
		.WORD	sub_15B3FF
		.WORD	sub_15B403
		.WORD	sub_15B407
		.WORD	sub_15B41D
		.WORD	sub_15B64C
		.WORD	sub_15B688
		.WORD	sub_15B698
		.WORD	sub_15B6A6
		.WORD	sub_15B6B1
		.WORD	_wrap_b1B_s0
		.WORD	_wrap_b1B_s0
		.WORD	_wrap_b1B_s0
		.WORD	_wrap_b1B_s0
		.WORD	sub_15B6C0
		.WORD	sub_15B6CD
		.WORD	sub_15B6D8

; =============== S U B	R O U T	I N E =======================================
sub_15B3FF:
		LDA		#4
		BNE		sub_15B416

; =============== S U B	R O U T	I N E =======================================
sub_15B403:
		LDA		#$10
		BNE		sub_15B416

; =============== S U B	R O U T	I N E =======================================
sub_15B407:
		BIT		byte_60CD
		BVS		nullsub_20
		LDA		#$80
		ORA		_global_game_flags
		STA		_global_game_flags
		LDA		#$40

; =============== S U B	R O U T	I N E =======================================
sub_15B416:
		ORA		byte_60CD
		STA		byte_60CD

; =============== S U B	R O U T	I N E =======================================
nullsub_20:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B41D:
		LDA		_global_game_flags
		AND		#$18
		CMP		#$18
		BNE		nullsub_20
		LDA		#$13
		STA		byte_753A
		STA		byte_753B
		STA		byte_7558
		STA		byte_7559
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B435:
		LDA		byte_60B6
		AND		#$20
		BEQ		locret_15B444
		LDA		#$27
		STA		byte_7C71
		STA		byte_7CD1
locret_15B444:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B445:
		LDA		byte_60B6
		AND		#2
		BEQ		locret_15B46C
		LDA		#$D
		STA		byte_75C8
		STA		byte_75C9
		STA		byte_75E8
		STA		byte_75E9
		LDX		#1
		STX		byte_75C7
		INX
		STX		byte_75CA
		LDX		#5
		STX		byte_75E7
		INX
		STX		byte_75EA
locret_15B46C:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B46D:
		LDA		_playerMapX
		CMP		#$17
		BNE		locret_15B481
		LDA		_playerMapY
		CMP		#1
		BNE		locret_15B481
		LDA		_global_game_flags
		ORA		#2
		STA		_global_game_flags
locret_15B481:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s2F:
		LDA		#<[byte_7400]
		STA		word_6C
		LDA		#>[byte_7400]
		STA		word_6C+1
		LDX		#0
loc_15B48C:
		LDA		byte_6DE0,X
		AND		#$70
		CMP		#$50
		BEQ		loc_15B4A4
		CMP		#$60
		BEQ		loc_15B4A4
		CMP		#$70
		BEQ		loc_15B4A4
loc_15B49D:
		INX
		CPX		#$20
		BNE		loc_15B48C
		BEQ		loc_15B4B3
loc_15B4A4:
		AND		#$30
		SEC
		SBC		#$10
		LSR
		LSR
		LSR
		LSR
		TAY
		STX		word_6,Y
		JMP		loc_15B49D
loc_15B4B3:
		LDA		_mapHeight
		STA		word_4+1
loc_15B4B7:
		LDY		#0
		LDA		_mapWidth
		STA		word_4
loc_15B4BD:
		LDA		(word_6C),Y
		PHA
		AND		#$E0
		STA		byte_A
		PLA
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$70
		BEQ		loc_15B4D3
		CMP		#$40
		BCC		loc_15B4E0
loc_15B4D3:
		INY
		DEC		word_4
		BNE		loc_15B4BD
		JSR		sub_177CB0
		DEC		word_4+1
		BNE		loc_15B4B7
		RTS
loc_15B4E0:
		STA		byte_9
		JSR		sub_177CB0
		LDA		word_4+1
		CMP		#1
		BNE		loc_15B4F0
		LDA		byte_8A
		JMP		loc_15B50C
loc_15B4F0:
		LDA		(word_6C),Y
		STA		byte_B
		AND		#$E0
		CMP		byte_A
		BEQ		loc_15B50A
		LDA		byte_9A
		CMP		#$19
		BCS		loc_15B530
		CMP		#$C
		BCS		loc_15B516
		LDA		byte_A
		BEQ		loc_15B538
		BNE		loc_15B516
loc_15B50A:
		LDA		byte_B
loc_15B50C:
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$70
		BNE		loc_15B538
loc_15B516:
		JSR		sub_177CBC
		LDA		byte_9
		AND		#$30
		SEC
		SBC		#$10
		LSR
		LSR
		LSR
		LSR
		TAX
		LDA		(word_6C),Y
		AND		#$E0
		ORA		word_6,X
		STA		(word_6C),Y
		JMP		loc_15B4D3
loc_15B530:
		LDA		byte_B
		AND		#$1F
		CMP		byte_8A
		BEQ		loc_15B50A
loc_15B538:
		JSR		sub_177CBC
		JMP		loc_15B4D3

; =============== S U B	R O U T	I N E =======================================
_bE_s30:
		JSR		_bE_s1D
		LDA		#<[byte_6D40]
		STA		word_3C
		LDA		#>[byte_6D40]
		STA		word_3C+1
loc_15B549:
		LDY		#0
		LDA		(word_6C),Y
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#$B
		BEQ		loc_15B572
		CMP		#$C
		BEQ		loc_15B572
		CMP		#$D
		BEQ		loc_15B572
loc_15B561:
		DEC		word_6C
		LDA		word_6C
		CMP		#$FF
		BNE		loc_15B549
		DEC		word_6C+1
		LDA		word_6C+1
		CMP		#$73
		BNE		loc_15B549
		RTS
loc_15B572:
		JSR		_bE_s20
		STX		word_3E
		STY		word_3E+1
		LDY		#0
loc_15B57B:
		LDA		(word_3C),Y
		CMP		_mapNumber
		BEQ		loc_15B58F
		CMP		#$FF
		BEQ		loc_15B561
		INY
loc_15B586:
		INY
loc_15B587:
		INY
		INY
		CPY		#$A0
		BCC		loc_15B57B
		BCS		loc_15B561
loc_15B58F:
		INY
		LDA		(word_3C),Y
		CMP		word_3E
		BNE		loc_15B586
		INY
		LDA		(word_3C),Y
		CMP		word_3E+1
		BNE		loc_15B587
		INY
		LDA		(word_3C),Y
		PHA
		LDY		#0
		LDA		(word_6C),Y
		AND		#$E0
		STA		(word_6C),Y
		PLA
		ORA		(word_6C),Y
		STA		(word_6C),Y
		JMP		loc_15B561

; =============== S U B	R O U T	I N E =======================================
_bE_s16:
		JSR		_bE_s1D
		LDA		#<[byte_7400]
		STA		word_6E
		LDA		#>[byte_7400]
		STA		word_6E+1
		LDA		#0
		STA		word_3C
		STA		word_3C+1
loc_15B5C2:
		LDY		#0
		LDA		(word_6E),Y
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#3
		BEQ		loc_15B5E5
loc_15B5D2:
		INC		word_6E
		BNE		loc_15B5D8
		INC		word_6E+1
loc_15B5D8:
		LDA		word_6C
		CMP		word_6E
		BNE		loc_15B5C2
		LDA		word_6C+1
		CMP		word_6E+1
		BNE		loc_15B5C2
		RTS
loc_15B5E5:
		LDA		word_3C
		INC		word_3C
		FARX	_bC_s1F
		BCC		loc_15B5D2
		LDA		#$1F
		STA		word_3E
		LDY		#0
		LDA		(word_6E),Y
		AND		#$E0
		ORA		word_3E
		STA		(word_6E),Y
		BNE		loc_15B5D2

; =============== S U B	R O U T	I N E =======================================
_bE_s36:
		LDA		byte_60C3
		AND		#7
		ASL
		ASL
		TAX
		LDA		byte_15B630,X
		STA		word_4+1
		LDA		byte_15B630+1,X
		STA		_playerMapX
		LDA		byte_15B630+2,X
		STA		_playerMapY
		LDA		byte_15B630+3,X
		STA		_mapNumber
		FARX	_b6_s13
		DEC		byte_2B
		LDA		#$40
		STA		byte_9B
		LDA		#$6C
		STA		byte_9C
		LDA		#0
		STA		byte_644
		STA		byte_6BC
		RTS
byte_15B630:
		.BYTE	  0,  9,  5,$47,  2,$12,  4,$4A, $C, $F,  8,$4F,  6, $A,  5,$56
		.BYTE	  9, $F,$25,$33, $D, $E, $C,$61, $F, $A,  5,$6B

; =============== S U B	R O U T	I N E =======================================
sub_15B64C:
		LDA		byte_60C4
		BPL		locret_15B677
		LDX		#0
loc_15B653:
		LDA		off_15B678,X
		STA		word_4
		LDA		off_15B678+1,X
		STA		word_4+1
		JSR		sub_15B667
		INX
		INX
		CPX		#$10
		BNE		loc_15B653
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B667:
		LDA		#$13
		LDY		#0
		STA		(word_4),Y
		INY
		STA		(word_4),Y
		LDY		_mapWidth
		STA		(word_4),Y
		INY
		STA		(word_4),Y
locret_15B677:
		RTS
off_15B678:
		.WORD	byte_76D4
		.WORD	byte_79F4
		.WORD	byte_779A
		.WORD	byte_779E
		.WORD	byte_7862
		.WORD	byte_7866
		.WORD	byte_792A
		.WORD	byte_792E

; =============== S U B	R O U T	I N E =======================================
sub_15B688:
		LDA		byte_60BA
		AND		#$20
		BEQ		locret_15B697
		LDA		#$13
		STA		byte_7673
		STA		byte_7697
locret_15B697:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B698:
		LDA		byte_60C5
		BPL		locret_15B697
		LDX		#$B
		LDY		#$13
		LDA		#5
		JMP		sub_177CC8

; =============== S U B	R O U T	I N E =======================================
sub_15B6A6:
		LDA		byte_60C5
		AND		#$20
		BEQ		locret_15B6B0
		FARX	_bC_s1B
locret_15B6B0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B6B1:
		LDA		_global_game_flags
		BPL		locret_15B6BB
		LDA		#$AC
		STA		byte_7633
locret_15B6BB:
		RTS

; =============== S U B	R O U T	I N E =======================================
_wrap_b1B_s0:
		FARX	_b1B_s0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B6C0:
		LDA		byte_60CD
		AND		#$20
		BEQ		locret_15B6CC
		LDA		#$F
		STA		byte_7464
locret_15B6CC:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B6CD:
		LDA		byte_60C8
		BPL		locret_15B6D7
		LDA		#$12
		STA		byte_7579
locret_15B6D7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B6D8:
		LDA		byte_60B9
		BPL		locret_15B6E2
		LDA		#$F
		STA		byte_7522
locret_15B6E2:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s1B:
		LDA		byte_60CA
		AND		#$50
		LSR
		ORA		byte_60CA
		STA		byte_60CA
		LDA		byte_60B9
		AND		#4
		ORA		byte_60CA
		STA		byte_60CA
		LDA		byte_60C5
		AND		#$E0
		STA		byte_60C5
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_sE:
		LDY		#$16
loc_15B705:
		LDA		byte_15B8FB,Y
		CMP		_mapNumber
		BEQ		loc_15B711
		DEY
		BPL		loc_15B705
		CLC
		RTS
loc_15B711:
		TYA
		SBC		#9
		TAX
		BMI		loc_15B751
		BEQ		loc_15B744
		DEY
		DEX
		BEQ		loc_15B746
		LDY		#$D
		DEX
		BEQ		loc_15B746
		LDY		#$2A
		DEX
		BEQ		loc_15B76D
		LDY		#$24
		DEX
		BEQ		loc_15B75B
		DEX
		BEQ		loc_15B765
		DEX
		BEQ		loc_15B775
		DEX
		BEQ		loc_15B782
		DEX
		BEQ		loc_15B795
		DEX
		BEQ		loc_15B791
		DEX
		BEQ		loc_15B791
		DEX
		BEQ		loc_15B7B5
		JMP		loc_15B7DD
loc_15B744:
		LDY		#$26
loc_15B746:
		LDX		byte_644
loc_15B749:
		BEQ		loc_15B751
		INY
		DEX
		BPL		loc_15B749
loc_15B74F:
		INY
loc_15B750:
		INY
loc_15B751:
		JSR		sub_15B809
loc_15B754:
		JSR		_pal_fade_out
		LDA		#4
		SEC
		RTS
loc_15B75B:
		LDA		_playerMapY
		BEQ		loc_15B751
		LDA		#$EC
		STA		_mapNumber
		BNE		loc_15B754
loc_15B765:
		LDA		byte_644
		LSR
		BEQ		loc_15B751
		BNE		loc_15B750
loc_15B76D:
		LDA		_playerMapX
		CMP		#$10
		BCC		loc_15B751
		BCS		loc_15B750
loc_15B775:
		LDY		#$21
		LDA		_playerMapX
		CMP		#$1E
		BCS		loc_15B751
		CMP		#$C
		JMP		loc_15B7B1
loc_15B782:
		LDY		#$11
		LDA		_playerMapX
		CMP		#$14
		BCC		loc_15B751
		LDA		_playerMapY
		CMP		#$14
		JMP		loc_15B7B1
loc_15B791:
		LDA		#6
		BNE		loc_15B797
loc_15B795:
		LDA		#$A
loc_15B797:
		STA		word_4
		LDY		#$14
		LDA		_playerMapX
		CMP		word_4
		BCC		loc_15B7A9
		LDY		#$17
		CMP		#$E
		BCC		loc_15B7A9
		LDY		#$1A
loc_15B7A9:
		LDA		_playerMapY
		CMP		word_4
		BCC		loc_15B751
		CMP		#$E
loc_15B7B1:
		BCC		loc_15B750
loc_15B7B3:
		BCS		loc_15B74F
loc_15B7B5:
		LDY		#$1D
		LDA		_playerMapX
		CMP		#8
		BCC		loc_15B7C7
		CMP		#$17
		BCS		loc_15B7C7
		LDA		_playerMapY
		CMP		#8
		BCC		loc_15B751
loc_15B7C7:
		LDA		_playerMapX
		CMP		#$10
		BCC		loc_15B7DB
		CMP		#$15
		BCS		loc_15B7DB
		LDA		_playerMapY
		CMP		#$C
		BCC		loc_15B7DB
		CMP		#$13
		BCC		loc_15B7B1
loc_15B7DB:
		CLC
		RTS
loc_15B7DD:
		LDY		#$1F
		LDA		_playerMapX
		CMP		#$1C
		BCS		loc_15B7B3
		CMP		#$12
		BCC		loc_15B7F3
		CMP		#$17
		BCS		loc_15B7F3
		LDA		_playerMapY
		CMP		#8
		BCC		loc_15B7B1
loc_15B7F3:
		JSR		sub_15B809
		LDA		byte_644
		LSR
		BCS		loc_15B800
		DEC		_playerMapX
		DEC		_playerMapX
loc_15B800:
		LDA		_playerMapY
		ADC		#$A
		STA		_playerMapY
		JMP		loc_15B754

; =============== S U B	R O U T	I N E =======================================
sub_15B809:
		TYA
		ASL
		ASL
		TAY
		LDA		byte_15B84B,Y
		STA		_mapNumber
		LDA		byte_15B84B+3,Y
		STA		word_6
		JSR		sub_15B82E
		CLC
		ADC		byte_15B84B+1,Y
		BMI		loc_15B822
		STA		_playerMapX
loc_15B822:
		JSR		sub_15B82E
		CLC
		ADC		byte_15B84B+2,Y
		BMI		locret_15B82D
		STA		_playerMapY
locret_15B82D:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_15B82E:
		LDA		#0
		STA		word_4
		STA		word_4+1
		LDX		#4
loc_15B836:
		SEC
		ROL		word_4
		LSR		word_6
		BCC		loc_15B847
		JSR		_rand
		AND		word_4
		CLC
		ADC		word_4+1
		STA		word_4+1
loc_15B847:
		DEX
		BNE		loc_15B836
		RTS
byte_15B84B:
		.BYTE	$CA,$12,$16,$45,$15,  3,$1E,  0,$D1,$19,$15,  0,$A2, $E,$1E,$64
		.BYTE	$A8, $C,$18,$33,$BF,$10,$10,  0,$BF,$30,  3,  0,$40, $F,  2,  0
		.BYTE	$F1, $E, $C,$94,  6,  6,$1D,  0,  6,  7,$1E,  0,$62,$19,  8,  0
		.BYTE	$62,$14,  3,  0,  6,  5,$1D,  0,  6,  7,$1F,  0,  6,  6,$20,  0
		.BYTE	  6,  4,$1F,  0,$D0, $B,  9,$33,$D0,$1D,  9,$33,$D0,$1D,$1B,$33
		.BYTE	$E4,  5,  6,  0,$E4,  7, $D,  0,$E4,  5,$13,  0,$E4, $D,  7,  0
		.BYTE	$E5, $B, $D,  0,$E4, $D,$12,  0,$E4,$14,  6,  0,$E4,$12, $D,  0
		.BYTE	$E4,$14,$13,  0,$3D,  6,  0,$34,$3D, $A, $E,$30,$DB,$FF,$FF,  0
		.BYTE	$DC,$12,  6,$54,$DB,$1E, $E,$32,$DB,$FF,  8,  0,$DD,$FF,  8,  0
		.BYTE	$EB,$11, $B,  0,$EB,  1, $E,  0,$40, $C,  2,$16,$40,$22,$10,$71
		.BYTE	$40, $C,$2C,$16,$40,  0,$10,$71,$A9,$18,$22,$21,$A9,$26,  4,$58
byte_15B8FB:
		.BYTE	$C9,$86,$D2,$A1,$A9,$BE,$BF,$F1,$F2,$F0,$64,$62,$AA,$EE,$EC,$DE
		.BYTE	$3B,$E5,$E6,$E7,$DB,$DD

; =============== S U B	R O U T	I N E =======================================
_bE_sF:
		JSR		_ppu_and_dequeue_enable
		JSR		_bE_s10
		JMP		_bE_s18

; =============== S U B	R O U T	I N E =======================================
_bE_s11:
		LDA		#$FF
		BNE		sub_15B920

; =============== S U B	R O U T	I N E =======================================
_bE_s10:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_15B920:
		STA		_window_frame_width_add_header4_bits_add_1
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_6ABE
		LDA		#0
		STA		byte_6AC0
		STA		_window_frame_tmp6AC1
loc_15B933:
		LDA		_window_frame_tmp6AC1
		STA		byte_CE
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4
		BPL		loc_15B9B6
		LDA		word_4+1
		BPL		loc_15B9B6
		LDA		byte_60C9
		AND		#$3F
		BEQ		loc_15B957
		LDA		byte_60B8
		AND		#$3F
		CLC
		ADC		#$F
loc_15B952:
		STA		byte_6ABF
		BNE		loc_15B99C
loc_15B957:
		BIT		_global_game_flags
		LDA		#$F
		BVS		loc_15B952
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		STA		byte_6ABF
		JSR		_sram_b0_s1E_player_euipped_item_read
		LDA		word_4+1
		CMP		#$AA
		BNE		loc_15B976
		LDA		#$1F
		STA		byte_6ABF
		BNE		loc_15B99C
loc_15B976:
		JSR		_sram_b0_s2F_player_gender_read
		LDA		word_4
		BEQ		loc_15B99C
		JSR		_sram_b0_s1E_player_euipped_item_read
		LDA		word_4+1
		CMP		#$B1
		BEQ		loc_15B98A
		CMP		#$B2
		BNE		loc_15B991
loc_15B98A:
		LDA		#$30
		STA		byte_6ABF
		BNE		loc_15B99C
loc_15B991:
		LDA		byte_6ABF
		BEQ		loc_15B99C
		CLC
		ADC		#7
		STA		byte_6ABF
loc_15B99C:
		LDY		byte_6AC0
		LDA		byte_6ABF
		BIT		_window_frame_width_add_header4_bits_add_1
		BVS		loc_15B9B0
		JSR		sub_1762C3
		JMP		loc_15B9B3
loc_15B9AD:
		JMP		loc_15B933
loc_15B9B0:
		JSR		sub_1762A8
loc_15B9B3:
		JSR		sub_15B9FA
loc_15B9B6:
		INC		_window_frame_tmp6AC1
		LDA		_window_frame_tmp6AC1
		CMP		byte_6ABE
		BNE		loc_15B9AD
		LDA		#0
		STA		_window_frame_tmp6AC1
loc_15B9C6:
		LDA		_window_frame_tmp6AC1
		STA		byte_CE
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4
		BPL		loc_15B9EC
		LDA		word_4+1
		BMI		loc_15B9EC
		LDA		#$31
		LDY		byte_6AC0
		BIT		_window_frame_width_add_header4_bits_add_1
		BVS		loc_15B9E6
		JSR		sub_1762C3
		JMP		loc_15B9E9
loc_15B9E6:
		JSR		sub_1762A8
loc_15B9E9:
		JSR		sub_15B9FA
loc_15B9EC:
		INC		_window_frame_tmp6AC1
		LDA		_window_frame_tmp6AC1
		CMP		byte_6ABE
		BNE		loc_15B9C6
		JMP		_ppu_and_dequeue_enable

; =============== S U B	R O U T	I N E =======================================
sub_15B9FA:
		LDA		byte_90
		PHA
		LDA		#1
		STA		byte_90
		JSR		sub_177116
		INC		byte_90
		JSR		sub_177116
		JSR		_wait_for_nmi_is_over_sync
		PLA
		STA		byte_90
		JSR		_bE_s34
		INC		byte_6AC0
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s18:
		JSR		_ppu_disable
		JSR		sub_176285
		LDA		#$12
		JSR		sub_176299
		LDA		#$1F
		JSR		sub_176299
		LDX		#0
loc_15BA28:
		LDA		byte_15BA34,X
		STA		_ram_pal_buf+$D,X
		INX
		CPX		#$C
		BNE		loc_15BA28
		RTS
byte_15BA34:
		.BYTE	$36,$30,$11,$36,$15,  3,$36,$30,$1B,$36,$1A,  6

; =============== S U B	R O U T	I N E =======================================
; "readTileFromMap"
_bE_s19:
		LDY		#0
		LDA		(word_6C),Y

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; "maskToBottom5Bits"
; remember, we think the top 3 bits of a tile are special.. roof-related
sub_15BA44:
		AND		#$1F
		TAX
; load tile info. does 6de0 contain information about each loaded tile type?
		LDA		byte_6DE0,X
		LDX		#3
; classify
		AND		#$F
		CMP		#1
; classified as X=3.
; if tileinfo[0]&0x0F==1
		BEQ		.classificationSucceeded
		LDX		#1
		CMP		#$A
; classify as X=1
; if tileinfo[0]&0x0F==0x0A
		BEQ		.classificationSucceeded
		CMP		#$F
; classify as X=1
; if tileinfo[0]&0x0F==0x0F
		BEQ		.classificationSucceeded
; classify as X=1
; if tileinfo[0]&0x0F != (0x01,0x0A,0x0F) also return C=0
		CLC
		RTS
.classificationSucceeded:
		SEC
locret_15BA5F:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bE_s1A:
		JSR		sub_15BA44 ; maskToBottom5Bits
		BCC		locret_15BA5F
		CMP		#$F
		BNE		.classificationSucceeded
; classification must have failed
		CLC
		RTS

		ECHO "bank 0E free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB