
		ORG $8000

		PTR_IDX		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress

		PTR_IDX		_b4_s5_do_message_speed_delay
		PTR_IDX		_b4_s16_do_half_message_speed_delay
		PTR_IDX		_b4_s21_message_half_delay_or_wait_for_keypress

		PTR_IDX		_b4_s0_type00_battle_mode_handler
		PTR_IDX		_b4_s24_type80_battle_mode_handler
		PTR_IDX		_b4_s25_typeC0_battle_mode_handler
		PTR_IDX		_b4_s1
		PTR_IDX		_b4_s2
		PTR_IDX		_b4_s3
		PTR_IDX		_b4_s6_wndBTL_STAT
		PTR_IDX		_b4_sA_clear_chatbox
		PTR_IDX		_b4_sC
		PTR_IDX		_b4_dD_spells_list
		PTR_IDX		_b4_sE
		PTR_IDX		_b4_sF_rand_mul_A
		PTR_IDX		_b4_s10
		PTR_IDX		_b4_s12
		PTR_IDX		_b4_s13
		PTR_IDX		_b4_s14
		PTR_IDX		_b4_s17
		PTR_IDX		_b4_s18
		PTR_IDX		_b4_s19_heal_enemy
		PTR_IDX		_b4_s1A_status_pal_adjust_and_update
		PTR_IDX		_b4_s1B
		PTR_IDX		_b4_s1E_healing_randrange
		PTR_IDX		_b4_s1F
		PTR_IDX		_b4_s20
		PTR_IDX		_b4_s23
		PTR_IDX		_b4_s26
		PTR_IDX		_b4_s27
		PTR_IDX		_b4_s28
		PTR_IDX		_b4_s29
		PTR_IDX		_b4_s2A
		PTR_IDX		_b4_s2B_emove_stage2_02_through_06_attacks

; =============== S U B	R O U T	I N E =======================================
; sets up a battle for _battle_type_fight=01
_b4_s25_typeC0_battle_mode_handler:
		LDA		#$C0
		BNE		sub_680F1

; =============== S U B	R O U T	I N E =======================================
; sets up a battle for _battle_type_fight=FF
_b4_s24_type80_battle_mode_handler:
		LDA		#$80

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_680F1:
		STA		byte_6A64		; temp battle type flags var copy, not accessed directly if any
		JMP		_common_battle_handler

; =============== S U B	R O U T	I N E =======================================
; sets up for a _battle_type_fight=00 (normal battle)
_b4_s0_type00_battle_mode_handler:
		JSR		_b4_s1A_status_pal_adjust_and_update
		LDA		#0

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_common_battle_handler:
		STA		_curent_battle_type_flags
		LDA		_battle_type_fight
		STA		byte_6A6B
		LDA		#0
		STA		byte_6A66
		LDA		_global_flags_array.byte2	; "in battle" mode flag set
		ORA		#$20
		STA		_global_flags_array.byte2
		FARX	_bE_s5
		LDA		#$FD
		STA		_spr_force_shuffle_mode
		JSR		_b4_s22
		FARX	_b1_s9
loc_68080:
		FARX	_b1_sB
		JSR		sub_6814E ; actor-order table setup
		FARX	_b2_sB
		CMP		#$FD
		BEQ		.common_battle_won
		FARX	_bA_s2
		JSR		sub_6AE36
		JSR		sub_6AE51
		INC		byte_6A66
		JSR		sub_6889C
		CMP		#$FF
		BNE		loc_680AA
.comon_battle_death:
; this is happening at game over after defeat in battle
; it's the main death sequence
		FARX	_b1_sC
; return back to the sprite shuffle logic, disabled in battle
		LDA		#0
		STA		_spr_force_shuffle_mode
; directly return to the _MAIN_ENTRY where the game does some
; test if game was started after the power up or restarted after
; the party death, so it decides not to show a title screen and
; copyrights or goes directly to the king or shrine save point location
; if we jump there from this point for example (there at
; least one more place with the same behaviour, when wiping the
; party with some spell?)
;
; this can be done from any point of the game, because it will
; reinitialize a game banks and reset the stack pointer, as if we start
; the new game
		JMP		_MAIN_ENTRY
loc_680AA:
		CMP		#$FE
		BNE		loc_680B4
		FARX	_b1_sD_post_win_battle_handler ; seems to be some kind of battle system high level logic or loop, but not sure
		JMP		.common_battle_won
loc_680B4:
		BIT		_curent_battle_type_flags
		BPL		loc_680CD
		CMP		#$FC
		BEQ		loc_6811D
		CMP		#$FD
		BEQ		sub_680FE
		BIT		_curent_battle_type_flags
		BVS		loc_680CD
		LDA		byte_6A66
		CMP		#$A
		BCS		loc_6810D
loc_680CD:
		FARX	_b1_sA
		LDA		_bs_num_live_players
		BNE		loc_68080
		BEQ		.comon_battle_death
.common_battle_won:							; battle won, restore the location music
		JSR		_map_music_select_and_load
.common_battle_won_ex:
		FARX	_b0_s50_players_item_buffs_refresh
		LDA		_global_flags_array.byte2	; and clear the battle flag
		AND		#$DF
		STA		_global_flags_array.byte2
		JSR		sub_174C62
		LDA		#0
		STA		byte_8E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_680FE:
		LDX		#0
		STX		byte_6A64
loc_68103:
		LDA		byte_6A77,X
		BMI		loc_68114
		INX
		CPX		#4
		BNE		loc_68103
loc_6810D:
		LDA		#$FF
		STA		byte_6A65
		BNE		loc_68122
loc_68114:
		STX		byte_6A65
		JSR		sub_68141
		JMP		loc_68122
loc_6811D:
		LDA		#$FE
		STA		byte_6A65
loc_68122:
		LDA		_global_flags_array.byte2
		AND		#$DF
		STA		_global_flags_array.byte2
		BIT		_curent_battle_type_flags
		BVS		loc_68138
		FARX	_bD_sC
		JSR		_pause_or_skip
		JMP		.common_battle_won
loc_68138:
		SYSX	_apu_load,BGM_BATTLE_INTRO_SLOW_29
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		JMP		.common_battle_won_ex

; =============== S U B	R O U T	I N E =======================================
sub_68141:
		LDX		#0
loc_68143:
		LDA		#$80
		STA		byte_6A77,X
		INX
		CPX		#4
		BNE		loc_68143
		RTS

; =============== S U B	R O U T	I N E =======================================
; table at $540 gets EAAAAMMM - E for enemy, A for actor number (1100 at most), and M for marking.
;
sub_6814E:
		JSR		sub_68183

; 8-times loop: table 540 gets the contents of table 558, multiplied by 8 (leaving room for later marking)
		LDX		#0
loc_68153:
		LDA		byte_558,X
		ASL
		ASL
		ASL
		STA		byte_540,X
		INX
		CPX		#$C
		BNE		loc_68153

; oddly, mark first 4 entries of table 540 with numbers 0,1,2,3
		LDX		#0
loc_68163:
		TXA
		ORA		byte_540,X
		STA		byte_540,X
		INX
		CPX		#4
		BNE		loc_68163

; mark next 8 entries (enemies) ORING with #$80 as well as numbers 0,1,2,3,4,5,6,7
		LDX		#0
		LDY		#4
loc_68173:
		TXA
		ORA		#$80
		ORA		byte_540,Y
		STA		byte_540,Y
		INX
		INY
		CPX		#8
		BNE		loc_68173
		RTS

; =============== S U B	R O U T	I N E =======================================
; Main purpose seems to be to setup a 12-entry table at u8[558] containing the turn # for each actor
; (beginning at turn number 0, who goes first). This happens before command entry occurs!
;
sub_68183:
		LDY		#0

; loop 4 times for each player
loc_68185:
		STY		byte_CE
		TYA ; stash Y
		PHA	
		LDA		_players_rAGI,Y
		STA		word_4
		JSR		_randomize_75_percent
		PLA
		TAY ; unstash Y
		LDA		word_3C ; load randomized AGI
		STA		byte_54C,Y ; store
		INY
		CPY		#4 
		BNE		loc_68185

; setup loop across 8 enemies, probably
		LDX		#0
		LDY		#4
loc_681A1:
		STX		_acting_enemy
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6B73E ; load enemy's agility
		LDA		byte_59
		STA		word_4
		JSR		_randomize_75_percent
		PLA
		TAY
		PLA
		TAX
		LDA		word_3C
		STA		byte_54C,Y ; store to actor speed table
		INY
		INX
		CPX		#8
		BNE		loc_681A1

; initialize u8[$42] and the 12-entry table at u8[$540] to FF
		LDA		#$FF
		LDX		#0
		STX		byte_42
loc_681C6:
		STA		byte_540,X
		INX
		CPX		#$C
		BNE		loc_681C6

;repeat 12 times:
;look for maximum unused agility in table at byte_54C
loc_681CE:
		LDA		#0
		STA		byte_43
		LDX		#0
loc_681D4:
		LDA		byte_540,X
		BEQ		loc_681E6 ; branch down (next iteration) if we find 0 in table 540 (it's already been used)
		LDA		byte_54C,X ; read speed
		CMP		byte_43
		BEQ		loc_681E2 ; branch down in case of tie
		BCC		loc_681E6 ; BCC->JB branch down (next iteration) if speed table entry is < byte_43
loc_681E2:
		STA		byte_43 ; store that table entry in byte_43
		STX		byte_44 ; store that index in byte_44
loc_681E6:
		INX
		CPX		#$C ; no more than 12 entries to look through
		BNE		loc_681D4

		LDX		byte_44 ; load the index with the maximum unused speed
		LDA		#0
		STA		byte_540,X ; mark as used
		LDA		byte_42 ; unstash current actor counter
		STA		byte_558,X ; 
		CLC
		ADC		#1
		STA		byte_42 ; actor counter is incremented
		CMP		#$C
		BNE		loc_681CE ; run again if we havent run 12 times
		RTS

; =============== S U B	R O U T	I N E =======================================
; u8[$3C] gets randomized roughly to a [25%,99%] range (doubtful that 100% is possible)
; basically, 75% is passed into the randomizing function, and 25% is added back as a base
; returns also in A
; 
_randomize_75_percent:
		LDA		word_4
		LSR
		LSR
		STA		word_4+1
		LDA		word_4
		SEC
		SBC		word_4+1
		JSR		_b4_sF_rand_mul_A
		CLC
		ADC		word_4+1
		STA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
; initializes battle status type stuff
_b4_s22:
		LDA		#0
		STA		byte_566
		STA		byte_567
		STA		byte_568
		STA		byte_565
		STA		byte_569 ; fill
		STA		byte_56A ; an
		STA		byte_56B ; array
		STA		byte_56C ; with 0
		TAX
loc_68230:
		STA		byte_5D,X
		INX
		CPX		#5
		BNE		loc_68230
		LDA		#$FF
		STA		_battle_type_fight
		FARX	_b0_s55_test_spell_allow_location		; test whether spells are allowed here
		BCS		loc_68245
		LDA		#$10
		STA		byte_568		; set flag indicating spells are broken here
loc_68245:
		LDX		#0
		LDY		#0
loc_68249:
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_68252
		INY
loc_68252:
		INX
		INX
		CPX		#8
		BNE		loc_68249
		STY		_bs_num_live_players

; setup a 4-times loop across each player
		LDX		#0
.bs_init_player:
		STX		_bs_curr_actor
		TXA
		STA		_player_battle_order_and_flags,X
		STA		byte_CE

; calculate EffAGI as default rAGI
		JSR		_sram_b0_s12_player_EffAGI_calc
		LDX		_bs_curr_actor
		LDA		word_4 ; load the EffAGI calculated above
		STA		_players_rAGI,X

; calculate EffDEF as default rDEF
		JSR		_sram_b0_s18_player_EffDEF_calc
		LDA		_bs_curr_actor
		ASL
		TAX
		LDA		word_4
		STA		_players_rDEF,X
		LDA		word_4+1
		STA		_players_rDEF+1,X

		LDA		_bs_curr_actor
		ASL
		TAX
		LDA		_players_status,X
		AND		#$80
		STA		_players_status,X
		LDA		_players_status+1,X
		AND		#$E0
		STA		_players_status+1,X

; calculate EffATK as default rATK
		JSR		_sram_b0_s16_player_EffATK_calc
		LDA		_bs_curr_actor
		ASL
		TAX
		LDA		word_4
		STA		_players_rATK,X
		LDA		word_4+1
		STA		_players_rATK+1,X
		LDX		_bs_curr_actor
		INX
		CPX		#4
		BNE		.bs_init_player ; branch up if we're not done for all 4 characters

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_b4_s26:
		LDX		#0
		STX		_bs_num_live_enemies
		TXA
loc_682B0:
		STA		byte_530,X
		INX
		CPX		#$10
		BNE		loc_682B0
		LDX		#0
loc_682BA:
		STA		byte_6A7B,X
		INX
		CPX		#$20
		BNE		loc_682BA
		LDX		#0
loc_682C4:
		STX		_bs_curr_actor
		LDA		#0
		STA		byte_6A77,X
		LDA		_enemy_roster_index_list,X
		CMP		#ENEMY_NONE
		BEQ		loc_68308
		STA		byte_6A6F,X
		STA		byte_6A73,X
		LDA		_enemy_group_count,X
		BEQ		loc_682F5
		LDA		#$80
		STA		byte_6A77,X
		LDY		_enemy_group_count,X
		TYA
		CLC
		ADC		_bs_num_live_enemies
		STA		_bs_num_live_enemies
loc_682EB:
		TYA
		PHA
		JSR		loc_68312
		PLA
		TAY
		DEY
		BNE		loc_682EB
loc_682F5:
		LDX		_bs_curr_actor
		INX
		CPX		#4
		BNE		loc_682C4
		FARX	_bD_s29
		JSR		sub_6BA99
		JSR		sub_6B3DB
		JMP		loc_6833E
loc_68308:
		LDA		#ENEMY_NONE
		STA		byte_6A6F,X
		STA		byte_6A73,X
		BNE		loc_682F5
loc_68312:
		LDX		#0
		LDY		#0
loc_68316:
		STX		_acting_enemy
		JSR		sub_6B8E7
		BCS		loc_6833A
loc_6831D:
		JSR		loc_68356
		LDA		byte_6A7B,Y
		BPL		loc_6832B
		LDY		word_4
		INY
		JMP		loc_6831D
loc_6832B:
		TXA
		ORA		#$80
		STA		byte_6A7B,Y
		TXA
		ASL
		TAX
		LDA		#$80
		STA		byte_530,X
		RTS
loc_6833A:
		INX
		BNE		loc_68316
		RTS
loc_6833E:
		LDA		#7
		STA		_acting_enemy
loc_68342:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		AND		byte_530,X
		BPL		loc_68351
		JSR		sub_68453
loc_68351:
		DEC		_acting_enemy
		BPL		loc_68342
		RTS
loc_68356:
		STY		word_4
		LDA		_bs_curr_actor
		ASL
		ASL
		ASL
		CLC
		ADC		word_4
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
; called from _bA_s3...
;
_b4_s27:
		JSR		sub_6B960 ; read info from enemy moveset into byte_59
		LDA		byte_59
		CMP		#3
		BNE		loc_6836E ; branch for values 0,1,2
		JMP		loc_683BC ; handle value 3
loc_6836E:
		ASL
		TAX
		LDA		off_68406,X
		STA		word_3E
		LDA		off_68406+1,X
		STA		word_3E+1
		JSR		sub_6840C
		LDA		byte_49
		STA		byte_43
		LDA		#$FF
		STA		byte_47
		JSR		_rand_ex
		STA		byte_45
		LDY		#0
		STY		byte_42
loc_6838E:
		LSR		byte_47
		LSR		byte_43
		BCC		loc_68398
		INY
		BNE		loc_6838E
		RTS
loc_68398:
		LDA		byte_43
		EOR		byte_47
		BEQ		loc_683B3
		LDA		(word_3E),Y
		ADC		byte_44
		ADC		byte_42
		STA		byte_42
		CPY		#7
		BEQ		loc_683B3
		INY
		SEC
		SBC		#1
		CMP		byte_45
		BCC		loc_6838E
		DEY
loc_683B3:
		JSR		loc_683F6
		JSR		sub_6B9F2
		AND		#$3F
		RTS
loc_683BC:
		LDA		_acting_enemy
		LSR
		PHP
		TAX
		LDA		byte_569,X
		BCC		loc_683CA
		LSR
		LSR
		LSR
		LSR
loc_683CA:
		AND		#7
		STA		word_4+1
		LDY		#$F0
		STY		word_4
		TAY
		CLC
		ADC		#1
		PLP
		BCC		loc_683E3
		ASL
		ASL
		ASL
		ASL
		PHA
		LDA		#$F
		STA		word_4
		PLA
loc_683E3:
		PHA
		LDA		byte_569,X
		AND		word_4
		STA		word_4
		PLA
		ORA		word_4
		STA		byte_569,X
		LDY		word_4+1
		JMP		loc_683B3
loc_683F6:
		TYA
		PHA
		LDA		#0
		SEC
loc_683FB:
		ROL
		DEY
		BPL		loc_683FB
		ORA		byte_49
		STA		byte_49
		PLA
		TAY
		RTS
off_68406:
		.WORD	byte_6B422
		.WORD	byte_6B42A
		.WORD	byte_6B432

; =============== S U B	R O U T	I N E =======================================
sub_6840C:
		LDA		#7
		STA		byte_46
		LDY		#0
		STY		byte_44
		LDA		byte_49
		STA		byte_43
loc_68418:
		LSR		byte_43
		BCC		loc_68438
		LDA		(word_3E),Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		TYA
		PHA
		LDX		#word_4
		LDA		byte_46
		JSR		_div16_by_8
		PLA
		TAY
		CLC
		LDA		word_4
		ADC		byte_44
		STA		byte_44
		DEC		byte_46
loc_68438:
		INY
		CPY		#8
		BNE		loc_68418
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6843E:
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A77,X
		AND		#3
		ASL
		TAX
		LDA		_players_status+1,X
		AND		_players_status,X
		BPL		sub_68453
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68453:
		JSR		sub_686F4
		CMP		#$F
		BNE		loc_6845B
		RTS
loc_6845B:
		JSR		_b4_s13
		PHA
		JSR		sub_6B91D
		TAX
		LDA		byte_6A77,X
		AND		#$80
		STA		byte_6A77,X
		PLA
		ORA		byte_6A77,X
		STA		byte_6A77,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s28:
		JSR		_b4_s29 ; read from enemy moveset
		BNE		loc_684B2
		LDA		byte_4F
		CMP		#$2C
		BCS		loc_68486
		LDA		#$F
		JSR		_b4_s23
		JMP		_b4_s13
loc_68486:
		CMP		#$2F
		BEQ		loc_6848E
		CMP		#$30
		BNE		loc_68496
loc_6848E:
		LDA		#0
loc_68490:
		JSR		sub_6BC17
		JMP		_b4_s14
loc_68496:
		CMP		#$36
		BCS		loc_6849E
		LDA		#5
		BNE		loc_68490
loc_6849E:
		CMP		#$39
		BCS		loc_684A7
		LDA		#5
		JMP		sub_686BB
loc_684A7:
		CMP		#$3B
		BCS		locret_684EA
		LDA		#5
		LDX		#0
		JMP		sub_6868C
loc_684B2:
		LDX		byte_4F
		CPX		#$13
		BCC		loc_684F5 ; BCC->JB branch down if we're a move before the spells
		CPX		#EMOVE_ZOMA_FREEZE_BEAM
		BEQ		loc_684F5 ; branch if we're zoma's freeze beam
		CPX		#$3B ; 
		BCS		loc_684F5 ; BCS->JAE branch if we're a reinforce specific
		LDA		_bs_enemy_mp_cost-$13,X ; so, we must be a normal spell. rebase the first spell ($13) down to a zero index and load the corresponding MP
		PHA
		JSR		_bs_load_acting_enemy_MP
		PLA
		CMP		byte_59
		BEQ		loc_684EB
		BCC		loc_684EB
		JSR		sub_686E1
		BEQ		loc_684E9
		LDA		_acting_enemy
		JSR		_b4_s10
		STA		byte_42
		AND		byte_576
		BNE		loc_684E9
		LDA		byte_42
		ORA		byte_576
		STA		byte_576
		BNE		loc_684EB
loc_684E9:
		CLC
locret_684EA:
		RTS
loc_684EB:
		JSR		sub_686E1
		BNE		loc_684F5
		JSR		sub_6B901
		BCS		loc_684E9
; run stage2 part of enemy action
loc_684F5:
		LDA		byte_4F
		ASL
		TAY
		LDA		_bs_emove_fptr_stage2_tbl,Y
		LDX		_bs_emove_fptr_stage2_tbl+1,Y
		JSR		_store_AX_in_3C
		JMP		(word_3C)

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_nothing:
		LDA		#0
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets a bit in the status of the acting enemy. parrying?
;
_bs_emove_stage2_01_parry:
		LDA		_acting_enemy ; acting enemy
		ASL
		TAX
		LDA		#ENEMY_FLAG_PARRY
		ORA		byte_530+1,X
		STA		byte_530+1,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; checking for target for an enemy's regular attack?
;
_b4_s2B_emove_stage2_02_through_06_attacks:
		JSR		sub_6BA04
		BEQ		loc_6852A
		JSR		sub_6843E
		JSR		sub_6B91D
		TAX
		LDA		byte_6A77,X
		AND		#3
		SEC
		RTS
loc_6852A:
		JSR		_sram_b0_s33_count_non_dead_party_chars
		DEC		word_4
		LDA		word_4 ; A = maximum live player number (one minus # live players)
		ASL
		TAY
		LDA		off_6855F,Y ; load A and X with a pointer based on # of live players
		LDX		off_6855F+1,Y
		JSR		_store_AX_in_3E
		JSR		sub_686F4
		STA		byte_43
		LDX		#0
		LDY		#0
loc_68545:
		LSR		byte_43
		BCC		loc_68550
loc_68549:
		INX
		CPX		#4
		BNE		loc_68545
		SEC
		RTS
loc_68550:
		JSR		_rand_ex
		CMP		(word_3E),Y
		BEQ		loc_6855C
		BCC		loc_6855C
		INY
		BNE		loc_68549
loc_6855C:
		TXA
		SEC
		RTS
off_6855F:
		.WORD	byte_6B43A
		.WORD	byte_6B43E
		.WORD	byte_6B442
		.WORD	byte_6B446

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_07_try_flee:
		JSR		_bs_read_enemy_prop_LV
		LDA		#5
		CLC
		ADC		byte_59
		CMP		_players_level
		BCC		loc_6859E ; BCC->JB - if enemy.level + 5 < player level, set CF=1 and return. does that mean the player gets some kind of bonus attack against it?
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68576:
		LDA		_bs_num_live_enemies
		CMP		#8
		BCS		loc_68588
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		FARX	_b2_sA
		BCC		loc_6859E
loc_68588:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_reinforce_specific:
		LDA		_bs_num_live_enemies
		CMP		#8
		BCS		loc_68588
		LDA		byte_4F
		SEC
		SBC		#$3B
		TAX
		LDA		_bs_reinforce_specific_tbl,X
		FARX	_b2_sA
		BCS		loc_68588
loc_6859E:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_robmagic:
		LDA		#$12
		JSR		_b4_s23
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_sleep_and_sweet_breath:
		LDA		#0
		JMP		sub_68638 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_toxic_breath:
		LDA		#$D
		JMP		sub_68638 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_single:
		JSR		sub_686E1
		BEQ		loc_685BA
		JMP		sub_686F9
loc_685BA:
		JSR		sub_686E7
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_party:
		JSR		sub_686E1
		BEQ		loc_685C8
		JMP		sub_686F9
loc_685C8:
		JMP		sub_686FD

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_sacrifice:
		LDA		#2
		LDX		#$FF
		JSR		sub_68675
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_stopspell:
		LDA		#5
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_sap:
		LDA		#$10
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_defence:
		LDA		#$10
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_surround:
		LDA		#4
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_chaos:
		LDA		#$C
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_slow:
		LDA		#$11
		JMP		sub_68643

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_limbo:
		JSR		_sram_b0_s31_get_party_chars_list
		DEC		word_4
		BEQ		loc_6863F
		LDA		#$F
		JMP		sub_68660

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_bounce:
		LDA		#4
		LDX		#$FF
		JMP		sub_68675

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_increase:
		LDA		#3
		LDX		#$FF
		JMP		sub_6868C

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_increase2:
		JSR		sub_686E1
		LDA		#3
		BCS		loc_68616
		LDA		#5
loc_68616:
		JMP		sub_68707

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_spell_vivify_and_revive:
		LDA		#0
		JMP		sub_68707

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_heal_single:
		LDA		#1
		LDX		#$FF
		JMP		sub_68675

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_heal_multi: ; stage2 heal multi
		LDA		#1
		LDX		#$FF
		JMP		sub_6868C ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_heal_single_2:
		LDA		#1
		JMP		sub_686BB ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage2_heal_multi_2: ; stage2 multi
		LDA		#1
		LDX		#0
		JMP		sub_6868C ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_68638:
		JSR		_b4_s23

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_6863B:
		CMP		#$F
		BNE		loc_68641
loc_6863F:
		CLC
		RTS
loc_68641:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68643:
		STA		byte_43
		JSR		_b4_s23
		JSR		sub_6863B
		BCS		loc_6864E
		RTS
loc_6864E:
		JSR		sub_686E1
		BNE		loc_6865E
		LDA		byte_43
		JSR		_b4_s23
		JSR		sub_686EC
		JMP		sub_6863B
loc_6865E:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68660:
		STA		byte_43
		JSR		sub_686E1
		BEQ		loc_6866A
		JMP		sub_686F9
loc_6866A:
		LDA		byte_43
		JSR		_b4_s23
		JSR		sub_686EC
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_68675:
		STA		byte_43
		STX		byte_42
		LDA		_acting_enemy
		JSR		_b4_s10
		EOR		byte_42
		PHA
		LDA		byte_43
		JSR		sub_6BC17
		PLA
		ORA		word_6+1
		JMP		_b4_s14

; =============== S U B	R O U T	I N E =======================================
; Common handler for stage2 heal multi
;
sub_6868C:
		STX		byte_42
		STA		byte_43
		JSR		sub_6B91D
		JSR		_b4_s10
		EOR		byte_42
		PHA
		LDA		byte_43
		JSR		sub_6BC17
		JSR		sub_6BCBF
		PLA
		ORA		word_6+1
		CMP		#$F
		BEQ		loc_686AE
		JSR		_b4_s13
		ORA		#$80
		RTS
loc_686AE:
		LDA		byte_42
		BNE		loc_686B9
		LDA		#$FF
		STA		byte_42
		JMP		sub_6868C
loc_686B9:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686BB:
		STA		byte_43
		JSR		sub_6B91D
		JSR		sub_6BCDE
		EOR		#$FF
		JSR		sub_686D5
		BCC		loc_686CB
		RTS
loc_686CB:
		JSR		sub_6B91D
		JSR		sub_6BCDE
		JSR		sub_686D5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686D5:
		PHA
		LDA		byte_43
		JSR		sub_6BC17
		PLA
		ORA		word_6+1
		JMP		_b4_s14

; =============== S U B	R O U T	I N E =======================================
sub_686E1:
		JSR		_b4_s29
		CMP		#2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686E7:
		LDA		#8
		JMP		_b4_s23

; =============== S U B	R O U T	I N E =======================================
sub_686EC:
		PHA
		JSR		sub_686E7
		PLA
		ORA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_686F4:
		LDA		#$F
		JMP		_b4_s23 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_686F9:
		LDA		#$F
		BNE		sub_68701 ; UNCONDITIONAL TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_686FD:
		LDA		#8
		BNE		sub_68701 ; UNCONDITIONAL TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_68701:
		JSR		_b4_s23
		JMP		_b4_s13

; =============== S U B	R O U T	I N E =======================================
sub_68707:
		JSR		sub_6BC17
		JMP		_b4_s14

; =============== S U B	R O U T	I N E =======================================
sub_6870D:
		JSR		sub_6881F
		BCC		locret_6875E
		LDX		_bs_curr_actor
		LDA		byte_558,X
		PHA
		LSR
		LSR
		TAY
		PLA
		AND		#3
		TAX
		LDA		byte_68828,Y
		CPX		#0
		BEQ		loc_6872B
loc_68726:
		LSR
		LSR
		DEX
		BNE		loc_68726
loc_6872B:
		LDX		_bs_curr_actor
		LDY		byte_558,X
		AND		#3
		BEQ		loc_68747
		CMP		#1
		BEQ		loc_687A2
		CMP		#2
		BNE		loc_6873F
		JMP		loc_687D3
loc_6873F:
		LDX		_bs_curr_actor
		LDA		#2
		STA		byte_558,X
		TAY
loc_68747:
		CPY		#$2F
		BCS		loc_6875F
		JSR		sub_68808
		BCC		locret_6875E
loc_68750:
		STA		word_4
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
locret_6875E:
		RTS
loc_6875F:
		CPY		#$31
		BCC		loc_68777
		LDA		_curent_battle_type_flags
		BNE		loc_68771
		JSR		sub_686F4
loc_6876B:
		JSR		_b4_s13
		JMP		loc_68750
loc_68771:
		LDA		_acting_enemy
		ORA		#$80
		BNE		loc_68750
loc_68777:
		LDA		#1
		STA		byte_43
		LDX		#0
		STX		byte_42
loc_6877F:
		TXA
		ASL
		TAY
		LDA		_players_status,Y
		BPL		loc_6878C
		LDA		_players_status+1,Y
		BPL		loc_68792
loc_6878C:
		LDA		byte_42
		ORA		byte_43
		STA		byte_42
loc_68792:
		ASL		byte_43
		INX
		CPX		#4
		BNE		loc_6877F
		LDA		byte_42
		CMP		#$F
		BNE		loc_6876B
		JMP		loc_6873F
loc_687A2:
		CPY		#$2D
		BCS		loc_687BC
		JSR		sub_687E3
		BCC		locret_6875E
		ORA		#$80
		STA		word_4
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
		RTS
loc_687BC:
		LDA		_curent_battle_type_flags
		BNE		loc_687CC
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#$7F
loc_687C8:
		STA		byte_54C,X
		RTS
loc_687CC:
		JSR		sub_6B91D
		ORA		#$80
		BNE		loc_687C8
loc_687D3:
		JSR		sub_6881F
		BCC		locret_6875E
		LDX		_bs_curr_actor
		LDA		#$80
		ORA		byte_54C,X
		STA		byte_54C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_687E3:
		JSR		sub_6B91D
		JSR		_b4_s10
		PHA
		LDA		#5
		JSR		sub_6BC17
		JSR		sub_6BCBF
		PLA
		ORA		word_6+1
		AND		#$F
		CMP		#$F
		BEQ		loc_687FE
		JMP		_b4_s13
loc_687FE:
		JSR		sub_6881F
		BCC		locret_68807
		JSR		sub_6B91D
		SEC
locret_68807:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68808:
		JSR		sub_687E3
		BCC		locret_6881E
		JSR		sub_6A8B3
		PHA
		LDA		_acting_enemy
		JSR		_b4_s10
		STA		word_4
		PLA
		ORA		word_4
		JSR		_b4_s14
locret_6881E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6881F:
		LDX		_bs_num_live_enemies
		DEX
		BNE		loc_68826
		CLC
		RTS
loc_68826:
		SEC
		RTS
byte_68828:
		.BYTE	 $F,$FF,$53,$55,$3F,$40,$55,$15,$51,$14,$C7,$D7,  3,  5,$D4,$FF

; =============== S U B	R O U T	I N E =======================================
_b4_s13:
		ORA		#$F0
		EOR		#$FF
		STA		_tmp12+1
		BEQ		loc_6884C
		TXA
		PHA
		LDX		#4
		JSR		sub_68864
		PLA
		TAX
		LDA		_tmp12+1
		RTS
loc_6884C:
		CLC
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s14:
		EOR		#$FF
		STA		_tmp12+1
		BEQ		loc_6884C
		TXA
		PHA
		LDX		#8
		JSR		sub_68864
		PLA
		TAX
		LDA		_tmp12+1
		ORA		#$80
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68864:
		TYA
		PHA
		LDY		#0
		LDA		_tmp12+1
loc_6886A:
		LSR
		BCC		loc_6886E
		INY
loc_6886E:
		DEX
		BNE		loc_6886A
		STX		_tmp12
		DEX
		STX		byte_11
		TYA
		LDX		#byte_11
		JSR		_div16_by_8
		JSR		_rand_ex
		STA		byte_10
		LDX		#0
loc_68883:
		LSR		_tmp12+1
		BCC		loc_68893
		BEQ		loc_68896
		LDA		byte_11
		ADC		_tmp12
		STA		_tmp12
		CMP		byte_10
		BCS		loc_68896
loc_68893:
		INX
		BNE		loc_68883
loc_68896:
		STX		_tmp12+1
		PLA
		TAY
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; The main battle action sequence loop. All actors play their actions in here before control returns
;
sub_6889C:
		SYSX	_display_window_ex,WND_CHATBOX

; start a 4-times loop across players
		LDY		#0
.bs_loop_scan_players:
		JSR		_player_idx_to_X_and_status_check
		BMI		.bs_loop_player_live
.bs_loop_next_player:
		INY
		CPY		#4
		BNE		.bs_loop_scan_players
		BEQ		.bs_loop_round_begin ; unconditional branch - we've run out of players. none met the condition.

; the following unknown logic happens before the round begins if any players meet the given criteria

.bs_loop_player_live:
		LDA		byte_54C,Y ; read that player's move and check for some special value
		AND		#$70
		CMP		#$10
		BNE		.bs_loop_next_player
		LDA		byte_558,Y
		CMP		#$2A
		BNE		.bs_loop_next_player

; crack the byte_540 table entry for the player into word_4 and word_4+1
		LDA		byte_540,Y ; investigate actor order table
		PHA
		AND		#$78 ; this masks off $80 (enemy flag) and the bottom 3 bits (player number) leaving only the action order
		STA		word_4
		PLA
		AND		#$87 ; this fetches only the enemy flag and the player number
		STA		word_4+1

; start a loop across the entire byte_540 table, including enemies
		LDX		#0
loc_688CE:
		LDA		byte_540,X ; investigate actor order table
		AND		#$78 ; fetches only the action order
		BEQ		loc_688D8 ; branch if it was 0.. odd
		INX ; try next entry
		BNE		loc_688CE ; unconditional

; found the 0th turn actor for the round
loc_688D8:
		LDA		byte_540,X ; investigate actor order table
		AND		#$87 ; fetch enemy flag and player number
; X contains an actor index and Y contains a player index.
; munge it all together somehow. really weird.
		ORA		word_4
		STA		byte_540,X
		LDA		word_4+1
		STA		byte_540,Y

; ; ; ; ; The actual main turn loop
; initialize a couple of loops in _bs_curr_actor and byte_52
.bs_loop_round_begin:
		LDX		#0
		STX		byte_52 ; main loop across turn numbers here?
.bs_loop_turn_begin:
		LDX		#0
		STX		_bs_curr_actor ; loop across candidate actors

.bs_loop_find_actor_for_turn:
		LDX		_bs_curr_actor
		LDA		byte_540,X ; read _bs_curr_actorst entry from byte_540 table
		AND		#$78 ; fetch action order
		LSR
		LSR
		LSR ; and shift it down to a turn number
		CMP		byte_52 ; check against current turn number
		BNE		.bs_loop_not_this_actor

; we found the actor for this turn
		JSR		sub_68931 ; probably the main action dispatch
		LDA		_curent_battle_type_flags
		BEQ		loc_6890E
		LDX		_bs_num_live_enemies
		BEQ		loc_6892E
		DEX
		BEQ		loc_6892B
		BNE		.bs_loop_next_turn
loc_6890E:
		LDA		_bs_num_live_players
		BEQ		loc_68925
		LDA		_bs_num_live_enemies
		BEQ		loc_68928

; test whether we're done with turns (theres #$C turns) and return if we are
.bs_loop_next_turn:
		INC		byte_52
		LDA		byte_52
		CMP		#$C
		BNE		.bs_loop_turn_begin
		LDA		#0
		RTS

.bs_loop_not_this_actor:
		INC		_bs_curr_actor ; increment actor candidate counter
		BNE		.bs_loop_find_actor_for_turn ; unconditional

loc_68925:
		LDA		#$FF
		RTS
loc_68928:
		LDA		#$FE
		RTS
loc_6892B:
		LDA		#$FD
		RTS
loc_6892E:
		LDA		#$FC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68931:
		BIT		_curent_battle_type_flags
		BPL		loc_6897F ; branch for the normal battle scenario
		BVS		loc_6897F
		JSR		_bs_get_current_actor_number
		BPL		loc_6897F
		JSR		_calc_pads
		LDA		_pads
		AND		#2
		BEQ		loc_6897F
		LDX		#$F
		LDA		#0
loc_6894A:
		STA		_window_draw_buf+$60,X
		DEX
		BPL		loc_6894A
		LDX		byte_6A67
		LDA		byte_6A77,X
		BPL		loc_68974
		MSGX	_msg_m00,$0CB	; "Oh, calling it quits, it's okay to loose your bet?"
		SYSX	_apu_load,SFX_MENU_PROMPT
		SYSX	_display_window_ex,WND_TAVERN_YESNO
		PHA
		JSR		sub_6AA51
		PLA
		BNE		loc_6897C
		MSGX	_msg_m00,$0CC	; "Very well, please come again"
loc_6896F:
		PLA
		PLA
		LDA		#$FC
		RTS
loc_68974:
		MSGX	_msg_m00,$0CD	; "Oh, packing it in, What a shame"
		JMP		loc_6896F
loc_6897C:
		FARX	_bE_s5

; land here when processing a battle turn
loc_6897F:
		LDA		#$10
		JSR		sub_6B2C4 ; affects byte_566
		LDA		#$EF
		JSR		sub_6B300 ; affects byte_567
		LDA		#ATTACK_BUFF_NONE
		STA		_attack_buff_flags
		LDX		_bs_curr_actor ; load actor number for this turn
		LDA		byte_540,X ; read his action order table for enemy flag
		BMI		.bs_enemy_turn
		JMP		_bs_player_turn ; TAILCALL
locret_68998:
		RTS
.bs_enemy_turn:
		JSR		sub_68AC6
		BEQ		locret_68998
		LDX		_bs_curr_actor
		LDA		byte_566
		AND		#8
		BNE		locret_68998
		LDA		byte_566
		AND		#4
		BEQ		loc_689BC
		LDA		byte_568
		AND		#8
		BEQ		loc_689BC
		JSR		_rand_ex ; <-- not used during battle normally
		CMP		#$C0
		BCS		locret_68998
loc_689BC: ; <- normal codepath
		LDA		byte_54C,X ; read enemy move table, retrieve basic move type
		AND		#$70
		CMP		#$70
		BEQ		locret_68998 ; test for 'no action'
		JSR		_bs_get_current_actor_number ; read the current actor's number
		STA		_acting_enemy
		LDA		byte_567
		AND		#$C
		BNE		locret_68998
		JSR		_b4_s29
		LDA		byte_59
		CMP		#2
		BNE		loc_68A1E
		JSR		_b4_s2A
		LDX		byte_59 ; analyze result of above call
		LDA		byte_68AFC,X ; 
		CPX		#0
		BEQ		loc_689F3 ; special case for value==0
		CPX		#3
		BEQ		loc_689F3 ; special case for value==3
		JSR		_b4_sF_rand_mul_A ; peculiar. A is a small value (one of 1,2,3) and we randomize it.
		CMP		#0
		BNE		loc_689F3 ; handle nonzero result
		LDA		#2 ; treat zero result as 2
loc_689F3:
		AND		#3 ; make sure result is small
		TAX
loc_689F6:
		TXA
		PHA
		FARX	_bA_s3
		LDX		_bs_curr_actor
		LDA		byte_50
		STA		byte_54C,X
		LDA		byte_4F
		STA		byte_558,X
		JSR		sub_68A52
		JSR		sub_6B3C7
		PLA
		TAX
		LDA		_acting_enemy
		ASL
		TAY
		LDA		byte_530+1,Y
		AND		#$20
		BNE		locret_68A1D
		DEX
		BNE		loc_689F6
locret_68A1D:
		RTS
loc_68A1E:
		JSR		sub_68A52
		JSR		sub_6B3C7
		JSR		sub_6B95A
		BNE		locret_68A1D
		LDX		_bs_curr_actor
		LDA		byte_643,X
		STA		byte_54C,X
		LDA		byte_653,X
		BEQ		loc_68A42
		STA		byte_558,X
		PHA
		JSR		sub_68A52
		PLA
		CMP		#1
		BEQ		locret_68A1D
loc_68A42:
		LDX		_bs_curr_actor
		LDA		byte_64B,X
		STA		byte_54C,X
		LDA		byte_65B,X
		BEQ		locret_68AC5
		STA		byte_558,X

; =============== S U B	R O U T	I N E =======================================
sub_68A52:
		JSR		sub_68AC6
		BEQ		locret_68A1D
		LDA		#ATTACK_BUFF_NONE
		STA		_attack_buff_flags
		JSR		sub_69580
		JSR		sub_6B3C7
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_530+1,X
		BPL		locret_68AC5
		JSR		_b4_sA_clear_chatbox
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		AND		#$20
		BEQ		loc_68A7D
		JMP		sub_68B00
loc_68A7D:
		LDA		_curent_battle_type_flags
		BNE		loc_68A8F
		LDA		byte_530+1,X
		AND		#$10
		BEQ		loc_68A92
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$73 ; "is confused"
		JSR		_b4_sA_clear_chatbox
loc_68A8F:
		JSR		sub_6870D
loc_68A92:
		JSR		sub_6B2F5
		LDX		_bs_curr_actor
		LDA		byte_558,X
		CMP		#$3B
		BCC		loc_68AA4
		JSR		sub_6B2FE
		JMP		loc_68AAB
loc_68AA4:
		CMP		#$13
		BCS		loc_68AAB
		JSR		sub_6B2FE
loc_68AAB:
		LDA		byte_568
		ORA		#8
		STA		byte_568
		LDA		byte_558,X
		ASL
		TAX
		LDA		_bs_emove_fptr_stage1_tbl,X
		STA		word_3C
		LDA		_bs_emove_fptr_stage1_tbl+1,X
		STA		word_3C+1
		JMP		(word_3C)
locret_68AC5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68AC6:
		LDA		_curent_battle_type_flags
		BEQ		loc_68AD1
		LDX		_bs_num_live_enemies
		BEQ		locret_68AD0
		DEX
locret_68AD0:
		RTS
loc_68AD1:
		LDA		_bs_num_live_players
		BEQ		locret_68AFB
		JSR		_sram_b0_s33_count_non_dead_party_chars
		LDX		#0
loc_68ADA:
		TXA
		ASL
		TAY
		LDA		_players_status+1,Y
		AND		_players_status,Y
		BPL		loc_68AEE
		LDA		_players_status+1,Y
		AND		#$40
		BEQ		loc_68AEE
		DEC		word_4
loc_68AEE:
		INX
		CPX		#4
		BNE		loc_68ADA
		LDA		word_4
		BNE		loc_68AF9
		STA		_bs_num_live_players
loc_68AF9:
		LDA		_bs_num_live_players
locret_68AFB:
		RTS
; =============== T A B	L E =================================================
; Related to enemy movesets
;
byte_68AFC:
		.BYTE	  1,  3,  3,  2

; =============== S U B	R O U T	I N E =======================================
sub_68B00:
		LDA		byte_530,X
		AND		#3
		TAY
		LDA		byte_6B44E,Y
		STA		word_4
		JSR		_rand_ex
		CMP		word_4
		BEQ		loc_68B24
		BCC		loc_68B24
		DEY
		STY		word_4
		LDA		byte_530,X
		AND		#$FC
		ORA		word_4
		STA		byte_530,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1B ; "is asleep"
loc_68B24:
		LDA		byte_530+1,X
		AND		#$DF
		STA		byte_530+1,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1C ; "has awakened"

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_00_assessing:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$00 ; "is assessing the situation"

; =============== S U B	R O U T	I N E =======================================
; interesting that it just seems to print a message. same for the player's parry command. where does the parry flag get set?
_bs_emove_stage1_01_protects_itself:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$04 ; "protects itself"

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_02_regular_attack:
		JSR		_attacks_msg_and_sound
		JSR		sub_6B30E

; =============== S U B	R O U T	I N E =======================================
sub_68B3B:
		JSR		sub_6AD2B
		JSR		_bs_extract_target_from_move
		BPL		loc_68B49
		JSR		sub_6AD8F
		JMP		loc_68B5D
loc_68B49:
		STA		byte_CE
		TAY
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_68AFB
		JSR		sub_6B1E8
		BCS		loc_68B75
		JSR		_rand_ex
		CMP		#4
		BCC		loc_68B75
loc_68B5D:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530,X
		AND		#$10
		BEQ		loc_68B84
		JSR		_rand_ex
		CMP		#$A0
		BCS		loc_68B84
		JSR		sub_68BB6
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$22 ; "missed! no damage to enemy"
loc_68B75:
		LDX		byte_CE
		LDA		_player_battle_order_and_flags,X
		AND		#8
		BNE		loc_68B5D
		JSR		sub_68BB6
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$07 ; "dodges nimbly"
loc_68B84:
		LDA		byte_565
		LDX		_acting_enemy
		INX
loc_68B8A:
		LSR
		DEX
		BNE		loc_68B8A
		BCC		loc_68B94
		ASL		word_4
		ROL		word_4+1
loc_68B94:
		JSR		_bs_extract_target_from_move
		BMI		loc_68BAB
		STA		byte_D2
		STA		byte_CE
		LDA		_attack_buff_flags
		AND		#$20
		BEQ		loc_68BA8 ; branch of $20 flag is set
		LSR		word_4+1
		ROR		word_4
loc_68BA8:
		JMP		loc_6A58C

loc_68BAB:
		STA		_acting_enemy
		JMP		loc_6A42E

; =============== S U B	R O U T	I N E =======================================
_attacks_msg_and_sound:
		SYSX	_apu_load,SFX_ENEMY_ATTACKING
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$01 ; "attacks!"

; =============== S U B	R O U T	I N E =======================================
sub_68BB6:
		LDA		#$20
		JSR		sub_6B2BB
		SYSX	_apu_load,SFX_ENEMY_ATTACK_MISS
		JSR		_bs_extract_target_from_move
		BMI		loc_68BC6
		JMP		sub_6B3D2
loc_68BC6:
		JMP		sub_6B5B7

; =============== S U B	R O U T	I N E =======================================
; Is this going to tweak a 'result' value to pick which "effect" to run depending on whether the crit passed or failed?
;
_bs_emove_stage1_03_attack_maybe_crit:
		JSR		_rand_ex
		CMP		#$20
		BCC		loc_68BD3
		JMP		_bs_emove_stage1_02_regular_attack
loc_68BD3:
		JSR		_attacks_msg_and_sound
		JSR		sub_6B30E
		SYSX	_apu_load,SFX_ENEMY_CRIT
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$11 ; "a terrible blow!"
		JSR		_bs_load_enemy_prop_ATK
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		JSR		sub_6ADA4
		JMP		loc_68B94

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_04_attack_maybe_sleep:
		JSR		_attacks_msg_and_sound
		JSR		sub_6B30E
		JSR		sub_68B3B
		JSR		sub_68C42
		BNE		locret_68C09
		JSR		_bs_extract_target_from_move
		LDA		byte_CE
		JSR		sub_6B2E6
		JSR		sub_69C9D
locret_68C09:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_05_attack_maybe_poison:
		JSR		_attacks_msg_and_sound
		JSR		sub_6B30E
		JSR		sub_68B3B
		JSR		sub_68C42
		BNE		locret_68C09
		JSR		sub_6B2E6
		JSR		_bs_extract_target_from_move
		STA		byte_CE
		JSR		sub_68E1E
		JMP		_b4_s6_wndBTL_STAT

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_06_attack_maybe_numb:
		JSR		_attacks_msg_and_sound
		JSR		sub_6B30E
		JSR		sub_68B3B
		JSR		sub_68C42
		BNE		locret_68C09
		JSR		_bs_extract_target_from_move
		STA		byte_CE
		JSR		sub_6B2E6
		JSR		_bs_emove_scorchingbreath_foreach_cb
		JMP		_b4_s6_wndBTL_STAT

; =============== S U B	R O U T	I N E =======================================
sub_68C42:
		LDA		#$20
		AND		byte_566
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_07_try_flee:
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
		SYSX	_apu_load,SFX_RUNAWAY
		LDA		#$50 ; "<enemy> starts to flee
		JSR		_wrap_bE_s6_msg_mFF_arg0_safe
		JSR		sub_6ADBF
		LDA		_acting_enemy
		ASL
		TAX
		LDA		#0
		STA		byte_530,X ; clear out enemy status?
		JMP		_b4_s21_message_half_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_08_reinforce_own_type:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$4B ; "calls for reinforcements"
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A6F,X ; get the type of enemy in this group
		JSR		sub_68D59 ; are we testing to see if theres room?
		BCS		loc_68C7C
		JMP		loc_68D56
loc_68C7C:
		LDA		byte_45
		FARX	_b2_sA
		BCC		loc_68C86
		JMP		loc_68D56
loc_68C86:
		LDX		byte_47
		LDA		byte_45
		STA		byte_6A6F,X
		STA		byte_6A73,X
		LDA		byte_6A77,X
		ORA		#$80
		STA		byte_6A77,X
		LDX		#0
loc_68C9A:
		LDA		byte_530,X
		BPL		loc_68CB2
		INX
		INX
		CPX		#$10
		BNE		loc_68C9A
		LDX		#0
loc_68CA7:
		LDA		byte_530+1,X
		BPL		loc_68CB2
		INX
		INX
		CPX		#$10
		BNE		loc_68CA7
loc_68CB2:
		TXA
		LSR
		STA		byte_46
		LDA		byte_47
		PHA
		ASL
		ASL
		ORA		#$80
		STA		byte_530,X
		LDA		#$80
		STA		byte_530+1,X
		PLA
		ASL
		ASL
		ASL
		STA		byte_45
		TAX
		LDY		#8
loc_68CCE:
		LDA		byte_6A7B,X
		BPL		loc_68CD9
		AND		#7
		CMP		byte_46
		BEQ		loc_68CED
loc_68CD9:
		INX
		DEY
		BNE		loc_68CCE
		LDX		byte_45
		LDA		#8
		STA		word_4
loc_68CE3:
		LDA		byte_6A7B,X
		BPL		loc_68CED
		INX
		DEC		word_4
		BNE		loc_68CE3
loc_68CED:
		LDA		#$80
		ORA		byte_46
		STA		byte_6A7B,X
		LDA		byte_46
		STA		_acting_enemy
		JSR		_bs_read_enemy_prop_HP
		JSR		_bs_enemy_prop_prepare_u16
		STA		_enemy_HP,X
		TYA
		STA		_enemy_HP+1,X
		JSR		_bs_load_enemy_prop_MP
		LDA		byte_59
		LDX		_acting_enemy
		STA		_enemy_MP,X
		JSR		_bs_load_enemy_prop_DEF
		JSR		_bs_enemy_prop_prepare_u16
		STA		_enemy_DEF,X
		TYA
		STA		byte_530+1,X ; weird, was that really DEF?
		JSR		_bs_load_enemy_prop_AGI
		LDX		_acting_enemy
		STA		_enemy_AGI,X
		TXA
		CLC
		ADC		#4 ; adjust from enemy number to actor number
		TAX
		LDA		#$70 ; store 'no move' into enemy action table
		STA		byte_54C,X
		JSR		sub_6B5B7
		INC		_bs_num_live_enemies
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$4C ; "another one of me appears"
		JMP		sub_6AA34

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_reinforce_specific:
		JSR		sub_68D3F
		JMP		sub_6B3DB

; =============== S U B	R O U T	I N E =======================================
sub_68D3F:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$4B ; "calls for reinforcements"
		LDX		_bs_curr_actor
		LDA		byte_558,X
		SEC
		SBC		#$3B
		TAX
		LDA		_bs_reinforce_specific_tbl,X
		JSR		sub_68D59
		BCC		loc_68D56
		JMP		loc_68C7C
loc_68D56:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$4D ; "but no help arrives!"

; =============== S U B	R O U T	I N E =======================================
sub_68D59:
		STA		byte_45
		LDX		#0
loc_68D5D:
		LDA		byte_530,X
		INX
		AND		byte_530,X
		BPL		loc_68D6D
		INX
		CPX		#$10
		BNE		loc_68D5D
		CLC
		RTS
loc_68D6D:
		LDX		#3
loc_68D6F:
		LDA		byte_6A6F,X
		CMP		byte_45
		BEQ		loc_68D7B
		DEX
		BPL		loc_68D6F
		CLC
		RTS
loc_68D7B:
		STX		byte_47
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; A utility used while loading enemy props, loads A and Y with word[59] and X with a pointer suitable for storing it
;
_bs_enemy_prop_prepare_u16:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_59
		LDY		byte_5A
		RTS

; =============== T A B	L E =================================================
; Enemy arguments for the 'reinforce specific' enemy actions
;
_bs_reinforce_specific_tbl:
		.BYTE	  #ENEMY_HEALER
		.BYTE	  #ENEMY_GRANITE_TITAN
		.BYTE	  #ENEMY_HORK
		.BYTE	  #ENEMY_ELYSIUM_BIRD
		.BYTE	  #ENEMY_VOODOO_SHAMAN

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_09_curious_dance:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$3A ; "dances a curious dance"
		LDA		#1
		JSR		sub_6B307
		JSR		sub_6B30E
		JSR		_bs_extract_target_from_move
		BMI		loc_68DA8
		STA		byte_CE
		TAY
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_68DB0
		JMP		sub_6A61F
loc_68DA8:
		STA		_acting_enemy
		JSR		locret_68DB0
		JMP		sub_6A6D9
locret_68DB0:
		RTS

; =============== S U B	R O U T	I N E =======================================
; several breath attacks are handled by this one
_bs_emove_stage1_0A_through_0F_breath_attacks:
		SYSX	_apu_load,SFX_BREATH_ATTACK
		LDA		#$36 ; "emits gales of blazing breath"
		STA		word_4
		LDX		_bs_curr_actor
		LDA		byte_558,X
		CMP		#$D ; a key reference point in the middle of the breath attacks, dividing them in 2 probably
		BCC		loc_68DC5
		LDA		#$37 ; "emits gales of blizzard breath"
		STA		word_4
loc_68DC5:
		LDA		word_4
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JSR		sub_6B32F
		JSR		_bs_extract_target_from_move
		BMI		loc_68DD5
		JMP		loc_68EE6
loc_68DD5:
		LDA		_bs_curr_actor
		LDA		byte_558,X
		CLC
		ADC		#2
		ASL
		TAX
		LDA		word_6B4C5,X
		STA		byte_55
		LDA		word_6B4C5+1,X
		STA		byte_56
		JMP		sub_697DE

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_10_sweet_breath:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$30 ; "emits gales of sweet breath"
		JSR		sub_6B32F
		JSR		_bs_extract_target_from_move
		BMI		loc_68DFD
		JSR		sub_69096
		JMP		_bs_action_foreach_live_player
loc_68DFD:
		JMP		_bs_spell_sleep

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_11_toxic_breath:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$31 ; "emits gales of toxic breath:
		JSR		sub_6B32F
		LDA		#<[sub_68E18]
		STA		word_3E
		LDA		#>[sub_68E18]
		STA		word_3E+1
		JSR		_bs_action_foreach_live_player
		JMP		_b4_s6_wndBTL_STAT

; =============== S U B	R O U T	I N E =======================================
sub_68E18:
		JSR		sub_68E1E
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_68E1E:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_68E42
		TYA
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#PLAYER_STATUS_POISON
		BNE		locret_68E42 ; skip processing if player isn't poisoned
		LDA		#$60
		JSR		_bs_player_luck_test
		BCS		loc_68E43
		LDA		_players_status+1,X
		ORA		#PLAYER_STATUS_POISON
		STA		_players_status+1,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1D ; "the poison has effected"
locret_68E42:
		RTS
loc_68E43:
		JSR		sub_6B2EF
		BNE		locret_68E42
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$32 ; "repels the poison"

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_12_scorching_breath:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$33 ; "emits gales of scorching breath"
		JSR		sub_6B32F
		LDA		#<[sub_68E63]
		STA		word_3E
		LDA		#>[sub_68E63]
		STA		word_3E+1
		JSR		_bs_action_foreach_live_player
		JMP		_b4_s6_wndBTL_STAT

; =============== S U B	R O U T	I N E =======================================
sub_68E63:
		JSR		_bs_emove_scorchingbreath_foreach_cb
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_emove_scorchingbreath_foreach_cb:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_68E8D
		TYA
		ASL
		TAX
		LDA		_players_status+1,X ; test NUMB state
		AND		#PLAYER_STATUS_NUMB
		BNE		locret_68E8D ; if player is already numb, don't numb again
		LDA		#$20
		JSR		_bs_player_luck_test
		BCS		loc_68E8E ; branch if player was lucky
		LDA		_players_status+1,X ; set NUMB status for that player
		ORA		#PLAYER_STATUS_NUMB
		STA		_players_status+1,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$34 ; "is numb and unable to move"
locret_68E8D:
		RTS
loc_68E8E:
		JSR		sub_6B2EF
		BNE		locret_68E8D ; test result of above call
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$35 ; "dodges the gale of breath"
; uhhhh how can we fall through here? it makes no sense

; =============== S U B	R O U T	I N E =======================================
; enemy chants an offensive spell on a single party member
;
_bs_emove_stage1_spell_single:
		JSR		_bs_sfx_enemy_casting
		FARX	_b2_s7_screen_spell_blink
		LDX		_bs_curr_actor
		LDA		byte_558,X
		SEC
		SBC		#$13
		TAX
		LDA		_bs_attackspell_single_tbl,X
		STA		_msg_directobject_param
		STA		byte_49
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$02 ; "chants spell"
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		sub_6BEB9
loc_68EB8:
		JSR		_bs_extract_target_from_move
		BMI		loc_68EC4
		STA		byte_CE
		STA		byte_D2
		JMP		sub_6A579
loc_68EC4:
		JMP		loc_6989F

; =============== S U B	R O U T	I N E =======================================
; enemy chants an offensive spell on the entire party
_bs_emove_stage1_spell_party:
		JSR		_bs_sfx_enemy_casting
		FARX	_b2_s7_screen_spell_blink
		LDX		_bs_curr_actor
		LDA		byte_558,X
		SEC
		SBC		#$17
		TAX
		LDA		_bs_attackspell_multiple_tbl,X
		STA		byte_49
		STA		_msg_directobject_param ; store spell name dialog argument
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$02 ; "chants spell"
		JSR		sub_6A35F
		JSR		sub_6B32F
loc_68EE6:
		JSR		_bs_extract_target_from_move
		BMI		loc_68F09
		LDY		#0
loc_68EED:
		STY		byte_CE
		STY		byte_D2
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_68F03
		TYA
		PHA
		JSR		_b4_sB
		JSR		sub_6BEB9
		JSR		sub_6A579
		PLA
		TAY
loc_68F03:
		INY
		CPY		#4
		BNE		loc_68EED
		RTS
loc_68F09:
		JMP		loc_698B4

; =============== S U B	R O U T	I N E =======================================
; Y: a player number
; N flag set so BPL branches for player dead
;
_player_idx_to_X_and_status_check:
		TYA
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68F16:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_530+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_1F_chant_beat:
		LDA		#SPELL_BEAT
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_68F2C:
		JSR		_bs_extract_target_from_move
		BMI		loc_68F70
		STA		byte_CE
		LDA		#$20 ; basic probability for luck test
		STA		byte_47
loc_68F37:
		JSR		sub_6B347
		BCC		loc_68F41
		BEQ		loc_68F41
		JMP		sub_69931
loc_68F41:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_68F6C
		JSR		_bs_check_sacred_amulet_equpped
		BEQ		loc_68F6D ; branch down to avoid effect
		LDA		#ITEM_ANGELS_ROBE ; check for angel's robe equipped
		JSR		_bs_check_inventory
		CMP		#ITEM_EANGELS_ROBE
		BNE		loc_68F59 ; branch down if it isn't equipped
		LSR		byte_47 ; reduce probability of being effectged
loc_68F59:
		LDA		byte_47
		JSR		_bs_player_luck_test
		BCS		loc_68F6D ; branch if player is lucky
		LDA		#ITEM_STONE_OF_LIGHT ; check for stone of light possessed
		JSR		_bs_check_inventory
		CMP		#ITEM_STONE_OF_LIGHT
		BEQ		sub_68F73 ; branch if we have a stone of life - it will save the player.
		JMP		sub_68F86 ; TAILCALL to handle death
locret_68F6C:
		RTS
loc_68F6D:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$83 ; "did not die"
loc_68F70:
		JMP		loc_6991A ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_68F73:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$7E ; "the stone of life shatters in -names- hands"
		LDA		#ITEM_STONE_OF_LIGHT
		JSR		_b4_s20
		JMP		_sram_b0_s2A_player_inventory_item_remove ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; 
_bs_check_sacred_amulet_equpped:
		LDA		#ITEM_SACRED_AMULET
		JSR		_bs_check_inventory
		CMP		#ITEM_ESACRED_AMULET
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68F86:
		JSR		sub_68F8C
		JSR		sub_6A4E4

; =============== S U B	R O U T	I N E =======================================
sub_68F8C:
		JSR		loc_68F8F
loc_68F8F:
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JMP		_sram_b0_s5_player_HP_subtract

; =============== S U B	R O U T	I N E =======================================
sub_68F98:
		JSR		_sram_b0_s2_player_HP_read
		LDX		#word_4
		LDA		#4
		JSR		_div16_by_8
		LDA		#$FD
		JSR		_mul16_by_8
		LDA		word_4+1
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		#4
		JSR		_mul16_by_8
		LDA		#5
		JSR		_add8_to_16	; A = value
		JMP		loc_6A582

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_20_chant_beat:
		JSR		_bs_extract_target_from_move
		BMI		sub_68FE0
		JSR		sub_68FD5
		LDA		#$20
		STA		byte_47
		LDA		#$13
		JMP		sub_694B8

; =============== S U B	R O U T	I N E =======================================
sub_68FCF:
		JSR		loc_68F37
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_68FD5:
		LDA		#<[sub_68FCF]
		STA		word_3E
		LDA		#>[sub_68FCF]
		STA		word_3E+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_68FE0:
		LDA		#SPELL_DEFEAT
		JSR		_bs_enemy_chant_msg
		JSR		_bs_extract_target_from_move
		JMP		_bs_spell_defeat

; =============== S U B	R O U T	I N E =======================================
; Prints "monster-N chants <spell>"!
; A: index of spell name 
;
_bs_enemy_chant_msg:
		PHA ; save spell #
		JSR		_bs_sfx_enemy_casting
		FARX	_b2_s7_screen_spell_blink
		PLA
		STA		_msg_directobject_param
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$02 ; "chants <spell>

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_21_chant_sacrifice:
		LDA		#SPELL_SACRIFICE
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B32F
		JSR		_bs_extract_target_from_move
		BMI		loc_69079
		LDY		#0
loc_6900A:
		JSR		_player_idx_to_X_and_status_check
		BPL		sub_69058
		STY		byte_CE
		STY		byte_D2
		TYA
		PHA
		JSR		_b4_sB
		JSR		_bs_check_sacred_amulet_equpped
		BEQ		loc_6902C
		LDA		#ITEM_STONE_OF_LIGHT ; check for stone of life equipped
		JSR		_bs_check_inventory
		CMP		#ITEM_STONE_OF_LIGHT
		BNE		loc_69032
		JSR		sub_68F73
		JMP		sub_69053
loc_6902C:
		JSR		_bs_it_has_no_effect_msg
		JMP		sub_69053
loc_69032:
		JSR		_rand_ex
		CMP		#$80
		BCS		sub_69050
		LDA		byte_CE
		ASL
		TAX
		LDA		#0
		STA		_players_status+1,X
		JSR		sub_68F8C
		JSR		_b4_s1A_status_pal_adjust_and_update
		DEC		_bs_num_live_players
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2C ; "shatters into pieces"
		JMP		sub_69053

; =============== S U B	R O U T	I N E =======================================
sub_69050:
		JSR		sub_68F98

; =============== S U B	R O U T	I N E =======================================
sub_69053:
		JSR		_b4_s6_wndBTL_STAT
		PLA
		TAY

; =============== S U B	R O U T	I N E =======================================
sub_69058:
		INY
		CPY		#4
		BNE		loc_6900A
loc_6905D:
		JSR		_b4_sB
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		BPL		locret_69078
		JSR		sub_6B5B7
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2D ; "X's power wanes and its life comes to an end"
		JSR		sub_6ADBF
		JSR		_b4_s5_do_message_speed_delay
locret_69078:
		RTS
loc_69079:
		LDA		#$80
		JSR		sub_699A0
		JMP		loc_6905D

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_22_chant_sleep:
		JSR		_bs_extract_target_from_move
		BMI		loc_6908E
		JSR		sub_69096
		LDA		#$22
		JMP		sub_694B8
loc_6908E:
		LDA		#SPELL_SLEEP
		JSR		_bs_enemy_chant_msg
		JMP		_bs_spell_sleep ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_69096:
		LDA		#<[sub_690A3]
		STA		word_3E
		LDA		#>[sub_690A3]
		STA		word_3E+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_690A3:
		JSR		sub_69C9D
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_23_chant_stopspell:
		JSR		_bs_extract_target_from_move
		BMI		loc_690BD
		LDA		#<[sub_690C7]
		STA		word_3E
		LDA		#>[sub_690C7]
		STA		word_3E+1
		LDA		#$24
		JMP		sub_694B8
loc_690BD:
		LDA		#SPELL_STOPSPELL
		JSR		_bs_enemy_chant_msg
		JMP		_bs_spell_stopspell

; =============== S U B	R O U T	I N E =======================================
sub_690C7:
		JSR		sub_69D77
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_24_chant_sap:
		LDA		#SPELL_SAP
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B30E

; =============== S U B	R O U T	I N E =======================================
sub_690D8:
		JSR		_bs_extract_target_from_move
		BMI		loc_690E6
		STA		byte_CE
		LDA		#0
		STA		byte_47
		JMP		sub_6A6DF
loc_690E6:
		JMP		loc_69F16

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_25_chant_defence:
		JSR		_bs_extract_target_from_move
		BMI		loc_690FD
		LDA		#<[sub_69107]
		STA		word_3E
		LDA		#>[sub_69107]
		STA		word_3E+1
		LDA		#$2C
		JMP		sub_694B8
loc_690FD:
		LDA		#SPELL_DEFENCE
		JSR		_bs_enemy_chant_msg
		JMP		_bs_spell_defence

; =============== S U B	R O U T	I N E =======================================
sub_69107:
		LDA		#$FF
		STA		byte_47
		JSR		sub_6A6DF
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_26_chant_surround:
		JSR		_bs_extract_target_from_move
		BMI		loc_69125
		LDA		#<[sub_6912F]
		STA		word_3E
		LDA		#>[sub_6912F]
		STA		word_3E+1
		LDA		#$25
		JMP		sub_694B8
loc_69125:
		LDA		#SPELL_SURROUND
		JSR		_bs_enemy_chant_msg
		JMP		_bs_spell_surround

; =============== S U B	R O U T	I N E =======================================
sub_6912F:
		JSR		sub_69DF6
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_27_chant_robmagic:
		LDA		#SPELL_ROBMAGIC
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		_bs_extract_target_from_move
		BMI		loc_69166
		STA		byte_CE
		TAY
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6915D
		JSR		sub_6A61F
		LDA		byte_CF
		STA		byte_65
		LDA		byte_D0
		STA		byte_66
loc_69158:
		BIT		byte_567
		BVC		loc_6915E
locret_6915D:
		RTS
loc_6915E:
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
		JMP		sub_6B6EB
loc_69166:
		STA		_acting_enemy
		JSR		sub_68F16
		BPL		locret_6915D
		JSR		sub_6A676
		JMP		loc_69158

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_28_chant_chaos:
		LDA		#SPELL_CHAOS
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_6917E:
		JSR		_bs_extract_target_from_move
		BMI		loc_691C0
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_6918F
		BEQ		loc_6918F
		JMP		sub_69E98
loc_6918F:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6915D
		LDA		_players_status,X
		AND		#$40
		BNE		loc_691BA
		LDA		#$40
		JSR		_bs_player_luck_test
		BCS		loc_691BA
		LDA		_players_status+1,X
		AND		#$10
		BNE		loc_691BD
		LDA		_players_status+1,X
		ORA		#$10
		STA		_players_status+1,X
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$46 ; "is confused"
		JMP		_b4_s6_wndBTL_STAT
loc_691BA:
		JMP		_bs_it_has_no_effect_msg
loc_691BD:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$85 ; "becomes even more confused"
loc_691C0:
		JMP		_bs_spell_chaos

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_29_chant_slow:
		JSR		_bs_extract_target_from_move
		BMI		sub_6921D
		LDA		#<[sub_691D9]
		STA		word_3E
		LDA		#>[sub_691D9]
		STA		word_3E+1
		LDA		#$18
		JMP		sub_694B8

; =============== S U B	R O U T	I N E =======================================
; related to debuffing party's rAGI
sub_691D9:
		JSR		sub_691DF
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_691DF:
		JSR		sub_6B347
		BCC		loc_691E9
		BEQ		loc_691E9
		JMP		loc_69AEB
loc_691E9:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_69219 ; branch if dead (I think)
		LDA		#$C0
		JSR		_bs_player_luck_test
		BCS		loc_6921A
		JSR		_sram_b0_s12_player_EffAGI_calc	; EffAGI calculated to word_4
		LDA		_players_rAGI,X
		CMP		word_4		; compare current rAGI against unmodified EffAGI
		BCC		loc_69204 ; BCC->JB branch down if effective AGI is less than rAGI (do I have this right?)
		LDA		word_4		; reload EffAGI
loc_69204:
		PHA
		LDA		_players_rAGI,X
		SEC
		SBC		word_4
		BCS		loc_6920F
		LDA		#0
loc_6920F:
		STA		_players_rAGI,X
		PLA
		JSR		_set_msg_number_parameter_F8_equ_A
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$3E ; Agility goes down <number> points
locret_69219:
		RTS
loc_6921A:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
sub_6921D:
		LDA		#SPELL_SLOW
		JSR		_bs_enemy_chant_msg
		JMP		_bs_spell_slow

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_2A_chant_limbo:
		LDA		#SPELL_LIMBO
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B30E
loc_69230:
		JSR		_bs_extract_target_from_move
		BPL		loc_69238
		JMP		loc_69A3B
loc_69238:
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_69244
		BEQ		loc_69244
		JMP		loc_69A49
loc_69244:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BMI		loc_69251
		RTS
loc_69251:
		LDA		#$32
		JSR		_bs_player_luck_test
		BCS		loc_69264
		LDX		_bs_num_live_players
		DEX
		BEQ		loc_69264
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		BNE		loc_69267
loc_69264:
		JMP		_bs_it_has_no_effect_msg
loc_69267:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$4F ; "is sent flying far away"
		LDA		byte_CE
		STA		byte_CF
		TAX
		LDA		_party_formation,X
		ORA		#$80
		STA		_party_formation,X
		TXA
		ASL
		TAX
		LDA		#0
		STA		_players_status,X
		STA		_players_status+1,X
loc_69282:
		LDA		byte_CF
		CMP		#3
		BEQ		loc_69295
		CLC
		ADC		#1
		STA		byte_D0
		JSR		_sram_b0_s3B_players_data_swap_in_battle
		INC		byte_CF
		JMP		loc_69282
loc_69295:
		DEC		_bs_num_live_players
		JSR		sub_6AA51
		JSR		_b4_s6_wndBTL_STAT
		LDA		_player_vehicle
		BNE		locret_692B6
		LDX		#$C
loc_692A0:
		LDA		_players_pos_list
		EOR		_players_pos_list,X
		BPL		loc_692AE
		DEX
		DEX
		DEX
		DEX
		BNE		loc_692A0
loc_692AE:
		LDA		_players_pos_list,X
		EOR		#$80
		STA		_players_pos_list,X
locret_692B6:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_2C_chant_bounce:
		LDA		#SPELL_BOUNCE
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		ORA		#$F
		STA		byte_530+1,X
		JSR		sub_6B5B7
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$48 ; "a wall of light appears before"

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_2B_zoma_freeze_beam:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$AD ; "a freeze beam shoots out from zoma's fingertip"
		LDA		#SFX_ZOMA_FREEZE_BEAM
		FARX	_bB_s3_apu_load
		FARX	_b2_s8_screen_hit_blink
		FARX	_b2_s8_screen_hit_blink
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$76 ; "Zoma nullifies the power of all the spells of <hero>'s party"

; stash zoma's HP and some other value
		LDA		_enemy_HP
		PHA
		LDA		_enemy_HP+1
		PHA
		LDA		_bs_curr_actor
		PHA
		LDA		byte_52
		PHA

		LDA		byte_566
		PHA
		JSR		_b4_s22 ; related to initializing of battle status
		PLA
		STA		byte_566
		AND		#$C0
		BEQ		loc_69309
		LDA		#4
		STA		byte_566
loc_69309:
; unstash zoma's HP (and some other value) (it was reset by the above, I guess)
		PLA
		STA		byte_52
		PLA
		STA		_bs_curr_actor
		PLA
		STA		_enemy_HP+1
		PLA
		STA		_enemy_HP

; see "reset 3 bytes at byte_6A4B to #$5? Weird."
		LDA		#5
		LDX		#3
loc_6931B:
		STA		byte_6A4B,X
		DEX
		BPL		loc_6931B
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_2D_chant_increase:
		LDA		#SPELL_INCREASE
		STA		byte_47
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
loc_6932C:
		JSR		_bs_extract_target_from_move
		BPL		sub_6933E
		LDA		#<[_bs_emove_increases_foreach_cb]
		STA		word_40
		LDA		#>[_bs_emove_increases_foreach_cb]
		STA		word_40+1
		JMP		sub_6A3AB ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6933E:
		JSR		sub_6B32F
		JMP		_bs_spell_increase

; =============== S U B	R O U T	I N E =======================================
_bs_emove_increases_foreach_cb:
		JSR		sub_6A7BC ; 
		JMP		sub_6A3CB ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_2E_chant_increase2:
		LDA		#SPELL_INCREASE2
		STA		byte_47
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F

		JSR		_bs_extract_target_from_move
		BPL		sub_6933E
		LDA		#<[_bs_emove_increases_foreach_cb]
		STA		word_40
		LDA		#>[_bs_emove_increases_foreach_cb]
		STA		word_40+1
		LDA		#0 ; some important flag (not used by regular increase) used by following code
		JMP		sub_6A3B1 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; Loads special value #$21 and falls through to enemy's revive/vivify handler
;
_bs_emove_stage1_30_chant_revive:
		LDA		#$21
		BNE		_bs_emove_stage1_vivify_and_revive ; unconditional

; =============== S U B	R O U T	I N E =======================================
; Loads special value #$20 and falls through to enemy's revive/vivify handler
;
_bs_emove_stage1_2F_chant_vivify:
		LDA		#$20

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_vivify_and_revive:
		STA		byte_49 ; stash argument
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		_bs_extract_target_from_move
		BMI		loc_69383
		JMP		loc_6940A
loc_69383:
		STA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		BMI		loc_693EA
		LDA		byte_530,X
		BPL		loc_693EA
		LDA		byte_49
		CMP		#$21
		BEQ		loc_6939C
		JSR		_rand_ex
		BPL		loc_693ED
loc_6939C:
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		FARX	_b2_sA
		BCS		loc_693EA
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530,X
		AND		#$FC
		ORA		#$40
		STA		byte_530,X
		LDA		byte_530+1,X
		ORA		#$80
		STA		byte_530+1,X
		JSR		_bs_read_enemy_prop_HP
		LDA		byte_49
		CMP		#$21
		BEQ		loc_693CB
		LSR		byte_5A
		ROR		byte_59
loc_693CB:
		LDA		byte_59 ; copy value to heal to u16[65] for the healing function
		STA		byte_65
		LDA		byte_5A
		STA		byte_66
		JSR		_b4_s19_heal_enemy
		JSR		sub_6B91D
		TAX
		LDA		#$80
		STA		byte_6A77,X
		INC		_bs_num_live_enemies
		JSR		sub_6B5B7
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$3C ; "comes back to life"
		JMP		sub_6AA34
loc_693EA:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$40 ; "but nothing happens!"
loc_693ED:
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A77,X
		PHA
		TXA
		PHA
		LDA		#$80
		STA		byte_6A77,X
		JSR		sub_6B5B7
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$3D ; "does not come back to life"
		PLA
		TAX
		PLA
		STA		byte_6A77,X
		RTS
loc_6940A:
		LDA		byte_49
		SEC
		SBC		#$20
		CLC
		ROL
		ROL
		JMP		sub_69C0B

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_heal_various_single:
		JSR		_bs_sfx_enemy_casting
		FARX	_b2_s7_screen_spell_blink
		LDA		#$36
		STA		word_4
		LDX		_bs_curr_actor
		LDA		byte_558,X
		CMP		#$36
		BCS		loc_6942E
		PHA
		LDA		#$31
		STA		word_4
		PLA
loc_6942E:
		SEC
		SBC		word_4
		TAX
		LDA		_bs_heal_single_tbl,X
		STA		_msg_directobject_param
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$02 ; "chants <spell>"
		JSR		sub_6A35F
		JSR		sub_6B30E
		JSR		_bs_espell_heal_randrange

; =============== S U B	R O U T	I N E =======================================
sub_69443:
		JSR		_bs_extract_target_from_move
		BPL		loc_69450
		STA		_acting_enemy
		JSR		_bs_espell_heal_randrange
		JMP		sub_6A5D6
loc_69450:
		JMP		.bs_spell_heal_single_precomputed

; =============== S U B	R O U T	I N E =======================================
_bs_emove_stage1_heal_various_multi:
		JSR		_bs_sfx_enemy_casting
		FARX	_b2_s7_screen_spell_blink
		LDA		#$34
		STA		word_4
		LDX		_bs_curr_actor
		LDA		byte_558,X
		CMP		#$39
		BCC		loc_6946C
		PHA
		LDA		#$39
		STA		word_4
		PLA
loc_6946C:
		SEC
		SBC		word_4
		TAX
		LDA		_bs_heal_multiple_tbl,X
		STA		_msg_directobject_param
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$02 ; "chants <spell>"
		JSR		sub_6A35F
		JSR		sub_6B32F
loc_6947E:
		JSR		_bs_extract_target_from_move
		BPL		loc_694B5
		JSR		sub_6A8B3
		STA		byte_46
		LDY		#0
loc_6948A:
		TYA
		PHA
		STA		_acting_enemy
		LSR		byte_46
		BCS		loc_694AD
		JSR		sub_68F16
		BPL		loc_694AD
		JSR		_b4_sB
		LDA		byte_566
		AND		#$10
		BNE		loc_694A7
		JSR		_bs_espell_heal_randrange
		JMP		loc_694AA
loc_694A7:
		JSR		_bs_player_heal_randrange
loc_694AA:
		JSR		sub_6A5D6
loc_694AD:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_6948A
		RTS
loc_694B5:
		JMP		_bs_spell_heal_multiple

; =============== S U B	R O U T	I N E =======================================
sub_694B8:
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A35F
		JSR		sub_6B32F

; =============== S U B	R O U T	I N E =======================================
; For use during all-party effects
; For each live player, calls the callback in word_3E
; The player index will be stored in byte_CE for use by the callback;
; Moreover, delays are introduced for timing purposes.
; For some damn reason, we dont actually CALL the callback, we jmp to it,
; and users must JMP back to the middle of this. WTF.
;
_bs_action_foreach_live_player:
		LDY		#0
loc_694C3:
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_694D4 ; skip dead players
		STY		byte_CE
		TYA
		PHA
		JSR		_b4_sB
		JMP		(word_3E)
.bs_action_foreach_live_player_continue:
		PLA
		TAY
loc_694D4:
		INY
		CPY		#4
		BNE		loc_694C3
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_player_turn:
		LDA		_curent_battle_type_flags
		BNE		locret_694FC ; special handling for weird battles (players dont make sense during arena battles
		JSR		sub_68AC6
		BEQ		locret_694FC
		LDA		byte_566
		AND		#$C4
		BNE		locret_694FC
		JSR		_bs_get_current_actor_number
		STA		byte_D2
		STA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BMI		.bs_player_turn_alive
locret_694FC:
		RTS

.bs_player_turn_alive:
		TXA
		PHA
		JSR		_b4_sA_clear_chatbox
		PLA
		TAX
		LDA		_players_status+1,X
		AND		#$40
		BNE		loc_6957D
		TXA
		LSR
		TAX
		LDA		_player_battle_order_and_flags,X
		AND		#8
		BNE		sub_69589
		LDA		#ITEM_NOH_MASK ; check for Noh Mask equipped (NOH mask relates to confusion)
		JSR		_bs_check_inventory
		CMP		#ITEM_ENOH_MASK
		BEQ		loc_6952A
		JSR		_bs_get_current_actor_number
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$10
		BEQ		loc_69536
loc_6952A:
		FARX	_bA_sA
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$73 ; "player is confused"?
		JSR		_b4_sA_clear_chatbox
		JMP		loc_6953C

; try running goof-off antic instead of selected action and return if we did the antic
loc_69536:
		FARX	_b2_sD 
		BCC		loc_6953C
		RTS

loc_6953C:
		JSR		sub_6B2FE ; do something to byte_567
		LDA		byte_567
		AND		#$C
		BEQ		loc_69562
		LDA		byte_567
		AND		#3
		STA		word_4
		JSR		_bs_get_current_actor_number
		CMP		word_4
		BNE		locret_694FC
		LDA		byte_567
		SEC
		SBC		#4
		STA		byte_567
		LDA		#4
		JSR		sub_6B2BB
loc_69562:
		JSR		sub_69580
		LDX		_bs_curr_actor ; reference current actor and his move entry
		LDA		byte_54C,X
		AND		#$70
		LSR
		LSR
		LSR ; shift only 3 times because we need to turn it into a pointer offset
		TAX
		LDA		_bs_pc_action_fptr_tbl,X
		STA		word_3C
		LDA		_bs_pc_action_fptr_tbl+1,X
		STA		word_3C+1
		JMP		(word_3C) ; dispatch to main action handler
loc_6957D:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$38 ; "is numb and unable to move"

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_69580:
		LDA		byte_568
		AND		#$FC ; %11111100 (remove 'NN' from byte_568)
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69589:
		TXA
		ASL
		TAX
		LDA		_players_status,X
		AND		#3
		TAY
		LDA		byte_6B44A,Y
		STA		word_4
		JSR		_rand_ex
		CMP		word_4
		BEQ		loc_695B4
		BCC		loc_695B4
		DEY
		STY		word_4
		LDA		_players_status,X
		AND		#$FC
		ORA		word_4
		STA		_players_status,X
		LDA		byte_CE
		STA		byte_D2
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1B ; "is asleep"
loc_695B4:
		TXA
		LSR
		TAX
		LDA		_player_battle_order_and_flags,X
		AND		#$F7
		STA		_player_battle_order_and_flags,X
		LDA		byte_CE
		STA		byte_D2
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1C ; "has awakened!"

; =============== S U B	R O U T	I N E =======================================
_bs_pcAction_00_attack:
		JSR		_sram_b0_s16_player_EffATK_calc
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		AND		#$40
		BNE		loc_695DE
		LDA		word_4
		STA		_players_rATK,X
		LDA		word_4+1
		STA		_players_rATK+1,X
loc_695DE:
		JSR		_sram_b0_s1E_player_equipped_item_get
		LDA		word_4
		AND		#$7F ; mask off equip bit
		CMP		#ITEM_FALCON_SWORD
		BNE		loc_69600 ; branch down if falcon sword is not equipped to do only one attack
		LDA		byte_CE
		PHA
		JSR		sub_69604 ; process one attack
		PLA

; do some repair after prior attack?
		STA		byte_CE
		JSR		sub_6B3D2

; skip bonus attack if all enemies or players just died
		LDA		_bs_num_live_players
		BEQ		locret_69603
		LDA		_bs_num_live_enemies
		BEQ		locret_69603
		JSR		_b4_sA_clear_chatbox

; fall through and do another attack
loc_69600:
		JSR		sub_69604
locret_69603:
		RTS

; =============== S U B	R O U T	I N E =======================================
; Player attacking logic (one attack)
;
sub_69604:
		JSR		_bs_extract_target_from_move
		BMI		loc_6960C
		JMP		sub_696E8
loc_6960C:
		SYSX	_apu_load,SFX_PLAYER_ATTACKING
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$01 ; "attacks!"
		JSR		sub_6B0E5 ; study buff/debuffs for equipped items
		BCC		loc_6961A ; branch if we're not immobilized
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$7C ; "can't move because of a curse!"
		; BREAK RTS

loc_6961A:
		LDA		byte_CE
		PHA
		JSR		_bs_some_attack_command
		PLA
		STA		byte_CE
		LDA		word_6
		CMP		#$FF
		BNE		loc_6962A
		RTS
loc_6962A:
		STA		_acting_enemy
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		AND		#$10
		BEQ		loc_69647
		JSR		_rand_ex
		CMP		#$A0
		BCS		loc_69647
loc_6963E:
		SYSX	_apu_load,SFX_PLAYER_ATTACK_MISS
		JSR		sub_6B5B7
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$22 ; "missed! no damage to name"
loc_69647:
		LDA		_attack_buff_flags
		AND		#8
		BEQ		loc_69655
		JSR		_rand_ex
		CMP		#$20
		BCC		loc_6963E
loc_69655:
		LDA		_players_status,X
		AND		#8
		BEQ		loc_69660
		ASL		word_4
		ROL		word_4+1
loc_69660:
		LDA		_attack_buff_flags
		BMI		loc_696C9 ; branch if ATTACK_BUFF_POISON_NEEDLE is present
; further processing that's avoided for poison needle
		LDA		byte_567
		AND		#$20
		BNE		loc_696B6
		JSR		sub_6B95A
		BNE		loc_6968F
		JSR		sub_6B9D2
		BEQ		loc_6968F
		LDA		byte_566
		AND		#8
		BNE		loc_6968F
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		AND		#$20
		BNE		loc_6968F
		JSR		_rand_ex
		CMP		byte_59
		BCC		loc_696DF
loc_6968F:
		LDX		byte_CE
		LDA		_players_class_gender,X
		AND		#CLASS_MASK
		CMP		#CLASS_FIGHTER
		BNE		loc_696A2
		JSR		_rand_ex
		CMP		_players_level,X
		BCC		loc_696B6 ; BCC->JB - branch if random roll is less than player's level; otherwise get normal odds?
loc_696A2:
		LDX		#4 ; normal chance of crit
		LDA		_attack_buff_flags
		AND		#ATTACK_BUFF_HIGHER_CRIT
		BEQ		loc_696AD ; skip replacement odds for demon axe
		LDX		#$20 ; replacement odds for demon axe
loc_696AD:
		STX		word_6+1
		JSR		_rand_ex
		CMP		word_6+1
		BCS		loc_696C9 ; BCS->JAE - branch down to avoid crit if we rolled >= crit odds target (IOW, {0,4})
loc_696B6:
		SYSX	_apu_load,SFX_ENEMY_CRIT
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$10 ; "a tremendous hit!"
		JSR		_sram_b0_s17_player_rATK_read
		JSR		sub_6ADA4
		LDX		#word_4
		LDA		#1
		JSR		_add8_to_16
loc_696C9:
		LDA		_attack_buff_flags
		AND		#ATTACK_BUFF_FLAG_RACIAL_WEAKNESS
		BEQ		loc_696DC ; branch of no bonus
		JSR		_rand_ex
		AND		#$F
		ADC		#$10 ; result: [0,15] + 16
		LDX		#word_4
		JSR		_add8_to_16	; A = value
loc_696DC:
		JMP		loc_6A42E
loc_696DF:
		JSR		sub_6B5B7
		SYSX	_apu_load,SFX_PLAYER_ATTACK_MISS
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$07 ; "dodges nimbly"

; =============== S U B	R O U T	I N E =======================================
sub_696E8:
		JSR		_bs_some_attack_command
		LDA		word_6
		CMP		#$FF
		BNE		loc_696F4
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$01 ; "attacks!"
loc_696F4:
		AND		#$18
		BEQ		loc_69709
		CMP		#8
		BEQ		loc_69736
		JSR		sub_69777
		BNE		loc_69709
		JSR		sub_6975F
		BCC		locret_69735
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$24 ; "but name is awake!"
loc_69709:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$01 ; "attacks!"
		LDA		word_6
		AND		#3
		STA		byte_CE
		STA		byte_D2
		PHA
		JSR		loc_6A58C
		PLA
		JSR		loc_6977A
		BEQ		locret_69735
		JSR		sub_68C42
		BNE		locret_69735
		JSR		_rand_ex
		CMP		#$20
		BCS		locret_69735
		LDA		_players_status+1,X
		AND		#$EF
		STA		_players_status+1,X
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$74 ; "X has come to its senses"
locret_69735:
		RTS
loc_69736:
		JSR		sub_69777
		BNE		loc_69709
		JSR		sub_6975F
		BCC		locret_69735
		JSR		_rand_ex
		AND		#7
		CMP		#7
		BCC		loc_6974C
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$25 ; "but name is not awake"
loc_6974C:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$1C ; "has awakened"
		LDX		byte_CE
		LDA		_player_battle_order_and_flags,X
		AND		#$F7
		STA		_player_battle_order_and_flags,X
		LDA		#$70
		STA		byte_54C,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6975F:
		LDA		word_6
		AND		#3 ; make sure player number is safely small
		STA		byte_CE
		STA		_msg_directobject_param
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$23 ; "name attacks his/her party"
		LDA		_msg_directobject_param
		STA		byte_D2
		JSR		sub_6A4D9
		PHP
		JSR		_b4_s21_message_half_delay_or_wait_for_keypress
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69777:
		JSR		_bs_get_current_actor_number
loc_6977A:
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$10
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_pcAction_01_chant:
		JSR		sub_6B2F5
		LDX		_bs_curr_actor
		LDA		byte_558,X
		STA		byte_49
		STA		_msg_directobject_param
		TAX
		LDA		_b4_dD_spells_list,X
; these entries have two parts, get the bottom 6 bits (must be the MP cost)
		AND		#$3F
		FARX	_b0_s67_mysterious_hat_mp_modifier
		JSR		_sram_b0_sB_player_MP_test
		BCC		loc_697C5
		JSR		_sram_b0_s9_player_MP_subtract
		JSR		_b4_s6_wndBTL_STAT
		LDA		_msg_directobject_param
		JSR		_bs_enemy_chant_msg
		JSR		sub_6A39F
.bs_player_item_as_chant
; the table begins at entry #$12 (or is it #$11?); spells less than that use entry 0
		LDA		byte_49
		CMP		#$12
		BCS		loc_697B4 ; BCS->JAE - branch if the spell was >= $12, which is odd
		LDA		#0
		BEQ		loc_697B6 ; unconditional
loc_697B4:
		SBC		#$11 ; rebase to table offset
loc_697B6:
; shift left for index-to-pointer and reference table
		ASL
		TAX
		LDA		_bs_pc_spell_effect_fptr_tbl,X
		STA		word_3C
		LDA		_bs_pc_spell_effect_fptr_tbl+1,X
		STA		word_3C+1
		JMP		(word_3C)
loc_697C5:
		LDA		_msg_directobject_param
		JSR		_bs_enemy_chant_msg ; "enemy-N casts <spell>!
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$20 ; "MP is not high enough!"

; =============== S U B	R O U T	I N E =======================================
_bs_pcAction_02_parry:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$04 ; "protects itself"

; =============== S U B	R O U T	I N E =======================================
sub_697D0:
		SYSX	_apu_load,SFX_BREATH_ATTACK
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$36 ; "emits gales of flaming breath"
		LDA		#$14
		STA		byte_55
		LDA		#$AA
		STA		byte_56

; =============== S U B	R O U T	I N E =======================================
sub_697DE:
		LDY		#0
loc_697E0:
		STY		_acting_enemy
		TYA
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_530+1,X
		BPL		loc_69831
		LDA		_curent_battle_type_flags
		BEQ		loc_697F9
		JSR		_bs_get_current_actor_number
		CMP		_acting_enemy
		BEQ		loc_69831
loc_697F9:
		TYA
		PHA
		JSR		_b4_sB
		LDA		byte_55
		JSR		_b4_sF_rand_mul_A
		ADC		byte_56
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		#0
		STA		byte_65
		JSR		sub_6B994
		LDA		byte_69837,X
		CMP		#$FF
		BEQ		loc_6982C
		LDX		#word_4
		JSR		_mul16_by_8
		LDA		word_4+1
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		word_4
		BNE		loc_6982C
		INC		word_4
loc_6982C:
		JSR		loc_6A42E
		PLA
		TAY
loc_69831:
		INY
		CPY		#8
		BNE		loc_697E0
		RTS
byte_69837:
		.BYTE	$FF,$CC,$99,$80

; =============== S U B	R O U T	I N E =======================================
nullsub_11:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_sfx_enemy_casting:
		SYSX	_apu_load,#SFX_ENEMY_CASTING
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_multiple:
		LDA		byte_49
		CMP		#3
		BCC		loc_69892
		CMP		#6
		BCC		loc_698B4
		CMP		#9
		BCC		loc_69862
		CMP		#$A
		BCC		loc_69892
		CMP		#$C
		BCC		loc_698B4
		CMP		#$D
		BCC		loc_69862
		CMP		#$10
		BCC		loc_698B4
		CMP		#$11
		BCC		loc_69892
loc_69862:
		JSR		_bs_extract_target_from_move
		BMI		loc_6986A
		JMP		loc_698EF
loc_6986A:
		LDY		#0
loc_6986C:
		TYA
		STA		_acting_enemy
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_530+1,X
		BPL		loc_69886
		TYA
		PHA
		JSR		_b4_sB
		JSR		_bs_player_spell_randrange
		JSR		sub_6A3F8
		PLA
		TAY
loc_69886:
		INY
		CPY		#8
		BNE		loc_6986C
		RTS
loc_6988C:
		JSR		_bs_player_spell_randrange
		JMP		loc_68EB8
loc_69892:
		JSR		_bs_extract_target_from_move
		BPL		loc_6988C
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_698B3
loc_6989F:
		AND		#7
		STA		_acting_enemy
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_530+1,X
		BPL		locret_698B3
		JSR		_bs_player_spell_randrange
		JMP		sub_6A3F8
locret_698B3:
		RTS
loc_698B4:
		JSR		_bs_extract_target_from_move
		BPL		loc_698E0
		STA		byte_47
		LDY		#0
loc_698BD:
		TYA
		PHA
		STY		_acting_enemy
		JSR		sub_6B91D
		LDA		byte_59
		CMP		byte_47
		BNE		loc_698D8
		JSR		sub_68F16
		BPL		loc_698D8
		JSR		_b4_sB
		JSR		_bs_player_spell_randrange
		JSR		sub_6A3F8
loc_698D8:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_698BD
		RTS
loc_698E0:
		JSR		_bs_get_current_actor_number
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$10
		BNE		loc_698EF
		JMP		loc_6988C
loc_698EF:
		LDY		#0
loc_698F1:
		STY		byte_CE
		STY		byte_D2
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_69907
		TYA
		PHA
		JSR		_b4_sB
		JSR		_bs_player_spell_randrange
		JSR		sub_6A57F
		PLA
		TAY
loc_69907:
		INY
		CPY		#4
		BNE		loc_698F1
locret_6990C:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_beat:
		JSR		_bs_extract_target_from_move
		BPL		sub_69955
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_6990C
loc_6991A:
		AND		#7
		STA		_acting_enemy
		JSR		sub_68F16
		BPL		locret_6994E
		LDA		#$80
		STA		byte_47

; =============== S U B	R O U T	I N E =======================================
sub_69927:
		JSR		sub_6B398
		BCC		sub_69931
		BNE		sub_69931
		JMP		loc_68F41

; =============== S U B	R O U T	I N E =======================================
sub_69931:
		JSR		sub_6B5B7
		LDA		#4
		JSR		sub_6A337
		BCC		loc_6993E
loc_6993B:
		JMP		sub_6A3D3
loc_6993E:
		LDA		byte_47
		CMP		#$80
		BNE		loc_6994B
		LDA		#4
		JSR		sub_6A337
		BCS		loc_6993B
loc_6994B:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$83 ; "did not die"
locret_6994E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6994F:
		JSR		sub_69927
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69955:
		JSR		sub_6B2DB
		JMP		loc_68F2C

; =============== S U B	R O U T	I N E =======================================
_bs_spell_defeat:
		JSR		_bs_extract_target_from_move
		BPL		sub_69955
		JSR		sub_69966
		JMP		sub_6A3AB

; =============== S U B	R O U T	I N E =======================================
sub_69966:
		LDA		#<[sub_6994F]
		STA		word_40
		LDA		#>[sub_6994F]
		STA		word_40+1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_sacrifice:
		LDA		#0
		JSR		sub_699A0
		JSR		_b4_sB
		JSR		_bs_get_current_actor_number
		PHA
		STA		byte_D2
		STA		byte_CE
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2D ; "power wanes and its life comes to an end"
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JSR		_sram_b0_s5_player_HP_subtract
		PLA
		ASL
		TAX
		LDA		#0
		STA		_players_status+1,X
		JSR		_b4_s1A_status_pal_adjust_and_update
		JSR		_b4_s6_wndBTL_STAT
		DEC		_bs_num_live_players
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_699A0:
		STA		byte_55
		LDY		#0
loc_699A4:
		TYA
		PHA
		STA		_acting_enemy
		JSR		sub_68F16
		BPL		loc_699E9
		LDA		#5
		JSR		sub_6A337
		BCS		loc_699C0
		JSR		_b4_sB
		JSR		sub_6B5B7
		JSR		_bs_it_has_no_effect_msg
		JMP		loc_699E9
loc_699C0:
		LDA		byte_55
		BEQ		loc_699CB
		JSR		_bs_get_current_actor_number
		CMP		_acting_enemy
		BEQ		loc_699E9
loc_699CB:
		JSR		_b4_sB
		JSR		sub_6B5B7
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2C ; "shatters into pieces"
		LDA		#$FF
		STA		byte_65
		STA		byte_CF
		STA		byte_66
		STA		byte_D0
		LDA		#$40
		JSR		sub_6B307
		JSR		sub_6B697
		JSR		sub_6ADBF
loc_699E9:
		PLA
		TAY
		INY
		CPY		#8
		BNE		loc_699A4
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_expel:
		JSR		_bs_extract_target_from_move
		BPL		loc_69A03
		LDA		#<[sub_69A0F]
		STA		word_40
		LDA		#>[sub_69A0F]
		STA		word_40+1
		JMP		sub_6A3AB
loc_69A03:
		STA		byte_CE
		STA		byte_D2
		JSR		sub_6B347
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
sub_69A0F:
		JSR		sub_6B398
		BCC		loc_69A18
		BNE		loc_69A18
		BEQ		loc_69A28
loc_69A18:
		JSR		sub_6B2E6
		LDA		#$D
		JSR		sub_6A337
		BCC		loc_69A28
		JSR		sub_6A3D3
		JMP		sub_6A3CB
loc_69A28:
		JSR		_bs_it_has_no_effect_msg
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
_bs_spell_limbo:
		JSR		_bs_extract_target_from_move
		BPL		sub_69A7A
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69A79
loc_69A3B:
		AND		#7
		STA		_acting_enemy
		JSR		sub_6B398
		BCC		loc_69A49
		BNE		loc_69A49
		JMP		loc_69244
loc_69A49:
		JSR		sub_68F16
		BPL		locret_69A79
		TXA
		PHA
		JSR		sub_6B5B7
		LDA		#$C
		JSR		sub_6A337
		BCC		loc_69A5E
		LDA		#$4E
		BNE		loc_69A63
loc_69A5E:
		JSR		_bs_it_has_no_effect_msg
		PLA
		RTS
loc_69A63:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress ; a variable text message
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		JSR		sub_6ADBF
		PLA
		TAX
		LDA		#0
		STA		byte_530,X
locret_69A79:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69A7A:
		JSR		sub_6B2DB
		JMP		loc_69230

; =============== S U B	R O U T	I N E =======================================
_bs_spell_robmagic:
		JSR		_bs_extract_target_from_move
		BMI		loc_69A99
		JSR		sub_6A61F
		BIT		byte_567
		BVC		loc_69A8E
		RTS
loc_69A8E:
		JSR		_bs_get_current_actor_number
		STA		byte_CE
		JSR		_sram_b0_s8_player_MP_add
		JMP		_b4_s6_wndBTL_STAT
loc_69A99:
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69ABE
		AND		#7
		STA		word_4
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
		JSR		sub_6A676
		LDA		byte_65
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		BEQ		loc_69A8E
locret_69ABE:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_slow:
		JSR		_bs_extract_target_from_move
		BPL		loc_69AD1
		LDA		#<[sub_69ADB]
		STA		word_40
		LDA		#>[sub_69ADB]
		STA		word_40+1
		JMP		sub_6A3AB
loc_69AD1:
		STA		byte_CE
		JSR		sub_6B2DB
		JMP		sub_691DF	; tailcall

; =============== S U B	R O U T	I N E =======================================
sub_69ADB:
		JSR		sub_69AE1
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69AE1:
		JSR		sub_6B398
		BCC		loc_69AEB
		BNE		loc_69AEB
		JMP		loc_691E9
loc_69AEB:
		JSR		sub_6B5B7
		LDA		#$C
		JSR		sub_6A337
		BCC		loc_69B18
		JSR		_bs_load_enemy_prop_AGI
		LDX		_acting_enemy
		LDA		_enemy_AGI,X
		CMP		byte_59
		BCC		loc_69B03
		LDA		byte_59
loc_69B03:
		PHA
		LDA		_enemy_AGI,X
		SEC
		SBC		byte_59
		BCS		loc_69B0E
		LDA		#0
loc_69B0E:
		STA		_enemy_AGI,X
		PLA
		JSR		_set_msg_number_parameter_F8_equ_A
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$3E ; "'s agility goes down"
loc_69B18:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
_bs_spell_speedup:
		JSR		_bs_extract_target_from_move
		BMI		sub_69B5F
		LDA		#<[sub_69B2E]
		LDX		#>[sub_69B2E]
		JSR		_store_AX_in_3E
		JMP		_bs_action_foreach_live_player	; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_69B2E:
		JSR		sub_69B34
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_69B34:
		JSR		sub_6B347
		BCC		loc_69B3E
		BEQ		loc_69B3E
		JMP		loc_69B7E
loc_69B3E:
		JSR		sub_6B3D2
		JSR		_sram_b0_s12_player_EffAGI_calc
		LDA		_players_rAGI,X
		ADC		word_4
		BCC		loc_69B54
		LDA		#$FF
		SBC		_players_rAGI,X
		STA		word_4
		LDA		#$FF
loc_69B54:
		STA		_players_rAGI,X
		LDA		word_4
		JSR		_set_msg_number_parameter_F8_equ_A
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$45 ; "'s agility goes up"

; =============== S U B	R O U T	I N E =======================================
sub_69B5F:
		LDA		#<[sub_69B6E]
		LDX		#>[sub_69B6E]
		STA		word_40
		STX		word_40+1
		JMP		sub_6A3AB

; =============== S U B	R O U T	I N E =======================================
sub_69B6E:
		JSR		sub_69B74
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69B74:
		JSR		sub_6B398
		BCC		loc_69B7E
		BNE		loc_69B7E
		JMP		loc_69B3E
loc_69B7E:
		JSR		sub_6B5B7
		JSR		_bs_load_enemy_prop_AGI
		LDX		_acting_enemy
		CLC
		ADC		_enemy_AGI,X
		BCC		loc_69B95
		LDA		#$FF
		SBC		_enemy_AGI,X
		STA		byte_59
		LDA		#$FF
loc_69B95:
		STA		_enemy_AGI,X
		LDA		byte_59
		JSR		_set_msg_number_parameter_F8_equ_A
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$45 ; "'s agility goes up"

; =============== S U B	R O U T	I N E =======================================
; Genericalized logic for player casting heal (or using a medicinal herb and probably a shield of strength, etc.) 
;
_bs_spell_heal_single:
		JSR		_bs_player_heal_randrange
.bs_spell_heal_single_precomputed:
		JSR		_bs_extract_target_from_move
		BMI		loc_69BAD ; branch if the target is an enemy
		STA		byte_CE
		JMP		sub_6A5F7 ; bypass enemy/zoma handling

loc_69BAD:
		LDA		byte_6A6F ; read the 1st enemy group type
		CMP		#ENEMY_ZOMA_WEAKENED
		BNE		loc_69BD7 ; branch for normal handler

; handle zoma specially, since healing him actually causes damage
; 
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		_acting_enemy
		LDA		byte_49				; reload spell number ($41 in case its an herb)
		SEC
; subtract #$1A to rebase spells 1A, 1B, 1C down to a 3-entry table
; Since we've got $41 in case of an herb (resulting in $27), this code is buggy, referencing nearby data which may change during relocation
		SBC		#$1A					
		TAY
		LDA		_zoma_healhurt_multiplier_tbl,Y ; $DB for medical herb
		JSR		_b4_sF_rand_mul_A
		CLC
		ADC		_zoma_healhurt_base_tbl,Y ; $E5 for medical herb
		STA		word_4
		LDA		#0
		STA		word_4+1
		JMP		loc_6A42E			; TAILCALL

loc_69BD7:
		JMP		sub_69443			; TAILCALL

_zoma_healhurt_base_tbl:
		.BYTE	$19,$46,$8C
_zoma_healhurt_multiplier_tbl:
		.BYTE	 $A,$14,$28

; =============== S U B	R O U T	I N E =======================================
_bs_spell_heal_multiple:
		JSR		_bs_extract_target_from_move
		BMI		sub_69C03

; =============== S U B	R O U T	I N E =======================================
sub_69BE5:
		LDY		#0
loc_69BE7:
		TYA
		PHA
		JSR		_b4_sB
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_69BFB
		JSR		_bs_player_heal_randrange
		PLA
		STA		byte_CE
		PHA
		JSR		sub_6A5F7
loc_69BFB:
		PLA
		TAY
		INY
		CPY		#4
		BNE		loc_69BE7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69C03:
		JSR		sub_6B2DB
		JMP		loc_6947E

; =============== S U B	R O U T	I N E =======================================
_bs_spell_vivify:
		LDA		#$80

; =============== S U B	R O U T	I N E =======================================
sub_69C0B:
		STA		byte_47
		JSR		_bs_extract_target_from_move
		BMI		loc_69C4C
		STA		byte_D2
		STA		byte_CE
		ASL
		TAX
		LDA		_players_status+1,X
		BMI		loc_69C7A
		LDA		_players_status,X
		BPL		locret_69C7D
		LDA		byte_47
		BEQ		loc_69C2D
		LDA		#$80
		JSR		_bs_player_luck_test
		BCS		loc_69C7E
loc_69C2D:
		JSR		sub_69C62
		JSR		_sram_b0_s3_player_MHP_read
		LDA		byte_47
		BPL		loc_69C3B
		LSR		word_4+1
		ROR		word_4
loc_69C3B:
		LDA		word_4
		STA		byte_CF
		LDA		word_4+1
		STA		byte_D0
		JSR		_sram_b0_s4_player_HP_add
		JSR		_b4_s1A_status_pal_adjust_and_update
		JMP		_b4_s6_wndBTL_STAT
loc_69C4C:
		JSR		sub_6A900
		PHA
		LDA		#0
		JSR		sub_6BC17
		PLA
		ORA		word_6+1
		JSR		_b4_s14
		BCC		loc_69C7A
		AND		#7
		JMP		loc_69383

; =============== S U B	R O U T	I N E =======================================
sub_69C62:
		LDA		#$80
		STA		_players_status,X
		STA		_players_status+1,X
		TXA
		LSR
		TAX
		LDA		_player_battle_order_and_flags,X
		AND		#$F7
		STA		_player_battle_order_and_flags,X
		INC		_bs_num_live_players
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$3C ; "comes back to life"
loc_69C7A:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$40 ; "but nothing happens!"
loc_69C7E:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$3D ; "does not come back to life"
locret_69C7D:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_revive:
		LDA		#0
		JMP		sub_69C0B

; =============== S U B	R O U T	I N E =======================================
_bs_spell_sleep:
		JSR		_bs_extract_target_from_move
		BPL		loc_69C98
		LDA		#<[sub_69CE7]
		STA		word_40
		LDA		#>[sub_69CE7]
		STA		word_40+1
		JMP		sub_6A3AB
loc_69C98:
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69C9D:
		JSR		sub_6B347
		BCC		sub_69CA7
		BEQ		sub_69CA7
		JMP		loc_69CF7

; =============== S U B	R O U T	I N E =======================================
sub_69CA7:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_69D1C
		TYA
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$40
		BNE		locret_69D1C
		LDA		_player_battle_order_and_flags,Y
		AND		#8
		BNE		locret_69D1C
		LDA		#$60
		JSR		_bs_player_luck_test
		BCS		loc_69CDD
		LDA		_player_battle_order_and_flags,Y
		ORA		#8
		STA		_player_battle_order_and_flags,Y
		LDA		_players_status,X
		ORA		#3
		STA		_players_status,X
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$19 ; "is put to sleep"
		JMP		_b4_s6_wndBTL_STAT
loc_69CDD:
		JSR		sub_6B2EF
		BNE		locret_69D1C
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1A ; "is not asleep!"

; =============== S U B	R O U T	I N E =======================================
sub_69CE7:
		JSR		sub_69CED
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69CED:
		JSR		sub_6B398
		BCC		loc_69CF7
		BNE		loc_69CF7
		JMP		sub_69CA7
loc_69CF7:
		JSR		sub_6B5B7
		JSR		sub_6B95A
		BNE		locret_69D1C
		LDA		#6
		JSR		sub_6A337
		BCC		loc_69D1D
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$19 ; "is put to sleep"
		JSR		sub_6A35A
		LDA		byte_530+1,X
		ORA		#$20
		STA		byte_530+1,X
		LDA		byte_530,X
		ORA		#3
		STA		byte_530,X
locret_69D1C:
		RTS
loc_69D1D:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1A ; "is not asleep"

; =============== S U B	R O U T	I N E =======================================
; Runs logic for 'awaken' spell
;
_bs_spell_awaken:
		LDA		#<[_bs_spell_awaken_foreach_cb]
		STA		word_3E
		LDA		#>[_bs_spell_awaken_foreach_cb]
		STA		word_3E+1
		JMP		_bs_action_foreach_live_player	; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_spell_awaken_foreach_cb:
		JSR		_bs_spell_awaken_one
		JMP		.bs_action_foreach_live_player_continue ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_spell_awaken_one:
		JSR		sub_6B347
		BCC		loc_69D3D
		BEQ		loc_69D3D
		RTS
loc_69D3D:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_69D5F ; branch if player dead?
		LDA		_player_battle_order_and_flags,Y
		AND		#8
		BEQ		loc_69D5C ; branch down and do nothing if player's sleep flag is clear
		LDA		_player_battle_order_and_flags,Y
		AND		#$F7
		STA		_player_battle_order_and_flags,Y ; store sleep flag cleared
		LDA		#$70
		STA		byte_54C,Y ; set special value indicating no move that player (they didnt have a move entered during the round)
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$1C ; "has awakened!"
loc_69D5C:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$24 ; "but X is awake!"
locret_69D5F:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_stopspell:
		JSR		_bs_extract_target_from_move
		BPL		loc_69D72
		LDA		#<[sub_69DD9]
		STA		word_40
		LDA		#>[sub_69DD9]
		STA		word_40+1
		JMP		sub_6A3AB
loc_69D72:
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69D77:
		JSR		sub_6B347
		BCC		loc_69D81
		BEQ		loc_69D81
		JMP		loc_69DB9
loc_69D81:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_69DAB
		JSR		_sram_b0_s6_player_MP_read
		BEQ		loc_69DAC
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		AND		#$20
		BNE		locret_69DAB
		LDA		#$60
		JSR		_bs_player_luck_test
		BCS		loc_69DAC
		LDA		_players_status,X
		ORA		#$20
		STA		_players_status,X
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$41 ; "name's spell is deflected"
locret_69DAB:
		RTS
loc_69DAC:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
sub_69DAF:
		JSR		sub_6B398
		BCC		loc_69DB9
		BNE		loc_69DB9
		JMP		loc_69D81
loc_69DB9:
		JSR		sub_6B5B7
		JSR		sub_6B901
		BCS		locret_69DAB
		LDA		#7
		JSR		sub_6A337
		BCC		loc_69DAC
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$41 ; "name's spell is deflected"
		JSR		sub_6A35A
		LDA		byte_530,X
		ORA		#$20
		STA		byte_530,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69DD9:
		JSR		sub_69DAF
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
_bs_spell_surround:
		JSR		_bs_extract_target_from_move
		BPL		loc_69DF1
		LDA		#<[sub_69E28]
		STA		word_40
		LDA		#>[sub_69E28]
		STA		word_40+1
		JMP		sub_6A3AB
loc_69DF1:
		STA		byte_CE
		JSR		sub_6B2DB

; =============== S U B	R O U T	I N E =======================================
sub_69DF6:
		JSR		sub_6B347
		BCC		loc_69E00
		BEQ		loc_69E00
		JMP		loc_69E38
loc_69E00:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_69E24
		TYA
		ASL
		TAX
		LDA		_players_status,X
		AND		#$10
		BNE		locret_69E24
		LDA		#$A0
		JSR		_bs_player_luck_test
		BCS		loc_69E25
		LDA		_players_status,X
		ORA		#$10
		STA		_players_status,X
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2F ; "is surrounded by a cloud of mirages"
locret_69E24:
		RTS
loc_69E25:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
sub_69E28:
		JSR		sub_69E2E
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_69E2E:
		JSR		sub_6B398
		BCC		loc_69E38
		BNE		loc_69E38
		JMP		loc_69E00
loc_69E38:
		JSR		sub_6B5B7
		JSR		loc_6B90F
		BCS		locret_69E55
		LDA		#9
		JSR		sub_6A337
		BCC		loc_69E56
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2F ; "is surrounded by a cloud of mirages"
		JSR		sub_6A35A
		LDA		byte_530,X
		ORA		#$10
		STA		byte_530,X
locret_69E55:
		RTS
loc_69E56:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
_bs_spell_return:
		LDA		byte_6A6B
		BNE		loc_69E7C
		STA		byte_50
		JSR		_b4_s5_do_message_speed_delay
		FARX	_b6_s6_spell_return_use
		BCC		loc_69E7C
		LDA		_global_flags_array.byte2
		AND		#$DF
		STA		_global_flags_array.byte2
		LDA		#0
		STA		_spr_force_shuffle_mode
		LDX		#$FB
		TXS
		JMP		loc_174E92
loc_69E7C:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$40 ; "but nothing happens!"

; =============== S U B	R O U T	I N E =======================================
_bs_spell_chaos:
		JSR		_bs_extract_target_from_move
		BPL		sub_69EC5
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		_acting_enemy
		JSR		sub_6B398
		BCC		sub_69E98
		BNE		sub_69E98
		JMP		loc_6918F

; =============== S U B	R O U T	I N E =======================================
sub_69E98:
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_69EC4
		LDA		#$B
		JSR		sub_6A337
		BCC		loc_69EBE
		JSR		sub_6A35A
		LDA		byte_530+1,X
		AND		#$10
		BNE		loc_69EC1
		LDA		byte_530+1,X
		ORA		#$10
		STA		byte_530+1,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$46 ; "is confused"
loc_69EBE:
		JMP		_bs_it_has_no_effect_msg
loc_69EC1:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$85 ; "becomes even more confused"
locret_69EC4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_69EC5:
		JSR		sub_6B2DB
		JMP		loc_6917E

; =============== S U B	R O U T	I N E =======================================
; Stats for bedragon'd players:
; ATK: #$12C
; DEF: #$C8
; AGI: #$64
;
_bs_spell_bedragon:
		JSR		_bs_get_current_actor_number
		STA		byte_D2
		TAX
		LDA		#$64
		STA		_players_rAGI,X
		TXA
		ASL
		TAX
		LDA		_players_status,X
		ORA		#$40
		STA		_players_status,X
		LDA		#$2C
		STA		_players_rATK,X
		LDA		#1
		STA		_players_rATK+1,X
		LDA		#0
		STA		_players_rDEF+1,X
		LDA		#$C8
		STA		_players_rDEF,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$47 ; "assumes the shape of a huge dragon!"

; =============== S U B	R O U T	I N E =======================================
_bs_spell_ironize:
		LDA		byte_566
		AND		#$3F
		ORA		#$C0
		STA		byte_566
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$54 ; "hero's party is ironized!"

; =============== S U B	R O U T	I N E =======================================
_bs_spell_sap:
		LDA		#0
		STA		byte_47
		JSR		_bs_extract_target_from_move
		BPL		loc_69F1D
		JSR		sub_6A8B3
		JSR		_b4_s14
		BCC		locret_69F63
loc_69F16:
		AND		#7
		STA		_acting_enemy
		JMP		sub_6A74B
loc_69F1D:
		JSR		sub_6B2DB
		JMP		sub_690D8

; =============== S U B	R O U T	I N E =======================================
_bs_spell_defence:
		LDA		#$FF
		STA		byte_47
		JSR		_bs_extract_target_from_move
		BPL		loc_69F39
		LDA		#<[sub_6A78A]
		STA		word_40
		LDA		#>[sub_6A78A]
		STA		word_40+1
		JMP		sub_6A3AB
loc_69F39:
		STA		byte_CE
		JSR		sub_6B2DB
		JMP		sub_6A6DF

; =============== S U B	R O U T	I N E =======================================
_bs_spell_upper:
		LDA		#0
		STA		byte_47
		JSR		_bs_extract_target_from_move
		BMI		loc_69F51
		STA		byte_CE
		JMP		sub_6A790
loc_69F51:
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		_acting_enemy
		JSR		sub_68F16
		BPL		locret_69F63
		JMP		sub_6A7BC
locret_69F63:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_increase:
		LDA		#$FF
		STA		byte_47
		JSR		_bs_extract_target_from_move
		BMI		loc_69F7A
		LDA		#<[sub_69F7F]
		STA		word_3E
		LDA		#>[sub_69F7F]
		STA		word_3E+1
		JMP		_bs_action_foreach_live_player ; TAILCALL
loc_69F7A:
		JMP		loc_6932C

; =============== S U B	R O U T	I N E =======================================
sub_69F7F:
		JSR		sub_6A790
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_spell_bounce:
		JSR		_bs_get_current_actor_number
		STA		byte_D2
		ASL
		TAX
		LDA		_players_status+1,X
		ORA		#$F
		STA		_players_status+1,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$48 ; "a wall of light appears before"

; =============== S U B	R O U T	I N E =======================================
_bs_spell_barrier:
		LDA		#0
		STA		byte_D2
		JSR		_b4_sB
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$49 ; "a garment of light, like unto silk, surrounds the hero"
		LDY		#0

; =============== S U B	R O U T	I N E =======================================
sub_69FA3:
		TYA
		PHA
		STA		byte_CE
		STA		byte_D2
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_69FBD
		LDA		_players_status,X
		AND		#4
		BNE		loc_69FBD
		LDA		_players_status,X
		ORA		#4
		STA		_players_status,X
loc_69FBD:
		PLA
		TAY
		INY
		CPY		#4
		BNE		sub_69FA3
locret_69FC4:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_spell_bikill:
		JSR		_bs_extract_target_from_move
		BMI		loc_69FE6
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_69FD3
		BNE		loc_69FF7
loc_69FD3:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_69FC4
		LDA		_players_status,X
		ORA		#8
		STA		_players_status,X
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$4A ; "'s attack power increases!"
loc_69FE6:
		JSR		sub_6A8B3
		JSR		_b4_s14
		AND		#7
		STA		_acting_enemy
		JSR		sub_6B398
		BCC		loc_69FF7
		BEQ		loc_69FD3
loc_69FF7:
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_69FC4
		LDA		#1
		LDX		_acting_enemy
		BEQ		loc_6A009
loc_6A005:
		ASL
		DEX
		BNE		loc_6A005
loc_6A009:
		BIT		byte_565
		BNE		locret_69FC4
		ORA		byte_565
		STA		byte_565
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$4A ; "name's attack power increases!"

; =============== S U B	R O U T	I N E =======================================
_bs_spell_chance:
		JSR		sub_6B2FE
		LDA		#$10
		JSR		_bs_set_battleflag_567
		LDA		byte_6A6B
		BNE		loc_6A038
		LDA		#$11
		JSR		_b4_sF_rand_mul_A ; select a random value [0,$10]
		ASL
		TAX
		LDA		_bs_chance_handler_fptr_tbl,X
		STA		word_3C
		LDA		_bs_chance_handler_fptr_tbl+1,X
		STA		word_3C+1
		JMP		(word_3C)
loc_6A038:
		JSR		_rand_ex
		AND		#$F ; mask random value to small number
		CMP		#$C
		BCS		sub_6A079 ; BCS->JAE branch down if we rolld a value >= #$C
		JMP		sub_6A23B ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6A044:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$57 ; "calls for something unbelievably frightening"
		LDY		#0
loc_6A049:
		TYA
		PHA
		STY		byte_D2
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_6A058
		JSR		_b4_sB
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$89 ; "faints"
loc_6A058:
		PLA
		TAY
		INY
		CPY		#4
		BNE		loc_6A049
		LDA		#<[sub_6A070]
		STA		word_40
		LDA		#>[sub_6A070]
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6A070:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$50 ; "starts to flee"
		JSR		sub_6ADBF
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A079:
		LDA		#$1F
		LDX		_bs_curr_actor
		STA		byte_558,X
		JMP		sub_69BE5 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6A083:
		JSR		_sram_b0_s33_count_non_dead_party_chars
		LDA		word_4
		PHA
		JSR		_sram_b0_s31_get_party_chars_list
		PLA
		CMP		word_4
		BEQ		sub_6A079
		LDY		#0
loc_6A093:
		STY		word_4
		TYA
		PHA
		ASL
		TAX
		LDA		_players_status,X
		BPL		loc_6A0AC
		LDA		_players_status+1,X
		BMI		loc_6A0AC
		LDX		_bs_curr_actor
		TYA
		STA		byte_54C,X
		JSR		_bs_spell_revive
loc_6A0AC:
		PLA
		TAY
		INY
		CPY		#4
		BNE		loc_6A093
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A0B4:
		LDA		#$F
		JSR		_b4_s23
		JSR		_b4_s13
		LDX		_bs_curr_actor
		STA		byte_54C,X
		LDA		#$1F
		STA		byte_558,X
		JMP		_bs_spell_heal_single

; =============== S U B	R O U T	I N E =======================================
sub_6A0C9:
		LDA		#<[sub_6A0E9]
		STA		word_40
		LDA		#>[sub_6A0E9]
		STA		word_40+1
		LDA		#0
		JSR		sub_6A3B1
		LDA		#<[sub_6A0EF]
		STA		word_3E
		LDA		#>[sub_6A0EF]
		STA		word_3E+1
		JMP		_bs_action_foreach_live_player ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6A0E9:
		JSR		sub_69E98
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A0EF:
		JSR		loc_6918F
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_6A0F5:
		LDA		#<[sub_6A106]
		STA		word_40
		LDA		#>[sub_6A106]
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6A106:
		JSR		sub_6A10C
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A10C:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$2C ; "shatters into pieces"
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		LDA		#$40
		JSR		sub_6B307
		JSR		sub_6ADB6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A121:
		LDA		byte_568
		AND		#$10
		BNE		sub_6A134
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$58 ; "the area is engulfed in a fierce darkness"
		LDA		byte_568
		ORA		#$10
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A134:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$59 ; "hero's party gains additional attack power" 
		LDA		#$20
		JMP		_bs_set_battleflag_567 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6A13C:
		LDA		#<[sub_69CE7]
		STA		word_40
		LDA		#>[sub_69CE7]
		STA		word_40+1
		LDA		#0
		JSR		sub_6A3B1
		LDA		#<[sub_690A3]
		STA		word_3E
		LDA		#>[sub_690A3]
		STA		word_3E+1
		JMP		_bs_action_foreach_live_player ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6A158:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$5A ; "time ceases!"
		JSR		_bs_get_current_actor_number
		ORA		#$C
		STA		word_4
		LDA		byte_567
		AND		#$F0
		ORA		word_4
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A16D:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$8B ; "hero's party changes its formation"
		LDA		#0
		STA		byte_42
loc_6A174:
		LDX		byte_42
		STX		byte_CF
		JSR		sub_6A18E
		BMI		loc_6A182
		STX		byte_D0
		JSR		_sram_b0_s3B_players_data_swap_in_battle
loc_6A182:
		INC		byte_42
		LDA		byte_42
		CMP		#4
		BNE		loc_6A174
		JSR		_b4_s6_wndBTL_STAT
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A18E:
		LDA		#0
		STA		byte_55
		STA		byte_56
		STA		byte_57
		DEC		byte_57
loc_6A198:
		TXA
		ASL
		TAY
		LDA		_players_status,Y
		BPL		loc_6A1A9
		LDA		byte_56
		CMP		_players_HP+1,Y
		BCC		loc_6A1B1
		BEQ		loc_6A1C0
loc_6A1A9:
		INX
		CPX		#4
		BCC		loc_6A198
		LDX		byte_57
		RTS
loc_6A1B1:
		LDA		_players_HP,Y
		STA		byte_55
		LDA		_players_HP+1,Y
		STA		byte_56
		STX		byte_57
		JMP		loc_6A1A9
loc_6A1C0:
		LDA		byte_55
		CMP		_players_HP,Y
		BCS		loc_6A1A9
		BCC		loc_6A1B1

; =============== S U B	R O U T	I N E =======================================
sub_6A1C9:
		LDA		byte_568
		ORA		#$80
		STA		byte_568
		LDA		#<[sub_6A1E2]
		STA		word_40
		LDA		#>[sub_6A1E2]
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6A1E2:
		JSR		sub_6A1E8
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A1E8:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$5D ; "departs"
		JMP		sub_6ADC8

; =============== S U B	R O U T	I N E =======================================
sub_6A1EE:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$5B ; "the foe is taken off guard"
		LDA		byte_566
		AND		#$C3
		ORA		#8
		STA		byte_566
		PLA
		PLA
		PLA
		PLA
		JMP		loc_68080

; =============== S U B	R O U T	I N E =======================================
sub_6A202:
		LDA		#<[sub_6A213]
		STA		word_40
		LDA		#>[sub_6A213]
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6A213:
		LDA		#$FF
		JSR		loc_6A693
		LDA		byte_65
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		JSR		_sram_b0_s8_player_MP_add
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A226:
		LDA		#<[sub_6A235]
		STA		word_3E
		LDA		#>[sub_6A235]
		STA		word_3E+1
		JMP		_bs_action_foreach_live_player

; =============== S U B	R O U T	I N E =======================================
sub_6A235:
		JSR		sub_6A30D
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_6A23B:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$8C ; "...Chance... chance... chance"
		JMP		_b4_s5_do_message_speed_delay ; TAILCALL

; =============== T A B	L E =================================================
; handlers for random `chance` spell actions
;
_bs_chance_handler_fptr_tbl:
		.WORD	sub_6A044 ; "calls for something unbelievably frightening"
		.WORD	sub_6A079
		.WORD	sub_6A083
		.WORD	sub_6A0B4
		.WORD	sub_6A0C9
		.WORD	sub_6A0F5
		.WORD	sub_6A0F5
		.WORD	sub_6A121
		.WORD	sub_6A134
		.WORD	sub_6A13C
		.WORD	sub_6A158 ; "time ceases"
		.WORD	sub_6A16D
		.WORD	sub_6A1C9
		.WORD	sub_6A1EE
		.WORD	sub_6A202
		.WORD	sub_6A226
		.WORD	sub_6A23B

; =============== S U B	R O U T	I N E =======================================
_bs_spell_transform:
		JSR		_bs_extract_target_from_move
		BMI		loc_6A2C5
		STA		_msg_directobject_param
		TAY
		LDX		byte_CE
		LDA		_player_battle_order_and_flags,X
		AND		#3
		STA		word_4
		CPY		word_4
		BEQ		loc_6A2C8
		CPY		byte_CE
		BNE		loc_6A280
		LDA		#$87
		BNE		loc_6A282
loc_6A280:
		LDA		#$43
loc_6A282:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		LDA		_player_battle_order_and_flags,X
		AND		#$FC
		STA		word_4
		TYA
		ORA		word_4
		ORA		#$10
		STA		_player_battle_order_and_flags,X
		LDA		_players_AGI,Y ; read SOURCE AGI (not EffAGI) (status effects arent carried over, naturally)
		STA		_players_rAGI,X ; copy to rAGI 
		LDA		#5
		STA		byte_6A4B,X
		STY		byte_CE

; calculate EffDEF into rDEF
		TXA
		ASL
		PHA
		JSR		_sram_b0_s18_player_EffDEF_calc
		PLA
		TAX
		LDA		word_4
		STA		_players_rDEF,X
		LDA		word_4+1
		STA		_players_rDEF+1,X
		TXA

; calculate EffATK into rATK
		PHA
		JSR		_sram_b0_s16_player_EffATK_calc
		PLA
		TAX
		LDA		word_4
		STA		_players_rATK,X
		LDA		word_4+1
		STA		_players_rATK+1,X
		RTS

loc_6A2C5:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$40 ; "but nothing happens"
loc_6A2C8:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$86 ; "but alas, it is the same as before"

; =============== S U B	R O U T	I N E =======================================
_bs_spell_antidote:
		JSR		_bs_extract_target_from_move
		BMI		loc_6A2F7
		STA		byte_CE
		JSR		sub_6B347
		BCC		loc_6A2D9
		BNE		locret_6A2F6
loc_6A2D9:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6A2F6
		LDA		_players_status+1,X
		AND		#$20
		BEQ		loc_6A333
		LDA		_players_status+1,X
		AND		#$DF
		STA		_players_status+1,X
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$44 ; "the poison leaves name's body"
		JMP		_b4_s6_wndBTL_STAT
locret_6A2F6:
		RTS
loc_6A2F7:
		STA		_acting_enemy
		JSR		sub_6B398
		JMP		loc_6A333

; =============== S U B	R O U T	I N E =======================================
_bs_spell_numboff:
		JSR		_bs_extract_target_from_move
		BMI		loc_6A333
		STA		byte_CE
		JSR		sub_6B347
		BCC		sub_6A30D
		BNE		locret_6A2F6

; =============== S U B	R O U T	I N E =======================================
sub_6A30D:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6A2F6
		LDA		_players_status+1,X
		AND		#PLAYER_STATUS_NUMB
		BEQ		loc_6A333
		LDA		_players_status+1,X
		AND		#$BF ; ~PLAYER_STATUS_NUMB
		STA		_players_status+1,X
		LDX		byte_CE
		LDA		#$70 ; turn completed marker (un-numbed player can now act next round but can't have a turn this round)
		STA		byte_54C,X
		LDA		#$42 ; "name's numbness goes away"
loc_6A32D:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		JMP		_b4_s6_wndBTL_STAT
loc_6A333:
		LDA		#$40
		BNE		loc_6A32D

; =============== S U B	R O U T	I N E =======================================
; A: ?
;
sub_6A337:
		STA		byte_65
		LDA		byte_6A6B
		BNE		loc_6A345
		LDA		byte_567
		AND		#$10
		BNE		loc_6A358 ; branch if not extra lucky?
loc_6A345:
		JSR		sub_6B994
		BEQ		loc_6A358
		LDA		byte_59
		CMP		#$FF
		BEQ		loc_6A356
		JSR		_rand_ex
		CMP		byte_59
		RTS
loc_6A356:
		CLC
		RTS
loc_6A358:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A35A:
		LDA		_acting_enemy
		ASL
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
; "sub_eAction_UtilTryCast"
; Checks MP, stopspell, and "spellbroken" status
sub_6A35F:
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
; load action
		LDY		byte_558,X ; moveTable2
		LDA		_bs_enemy_mp_cost-$13,Y ; tblEnemyAttackCostsAndMisc
		STA		byte_65 ; actionCost?
		JSR		_bs_load_acting_enemy_MP
		LDA		byte_59 ; enemyMiscStats_59
; check for sufficient MP
		CMP		byte_65
		BCS		.sufficientMP
; print "MP is not high enough" and bail out
		STA		_acting_enemy
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$20 ; "MP is not high enough"
		JMP		loc_6A38F
.sufficientMP: ;ZOOM
		JSR		_bs_deduct_acting_enemy_MP
;confused about below
		JSR		_bs_get_current_actor_number
		ASL
		TAX
		LDA		byte_530,X
		AND		#$20

; =============== S U B	R O U T	I N E =======================================
sub_6A38A:
		BEQ		loc_6A392
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$1E ; "but the spell is contained"
loc_6A38F:
		PLA
		PLA
		RTS
loc_6A392:
		LDA		byte_568
		AND		#$10
		BEQ		locret_6A39E
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$81 ; "however, the spell is broken"
		PLA
		PLA
locret_6A39E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A39F:
		JSR		_bs_get_current_actor_number
		ASL
		TAX
		LDA		_players_status,X
		AND		#$20
		BPL		sub_6A38A

; =============== S U B	R O U T	I N E =======================================
sub_6A3AB:
		JSR		_bs_extract_target_from_move
		JSR		sub_6A8B3

;; FALLTHROUGH ;;;

; =============== S U B	R O U T	I N E =======================================
; While it seems this receives A as a parameter, the parameter is always 0
; So sometimes A must be set by the subroutine above
;
sub_6A3B1:
		STA		byte_47
		LDY		#0

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_6A3B5:
		TYA
		PHA
		LSR		byte_47
		BCS		sub_6A3CB
		STY		_acting_enemy
		JSR		sub_68F16
		BPL		sub_6A3CB
		JSR		sub_6B5B7
		JSR		_b4_sB
		JMP		(word_40)

; =============== S U B	R O U T	I N E =======================================
sub_6A3CB:
		PLA
		TAY
		INY
		CPY		#8
		BNE		sub_6A3B5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A3D3:
		LDA		#$FF
		STA		byte_65
		STA		byte_66
		JSR		sub_6B697
		JSR		sub_6B5B7
		LDA		#$40
		JSR		sub_6B307
		LDA		byte_568
		AND		#1
		BEQ		loc_6A3F1
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$88 ; "name disappears into the light"
		JMP		sub_6ADBF
loc_6A3F1:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$3F ; "name's life is snuffed out"
		JSR		sub_6ADB6
locret_6A3F7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A3F8:
		JSR		sub_6B398
		BCC		loc_6A402
		BNE		loc_6A402
		JMP		loc_6A58C
loc_6A402:
		JSR		sub_68F16
		BPL		locret_6A3F7
		LDA		byte_49
		CMP		#9
		BCC		loc_6A419
		CMP		#$D
		BCC		loc_6A41D
		CMP		#$10
		BCC		loc_6A421
		LDA		#3
		BNE		loc_6A423
loc_6A419:
		LDA		#0
		BEQ		loc_6A423
loc_6A41D:
		LDA		#1
		BNE		loc_6A423
loc_6A421:
		LDA		#2
loc_6A423:
		JSR		sub_6A337
		BCS		loc_6A42E
		JSR		sub_6B5B7
		JMP		_bs_it_has_no_effect_msg
loc_6A42E:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		BPL		locret_6A3F7
		JSR		sub_68F16
		BPL		locret_6A3F7
		JSR		sub_6B5B7
		LDA		_attack_buff_flags
		BPL		loc_6A467 ; branch if poison needle isn't being wielded in an attack
; special processing for poison needle:
		JSR		_rand_ex
		CMP		#$20
		BCS		loc_6A45F ; BCS->JAE branch down if rolled >= $20
		LDA		byte_6A6B
		BNE		loc_6A45F ; skip poison needle under some conditions? boss battles I would assume
		SYSX	_apu_load,SFX_POISON_NEEDLE
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$7D ; "The Poison Needle penetrates..."
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$0E ; "You have defeated..."
		JSR		sub_6ADB6 ; probably prints enemy name...
		JMP		_b4_s5_do_message_speed_delay ; TAILCALL

loc_6A45F:
		LDA		#1
		STA		word_4
		LDA		#0
		STA		word_4+1
loc_6A467:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		AND		#ENEMY_FLAG_PARRY
		BEQ		loc_6A478 ; branch if not parrying
		LSR		word_4+1
		ROR		word_4
		INC		word_4
loc_6A478:
		LDA		word_4
		STA		byte_65
		STA		_msg_number_parameter_F8
		LDA		word_4+1
		STA		byte_66
		STA		_msg_number_parameter_F8+1
		LDA		#0
		STA		_msg_number_parameter_F8+2
		LDA		word_4
		ORA		word_4+1
		BEQ		loc_6A4C9
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		sub_6B697
		SYSX	_apu_load,SFX_SWEEPING_DOWN_HIT_87
		LDA		#$C
; printing damage for counterattack
		JSR		_wrap_bE_s6_msg_mFF_arg0_safe
; blinking enemy effect?
		JSR		sub_6AA3C
		JSR		_b4_s21_message_half_delay_or_wait_for_keypress
		JSR		sub_6ADD1
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		LDA		_attack_buff_flags
		AND		#4
		BEQ		locret_6A4C8
		LSR		word_4+1
		ROR		word_4
		LSR		word_4+1
		ROR		word_4
		INC		word_4
		JSR		_b4_sB
		JMP		loc_6A58C
locret_6A4C8:
		RTS
loc_6A4C9:
		SYSX	_apu_load,SFX_PLAYER_ATTACK_MISS
		LDY		#$22 ; "Missed! No damage to <name><-N>!"
		JSR		_bs_get_current_actor_number
		BPL		loc_6A4D5
		LDY		#$7A ; "Missed! <name><-N> is unhurt."
loc_6A4D5:
		TYA
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
sub_6A4D9:
		LDA		word_4
		ORA		word_4+1
		BNE		loc_6A4E1
		INC		word_4
loc_6A4E1:
		JSR		_bs_run_PC_Damage

; =============== S U B	R O U T	I N E =======================================
; "btl_someDamageResolution"
sub_6A4E4:
; "should we be doing some counter-attacking here?"
		JSR		_sram_b0_s2_player_HP_read
		ORA		word_4
		BEQ		loc_6A4EE
		JSR		_b4_s1A_status_pal_adjust_and_update
loc_6A4EE:
		JSR		_b4_s6_wndBTL_STAT
		JSR		_sram_b0_s2_player_HP_read
		LDA		word_4
		ORA		word_4+1
		BEQ		sub_6A544 ; branch if HP 0
		LDA		_attack_buff_flags
		AND		#1
		BNE		loc_6A529
		LDA		_attack_buff_flags
		AND		#$20
		BEQ		loc_6A542
		JSR		sub_686F4
		PHA
		LDA		byte_CE
		JSR		_b4_s10
		PLA
		ORA		word_6+1
		JSR		_b4_s13
		PHA
		JSR		sub_6A56E
		LDA		#0
		STA		_attack_buff_flags
		PLA
		STA		byte_CE
		JSR		_b4_sB
		JMP		loc_6A58C
loc_6A529:
		JSR		_bs_get_current_actor_number
		STA		_acting_enemy
		JSR		sub_6A56E
		LSR		word_4+1
		ROR		word_4
		INC		word_4
		LDA		#0
		STA		_attack_buff_flags
; after this, before counterattack, a line of text was erased
		JSR		_b4_sB
		JMP		loc_6A42E
loc_6A542:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A544:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$27 ; "name is dead"
		LDA		byte_CE
		ASL
		TAX
		LDA		#$1F
		AND		_players_status+1,X
		STA		_players_status+1,X
		JSR		_b4_s1A_status_pal_adjust_and_update
		JSR		_b4_s6_wndBTL_STAT
		DEC		_bs_num_live_players
		JSR		sub_6A569
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A560:
		SYSX	_apu_load,SFX_ENEMY_ATTACK_MISS
		JSR		sub_6A569
		JMP		loc_6A4C9

; =============== S U B	R O U T	I N E =======================================
sub_6A569:
		LDA		#$20
		JMP		sub_6B2BB

; =============== S U B	R O U T	I N E =======================================
sub_6A56E:
		LDA		_msg_number_parameter_F8
		STA		word_4
		LDA		_msg_number_parameter_F8+1
		STA		word_4+1
locret_6A578:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A579:
		JSR		sub_6B170 ; "sub_Calc_eSpell_PlayerDef"
		JMP		loc_6A582

; =============== S U B	R O U T	I N E =======================================
sub_6A57F:
		JSR		sub_6B1E4
loc_6A582:
		JSR		sub_6B347
		BCC		loc_6A58C
		BEQ		loc_6A58C
		JMP		loc_6A402
loc_6A58C:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6A578
; removes $20 from flags at $566
		LDA		#$20
		JSR		sub_6B2C4
; load a PC status flag and check & $20
		LDX		byte_CE ; "targetplayer"
		LDA		_player_battle_order_and_flags,X
		AND		#$20
		BEQ		.checkForDamage0 ; skip parry reduction if not parrying
; ..make damage smaller /2 ..?parrying?
		LSR		word_4+1
		ROR		word_4
.checkForDamage0:
; do something special ("misses!") if damage was 0
		LDA		word_4
		ORA		word_4+1
		BEQ		sub_6A560
; causes "9 damage points for zero!" and other things
		JSR		_bs_run_PC_Damage
		FARX	_b2_s6_screen_damage_shake
		JSR		_b4_s21_message_half_delay_or_wait_for_keypress
		JMP		sub_6A4E4 ; "_btl_someDamageResolution"

; =============== S U B	R O U T	I N E =======================================
; applies damage to PC. plays a SFX. branches far away to do other related processing
;
_bs_run_PC_Damage:
		LDA		word_4							; copy word_4 to u16[CF] and u24[63F]
		STA		byte_CF
		STA		_msg_number_parameter_F8
		LDA		word_4+1
		STA		byte_D0
		STA		_msg_number_parameter_F8+1
		LDA		#0								; make sure MSB is cleared
		STA		_msg_number_parameter_F8+2
		JSR		_sram_b0_s5_player_HP_subtract	; reduce HP
		SYSX	_apu_load,SFX_PLAYER_GETS_HIT
		LDA		#$13 ; "<number> damage point<s> for <name>."
		JMP		_wrap_bE_s6_msg_mFF_arg0_safe

; =============== S U B	R O U T	I N E =======================================
sub_6A5D6:
		JSR		sub_6B398
		BCC		loc_6A5E0
		BNE		loc_6A5E0
		JMP		loc_6A604
loc_6A5E0:
		JSR		sub_68F16
		BPL		locret_6A5F6
		LDA		word_4 ; copy value to heal to byte_65 for healing function
		STA		byte_65
		LDA		word_4+1
		STA		byte_66
		JSR		_b4_s19_heal_enemy
		JSR		sub_6B5B7
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$14 ; "name has recovered"
locret_6A5F6:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A5F7:
		JSR		sub_6B3D2
		JSR		sub_6B347
		BCC		loc_6A604
		BEQ		loc_6A604
		JMP		loc_6A5E0
loc_6A604:
		LDY		byte_CE
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6A5F6
		LDA		word_4
		STA		byte_CF
		LDA		word_4+1
		STA		byte_D0
		JSR		_sram_b0_s4_player_HP_add
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$14 ; "name has recovered"
		JSR		_b4_s1A_status_pal_adjust_and_update
		JMP		_b4_s6_wndBTL_STAT

; =============== S U B	R O U T	I N E =======================================
sub_6A61F:
		JSR		_bs_extract_target_from_move
		STA		byte_CE
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		loc_6A66F
		JSR		sub_6B347
		BCC		loc_6A633
		BNE		loc_6A685
loc_6A633:
		LDA		#6
		JSR		_b4_sF_rand_mul_A
		ADC		#5
		STA		byte_CF
		JSR		_set_msg_number_parameter_F8_equ_A
		STA		byte_D0
		JSR		_sram_b0_sB_player_MP_test
		BCS		loc_6A650
		JSR		_sram_b0_s6_player_MP_read
		LDA		word_4
		STA		byte_CF
		STA		_msg_number_parameter_F8
loc_6A650:
		JSR		_sram_b0_s9_player_MP_subtract
		JSR		_b4_s6_wndBTL_STAT
		JMP		loc_6A659
loc_6A659:
		LDY		#$75
		LDA		byte_568
		AND		#3
		BEQ		loc_6A66B
		LDY		#$39
		JSR		_bs_get_current_actor_number
		BMI		loc_6A66B
		LDY		#$84
loc_6A66B:
		TYA
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6A66F:
		LDA		#0
		STA		byte_CF
		STA		byte_D0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A676:
		JSR		sub_6A6C7
		JSR		sub_68F16
		BPL		loc_6A6C0
		JSR		sub_6B398
		BCC		loc_6A685
		BEQ		loc_6A633
loc_6A685:
		LDA		#$A
		JSR		sub_6A337
		BCC		loc_6A6BD
loc_6A68C:
		LDA		#6
		JSR		_b4_sF_rand_mul_A
		ADC		#5
loc_6A693:
		STA		byte_65
		JSR		_bs_load_acting_enemy_MP
		LDA		byte_59
		STA		_msg_number_parameter_F8
		LDA		#0
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		JSR		_bs_deduct_acting_enemy_MP
		BEQ		loc_6A6B2
		LDA		byte_65
		STA		_msg_number_parameter_F8
		JMP		loc_6A6B5
loc_6A6B2:
		JSR		sub_6B725
loc_6A6B5:
		LDA		_msg_number_parameter_F8
		STA		byte_65
		JMP		loc_6A659
loc_6A6BD:
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$12 ; "it has no effect on name"
loc_6A6C0:
		LDA		#0
		STA		byte_65
		STA		byte_66
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A6C7:
		LDA		#0
		STA		byte_66
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		JSR		_bs_extract_target_from_move
		STA		_acting_enemy
		JMP		sub_6B5B7

; =============== S U B	R O U T	I N E =======================================
sub_6A6D9:
		JSR		sub_6A6C7
		JMP		loc_6A68C

; =============== S U B	R O U T	I N E =======================================
sub_6A6DF:
		JSR		sub_6B347
		BCC		loc_6A6E9
		BEQ		loc_6A6E9
		JMP		loc_6A755
loc_6A6E9:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6A747
		JSR		_sram_b0_s18_player_EffDEF_calc
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_47
		BEQ		loc_6A708
		LDA		_players_rDEF+1,X
		LSR
		STA		word_4+1
		LDA		_players_rDEF,X
		ROR
		STA		word_4
loc_6A708:
		LDA		#$BE
		JSR		_bs_player_luck_test
		BCS		sub_6A748
		JSR		sub_6A823
		JSR		sub_6A71B
		JSR		sub_6A82E
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$16 ; "name's defense power has gone down"

; =============== S U B	R O U T	I N E =======================================
sub_6A71B:
		SEC
		LDA		word_6
		SBC		word_4
		STA		byte_8
		LDA		word_6+1
		SBC		word_4+1
		STA		byte_9
		BCS		loc_6A738
		LDA		#0
		STA		byte_8
		STA		byte_9
		LDA		word_6
		STA		word_4
		LDA		word_6+1
		STA		word_4+1
loc_6A738:
		LDA		word_4
		STA		_msg_number_parameter_F8
		LDA		word_4+1
		STA		_msg_number_parameter_F8+1
		LDA		#0
		STA		_msg_number_parameter_F8+2
locret_6A747:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A748:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
sub_6A74B:
		JSR		sub_6B398
		BCC		loc_6A755
		BNE		loc_6A755
		JMP		loc_6A6E9
loc_6A755:
		JSR		sub_6B5B7
		JSR		sub_68F16
		BPL		locret_6A747
		JSR		_bs_load_enemy_prop_DEF
		LDA		byte_47
		BEQ		loc_6A76B
		JSR		sub_6B777
		LSR		byte_5A
		ROR		byte_59
loc_6A76B:
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		LDA		#8
		JSR		sub_6A337
		BCC		sub_6A748
		LDA		_acting_enemy
		ASL
		TAX
		JSR		sub_6A839
		JSR		sub_6A71B
		JSR		sub_6A844
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$15 ; "defense power is lowered N points"

; =============== S U B	R O U T	I N E =======================================
sub_6A78A:
		JSR		sub_6A74B
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
sub_6A790:
		JSR		sub_6B347
		BCC		loc_6A797
		BNE		loc_6A7C3
loc_6A797:
		JSR		sub_6B3D2
		JSR		_player_idx_to_X_and_status_check
		BPL		locret_6A7BB
		JSR		_sram_b0_s18_player_EffDEF_calc
		LDA		byte_47
		BEQ		loc_6A7AA
		LSR		word_4+1
		ROR		word_4
loc_6A7AA:
		LDA		byte_CE
		ASL
		TAX
		CLC
		JSR		sub_6A823
		JSR		sub_6A7E9
		JSR		sub_6A82E
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$3B ; "defense power goes up N points"
locret_6A7BB:
		RTS

; =============== S U B	R O U T	I N E =======================================
;
sub_6A7BC:
		JSR		sub_6B398
		BCC		loc_6A7C3
		BEQ		loc_6A797
loc_6A7C3:
		JSR		sub_6B5B7

; load enemy's DEF into u16[4]
		JSR		_bs_load_enemy_prop_DEF
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1

		LDA		byte_47
		BEQ		.dont_divide_by_2 ; maybe divide by 2
		LSR		word_4+1 ; multiple precision divide by 2
		ROR		word_4
.dont_divide_by_2:
		LDA		_acting_enemy
		ASL
		TAX
		JSR		sub_6A839
		JSR		sub_6A7E9
		JSR		sub_6A844
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$3B ; "defense power goes up N points"

; =============== S U B	R O U T	I N E =======================================
sub_6A7E9:
		CLC
		LDA		word_6
		ADC		word_4
		STA		byte_8
		LDA		word_6+1
		ADC		word_4+1
		STA		byte_9
		CMP		#3
		BCC		loc_6A813
		BNE		loc_6A802
		LDA		byte_8
		CMP		#$E7
		BCC		loc_6A813
loc_6A802:
		SEC
		LDA		#$E7
		STA		byte_8
		SBC		word_6
		STA		word_4
		LDA		#3
		STA		byte_9
		SBC		word_6+1
		STA		word_4+1
loc_6A813:
		LDA		word_4
		STA		_msg_number_parameter_F8
		LDA		word_4+1
		STA		_msg_number_parameter_F8+1
		LDA		#0
		STA		_msg_number_parameter_F8+2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A823:
		LDA		_players_rDEF,X
		STA		word_6
		LDA		_players_rDEF+1,X
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A82E:
		LDA		byte_8
		STA		_players_rDEF,X
		LDA		byte_9
		STA		_players_rDEF+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A839:
		LDA		_enemy_DEF,X
		STA		word_6
		LDA		byte_530+1,X
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A844:
		LDA		byte_8
		STA		_enemy_DEF,X
		LDA		byte_9
		STA		byte_530+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; Does a probability test controlled by luck
; A: basic probability argument. low value is 
; CF: set if the result for lucky people is chosen
; after calling this, youll always see BCS label, to be read as "if player was lucky, branch"
;
_bs_player_luck_test:
		STA		byte_10 ; stash argument for later restoring
		TXA
		PHA
		TYA
		PHA
		LDA		word_4 ; save u16[4] because _bs_player_luck_test_work clobbers it
		PHA
		LDA		word_4+1
		PHA
		LDA		byte_10
		JSR		_bs_player_luck_test_work
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
; does the work for _bs_player_luck_test
;
_bs_player_luck_test_work:
		CMP		#$FF
		BEQ		loc_6A8B1 ; return false if the probability was at maximum (player is guaranteed to be unlucky). not really sensible; is it ever used?
		PHA ; stash A
		JSR		_sram_b0_s15_player_EffLUCK_calc
		LDA		word_4 ; load result of effective luck calculation (its really only 1 byte)
		PHA ; stash for later
		LDA		#$80 ; begin putting $180 in u16[4]
		STA		word_4
		LDA		#1
		STA		word_4+1
		LDX		#word_4
		PLA ; unstash EffLUCK
		JSR		_sub8_from_16 ; u16[4] = $180 - EffLuck
		LDA		#2
		JSR		_div16_by_8 ; u16[4] = ($180 - EffLuck)/2
		PLA ; unstash probability argument
		JSR		_mul16_by_8 ; u16[4] = (($180 - EffLuck)/2) * ProbabilityArg
		LDA		#$80
		JSR		_div16_by_8 ; u16[4] = ((($180 - EffLuck)/2) * ProbabilityArg) / $80
		LDA		word_4+1 ; load MSB of result
		BNE		loc_6A8B1 ; if it's set, return false (did that mean, > 100% chance?)
		LDA		byte_567
		AND		#$10
		BNE		loc_6A8B1 ; test battle flags for an extra-luck bit
		LDA		byte_567
		AND		#$40
		BNE		loc_6A8AB ; test battle flags for another extra-luck bit.... ?? but isnt this for BOUNCE?
		LDA		byte_566
		AND		#$10
		BNE		loc_6A8B1 ; test battle flags for another extra-luck bit...
loc_6A8AB:
		JSR		_rand_ex ; random roll
		CMP		word_4 ; compare to computed luck-based probability from earlier
		RTS ; CF=0 if our roll exceeded the computed probability (in keeping with >100% returning false)
loc_6A8B1:
		CLC ; return false
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6A900:
		STA		byte_42
		LDA		#$FF
		BNE		sub_6A8B7

; =============== S U B	R O U T	I N E =======================================
sub_6A8B3:
		STA		byte_42
		LDA		#0

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_6A8B7:
		STA		byte_10
		TXA
		PHA
		TYA
		PHA
		LDA		_acting_enemy
		PHA
		LDA		#1
		STA		byte_43
		LDX		#0
		STX		byte_44
loc_6A8C8:
		STX		_acting_enemy
		TXA
		ASL
		TAX
		LDA		byte_10
		BNE		loc_6A8D9
		LDA		byte_530,X
		AND		byte_530+1,X
		BPL		loc_6A8E7
loc_6A8D9:
		LDA		byte_530,X
		BPL		loc_6A8E7
		JSR		sub_6B91D
		LDA		byte_59
		CMP		byte_42
		BEQ		loc_6A8ED
loc_6A8E7:
		LDA		byte_43
		ORA		byte_44
		STA		byte_44
loc_6A8ED:
		LDX		_acting_enemy
		ASL		byte_43
		INX
		CPX		#8
		BNE		loc_6A8C8
		PLA
		STA		_acting_enemy
		PLA
		TAY
		PLA
		TAX
		LDA		byte_44
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s6_wndBTL_STAT:
;		PHA					; more pointless registers savings, since this
;		TXA					; function used as FARX routine and no code
;		PHA					; calling it relays on the XY registers to be safe
;		TYA					; recheck and remove
;		PHA
		LDA		_curent_battle_type_flags
		BNE		loc_6A921
		LDA		byte_CE
		PHA
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CLC
		ADC		#3	; 3 + [1..4] _wnd04_btl_stat_ply[1..4]
		FARX	_bE_s0_display_window_ex
		PLA
		STA		byte_CE
loc_6A921:
;		PLA
;		TAY
;		PLA
;		TAX
;		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; just message output wrapper with paranoid set of saved variables, maybe
; it worth it
;
_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress:
		STA		_tmp12+1	; store result to temp var
		TXA
		PHA					; start for paranoid saves, X, Y regs
		TYA
		PHA
		LDA		word_4		; byte_4/5/6/64/CE
		PHA
		LDA		word_4+1
		PHA
		LDA		word_6
		PHA
		LDA		_acting_enemy
		PHA
		LDA		byte_CE
		PHA
		LDX		#0			; base idx $000
		LDA		_tmp12+1	; restore arg
		FARX	_bE_s6_msg_mFF	; do battle message
		JSR		_message_delay_or_wait_for_keypress
		PLA
		STA		byte_CE		; restore all vars and regs back
		PLA
		STA		_acting_enemy
		PLA
		STA		word_6
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		PLA
		TAY
		PLA
		TAX					; nothing is changed here to be sure the battle programm will be safe
		RTS

; =============== S U B	R O U T	I N E =======================================
; similar to previous, but used in system BRK call and nothing is saved
; additionally returns back to the previous caller, so this is the last
; routine in code flow
;
_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break:
		TYA
		LDY		_irq_y_saved
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; the same as previous, but with normal return
;
_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress:
		TYA
		LDY		_irq_y_saved
		JMP		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress

; =============== S U B	R O U T	I N E =======================================
_wrap_bE_s6_msg_mFF_arg0_safe:
		STA		_tmp12+1
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		word_6
		PHA
		LDA		_acting_enemy
		PHA
		LDX		#0
		LDA		_tmp12+1
		FARX	_bE_s6_msg_mFF
		PLA
		STA		_acting_enemy
		PLA
		STA		word_6
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; prints "you have vanquished all of your foes. <hero>
; thereby gains 23 experience points. you obtain 10 pieces of gold"
;
_b4_s9_wrap_bE_s4_msg_m00_arg0:
		LDX		#0
		FARX	_bE_s4_msg_m00
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_sB:
		TXA
		PHA
		TYA
		PHA
		FARX	_bE_s3
		LDX		#4
		JSR		_sleep_X_sync
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
; Clears the chatbox inbetween turns (and other times) in a battle
;
_b4_sA_clear_chatbox:
		PHA
		TXA
		PHA
		TYA
		PHA
		FARX	_bE_s2
		FARX	_bE_s5
		JSR		_delay1sec
		JSR		_delay1sec
		JSR		_delay1sec
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
;_b4_s7_display_window_ex_safe:
;		STA		word_4
;		TXA						; FARX calls doesn't save X after exit, just passed it as
;		PHA						; arg to the functions, SYSX doesn't keep it at all
;		TYA						; syscalls are keep Y for some functions, but not keep it
;		PHA						; after exit, so any function that need Y to be saved, should
;								; keep it by its own
;		LDA		word_4
;		FARX	_bE_s0_display_window_ex
;		STA		word_4
;		PLA
;		TAY
;		PLA						; as a result, we have a redundant function for some reason
;		TAX						; that may be replaced with regular FARX/SYSX window_display_ex
;		LDA		word_4
;		RTS

; =============== S U B	R O U T	I N E =======================================
; progresses text at 2x speed
_b4_s21_message_half_delay_or_wait_for_keypress:
		LDA		_cur_message_speed
		CMP		#7
		BCS		_message_speed_delay_until_keypress
		JMP		_b4_s16_do_half_message_speed_delay

; =============== S U B	R O U T	I N E =======================================
; progresses text at 1x speed
_message_delay_or_wait_for_keypress:
		LDA		_cur_message_speed
		CMP		#7
		BCS		_message_speed_delay_until_keypress
		JMP		_b4_s5_do_message_speed_delay

; =============== S U B	R O U T	I N E =======================================
; for use by speed=7 delay mode, blink arrow every #$C frames waiting for pad press
_message_speed_delay_until_keypress:
		LDA		#_downarrow
		JSR		_message_set_blink_arrow_tile
		JSR		_test_for_keypress
		BNE		locret_6A9FE
		LDA		#_nulltile
		JSR		_message_set_blink_arrow_tile
		JSR		_test_for_keypress
		BEQ		_message_speed_delay_until_keypress
locret_6A9FE:
		RTS

; =============== S U B	R O U T	I N E =======================================
; stores the blinking down arrow tile in the bottom right of the messagebox
; input: a tile to write at X=26,Y=26
_message_set_blink_arrow_tile:
		PHA
		LDA		#26
		STA		word_4
		STA		word_4+1
		PLA
		JSR		_print_char
		JMP		_ppu_set_dequeue_flag

; =============== S U B	R O U T	I N E =======================================
; actually this should be called a "wait" or a "sleep" function, as it's suspending the game until the button is pressed
_test_for_keypress:
		LDX		#$C
loc_6AA0F:
		TXA
		PHA
		JSR		_wait_for_nmi_is_over_sync
		JSR		_calc_pads
		LDA		_prev_pads
		BNE		loc_6AA21
		JSR		_pads_copy_to_tmp
		BNE		loc_6AA2A
loc_6AA21:
		JSR		_pads_copy_to_tmp
		PLA
		TAX
		DEX
		BNE		loc_6AA0F
		RTS
loc_6AA2A:
		PLA
		LDA		#$FF
		RTS

; =============== S U B	R O U T	I N E =======================================
_pads_copy_to_tmp:
		LDA		_pads
		STA		_prev_pads
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AA34:
		LDA		#_b2_s3_fidx
		BNE		sub_6AA3E ; UNCONDITIONAL

; =============== S U B	R O U T	I N E =======================================
sub_6AA38:
		LDA		#_b2_s4_fidx
		BNE		sub_6AA3E ; UNCONDITIONAL

; =============== S U B	R O U T	I N E =======================================
sub_6AA3C:
		LDA		#_b2_s5_fidx

; =============== S U B	R O U T	I N E =======================================
sub_6AA3E:
		STA		byte_42
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6B595
		LDY		byte_42
		JSR		_sys0_safe	; "definitely makes bad guy blink"
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AA51:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6AAA5
		LDX		#4
loc_6AA5B:
		TXA
		ASL
		ASL
		ASL
		ASL
		ORA		#2
		STA		byte_470
		LDA		#$1C
		STA		byte_471
		TXA
		PHA
		JSR		sub_17474C
		PLA
		TAX
		DEX
		BNE		loc_6AA5B
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_sC:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6AAA5
		LDX		#$D
loc_6AA84:
		TXA
		ASL
		ASL
		ASL
		ASL
		ORA		#2
		STA		byte_470
		LDA		#$1C
		STA		byte_471
		TXA
		PHA
		JSR		sub_17474C
		PLA
		TAX
		DEX
		CPX		#8
		BNE		loc_6AA84
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AAA5:
		LDA		#0
		TAX
loc_6AAA8:
		STA		_window_draw_buf,X
		INX
		CPX		#$40
		BNE		loc_6AAA8
		TAX
loc_6AAB1:
		STA		_window_draw_buf+$60,X
		INX
		CPX		#$10
		BNE		loc_6AAB1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_some_attack_command:
		LDX		#0
		LDA		#$FF
loc_6AABE:
		STA		byte_677,X
		INX
		CPX		#8
		BNE		loc_6AABE
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		BMI		loc_6AAD0
		JMP		loc_6ABAE
loc_6AAD0:
		AND		#3
		TAX
		STA		byte_43
		LDA		byte_6A77,X
		BPL		loc_6AB15
		TXA
		ASL
		ASL
		ASL
		TAY
		LDA		#8
		STA		byte_47
loc_6AAE3:
		LDA		byte_6A7B,Y
		BPL		loc_6AB02
		AND		#7
		ASL
		TAX
		LDA		byte_530+1,X
		AND		byte_530,X
		BPL		loc_6AB02
		LDA		byte_530,X
		AND		#$C
		LSR
		LSR
		CMP		byte_43
		BNE		loc_6AB02
		JSR		sub_6AC36
loc_6AB02:
		INY
		DEC		byte_47
		BNE		loc_6AAE3
		LDX		#0
loc_6AB09:
		LDA		byte_677,X
		CMP		#$FF
		BNE		loc_6AB1A
		INX
		CPX		#8
		BNE		loc_6AB09
loc_6AB15:
		LDA		#$FF
		STA		word_6
		RTS
loc_6AB1A:
		LDA		#0
		STA		word_4
		STA		word_4+1
		LDX		#0
loc_6AB22:
		LDA		byte_677,X
		CMP		#$FF
		BEQ		loc_6AB33
		CMP		#$FE
		BNE		loc_6AB31
		INC		word_4
		BNE		loc_6AB33
loc_6AB31:
		INC		word_4+1
loc_6AB33:
		INX
		CPX		#8
		BNE		loc_6AB22
		LDA		word_4
		BNE		loc_6AB3F
		JMP		loc_6AB94
loc_6AB3F:
		LDX		#0
loc_6AB41:
		LDA		byte_677,X
		CMP		#$FE
		BEQ		loc_6AB4D
		LDA		#$FF
		STA		byte_677,X
loc_6AB4D:
		INX
		CPX		#8
		BNE		loc_6AB41
		LDX		#0
		STX		word_3C
		STX		word_3C+1
loc_6AB58:
		LDA		byte_677,X
		CMP		#$FE
		BNE		loc_6AB80
		TXA
		PHA
		STA		_acting_enemy
		JSR		_bs_read_acting_enemy_hp
		PLA
		TAX
		LDA		byte_5A
		CMP		word_3C+1
		BCC		loc_6AB80
		BNE		loc_6AB76
		LDA		byte_59
		CMP		word_3C
		BCC		loc_6AB80
loc_6AB76:
		LDA		byte_59
		STA		word_3C
		LDA		byte_5A
		STA		word_3C+1
		STX		word_6
loc_6AB80:
		INX
		CPX		#8
		BNE		loc_6AB58
loc_6AB85:
		LDA		word_6
		ASL
		TAX
		LDA		byte_667,X
		STA		word_4
		LDA		byte_668,X
		STA		word_4+1
		RTS
loc_6AB94:
		LDX		#0
		STX		byte_42
loc_6AB98:
		LDA		byte_677,X
		CMP		#$FF
		BEQ		loc_6ABA7
		CMP		byte_42
		BCC		loc_6ABA7
		STA		byte_42
		STX		word_6
loc_6ABA7:
		INX
		CPX		#8
		BNE		loc_6AB98
		BEQ		loc_6AB85
loc_6ABAE:
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#3
		STA		byte_CE
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4
		AND		word_4+1
		BMI		loc_6ABC3
		JMP		loc_6AB15
loc_6ABC3:
		LDA		byte_CE
		ASL
		LDA		_players_rDEF,X
		STA		byte_59
		LDA		_players_rDEF+1,X
		STA		byte_5A
		LDA		byte_CE
		PHA
		JSR		sub_6ACD9
		PLA
		STA		byte_CE
		LDA		word_4
		STA		byte_59
		LDA		word_4+1
		STA		byte_5A
		LDX		byte_CE
		LDA		_player_battle_order_and_flags,X
		AND		#8
		BNE		loc_6AC05
		LDX		byte_CE
		LDA		_player_battle_order_and_flags,X
		AND		#4
		BNE		loc_6AC0D
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#3
		STA		word_6
		RTS
loc_6AC05:
		JSR		sub_6AC15
		ORA		#8
		STA		word_6
		RTS
loc_6AC0D:
		JSR		sub_6AC15
		ORA		#$10
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AC15:
		LDX		#3
loc_6AC17:
		LSR		byte_5A
		ROR		byte_59
		DEX
		BNE		loc_6AC17
		JSR		_rand_ex
		AND		#3
		CLC
		ADC		byte_59
		STA		word_4
		LDA		byte_5A
		ADC		#0
		STA		word_4+1
		LDX		_bs_curr_actor
		LDA		byte_54C,X
		AND		#3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AC36:
		LDA		byte_6A7B,Y
		AND		#7
		STA		_acting_enemy
		TYA
		PHA
		JSR		sub_6ACD6
		PLA
		TAY
		LDA		_acting_enemy
		ASL
		TAX
		LDA		word_4
		STA		byte_667,X
		LDA		word_4+1
		STA		byte_668,X
		JSR		_bs_get_current_actor_number
		LDA		#$FF
		SEC
		SBC		_players_INT,X
		JSR		_b4_sF_rand_mul_A
		LSR
		LSR
		LDX		#word_4
		JSR		_mul16_by_8
		LDA		_acting_enemy
		ASL
		TAX
		CLC
		LDA		word_4+1
		ADC		byte_667,X
		STA		word_3C
		LDA		byte_668,X
		ADC		#0
		STA		word_3C+1
		SEC
		LDA		_enemy_HP,X
		SBC		word_3C
		STA		word_3C
		LDA		_enemy_HP+1,X
		SBC		word_3C+1
		STA		word_3C+1
		BCS		loc_6AC8F
		LDA		#$FE
		STA		word_3C
		BNE		loc_6AC97
loc_6AC8F:
		LSR		word_3C+1
		ROR		word_3C
		LSR		word_3C+1
		ROR		word_3C
loc_6AC97:
		LDA		byte_6A7B,Y
		AND		#7
		TAX
		LDA		word_3C
		STA		byte_677,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; get a random number, muls it with argument and returns the higher byte
; (stored in word_3C with high byte cleared also)
; in other word, randomizes the argument completely from [0,arg-1]
;
_b4_sF_rand_mul_A:
		PHA
		JSR		_rand_ex
		STA		word_3C
		LDA		#0
		STA		word_3C+1
		LDX		#word_3C
		PLA
		JSR		_mul16_by_8
		LDA		word_3C+1
		STA		word_3C
		LDA		#0
		STA		word_3C+1
		LDA		word_3C
		RTS

; =============== S U B	R O U T	I N E =======================================
; Saves registers and gets the random number after some more additional generating
; seems used for making the number more random?
;
_rand_ex:
		TXA
		PHA
		TYA
		PHA
		LDA		_tmp_rand_adjust
		AND		#$F
		TAX
		INX
loc_6ACC9:
		JSR		_rand
		DEX
		BNE		loc_6ACC9
		PLA
		TAY
		PLA
		TAX
		JMP		_rand ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6ACD6:
		JSR		sub_6B777

; =============== S U B	R O U T	I N E =======================================
sub_6ACD9:
		LDX		_bs_curr_actor
		LDA		byte_540,X ; investigate actor order table
		AND		#3
		STA		byte_CE
		JSR		_sram_b0_s17_player_rATK_read
		LSR		byte_5A
		ROR		byte_59
		LDA		word_4
		SEC
		SBC		byte_59
		STA		word_4
		LDA		word_4+1
		SBC		byte_5A
		BCC		loc_6AD1F
		STA		word_4+1
		BNE		._bs_atkadv_gt_atkreduced
		LDA		word_4
		CMP		#2
		BCC		loc_6AD1F
._bs_atkadv_gt_atkreduced:
		JSR		sub_6BA64 ; get a random value, seemingly completely in [0,255]
; clamp(randval,0x66,0x99) - IOW clamps to [40%,60%]
		LDA		word_3C
		CMP		#$66
		BCS		loc_6AD0D
		LDA		#$66
		BNE		loc_6AD13
loc_6AD0D:
		CMP		#$99
		BCC		loc_6AD13
		LDA		#$99
loc_6AD13:
; "currently this contains AtkAdv"
; "divide clamped rand by 4"
		LDX		#word_4
		LSR
		LSR
; _AtkAdv*=roll/4:
		JSR		_mul16_by_8
		LDA		#$40
; tailcall. after this, something like a damage is left in $4
		JMP		_div16_by_8

loc_6AD1F:
		JSR		_rand_ex
		AND		#1
		STA		word_4
		LDA		#0
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; "sub_CalcEattackDmg"
sub_6AD2B:
; movetable must contain the PC target as bottom 2 bits of entry from movetable
		LDX		_bs_curr_actor ; "curractor"
		LDA		byte_54C,X ; "movetable"
		AND		#3
		PHA
		JSR		_bs_load_enemy_prop_ATK
		PLA
; build offset into array and load PC defence
		ASL
		TAX
		LDA		_players_rDEF,X
		STA		word_4
		LDA		_players_rDEF+1,X
loc_6AD41:
		STA		word_4+1
; divide pDEF by 2
		LSR		word_4+1
		ROR		word_4
		SEC
; subtract eATK from pDEF/2
		LDA		byte_59
		SBC		word_4
		STA		word_4
		LDA		byte_5A
		SBC		word_4+1
; clamp at 0
		BCS		.difference_nonnegative
		LDA		#0
		STA		word_4
.difference_nonnegative:
		STA		word_4+1
		BNE		._bs_atkadv_gt_atkreduced
; divide eATK by 8 (multiple precision SHR 3 over 5A and 59)
		LSR		byte_5A
		ROR		byte_59
		LSR		byte_5A
		ROR		byte_59
		LSR		byte_5A
		ROR		byte_59
; compare eATK/8 to pDEF/2-eATK
		LDA		word_4+1
		CMP		byte_5A
		BCC		loc_6AD79
		BNE		._bs_atkadv_gt_atkreduced
		LDA		byte_59
		CMP		word_4
		BCS		loc_6AD79
		JMP		._bs_atkadv_gt_atkreduced
loc_6AD79:
		LDA		byte_59
		BEQ		loc_6AD87
		CMP		#1
		BEQ		loc_6AD87
		JSR		_b4_sF_rand_mul_A
		STA		word_4
		RTS
loc_6AD87:
		JSR		_rand_ex
		AND		#1
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AD8F:
		JSR		_bs_extract_target_from_move
		PHA
		JSR		_bs_load_enemy_prop_ATK
		PLA
		ASL
		TAX
		LDA		_enemy_DEF,X
		STA		word_4
		LDA		byte_530+1,X
		JMP		loc_6AD41

; =============== S U B	R O U T	I N E =======================================
; Random logic involving attack power / attack damage
;
sub_6ADA4:
		LDA		#$B
		JSR		_b4_sF_rand_mul_A
		CLC
		ADC		#$36
		LDX		#word_4
		JSR		_mul16_by_8
		LDA		#$40
		JMP		_div16_by_8 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6ADB6:
		JSR		sub_6AA38
		LDA		_acting_enemy
		PHA
		JMP		sub_6ADE4 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6ADBF:
		JSR		sub_6AA38
		LDA		_acting_enemy
		PHA
		JMP		sub_6ADF9 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6ADC8:
		JSR		sub_6AA38
		LDA		_acting_enemy
		PHA
		JMP		sub_6ADEC ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6ADD1:
		JSR		_bs_read_acting_enemy_hp
		LDA		byte_59
		ORA		byte_5A
		BEQ		loc_6ADDB
		RTS

loc_6ADDB:
		JSR		sub_6AA38
		LDA		_acting_enemy
		PHA
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$0D ; "is defeated"

; =============== S U B	R O U T	I N E =======================================
sub_6ADE4:
		LDA		#$40
		JSR		sub_6B307
		JSR		sub_6B7F2

; =============== S U B	R O U T	I N E =======================================
sub_6ADEC:
		JSR		sub_6B81D
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A73,X
		STA		_battle_type_fight

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_6ADF9:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		#0
		STA		byte_530+1,X
		DEC		_bs_num_live_enemies
		BEQ		loc_6AE31
		LDA		byte_530,X
		AND		#$C
		LSR
		LSR
		STA		byte_59
		JSR		sub_6B927
		LDA		byte_5A
		STA		_acting_enemy
		JSR		_b4_s2
		LDA		byte_5A
		BEQ		loc_6AE20
		SEC
		BCS		loc_6AE32
loc_6AE20:
		LDA		_acting_enemy
		STA		byte_59
		JSR		_b4_s3
		LDX		byte_5A
		LDA		#0
		STA		byte_6A77,X
		SEC
		BCS		loc_6AE32
loc_6AE31:
		CLC
loc_6AE32:
		PLA
		STA		_acting_enemy
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AE36:
		LDY		#0
loc_6AE38:
		TYA
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BMI		loc_6AE4B
		LDA		byte_54C,Y
		ORA		#$70
		STA		byte_54C,Y
loc_6AE4B:
		INY
		CPY		#4
		BNE		loc_6AE38
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AE51:
		LDY		#0
loc_6AE53:
		TYA
		ASL
		TAX
		LDA		byte_530,X
		AND		byte_530+1,X
		BMI		loc_6AE66
		LDA		byte_54C+4,Y
		ORA		#$70
		STA		byte_54C+4,Y
loc_6AE66:
		INY
		CPY		#8
		BNE		loc_6AE53
		RTS

; =============== S U B	R O U T	I N E =======================================
; Uhhh I dont understand somethings as well as I might let on
; DING
;
_bs_pcAction_03_item:
		JSR		sub_6B2FE
		JSR		_bs_extract_target_from_move
		STA		byte_D4
		BPL		loc_6AE7D
		STA		_acting_enemy
		JSR		_b4_s12
		STA		byte_D4
loc_6AE7D:
		LDX		_bs_curr_actor
		LDA		byte_558,X
		STA		_msg_directobject_param
		STA		word_4
		CMP		#ITEM_FAIRY_FLUTE ; special handling for fairy flute?
		BEQ		loc_6AE97
		CMP		#ITEM_DREAM_RUBY ; special handling for dream ruby?
		BEQ		loc_6AE92
		CMP		#ITEM_SPIDERS_WEB ; special handling for spiders web?
		BNE		loc_6AEA2 ; branch if not spiders web
; must be spiders web ?
loc_6AE92:
		LDA		#$10
		JSR		_bs_set_battleflag_567
loc_6AE97:
		LDA		word_4
		CMP		#ITEM_FAIRY_FLUTE ; test again for fairy flute?
		BNE		loc_6AEA2 ; standard handling
; must be fairy flute (puts enemy to sleep)
		LDA		#BGM_JINGLE_FAIRY_FLUTE
		JSR		_bs_play_jingle

; this is some really weird logic
; Y will be the current index in a table of 'battle item effects'
; X will be the current index looping through all possible items
; as we loop through X, each time we find an item useful in battle, we 
; 1. increment Y
; 2. check if X == the item we were looking for
; if it was the item we were looking for, then execute its special effect
; otherwise keep going, and eventually run out of items and fail (we'll never find our item again once we pass it with X)
; whats the purpose of all this? to compress 128 byte item tables down to the size of the number of items usable in battle. saves a few hundred bytes I guess.
loc_6AEA2:
		LDX		#0
		LDY		#0
loc_6AEA6:
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$80
		BMI		loc_6AEBA
loc_6AEAF:
		INX
		CPX		#$7F ; some kind of sanity check to stop at the end of the possible items
		BNE		loc_6AEA6 ; loop back up..
; the only way "nothing happens" is if we made it through the list completely??
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$03 ; "name uses the item"
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$40 ; "but nothing happens" BREAK

loc_6AEBA:
		INY
		CPX		word_4 ; did Y = the target item?
		BNE		loc_6AEAF ; nope, branch up
; done with loop

		DEY
		LDA		_bs_item_use_msg_tbl,Y ; get a basic message to be displayed for how you wield the item
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		CPY		#$B
		BCS		loc_6AED0 ; BCS->JAE - branch if we're >= #$B (the length of _bs_weapon_effect_msg_tbl)
		LDA		_bs_weapon_effect_msg_tbl,Y
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
loc_6AED0:
		CPY		#4
		BNE		loc_6AED7
		JSR		_b4_sB
loc_6AED7:
		LDA		_bs_item_effect_tbl,Y
		STA		byte_49 ; patch the effect as if it were a fake spell (41 for medical herb)
		LDA		#_b0_d42_item_use_effects_list_fidx ; load info about the item - is it consumable?
		JSR		_sys0_byte_read_x
		AND		#4
		BEQ		loc_6AEEC
		TXA
		JSR		_b4_s20
		JSR		_sram_b0_s2A_player_inventory_item_remove
loc_6AEEC:
		JMP		.bs_player_item_as_chant ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_36:
		LDA		#<[sub_6AEFE]
		STA		word_3E
		LDA		#>[sub_6AEFE]
		STA		word_3E+1
		JMP		_bs_action_foreach_live_player

; =============== S U B	R O U T	I N E =======================================
sub_6AEFE:
		JSR		loc_69D3D
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_various:
		LDX		_bs_curr_actor
		LDA		byte_558,X
		STA		byte_42
		JMP		sub_6B076

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_wizards_ring:
		LDA		#$19
		JSR		_b4_sF_rand_mul_A
		ADC		#$A
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		JSR		_sram_b0_s8_player_MP_add
		JSR		_b4_s6_wndBTL_STAT
		JSR		_rand
		CMP		#$19
		BCS		locret_6AF33
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$A6 ; "the ring silently crumbles into pieces"
		LDA		#ITEM_WIZARDS_RING
		JSR		_b4_s20
		JMP		_sram_b0_s2A_player_inventory_item_remove
locret_6AF33:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_black_pepper:
		LDA		#<[sub_6AF53]
		LDX		#>[sub_6AF53]
		JSR		_store_AX_in_3E
		JSR		_bs_action_foreach_live_player
		LDA		#<[sub_6AF5C]
		STA		word_40
		LDA		#>[sub_6AF5C]
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6AF53:
		JSR		sub_6B3D2
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$9C ; "name sneezes!"
		JMP		.bs_action_foreach_live_player_continue

; =============== S U B	R O U T	I N E =======================================
sub_6AF5C:
		JSR		sub_6B5B7
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$9C ; "name sneezes!"
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_dream_ruby:
		JSR		_bs_extract_target_from_move
		STA		byte_CE
		JMP		_bs_emove_scorchingbreath_foreach_cb

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_strength_seed:
		JSR		_bs_get_current_actor_number
		TAX
		LDA		_players_STR,X
		JSR		sub_6AFB3
		STA		_players_STR,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_agility_seed:
		JSR		_bs_get_current_actor_number
		TAX
		LDA		_players_AGI,X
		JSR		sub_6AFB3
		STA		_players_AGI,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_intelligence_seed:
		JSR		_bs_get_current_actor_number
		TAX
		LDA		_players_INT,X
		JSR		sub_6AFB3
		STA		_players_INT,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_luck_seed:
		JSR		_bs_get_current_actor_number
		TAX
		LDA		_players_LUCK,X
		JSR		sub_6AFB3
		STA		_players_LUCK,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_vitality_seed:
		JSR		_bs_get_current_actor_number
		TAX
		LDA		_players_VIT,X
		JSR		sub_6AFB3
		STA		_players_VIT,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6AFB3:
		PHA
		JSR		_rand
		AND		#1
		ADC		#1
		JSR		_set_msg_number_parameter_F8_equ_A
		PLA
		CLC
		ADC		_msg_number_parameter_F8
		BCC		loc_6AFC7
		LDA		#$FF ; clamp at #$FF
loc_6AFC7:
		PHA
		LDA		byte_49
		CLC
		ADC		#$65
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_acorns_of_life:
		JSR		_rand
		AND		#3
		CLC
		ADC		#2
		STA		word_4
		JSR		_bs_get_current_actor_number
		ASL
		TAX
		CLC
		LDA		_players_MHP,X
		ADC		word_4
		STA		_players_MHP,X
		BCC		loc_6AFEF
		INC		_players_MHP+1,X
loc_6AFEF:
		LDA		word_4
		JSR		_set_msg_number_parameter_F8_equ_A
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$A8 ; "the maximum HP goes up # points"

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_medical_herb:
		LDA		#$F
		JSR		_b4_sF_rand_mul_A
		ADC		#$23
		STA		word_4
		LDA		#0
		STA		word_4+1
		JMP		.bs_spell_heal_single_precomputed

; =============== S U B	R O U T	I N E =======================================
nullsub_12:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_silver_harp:
		LDA		#BGM_JINGLE_SILVER_HARP
		JSR		_bs_play_jingle
		LDA		#<[sub_6B01E]
		STA		word_40
		LDA		#>[sub_6B01E]
		STA		word_40+1
		LDA		#0
		JMP		sub_6A3B1

; =============== S U B	R O U T	I N E =======================================
sub_6B01E:
		JSR		sub_6B5B7
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$B0 ; "<name><-N> is delighted."
		JMP		sub_6A3CB

; =============== S U B	R O U T	I N E =======================================
_bs_fake_spell_sphere_of_light:
		LDA		byte_6A6F
		CMP		#$85
		BNE		loc_6B048
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$B1 ; "The ball glows even more brightly."
		FARX	_bA_s8_ball_of_light_fx
		JSR		_b4_sB
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$B2 ; "The thread of light twines around the Archfiend and removes his robe of darkness."
		JSR		_b4_s5_do_message_speed_delay
		JSR		_b4_s5_do_message_speed_delay
		LDA		#$86
		STA		_enemy_roster_index_list
		JMP		_b4_s26
loc_6B048:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$40 ; "But nothing happens!"

; =============== S U B	R O U T	I N E =======================================
; Dude, this is amazingly complicated for such a silly thing
; Ultimately it reads some traits of the target enemy to determine how likely it is to work
;
_bs_fake_spell_fairy_water:
		JSR		_bs_extract_target_from_move
		BPL		loc_6B071 ; branch if the target is a player (nothing happens)
		JSR		_bs_some_attack_command
		LDA		#$14
		JSR		_b4_sF_rand_mul_A
		ADC		#$E ; effectively, [0,19] + 14
		STA		word_4
		LDA		#0
		STA		word_4+1
		LDA		word_6
		STA		_acting_enemy
		JSR		sub_6B5B7
		LDA		#$D ; seems to be a probability (maybe?)
		JSR		sub_6A337 ; determines whether it has any effect...
		BCC		loc_6B073 ; BCC->JB - branch down if we failed the random chance
		JMP		loc_6A42E
loc_6B071:
		STA		byte_D2
loc_6B073:
		JMP		_bs_it_has_no_effect_msg

; =============== S U B	R O U T	I N E =======================================
sub_6B076:
		LDA		byte_42
		STA		_msg_directobject_param
		JSR		_bs_get_current_actor_number

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_b4_s1F:
		ASL
		ASL
		ASL
		TAX
		LDA		#8
		STA		word_4
loc_6B085:
		LDA		_players_inventory_list,X
		CMP		#$FF
		BEQ		loc_6B092
		AND		#$7F
		CMP		byte_42
		BEQ		loc_6B098
loc_6B092:
		INX
		DEC		word_4
		BNE		loc_6B085
		RTS
loc_6B098:
		LDA		_players_inventory_list,X
		ORA		#$80 ; equip it?
		STA		_players_inventory_list,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s20:
		STA		word_4
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_6B0AB:
		LDA		_players_inventory_list,X
		CMP		word_4
		BEQ		loc_6B0B6
		INX
		INY
		BNE		loc_6B0AB
loc_6B0B6:
		STY		byte_CF
		RTS

; =============== S U B	R O U T	I N E =======================================
; A: item to check for
;
_bs_check_inventory:
		STA		byte_CF
		FARX	_b0_s45_check_if_item_equipped
		LDA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_pcAction_06_equip_attack:
		LDA		#0
		STA		byte_42
		FARX	_b0_s63_player_unequip_all_type_items
		LDX		_bs_curr_actor
		LDA		byte_558,X
		STA		byte_42
		JSR		sub_6B076
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$06 ; "name grabs the item"
		JSR		_b4_sA_clear_chatbox
		JMP		_bs_pcAction_00_attack

; =============== S U B	R O U T	I N E =======================================
_bs_play_jingle
		FARX	_bB_s3_apu_load
		FARX	_bB_s7_apu_wait
		SYSX	_apu_load,BGM_BATTLE
		RTS

; =============== S U B	R O U T	I N E =======================================
; seems to return CF=1 if the player is immobilized by a curse debuff
;
sub_6B0E5:
		JSR		_sram_b0_s1E_player_equipped_item_get
		LDY		#7 ; test for ~7 equipped items?
loc_6B0EA:
		DEY
		BMI		.bs_test_armor_of_hades ; bail if we underflowed
		LDA		word_4 ; load equipped weapon
		CMP		byte_6B156,Y
		BNE		loc_6B0EA ; loop again
; found matching weapon:
		LDA		byte_6B15D,Y ; load buff/debuff flags for that weapon
		STY		byte_CF
		DEY
		STY		byte_D0
		BPL		loc_6B109 ; branch if we were positive - IOW, matching weapon was not SWORD_OF_DESTRUCTION
		JSR		loc_6B142 ; store buff/debuff flags and test armor of hades
		BCS		locret_6B108 ; branch if we were struck by immobilization (and return true for immobilization)
		JSR		_rand
		CMP		#$C0 ; try a 75% chance for further immobilization ? ?
locret_6B108:
		RTS

loc_6B109:
		BNE		loc_6B118
		LDA		#3
		STA		byte_CF
		JSR		_sram_b0_s9_player_MP_subtract
		JSR		_b4_s6_wndBTL_STAT
		JMP		.bs_test_armor_of_hades

loc_6B118:
		CPY		#4
		BCC		loc_6B142
		JSR		_bs_extract_target_from_move
		BPL		.bs_test_armor_of_hades
		CPY		#4
		BNE		loc_6B132
		STA		_acting_enemy
		LDA		#$D
		JSR		sub_6A337
		CMP		#$4E
		BCS		.bs_test_armor_of_hades
		BCC		loc_6B140 ; UNCONDITIONAL

loc_6B132:
		TAX
		LDA		byte_6A73,X ; loads.. what? the enemy type?

; setup a ~6 times loop checking to see if the target enemy is a dragon
		LDY		#6
loc_6B138:
		DEY
		BMI		.bs_test_armor_of_hades ; branch if Y underflowed
		CMP		_bs_dragon_types_tbl,Y 
		BNE		loc_6B138
loc_6B140:
		LDA		#ATTACK_BUFF_FLAG_RACIAL_WEAKNESS ; prepare to set flag for bonus damage, I think

loc_6B142: ; <--- subroutine call target!
		JSR		_bs_incorporate_attackbuff
.bs_test_armor_of_hades:
		JSR		_sram_b0_s1E_player_equipped_item_get
		LDA		word_4+1 ; fetch equipped armor
		CMP		#ITEM_EARMOR_OF_HADES
		BNE		loc_6B154
		JSR		_rand
		CMP		#$AA ; random chance for curse debuff immobilization?
		RTS

loc_6B154:
		CLC
		RTS

byte_6B156:
		.BYTE	#ITEM_ESWORD_OF_DESTRUCTION
		.BYTE	#ITEM_ESTAFF_OF_FORCE
		.BYTE	#ITEM_EPOISON_NEEDLE
		.BYTE	#ITEM_EDEMON_AXE
		.BYTE	#ITEM_EMULTIEDGE_SWORD
		.BYTE	#ITEM_EZOMBIE_SLASHER
		.BYTE	#ITEM_EDRAGON_KILLER

; attack passive buff/debuff flags for each (but not all?) of the above
byte_6B15D:
		.BYTE	 #ATTACK_BUFF_HIGHER_CRIT
		.BYTE	 #ATTACK_BUFF_NONE
		.BYTE	 #ATTACK_BUFF_POISON_NEEDLE
		.BYTE	 (#ATTACK_BUFF_DEMON_AXE | #ATTACK_BUFF_HIGHER_CRIT)
		.BYTE	 #ATTACK_BUFF_MULTI_EDGE
    ; zombie slasher? apparently theres other logic to make sure these dont get used. why are they in the buffed weapon list anyway? is it because of monster racial bonuses?
    ; dragon killer?

_bs_dragon_types_tbl:
		.BYTE	#ENEMY_SNOW_DRAGON
		.BYTE	#ENEMY_SALAMANDER
		.BYTE	#ENEMY_GREEN_DRAGON
		.BYTE	#ENEMY_SKY_DRAGON
		.BYTE	#ENEMY_SCALGON
		.BYTE	#ENEMY_PUTREGON

; =============== S U B	R O U T	I N E =======================================
_bs_incorporate_attackbuff:
		ORA		_attack_buff_flags
		STA		_attack_buff_flags
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B170:
		LDX		_bs_curr_actor
		LDY		byte_558,X
loc_6B175:
		LDA		word_4
		STA		byte_59
		LDA		word_4+1
		STA		byte_5A
		TYA
		PHA
		JSR		_sram_b0_s1E_player_equipped_item_get
		PLA
		TAY
		LDA		word_4+1 ; load equipped armor
		CPY		#$13
		BCC		loc_6B18E
		CMP		#ITEM_EARMOR_OF_HADES
		BEQ		loc_6B1D2
loc_6B18E:
		CMP		#ITEM_EWATER_FLYING_CLOTH
		BEQ		loc_6B1B2
		CMP		#ITEM_EARMOR_OF_RADIANCE
		BEQ		loc_6B1B2
		CPY		#$13 ; huh?
		BCC		loc_6B1A4
		CMP		#ITEM_EMAGIC_ARMOR
		BEQ		loc_6B1B2
		CMP		#ITEM_ESACRED_ROBE
		BEQ		loc_6B1B2
		BNE		loc_6B1DB
loc_6B1A4:
		LDX		word_6 ; load equipped shield
		CPX		#ITEM_ESHIELD_OF_HEROES
		BEQ		loc_6B1B2
		CPY		#$D
		BCS		loc_6B1DB
		CMP		#ITEM_EDRAGON_MAIL
		BNE		loc_6B1DB
loc_6B1B2:
		CPY		#$13
		BCS		loc_6B1C1
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		AND		#4
		BNE		loc_6B1DB
loc_6B1C1:
		LDX		#byte_59
		LDA		#2
		JSR		_mul16_by_8
		LDA		#3
		JSR		_div16_by_8
		INC		byte_59
		JMP		loc_6B1DB
loc_6B1D2:
		LDX		#byte_59
		LDA		#4
		JSR		_div16_by_8
		INC		byte_59
loc_6B1DB:
		LDA		byte_59
		STA		word_4
		LDA		byte_5A
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B1E4:
		LDY		#$13
		BNE		loc_6B175

; =============== S U B	R O U T	I N E =======================================
sub_6B1E8:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		JSR		_sram_b0_s1E_player_equipped_item_get
		LDA		word_4+1
		CMP		#ITEM_ECLOAK_OF_EVASION
		BEQ		loc_6B209
		CMP		#ITEM_ESWORDEDGE_ARMOR
		BEQ		loc_6B211
		LDA		word_6
		CMP		#ITEM_ESHIELD_OF_SORROW
		BEQ		loc_6B235
loc_6B201:
		CLC
loc_6B202:
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		RTS
loc_6B209:
		JSR		_rand
		CMP		#$CC ; ~80% chance
		JMP		loc_6B202
loc_6B211:
		JSR		_bs_get_current_actor_number
		BPL		loc_6B201
		STA		byte_10
		LDA		_acting_enemy
		PHA
		LDA		byte_10
		STA		_acting_enemy
		LDA		#$D
		JSR		sub_6A337
		PLA
		STA		_acting_enemy
		LDA		byte_59
		CMP		#$FF
		BEQ		loc_6B201
		LDA		#1
		JSR		_bs_incorporate_attackbuff
		JMP		loc_6B201
loc_6B235:
		LDA		#$20
		JSR		_bs_incorporate_attackbuff
		JMP		loc_6B201

; =============== T A B	L E =================================================
; first pass messages for using items in battle
; $8E - "<name> raises the <item> overhead.", etc.
;
_bs_item_use_msg_tbl:
		.BYTE	$8E ; ITEM_WIZARDS_WAND
		.BYTE	$8E ; ITEM_THORS_SWORD
		.BYTE	$8E ; ITEM_SNOWBLAST_SWORD
		.BYTE	$8E ; ITEM_STAFF_OF_RAIN
		.BYTE	$8E ; ITEM_STAFF_OF_REFLECTION
		.BYTE	$8E ; ITEM_SWORD_OF_ILLUSION
		.BYTE	$8E ; ITEM_THUNDER_SWORD
		.BYTE	$8E ; ITEM_STAFF_OF_THUNDER
		.BYTE	$8E ; ITEM_SWORD_OF_KINGS
		.BYTE	$94 ; ITEM_OROCHI_SWORD
		.BYTE	$8E ; ITEM_STAFF_OF_JUDGEMENT
		.BYTE	$9A ; ITEM_SHIELD_OF_STRENGTH
		.BYTE	$9F ; ITEM_SACRED_AMULET
		.BYTE	$9F ; ITEM_RING_OF_LIFE
		.BYTE	$9F ; ITEM_SHOES_OF_HAPPINESS
		.BYTE	$9F ; ITEM_GOLDEN_CLAW
		.BYTE	$9F ; ITEM_METEORITE_ARMBAND
		.BYTE	$A5 ; ITEM_WIZARDS_RING
		.BYTE	$9B ; ITEM_BLACK_PEPPER
		.BYTE	$9A ; ITEM_SAGES_STONE
		.BYTE	$9E ; ITEM_DREAM_RUBY
		.BYTE	$03 ; ITEM_STRENGTH_SEED
		.BYTE	$03 ; ITEM_AGILITY_SEED
		.BYTE	$03 ; ITEM_VITALITY_SEED
		.BYTE	$03 ; ITEM_LUCK_SEED
		.BYTE	$03 ; ITEM_INTELLIGENCE_SEED
		.BYTE	$A7 ; ITEM_ACORNS_OF_LIFE
		.BYTE	$03 ; ITEM_MEDICAL_HERB
		.BYTE	$03 ; ITEM_ANTIDOTE_HERB
		.BYTE	$9B ; ITEM_FAIRY_WATER
		.BYTE	$AA ; ITEM_WING_OF_WYVERN
		.BYTE	$AB ; ITEM_LEAF_OF_WORLD_TREE
		.BYTE	$AC ; ITEM_BLANK_6A (message dummied out)
		.BYTE	$03 ; ITEM_FULL_MOON_HERB
		.BYTE	$AE ; ITEM_FAIRY_FLUTE
		.BYTE	$AF ; ITEM_SILVER_HARP
		.BYTE	$03 ; ITEM_SPHERE_OF_LIGHT
		.BYTE	$9B ; ITEM_POISON_MOTH_POWDER
		.BYTE	$B3 ; ITEM_SPIDERS_WEB
		.BYTE	$9A ; ITEM_STONES_OF_SUNLIGHT

; =============== T A B	L E =================================================
; for some reason we display these messages specially
;
_bs_weapon_effect_msg_tbl:
		.BYTE	$8F ; "Fireballs burst forth from the staff." ITEM_WIZARDS_WAND
		.BYTE	$90 ; "A deafening thunderclap rips through the air." ITEM_THORS_SWORD
		.BYTE	$91 ; "A blast of snow storms out from the sword." ITEM_SNOWBLAST_SWORD
		.BYTE	$97 ; "Black rain clouds engulf your foe." ITEM_STAFF_OF_RAIN
		.BYTE	$98 ; "Ripples of light form a shining wall." ITEM_STAFF_OF_REFLECTION
		.BYTE	$99 ; "A pink fog flows out from the sword." ITEM_SWORD_OF_ILLUSION
		.BYTE	$92 ; "A lightning bolt bursts from the sword." ITEM_THUNDER_SWORD
		.BYTE	$93 ; "A thunderclap peals from the staff." ITEM_STAFF_OF_THUNDER
		.BYTE	$90 ; "A deafening thunderclap rips through the air." ITEM_SWORD_OF_KINGS
		.BYTE	$95 ; "A blue light dances across the ground." ITEM_OROCHI_SWORD
		.BYTE	$96 ; "The fireballs burst forth and split into pieces." ; ITEM_STAFF_OF_JUDGEMENT

; =============== T A B	L E =================================================
; for each item usable in battle, an index in the spell effect table, which includes fake spells for this purpose
;
_bs_item_effect_tbl:
		.BYTE	#SPELL_BLAZE ; ITEM_WIZARDS_WAND
  	.BYTE	#SPELL_FIREVOLT ; ITEM_THORS_SWORD
		.BYTE	#SPELL_SNOWBLAST ; ITEM_SNOWBLAST_SWORD
		.BYTE	#SPELL_STOPSPELL ; ITEM_STAFF_OF_RAIN
		.BYTE	#SPELL_BOUNCE ; ITEM_STAFF_OF_REFLECTION
		.BYTE	#SPELL_CHAOS ; ITEM_SWORD_OF_ILLUSION
		.BYTE	#SPELL_BOOM ; ITEM_THUNDER_SWORD
		.BYTE	#SPELL_FIREBANE ; ITEM_STAFF_OF_THUNDER
		.BYTE	#SPELL_INFERMOST ; ITEM_SWORD_OF_KINGS
		.BYTE	#SPELL_DEFENCE ; ITEM_OROCHI_SWORD
		.BYTE #SPELL_INFERNOS ; ITEM_STAFF_OF_JUDGEMENT
		.BYTE #SPELL_HEALMORE ; ITEM_SHIELD_OF_STRENGTH
		.BYTE #ITEM_BATTLE_EFFECT_VARIOUS ; ITEM_SACRED_AMULET
		.BYTE #ITEM_BATTLE_EFFECT_VARIOUS ; ITEM_RING_OF_LIFE
		.BYTE #ITEM_BATTLE_EFFECT_VARIOUS ; ITEM_SHOES_OF_HAPPINESS
		.BYTE #ITEM_BATTLE_EFFECT_VARIOUS ; ITEM_GOLDEN_CLAW
		.BYTE	#ITEM_BATTLE_EFFECT_VARIOUS ; ITEM_METEORITE_ARMBAND
		.BYTE	#ITEM_BATTLE_EFFECT_WIZARDS_RING ; ITEM_WIZARDS_RING
		.BYTE	#ITEM_BATTLE_EFFECT_BLACK_PEPPER ; ITEM_BLACK_PEPPER
		.BYTE	#SPELL_HEALUS ; ITEM_SAGES_STONE
		.BYTE	#ITEM_BATTLE_EFFECT_DREAM_RUBY ; ITEM_DREAM_RUBY
		.BYTE	#ITEM_BATTLE_EFFECT_STRENGTH_SEED ; ITEM_STRENGTH_SEED
		.BYTE	#ITEM_BATTLE_EFFECT_AGILITY_SEED ; ITEM_AGILITY_SEED
		.BYTE	#ITEM_BATTLE_EFFECT_VITALITY_SEED ; ITEM_VITALITY_SEED
		.BYTE	#ITEM_BATTLE_EFFECT_LUCK_SEED ; ITEM_LUCK_SEED
		.BYTE	#ITEM_BATTLE_EFFECT_INTELLIGENCE_SEED ; ITEM_INTELLIGENCE_SEED
		.BYTE	#ITEM_BATTLE_EFFECT_ACORNS_OF_LIFE ; ITEM_ACORNS_OF_LIFE
		.BYTE	#ITEM_BATTLE_EFFECT_MEDICAL_HERB ; ITEM_MEDICAL_HERB
		.BYTE	#SPELL_ANTIDOTE ; ITEM_ANTIDOTE_HERB
		.BYTE	#ITEM_BATTLE_EFFECT_FAIRY_WATER ; ITEM_FAIRY_WATER
		.BYTE	#SPELL_RETURN ; ITEM_WING_OF_WYVERN
		.BYTE	#SPELL_REVIVE ; ITEM_LEAF_OF_WORLD_TREE
		.BYTE	#ITEM_BATTLE_EFFECT_DUMMY_42 ; ITEM_BLANK_6A
		.BYTE	#SPELL_NUMBOFF ; ITEM_FULL_MOON_HERB
		.BYTE	#SPELL_SLEEP ; ITEM_FAIRY_FLUTE
		.BYTE	#ITEM_BATTLE_EFFECT_SILVER_HARP ; ITEM_SILVER_HARP
		.BYTE	#ITEM_BATTLE_EFFECT_SPHERE_OF_LIGHT ; ITEM_SPHERE_OF_LIGHT
		.BYTE	#SPELL_CHAOS ; ITEM_POISON_MOTH_POWDER
		.BYTE	#SPELL_SLOW ; ITEM_SPIDERS_WEB
		.BYTE	#SPELL_CURSEOFF ; ITEM_STONES_OF_SUNLIGHT

; =============== S U B	R O U T	I N E =======================================
_b4_s1A_status_pal_adjust_and_update:
		FARX	_bD_s28_frame_palette_by_status_adjust
		LDX		#0
		JSR		_pal_set_no_fade
		JMP		_wait_for_nmi_is_over_sync

; =============== S U B	R O U T	I N E =======================================
; I don't remember 100% what this does, but it gets used a lot
_bs_extract_target_from_move:
		LDX		_bs_curr_actor
		LDA		byte_54C,X

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; A: An entry from the turn order table. the #$80 enemy bit is inspected and then the bottom 2 or 3 bits are read to determine 
; The player or enemy actor number
;
_bs_get_actor_number:
		PHP
		AND		#$87
		BMI		loc_6B2AF
		AND		#3
loc_6B2AF:
		AND		#7
		PLP
		RTS

; =============== S U B	R O U T	I N E =======================================
; read the current actor's entry from the turn order table and return the 'actor' number
;
_bs_get_current_actor_number:
		LDX		_bs_curr_actor
		LDA		byte_540,X
		JMP		_bs_get_actor_number ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6B2BB:
		PHA
		ORA		byte_566
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2C4:
		PHA
		EOR		#$FF
		AND		byte_566
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; Stores A into _msg_number_parameter_F8 and clears out the more significant bytes
_set_msg_number_parameter_F8_equ_A:
		STA		_msg_number_parameter_F8
		LDA		#0
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2DB:
		PHA
		LDA		byte_566
		ORA		#$10
		STA		byte_566
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2E6:
		LDA		#1
		ORA		byte_568
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2EF:
		LDA		byte_568
		AND		#3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2F5:
		LDA		#$80

; =============== S U B	R O U T	I N E =======================================
; Incorporates A into battle flags
;
_bs_set_battleflag_567:
		ORA		byte_567
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B2FE:
		LDA		#$7F

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_6B300:
		AND		byte_567
		STA		byte_567
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B307:
		ORA		byte_568
		STA		byte_568
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B30E:
		LDA		#0

; =============== S U B	R O U T	I N E =======================================
sub_6B310:
		STA		word_4
		JSR		_bs_extract_target_from_move
		BMI		locret_6B32E
		STA		byte_D2
		LDA		byte_566
		AND		#$C0
		BEQ		locret_6B32E
		LDA		word_4
		BNE		sub_6B333

; =============== S U B	R O U T	I N E =======================================
sub_6B324:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		#$52	; "<name> is ironized"
		DEC		word_4
		BEQ		loc_6B420
		LDA		#$53	; "<hero>'s party is ironized"
loc_6B420:
		JSR		_b4_s8_msg_mFF_arg0_and_delay_or_wait_for_keypress
		PLA
		PLA
locret_6B32E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B32F:
		LDA		#$80
		BNE		sub_6B310

; =============== S U B	R O U T	I N E =======================================
sub_6B333:
		JSR		_b4_s1B
		STY		byte_D2
		LDA		#$53
		BNE		sub_6B324

; =============== S U B	R O U T	I N E =======================================
_b4_s1B:
		LDY		#0
loc_6B33E:
		JSR		_player_idx_to_X_and_status_check
		BMI		locret_6B346
		INY
		BNE		loc_6B33E
locret_6B346:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B347:
		LDA		#$BF
		JSR		sub_6B300
		LDA		byte_567
		BPL		loc_6B3C5
		LDA		byte_CE
		STA		byte_42
		JSR		_bs_get_current_actor_number
		BMI		loc_6B35E
		CMP		byte_42
		BEQ		loc_6B3C5
loc_6B35E:
		JSR		sub_6B3D2
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$F
		BEQ		loc_6B3C5
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_6B3C5
loc_6B372:
		LDA		#$40 ; set Bounce flag on battle flags
		JSR		_bs_set_battleflag_567
		LDA		#SFX_BOUNCE
		FARX	_bB_s3_apu_load
		SYSX	_sys0F_msg_mFF_arg0_and_delay_or_wait_for_keypress,$56 ; "The wall of light reflects the spell back"
		JSR		_b4_sB
		JSR		_bs_get_current_actor_number
		BMI		loc_6B38F
		STA		byte_CE
		STA		byte_D2
		SEC
		LDA		#0
		RTS
loc_6B38F:
		STA		_acting_enemy
		JSR		sub_6B5B7
		SEC
		LDA		#1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B398:
		LDA		#$BF
		JSR		sub_6B300
		LDA		byte_567
		BPL		loc_6B3C5
		JSR		sub_6B5B7
		LDA		_acting_enemy
		STA		byte_42
		JSR		_bs_get_current_actor_number
		BPL		loc_6B3B2
		CMP		byte_42
		BEQ		loc_6B3C5
loc_6B3B2:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530+1,X
		AND		#$F
		BEQ		loc_6B3C5
		LDA		byte_530,X
		AND		byte_530+1,X
		BMI		loc_6B372
loc_6B3C5:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B3C7:
		JSR		_bs_get_current_actor_number
		PHA
		STA		_acting_enemy
		JSR		sub_6B5B7
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B3D2:
		LDA		byte_CE
		STA		byte_D2
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_it_has_no_effect_msg:
		SYSX	_sys10_msg_mFF_arg0_and_delay_or_wait_for_keypress_break,$12 ; "it has no effect on name"

; =============== S U B	R O U T	I N E =======================================
sub_6B3DB:
		LDX		#3
loc_6B3DD:
		LDA		byte_6A77,X
		BPL		loc_6B3E7
		LDA		byte_6A73,X
		STA		word_4
loc_6B3E7:
		DEX
		BPL		loc_6B3DD
		INX
loc_6B3EB:
		LDA		byte_6A77,X
		BPL		loc_6B3F7
		LDA		byte_6A73,X
		CMP		word_4
		BNE		loc_6B401
loc_6B3F7:
		INX
		CPX		#4
		BNE		loc_6B3EB
		LDA		#$20
		JMP		sub_6B307
loc_6B401:
		LDA		#$DF
		AND		byte_568
		STA		byte_568
		RTS

byte_6B422:
		.BYTE	$20,$20,$20,$20,$20,$20,$20,$20
byte_6B42A:
		.BYTE	$12,$16,$1A,$1E,$22,$26,$2A,$2E
byte_6B432:
		.BYTE	  2,  4,  6,  8, $A, $C, $E,$C8
byte_6B43A:
		.BYTE	$FF,$FF,$FF,$FF
byte_6B43E:
		.BYTE	$91,$FF,$FF,$FF
byte_6B442:
		.BYTE	$71,$C6,$FF,$FF
byte_6B446:
		.BYTE	$70,$B3,$EA,$FF
byte_6B44A:
		.BYTE	$FF,$80,$55,$20
byte_6B44E:
		.BYTE	$FF,$C0,$80,$40

; =============== T A B	L E =================================================
; Some information about spells
; EEmmmmmm
; E - elemental data
;    %01 - Ice
;    %11 - Fire
; m - MP cost
;
_SPELL_FLAGS_00 = $00
_SPELL_FLAGS_40 = $40
_SPELL_FLAGS_50 = $50
_SPELL_FLAGS_80 = $80
_SPELL_FLAGS_C0 = $C0
_b4_dD_spells_list:
		.BYTE	(_SPELL_FLAGS_C0|2)  ; SPELL_BLAZE
		.BYTE	(_SPELL_FLAGS_C0|6)  ; SPELL_BLAZEMORE
		.BYTE	(_SPELL_FLAGS_C0|12) ; SPELL_BLAZEMOST
		.BYTE	(_SPELL_FLAGS_C0|4)  ; SPELL_FIREBAL
		.BYTE	(_SPELL_FLAGS_C0|6)  ; SPELL_FIREBANE
		.BYTE (_SPELL_FLAGS_C0|12) ; SPELL_FIREVOLT
		.BYTE (_SPELL_FLAGS_40|5)  ; SPELL_BANG
		.BYTE (_SPELL_FLAGS_40|9)  ; SPELL_BOOM
		.BYTE (_SPELL_FLAGS_40|18) ; SPELL_EXPLODET
		.BYTE (_SPELL_FLAGS_C0|3)  ; SPELL_ICEBOLT
		.BYTE (_SPELL_FLAGS_C0|6)  ; SPELL_SNOWBLAST
		.BYTE (_SPELL_FLAGS_C0|12) ; SPELL_SNOWSTORM
		.BYTE (_SPELL_FLAGS_40|9)  ; SPELL_ICESPEARS
		.BYTE (_SPELL_FLAGS_C0|4)  ; SPELL_INFERNOS
		.BYTE (_SPELL_FLAGS_C0|6)  ; SPELL_INFERMORE
		.BYTE (_SPELL_FLAGS_C0|9)  ; SPELL_INFERMOST
		.BYTE	(_SPELL_FLAGS_C0|8)  ; SPELL_ZAP
		.BYTE	(_SPELL_FLAGS_40|30) ; SPELL_LIGHTNING
		.BYTE	(_SPELL_FLAGS_C0|7)  ; SPELL_BEAT
		.BYTE	(_SPELL_FLAGS_C0|7)  ; SPELL_DEFEAT
		.BYTE	(_SPELL_FLAGS_40|1)  ; SPELL_SACRIFICE
		.BYTE	(_SPELL_FLAGS_C0|2)  ; SPELL_EXPEL
		.BYTE	(_SPELL_FLAGS_C0|7)  ; SPELL_LIMBO
		.BYTE	(_SPELL_FLAGS_C0|0)  ; SPELL_ROBMAGIC
		.BYTE	(_SPELL_FLAGS_C0|3)  ; SPELL_SLOW
		.BYTE	(_SPELL_FLAGS_00|3)  ; SPELL_SPEEDUP
		.BYTE	(_SPELL_FLAGS_80|3)  ; SPELL_HEAL
		.BYTE	(_SPELL_FLAGS_80|5)  ; SPELL_HEALMORE
		.BYTE	(_SPELL_FLAGS_80|7)  ; SPELL_HEALALL
		.BYTE	$00                  ; SPELL_DUMMY_1D
		.BYTE	(_SPELL_FLAGS_00|18) ; SPELL_HEALUS
		.BYTE	(_SPELL_FLAGS_00|62) ; SPELL_HEALUSALL
		.BYTE	(_SPELL_FLAGS_80|10) ; SPELL_VIVIFY
		.BYTE	(_SPELL_FLAGS_80|20) ; SPELL_REVIVE
		.BYTE	(_SPELL_FLAGS_C0|3)  ; SPELL_SLEEP
		.BYTE	(_SPELL_FLAGS_00|3)  ; SPELL_AWAKE
		.BYTE	(_SPELL_FLAGS_C0|3)  ; SPELL_STOPSPELL
		.BYTE	(_SPELL_FLAGS_C0|4)  ; SPELL_SURROUND
		.BYTE	(_SPELL_FLAGS_00|8)  ; SPELL_RETURN
		.BYTE	(_SPELL_FLAGS_C0|5)  ; SPELL_CHAOS
		.BYTE	(_SPELL_FLAGS_80|12) ; SPELL_TRANSFORM
		.BYTE	(_SPELL_FLAGS_00|24) ; SPELL_BEDRAGON
		.BYTE	(_SPELL_FLAGS_00|6)  ; SPELL_IRONIZE
		.BYTE	(_SPELL_FLAGS_C0|3)  ; SPELL_SAP
		.BYTE	(_SPELL_FLAGS_C0|4)  ; SPELL_DEFENCE
		.BYTE	(_SPELL_FLAGS_80|3)  ; SPELL_UPPER
		.BYTE	(_SPELL_FLAGS_00|4)  ; SPELL_INCREASE
		.BYTE	(_SPELL_FLAGS_00|4)  ; SPELL_INCREASE2
		.BYTE	(_SPELL_FLAGS_00|8)  ; SPELL_BOUNCE
		.BYTE	(_SPELL_FLAGS_00|6)  ; SPELL_BARRIER
		.BYTE	(_SPELL_FLAGS_80|6)  ; SPELL_BIKILL
		.BYTE	(_SPELL_FLAGS_00|20) ; SPELL_CHANCE
		.BYTE	(_SPELL_FLAGS_80|2)  ; SPELL_ANTIDOTE
		.BYTE	(_SPELL_FLAGS_80|6)  ; SPELL_NUMBOFF
		.BYTE	(_SPELL_FLAGS_C0|18) ; SPELL_CURSEOFF
		.BYTE	(_SPELL_FLAGS_00|4)  ; SPELL_REPEL
		.BYTE	(_SPELL_FLAGS_00|12) ; SPELL_DAYNIGHT
		.BYTE	(_SPELL_FLAGS_00|0)  ; SPELL_OPEN
		.BYTE	(_SPELL_FLAGS_00|3)  ; SPELL_XRAY
		.BYTE	(_SPELL_FLAGS_00|8)  ; SPELL_OUTSIDE
		.BYTE	(_SPELL_FLAGS_00|15) ; SPELL_INVISIBLE
		.BYTE	(_SPELL_FLAGS_00|2)  ; SPELL_STEPGUARD		

; =============== T A B	L E =================================================
; spell operands for common spell handling
;
_bs_attackspell_single_tbl:
		.BYTE	 #SPELL_BLAZE, #SPELL_BLAZEMORE, #SPELL_BLAZEMOST, #SPELL_ICEBOLT
_bs_attackspell_multiple_tbl:
		.BYTE	 #SPELL_FIREBAL, #SPELL_FIREBANE, #SPELL_EXPLODET
		.BYTE	 #SPELL_SNOWBLAST, #SPELL_SNOWSTORM
		.BYTE	 #SPELL_INFERNOS, #SPELL_INFERMORE, #SPELL_INFERMOST
_bs_heal_single_tbl:
		.BYTE	 #SPELL_HEAL, #SPELL_HEALMORE, #SPELL_HEALALL
_bs_heal_multiple_tbl:
		.BYTE	 #SPELL_HEALUS, #SPELL_HEALUSALL

; =============== T A B	L E S =================================================
; struct randrange { u8 base; u8 delta; };
; delta is sent into the randomizer, and base is added to the result
;
_bs_player_spell_randrange_tbl:
		.BYTE	 $08,$06 ; blaze
		.BYTE	 $46,$14 ; blazemore
		.BYTE	 $A0,$28 ; blazemost
		.BYTE	 $10,$08 ; firebal
		.BYTE	 $1E,$0C ; firebane
		.BYTE	 $58,$18 ; firevolt
		.BYTE	 $10,$08 ; bang
		.BYTE	 $34,$10 ; boom
		.BYTE	 $78,$28 ; explodet
		.BYTE	 $19,$0A ; icebolt
		.BYTE	 $2A,$10 ; snowblast
		.BYTE	 $58,$18 ; snowstorm 
		.BYTE	 $3C,$14 ; icespears
		.BYTE	 $08,$10 ; infernos
		.BYTE	 $19,$1E ; infermore
		.BYTE	 $3C,$3C ; infermost
 		.BYTE	 $46,$14 ; zap
		.BYTE	 $AF,$32 ; lightning

; uhhh something similar, for enemy spells
word_6B4C5:
		.BYTE	 $07,$05
		.BYTE	 $34,$0A
		.BYTE	 $5C,$24
		.BYTE	 $10,$08
		.BYTE	 $0A,$08
		.BYTE	 $16,$0C
		.BYTE	 $3C,$14
		.BYTE	 $20,$0A
		.BYTE	 $37,$0C
		.BYTE	 $06,$0C
		.BYTE	 $0E,$14
		.BYTE	 $1E,$20
		.BYTE	 $06,$04
		.BYTE	 $1E,$0A
		.BYTE	 $50,$14
		.BYTE	 $09,$0C
		.BYTE	 $28,$14
		.BYTE	 $64,$28

; something similar for heal spells?
_bs_healing_randrange_tbl:
		.BYTE	 $1E,$0A ; heal
		.BYTE	 $4B,$14 ; healmore
		.BYTE	 $FF,$00 ; healall
		.BYTE	 $1E,$0A ; dummy_1d
		.BYTE	 $3E,$10 ; healus
		.BYTE	 $FF,$FF ; healusall

; it looks like this is used for remapping enemy moves (starting at $31, emove_heal_various_single) to healing power randranges
_bs_espell_heal_lookup_tbl:
		.BYTE	  0 ; heal $31
		.BYTE	  1 ; healmore $32
		.BYTE	  2 ; healall $33
		.BYTE	  4 ; healus $34
		.BYTE	  5 ; healusall $35
; theres a second batch of enemy moves
		.BYTE	  0 ; heal $36
		.BYTE	  1 ; healmore $37
		.BYTE	  2 ; healall $38
		.BYTE	  4 ; healus $39
		.BYTE	  5 ; healusall $3A

; =============== S U B	R O U T	I N E =======================================
_b4_s1:
		LDX		#0
		STX		byte_59
loc_6B503:
		LDA		byte_6A77,X
		BPL		loc_6B52C
		TXA
		PHA
		ASL
		ASL
		ASL
		TAX
		LDA		#8
		STA		byte_5A
loc_6B512:
		LDA		byte_6A7B,X
		AND		#7
		ASL
		TAY
		LDA		byte_530,Y
		AND		byte_530+1,Y
		BMI		loc_6B528
		INX
		DEC		byte_5A
		BNE		loc_6B512
		BEQ		loc_6B52A
loc_6B528:
		INC		byte_59
loc_6B52A:
		PLA
		TAX
loc_6B52C:
		INX
		CPX		#4
		BNE		loc_6B503
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s2:
		LDY		_acting_enemy
		INY
		LDX		#0
loc_6B537:
		LDA		byte_6A77,X
		BMI		loc_6B542
		INX
		CPX		#4
		BCC		loc_6B537
		RTS
loc_6B542:
		INX
		DEY
		BNE		loc_6B537
		DEX
		STX		byte_42
		STX		byte_5A
		LDX		byte_42
		LDA		byte_6A6F,X
		STA		byte_59
		TXA
		ASL
		ASL
		ASL
		TAX
		LDY		#0
		LDA		#8
		STA		byte_42
loc_6B55D:
		LDA		byte_6A7B,X
		BPL		loc_6B585
		TXA
		PHA
		LDA		byte_6A7B,X
		AND		#7
		ASL
		TAX
		LDA		byte_530,X
		LSR
		LSR
		AND		#3
		CMP		byte_5A
		BEQ		loc_6B579
		CLC
		BCC		loc_6B580
loc_6B579:
		LDA		byte_530+1,X
		AND		byte_530,X
		ROL
loc_6B580:
		PLA
		TAX
		BCC		loc_6B585
		INY
loc_6B585:
		INX
		DEC		byte_42
		BNE		loc_6B55D
		STY		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B58D:
;		JSR		_b4_s2
;		LDA		byte_5A
;		STA		byte_59
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B595:
		JSR		sub_6B91D
		LDA		byte_59
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_6B5A0:
		LDA		byte_6A7B,X
		BPL		loc_6B5AC
		AND		#7
		CMP		_acting_enemy
		BEQ		loc_6B5B0
		INY
loc_6B5AC:
		INX
		JMP		loc_6B5A0
loc_6B5B0:
		STY		byte_B9
		LDA		byte_59
		STA		word_B7+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B5B7:
		JSR		_b4_s12
		STA		byte_D2
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s12:
		JSR		sub_6B91D
		LDX		byte_59
		LDA		byte_6A6F,X
		STA		byte_5A
		LDY		#0
		LDX		#0
loc_6B5CB:
		LDA		byte_6A6F,X
		CMP		byte_5A
		BNE		loc_6B5F9
		STX		byte_5B
		TXA
		ASL
		ASL
		ASL
		TAX
		LDA		#8
		STA		byte_5C
loc_6B5DD:
		LDA		byte_6A7B,X
		BPL		loc_6B5F2
		LDA		byte_59
		CMP		byte_5B
		BNE		loc_6B5F1
		LDA		byte_6A7B,X
		AND		#7
		CMP		_acting_enemy
		BEQ		loc_6B5FE
loc_6B5F1:
		INY
loc_6B5F2:
		INX
		DEC		byte_5C
		BNE		loc_6B5DD
		LDX		byte_5B
loc_6B5F9:
		INX
		CPX		#4
		BNE		loc_6B5CB
loc_6B5FE:
		JSR		sub_6B927
		TYA
		AND		#7
		ASL
		ASL
		ORA		#$80
		ORA		byte_5A
		PHA
		JSR		sub_6B91D
		TAX
		LDA		byte_6A6F,X
		LDX		#3
		LDY		#0
loc_6B616:
		CMP		byte_6A6F,X
		BNE		loc_6B61C
		INY
loc_6B61C:
		DEX
		BPL		loc_6B616
		DEY
		BNE		loc_6B641
		LDA		byte_59
		ASL
		ASL
		ASL
		TAX
		LDY		#0
		STY		byte_5A
loc_6B62C:
		LDA		byte_6A7B,X
		BPL		loc_6B633
		INC		byte_5A
loc_6B633:
		INX
		INY
		CPY		#8
		BNE		loc_6B62C
		DEC		byte_5A
		BNE		loc_6B641
		PLA
		ORA		#$20
		PHA
loc_6B641:
		PLA
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
; reads _acting_enemy's HP into u16[59]
;
_bs_read_acting_enemy_hp:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		_enemy_HP,X
		STA		byte_59
		LDA		_enemy_HP+1,X
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; Heals an enemy (which one?) by u16[65]
;
_b4_s19_heal_enemy:
		JSR		_bs_read_enemy_prop_HP ; load enemy's MHP into u16[5B]
		LDA		byte_59
		STA		byte_5B
		LDA		byte_5A
		STA		byte_5C
		JSR		_bs_read_acting_enemy_hp
		CLC
; add byte_65 (HP restoration) to current HP
		LDA		byte_65
		ADC		byte_59
		STA		byte_59
		LDA		byte_66
		ADC		byte_5A
		STA		byte_5A
		BCS		loc_6B68C
		CMP		byte_5C
		BEQ		loc_6B679
		BCS		loc_6B68C
		BCC		loc_6B681
loc_6B679:
		LDA		byte_59
		CMP		byte_5B
		BEQ		loc_6B681
		BCS		loc_6B68C
loc_6B681:
		LDA		byte_59
		STA		_enemy_HP,X
		LDA		byte_5A
		STA		_enemy_HP+1,X
		RTS
loc_6B68C:
		LDA		byte_5B
		STA		byte_59
		LDA		byte_5C
		STA		byte_5A
		JMP		loc_6B681

; =============== S U B	R O U T	I N E =======================================
sub_6B697:
		JSR		_bs_read_acting_enemy_hp
		SEC
		LDA		byte_59
		SBC		byte_65
		STA		byte_59
		LDA		byte_5A
		SBC		byte_66
		STA		byte_5A
		BCC		loc_6B6AF
		ORA		byte_59
		BEQ		loc_6B6AF
		BNE		loc_6B681
loc_6B6AF:
		LDA		#0
		STA		byte_59
		STA		byte_5A
		JMP		loc_6B681

; =============== S U B	R O U T	I N E =======================================
; u16[59] = enemy prop HP (requires reading 2 prop bytes)
; 
_bs_read_enemy_prop_HP:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#7
		JSR		_bs_prepare_read_enemy_prop_byte
		STA		byte_59
		LDY		#$15
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#3
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; u8[59] = enemy prop level, preserving registers (i guess because it's called externally)
;
_bs_read_enemy_prop_LV:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		_bs_prepare_read_enemies_lib
		LDY		#0
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#$3F
		STA		byte_59
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_bs_load_acting_enemy_MP:
		LDX		_acting_enemy ; actingEnemy
		LDA		_enemy_MP,X ; must be an enemy table here
		STA		byte_59 ; enemyMiscStats_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B6EB:
		JSR		_bs_load_enemy_prop_MP
		LDA		byte_59
		STA		byte_5A
		JSR		_bs_load_acting_enemy_MP
		CLC
		LDA		byte_65
		ADC		byte_59
		BCS		loc_6B704
		CMP		byte_5A
		BCS		loc_6B704
loc_6B700:
		STA		_enemy_MP,X
locret_6B703:
		RTS
loc_6B704:
		LDA		byte_5A
		STA		byte_59
		JMP		loc_6B700

; =============== S U B	R O U T	I N E =======================================
; deducts actionCost from the ActingEnemy's MP.
_bs_deduct_acting_enemy_MP:
		JSR		_bs_load_acting_enemy_MP
; special handling for $FF infinite
		CMP		#$FF
		BEQ		.enemyMPWasInfinite
; subtract action cost from MP
		SEC
		SBC		byte_65 ; actionCost
		BCC		.mpclamp0
		LDX		_acting_enemy ; actingEnemy
; store remaining MP to stats
		STA		_enemy_MP,X
		PHA
		PLA
		RTS
.enemyMPWasInfinite:
; return the remaining MP as 255
		LDA		#$FF
		RTS
.mpclamp0:
; the enemy MP isn't stored back out, and 0 is returned
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B725:
		LDX		_acting_enemy
		LDA		#0
		STA		_enemy_MP,X
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
; u16[59] = enemy prop MP, MSB safely cleared even though MP is only one byte
;
_bs_load_enemy_prop_MP:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#8
		JSR		_bs_prepare_read_enemy_prop_byte
		STA		byte_59
		LDA		#0
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; fetches an enemy's (realtime?) agility into u8[59]
;
sub_6B73E:
		LDX		_acting_enemy
		LDA		_enemy_AGI,X
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
; u8[59] = enemy prop AGI
;
_bs_load_enemy_prop_AGI:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#3
		JSR		_bs_prepare_read_enemy_prop_byte
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B751:
;		JSR		sub_6B73E
;		CLC
;		LDA		byte_65
;		ADC		byte_59
;		BCC		loc_6B75D
;		LDA		#$FF
;loc_6B75D:
;		STA		byte_59
;		STA		_enemy_AGI,X
;		RTS

; =============== S U B	R O U T	I N E =======================================
; u16[59] = enemy prop ATK (requires reading 2 prop bytes)
_bs_load_enemy_prop_ATK:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#5
		JSR		_bs_prepare_read_enemy_prop_byte
		STA		byte_59
		LDY		#$13
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#3
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B777:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		_enemy_DEF,X
		STA		byte_59
		LDA		byte_530+1,X
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; u16[59] = enemy prop DEF (requires reading 2 prop bytes)
; but uhhh is byte #$14 really def?
;
_bs_load_enemy_prop_DEF:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#6
		JSR		_bs_prepare_read_enemy_prop_byte
		STA		byte_59
		LDY		#$14
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#3
		STA		byte_5A
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B79A:
;		JSR		sub_6B777
;		CLC
;		LDA		byte_65
;		ADC		byte_59
;		STA		byte_59
;		LDA		byte_66
;		AND		#3
;		ADC		byte_5A
;		STA		byte_5A
;		CMP		#3
;		BEQ		loc_6B7C5
;		BCC		loc_6B7BA
;loc_6B7B2:
;		LDA		#3
;		STA		byte_5A
;		LDA		#$E7
;		STA		byte_59
;loc_6B7BA:
;		LDA		byte_59
;		STA		_enemy_DEF,X
;		LDA		byte_5A
;		STA		byte_530+1,X
;		RTS
;loc_6B7C5:
;		LDA		byte_59
;		CMP		#$E7
;		BCS		loc_6B7B2
;		BCC		loc_6B7BA
;		JSR		sub_6B777
;		SEC
;		LDA		byte_59
;		SBC		byte_65
;		STA		byte_59
;		LDA		byte_5A
;		SBC		byte_66
;		STA		byte_5A
;		BCC		loc_6B7EA
;loc_6B7DF:
;		LDA		byte_59
;		STA		_enemy_DEF,X
;		LDA		byte_5A
;		STA		byte_530+1,X
;		RTS
;loc_6B7EA:
;		LDA		#0
;		STA		byte_59
;		STA		byte_5A
;		BEQ		loc_6B7DF

; =============== S U B	R O U T	I N E =======================================
; accumulate the enemy's XP and GP into _bs_reward_XP and _bs_reward_GP
sub_6B7F2:
; first, accumulate enemy GP
		JSR		sub_6B8F3
		BCS		locret_6B81C ; if carry set (overflow adding GP?) then abort ?!
; reading XP
		JSR		_bs_prepare_read_enemies_lib
		LDY		#1
		JSR		_bs_prepare_read_enemy_prop_byte
; accumulate into u24 _bs_reward_XP
		CLC
		ADC		byte_5D
		STA		byte_5D
		INY ; next enemy prop byte
		PHP
; read next byte of enemy prop (MSB of XP)
		JSR		_bs_prepare_read_enemy_prop_byte
		PLP
; continue accumulation
		ADC		word_5E
		STA		word_5E
		BCC		locret_6B81C
; multiple precision to 3rd byte
		INC		word_5E+1
		BNE		locret_6B81C ; return if u24's MSB didn't overflow
; saturate _bs_reward_XP at FFFFFF
		LDA		#$FF
		STA		byte_5D
		STA		word_5E
		STA		word_5E+1
locret_6B81C:
		RTS

; =============== S U B	R O U T	I N E =======================================
; _bs_reward_GP += enemy prop GP note the accumulation
;
sub_6B81D:
		JSR		sub_6B8F3
		BCS		locret_6B83C
		JSR		_bs_prepare_read_enemies_lib
		LDY		#4
		JSR		_bs_prepare_read_enemy_prop_byte
		CLC
		ADC		word_60
		STA		word_60
		LDY		#$12
		PHP
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#3
		PLP
		ADC		word_60+1
		STA		word_60+1
locret_6B83C:
		RTS

; =============== S U B	R O U T	I N E =======================================
; FYI - theres only one loot drop chance per enemy group. it isn't per enemy
; u8[59] = enemy prop item_dropped
; u8[5A] = ememy prop drop_odds (actually, the user doesnt care about this, it's just used as temp)
; some related stuff here but its about the GBC version: http://www.gamefaqs.com/boards/450388-dragon-warrior-iii/67292816
;
_b4_s17:
		LDY		_acting_enemy
		JSR		loc_6B892
		LDY		#9
		JSR		_bs_prepare_read_enemy_prop_byte
; ignore the equip bit, why would this even be set in the first place?
		AND		#ITEM_TYPE_MASK
; if it was this, it was really meant to mean no item
		CMP		#ITEM_SWORD_HORNED
		BEQ		.drop_no_item
; OK, the item passes. store it in u8[59]
		STA		byte_59
		LDY		#$16
		JSR		_bs_prepare_read_enemy_prop_byte
; only use bottom 3 bits of drop odds. interesting
		AND		#7
; drop odds 0 causes an immediate return, without storing or clearing the drop odds. that means always drop
		BEQ		locret_6B873
; if drop odds are 7, then run some special logic to get an exactly rare drop chance. seems to be used only for big bosses (at the end of the enemy list)
		CMP		#7
		BEQ		loc_6B879
; otherwise calculate Y = 7 - odds (so we can have Y=6,5,4,3,2,1)
		STA		byte_5A
		LDA		#7
		SEC
		SBC		byte_5A
		TAY
		LDA		#0

; now we go into the thing that uses the odds
; note that from the subtraction above C=1, and A=0, so first perform a multi bit shift, resulting in
; A = 1<<(Y-1) or therefore A=1,2,4,8,16,32
.multishift:
		ROL
		DEY
		BNE		.multishift
; now if(rand() >= A) drop no item.
; that means, "drop_odds" of 1 turned into 6 and therefore drop no item if we roll >= 32. therefore it's 1 in 8 odds
; so:
; drop_odds = 1 -> 1/8 (>=32)
; drop_odds = 2 -> 1/16 (>=16)
; drop_odds = 3 -> 1/32 (>=8)
; drop_odds = 4 -> 1/64 (>=4)
; drop_odds = 5 -> 1/128 (>=2)
; drop_odds = 6 -> 1/256 (>=1)
		STA		byte_5A
		JSR		_rand
		CMP		byte_5A
		BCS		.drop_no_item
; ok, we drop the item
locret_6B873:
		RTS
.drop_no_item:
		LDA		#$FF
		STA		byte_59
		RTS
loc_6B879:
; select a random drop odds for u8[5A]
		JSR		_rand
		STA		byte_5A
; now, if we got a nonzero value (255 in 256 chance) branch up and select no item
		BNE		.drop_no_item
; roll again
		JSR		_rand
		CMP		#$20
		BCS		.drop_no_item ; rand() >= #$20 -> drop no item
; that was a 7 in 8 chance.
; if we make it here, we get to keep the drop
; that means we have a (1/256)*(1/8) chance of getting the drop = 1/2048. geeze.
		RTS

; =============== S U B	R O U T	I N E =======================================
; prepares pointers for reading from enemies_lib
; X: enemy to read
; Y: byte to read
; sets up pointer in X (and has X pointing at that pointer [in zp?]) for use by _far_byte_read_by_ptr
;
_bs_prepare_read_enemies_lib:
		JSR		sub_6B91D
		TAX
		LDY		byte_6A73,X ; value to multiply by 17
		JMP		loc_6B892 ; TODO - redundant jmp, remove during a non-neutral edit
loc_6B892:
;multiply by #$17 to get an offset into the enemies lib, and leave pointer parked in word_4A and
		LDA		#$17
		STA		word_4A
		LDA		#0
		STA		word_4A+1
		LDX		#word_4A ; target of _mul16_by_8
		TYA ; restore multiplication factor
		JSR		_mul16_by_8
		LDA		#<[_b0_d43_enemies_lib]
		CLC
		ADC		word_4A
		STA		word_4A
		LDA		#>[_b0_d43_enemies_lib]
		ADC		word_4A+1
		STA		word_4A+1
		LDX		#word_4A ; leave X pointing at the correct pointer
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B8B7:
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_6BA20
;		BPL		sub_6B8C4

; =============== S U B	R O U T	I N E =======================================
sub_6B8C1:
		SEC
		BCS		sub_6B8C5

; =============== S U B	R O U T	I N E =======================================
sub_6B8C4:
		CLC

; =============== S U B	R O U T	I N E =======================================
sub_6B8C5:
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6B8CB:
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_6BA20
;		AND		#$10
;		BEQ		sub_6B8C4
;		BNE		sub_6B8C1
;		PHA
;		TXA
;		PHA
;		TYA
;		PHA
;		JSR		sub_6BA20
;		AND		#$F
;		BEQ		sub_6B8C4
;		BNE		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B8E7:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		BPL		sub_6B8C4
		BMI		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B8F3:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		AND		#$40
		BEQ		sub_6B8C4
		BNE		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B901:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		AND		#$20
		BEQ		sub_6B8C4
		BNE		sub_6B8C1
loc_6B90F:
		PHA
		TXA
		PHA
		TYA
		PHA
		JSR		sub_6BA26
		AND		#$10
		BEQ		sub_6B8C4
		BNE		sub_6B8C1

; =============== S U B	R O U T	I N E =======================================
sub_6B91D:
		JSR		sub_6BA26
		AND		#$C
		LSR
		LSR
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B927:
		TYA
		PHA
		LDY		byte_59
		INY
		LDA		#$FF
		STA		byte_5A
		LDX		#0
loc_6B932:
		LDA		byte_6A77,X
		BPL		loc_6B939
		INC		byte_5A
loc_6B939:
		INX
		DEY
		BNE		loc_6B932
		BEQ		loc_6B957

; =============== S U B	R O U T	I N E =======================================
_b4_s3:
		TYA
		PHA
		LDY		byte_59
		INY
		LDA		#0
		STA		byte_5A
loc_6B948:
		LDX		byte_5A
		LDA		byte_6A77,X
		BPL		loc_6B952
		DEY
		BEQ		loc_6B957
loc_6B952:
		INC		byte_5A
		JMP		loc_6B948
loc_6B957:
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B95A:
		JSR		sub_6BA20
		AND		#$20
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B960:
		LDY		#$C
		JMP		sub_6B974 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_b4_s29:
		LDY		#$A
		JMP		sub_6B974 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_b4_s2A:
		LDY		#$E
		JMP		sub_6B974 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
_b4_s18:
		LDY		#$10
		JMP		sub_6B974 ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; Y - this takes one of several arguments #$C, #$A, #$E, #$10
; Reading from the moveset. Analyzes and stores in byte_59
;
sub_6B974:
		TYA
		PHA
		JSR		_bs_prepare_read_enemies_lib
		PLA
		TAY
		JSR		_bs_prepare_read_enemy_prop_byte ; actually read from enemies lib
		AND		#$80 ; test for MSB, store as LSB in byte_59
		ROL
		ROL
		STA		byte_59
		INY
		JSR		_bs_prepare_read_enemy_prop_byte ; read next byte
		AND		#$80 ; test for MSB, OR into byte_59.1
		ROL
		ROL
		ROL
		ORA		byte_59
		AND		#3 ; ensure result has no garbage
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B994:
		JSR		_bs_prepare_read_enemies_lib
		LDA		byte_65
		LDY		#$12
loc_6B99B:
		INY
		SEC
		SBC		#3
		BCS		loc_6B99B
		ADC		#3
		TAX
		STX		byte_59
		DEY
		LDA		byte_6B9CB,X
		PHA
		LDX		#word_4A
		JSR		_bs_prepare_read_enemy_prop_byte
		STA		byte_5A
		PLA
		AND		byte_5A
		PHA
		LDA		#3
		SEC
		SBC		byte_59
		ASL
		TAX
		PLA
loc_6B9C0:
		LSR
		DEX
		BNE		loc_6B9C0
		TAX
		LDA		byte_6B9CE,X
		STA		byte_59
		RTS
byte_6B9CB:
		.BYTE	$C0,$30, $C ; flags to search for in enemy lib
byte_6B9CE:
		.BYTE	  0,$4D,$B3,$FF

; =============== S U B	R O U T	I N E =======================================
sub_6B9D2:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#0
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#$C0
		LSR
		LSR
		LSR
		STA		byte_59
		LDY		#9
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#$80
		LSR
		LSR
		LSR
		LSR
		LSR
		ORA		byte_59
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6B9F2:
		TYA
		CLC
		ADC		#$A
		PHA
		JSR		_bs_prepare_read_enemies_lib
		PLA
		TAY
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#$7F
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA04:
		JSR		_bs_prepare_read_enemies_lib
		LDY		#$16
		JSR		_bs_prepare_read_enemy_prop_byte
		AND		#8
		STA		byte_59
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA11:
		LDA		_acting_enemy
		ASL
		TAX
		LDA		byte_530,X
		STA		byte_5B
		LDA		byte_530+1,X
		STA		byte_5C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA20:
		JSR		sub_6BA11
		LDA		byte_5C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA26:
		JSR		sub_6BA11
		LDA		byte_5B
		RTS

; =============== S U B	R O U T	I N E =======================================
_b4_s16_do_half_message_speed_delay:
		PHA
		TXA
		PHA
		JSR		_get_cur_message_speed_delay
		TXA
		LSR
		TAX
		INX
		JMP		loc_6BA3F

; =============== S U B	R O U T	I N E =======================================
_b4_s5_do_message_speed_delay:
		PHA
		TXA
		PHA
		JSR		_get_cur_message_speed_delay
loc_6BA3F:
		JSR		_sleep_X_sync
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; message speed delay for battle messages, for some reason, for 7th (slowest)
; it takes value 1. for _b4_s16_do_half_message_speed_delay this is slowest
; value (1 >> 1 or 255 frames), but for _b4_s5_do_message_speed_delay will be
; fastest - just one frame
;
_get_cur_message_speed_delay:
		LDX		_cur_message_speed
		CPX		#7
		BCS		.adjustSpeedDelayForType7
		LDA		_message_speed_delays_list,X
		TAX
		RTS
.adjustSpeedDelayForType7:
		LDX		#1
		RTS

; =============== T A B	L E =================================================
_message_speed_delays_list:
		.BYTE	$18,$24,$30,$3C,$48,$54,$64

; =============== S U B	R O U T	I N E =======================================
; calculates a random number between [0,255] with a SHARP BELL CURVE (more tosses, more likely to approach mean)
;
_b4_sE:
		LDA		#$1F
		STA		byte_42
		LDX		#$10
		BNE		_random_bell_curve

; =============== S U B	R O U T	I N E =======================================
; calculates a random number between [0,255] (not completely sure) with a BELL CURVE
;
sub_6BA64:
		LDA		#$F
		STA		byte_42
		LDX		#$20

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; X: number of dice throws
; byte_42: number of sides on dice
; effect
;
_random_bell_curve:
		TXA
		PHA
		STX		word_3C
		LSR		word_3C
		LDA		#0
		STA		word_3C+1
loc_6BA74:
		JSR		_rand
		LDA		_rand_seed ; 1C contains some portion of the random data returned by _rand. not sure why the A=_rand() return value is insufficient
		AND		byte_42 ; AND that random data by a mask set earlier (1F, F, others?)
; multiple precision add to word_3c
		CLC
		ADC		word_3C
		STA		word_3C
		BCC		loc_6BA84
		INC		word_3C+1
loc_6BA84:
		DEX
		BNE		loc_6BA74
; done looping X times. pop the original X value
		PLA
		TAX
; load the value we just worked on and do a multiple precision subtract #$80.
; I think the purpose is to move the mean from ~256 to ~128
		LDA		word_3C
		SEC
		SBC		#$80
		STA		word_3C
		LDA		word_3C+1
		SBC		#0
; roll again if we didnt get it to a [0,255] value? what? why not just clamp it?
		BNE		_random_bell_curve
		STA		word_3C+1 ; must be 0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BA99:
		LDX		#0
loc_6BA9B:
		LDA		byte_6A77,X
		BPL		loc_6BAA7
		TXA
		PHA
		JSR		sub_6BAAD
		PLA
		TAX
loc_6BAA7:
		INX
		CPX		#4
		BNE		loc_6BA9B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BAAD:
		ASL
		ASL
		ASL
		STA		byte_44
		LDA		#8
		STA		_tmp12+1
loc_6BAB6:
		LDY		byte_44
		LDA		byte_6A7B,Y
		BPL		loc_6BAC4
		TXA
		PHA
		JSR		sub_6BACB
		PLA
		TAX
loc_6BAC4:
		INC		byte_44
		DEC		_tmp12+1
		BNE		loc_6BAB6
		RTS

; =============== S U B	R O U T	I N E =======================================
; Loads enemy's stats at the beginning of battle (how about when reinforcements come?
; Y - enemy index
;
sub_6BACB:
		LDA		byte_6A7B,Y ; meaning unknown
		AND		#7
		STA		byte_43
		STA		_acting_enemy
		ASL
		TAY
		TXA
		ASL
		ASL
		ORA		#$80
		STA		byte_530,Y
		JSR		_bs_read_enemy_prop_HP ; slightly randomize enemy's starting HP
		LDA		byte_59
		STA		byte_5B
		LDA		byte_5A
		STA		byte_5C
		LSR		byte_5C
		ROR		byte_5B
		LSR		byte_5C
		ROR		byte_5B
		INC		byte_5B
		LDA		byte_5B
		JSR		_b4_sF_rand_mul_A
		LDX		#byte_59 ; setup pointer for _sub8_from_16
		JSR		_sub8_from_16
		LDA		byte_43
		ASL
		TAY
		LDA		byte_59
		STA		_enemy_HP,Y
		LDA		byte_5A
		STA		_enemy_HP+1,Y
		JSR		_bs_load_enemy_prop_MP
		LDY		byte_43
		LDA		byte_59
		STA		_enemy_MP,Y
		JSR		_bs_load_enemy_prop_AGI
		LDY		byte_43
		LDA		byte_59
		STA		_enemy_AGI,Y
		JSR		_bs_load_enemy_prop_DEF
		LDA		byte_43
		ASL
		TAY
		LDA		byte_59
		STA		_enemy_DEF,Y
		LDA		byte_5A
		STA		byte_530+1,Y
		LDA		#$80
		STA		byte_530+1,Y
		RTS

; =============== S U B	R O U T	I N E =======================================
; this is used to read a value from the enemies lib
; X&Y - pointers suitable for _far_byte_read_by_ptr
; A - resulting byte
;
_bs_prepare_read_enemy_prop_byte:
		LDA		#0 ; specify bank 0
		JMP		_far_byte_read_by_ptr ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; References A
;
_b4_s23:
		STA		word_4
		TXA
		PHA
		TYA
		PHA
		LDA		word_4
		JSR		sub_6BB4D
		PLA
		TAY
		PLA
		TAX
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BB4D:
		CMP		#2
		BCS		loc_6BB5E ; BCS->JAE branch down if it's 2 or 3 (not 100% sure)
		LDA		#<[_player_battle_order_and_flags]
		LDX		#>[_player_battle_order_and_flags]
		JSR		_store_AX_in_3C
		LDA		#8
		BNE		loc_6BB85 ; UNCONDITIONAL
loc_6BB5E:
		CMP		#$10
		BCC		loc_6BB72
		SBC		#$10
		ASL
		TAY
		LDA		off_6BC11,Y
		LDX		off_6BC11+1,Y
		JSR		_store_AX_in_3C
		JMP		loc_6BB85

loc_6BB72:
		LSR
		LSR
		LSR
		ASL
		TAY
		LDA		off_6BC0D,Y
		LDX		off_6BC0D+1,Y
		JSR		_store_AX_in_3C
		LDX		word_4
		LDA		byte_6BBFD-2,X
loc_6BB85:
		STA		word_4+1
		JSR		_bs_init_bitmasks_in_6_and_7
loc_6BB8A:
		TXA
		ASL
		TAY
		LDA		_players_status,Y
		AND		_players_status+1,Y
		BMI		loc_6BBA2
loc_6BB95:
		JSR		_bs_or_bitmasks_in_6_and_7
loc_6BB98:
		ASL		word_6
		INX
		CPX		#4
		BNE		loc_6BB8A
		LDA		word_6+1
		RTS
loc_6BBA2:
		TXA
		LDY		word_4
		CPY		#$10
		BCC		loc_6BBAE
		ASL
		TAY
		JMP		(word_3C)
loc_6BBAE:
		LDY		word_4
		CPY		#2
		BCC		loc_6BBB5
		ASL
loc_6BBB5:
		TAY
		LDA		(word_3C),Y
		AND		word_4+1
		PHP
		LDA		word_4
		CMP		#$F
		BEQ		loc_6BBC6
		PLP
		BNE		loc_6BB95
		BEQ		loc_6BB98
loc_6BBC6:
		PLP
		BEQ		loc_6BB95
		BNE		loc_6BB98

; =============== S U B	R O U T	I N E =======================================
; Just stores the A,X registers in word_3c, most likely for indirect jumps
;
_store_AX_in_3C:
		STA		word_3C
		STX		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; Just stores the A,X registers in word_3e, most likely for indirect jumps 
;
_store_AX_in_3E:
		STA		word_3E
		STX		word_3E+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; Initializes a bitmask in u8[6] and a target bitmask for accumulation in u8[7]
; The fact that this leaves 0 in X is important
;
_bs_init_bitmasks_in_6_and_7:
		LDX		#1
		STX		word_6
		DEX
		STX		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; u8[7] |= u8[6] -- incorporate bitmask
;
_bs_or_bitmasks_in_6_and_7:
		LDA		word_6
		ORA		word_6+1
		STA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; tests whether player's rDEF is 0?
;
_bs_test_rDEF_0:
		LDA		_players_rDEF,Y
		ORA		_players_rDEF+1,Y
		JMP		.test_stat ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; tests whether player's rAGI is 0
_bs_test_rAGI_0:
		LDA		_players_rAGI,X
		JMP		.test_stat ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
; tests whether player's MP is 0
_bs_test_MP_0:
		LDA		_players_MP,Y
		ORA		_players_MP+1,Y

;; FALLTHROUGH ;;

; used above to test results of MP, rAGI, rDEF tests
.test_stat:
		BEQ		loc_6BB95
		BNE		loc_6BB98 ; unconditional

byte_6BBFD:
		.BYTE	  4,  8,$10,$20,$40,$80, $F, $F, $F, $F,$10,$20,$40,$80
off_6BC0D:
		.WORD	_players_status
		.WORD	_players_status+1

; =============== T A B L E =================================================
; handlers for testing various player conditions
; 
off_6BC11:
		.WORD	_bs_test_rDEF_0
		.WORD	_bs_test_rAGI_0
		.WORD	_bs_test_MP_0

; =============== S U B	R O U T	I N E =======================================
sub_6BC17:
		STA		word_4
		LDA		_acting_enemy
		PHA
		LDA		word_4
		JSR		sub_6BC27
		PLA
		STA		_acting_enemy
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BC27:
		ASL
		TAY
		LDA		off_6BCA2,Y
		LDX		off_6BCA2+1,Y
		JSR		_store_AX_in_3C
		JSR		_bs_init_bitmasks_in_6_and_7 ; X will equal 0 now

; loop across 8 enemies
loc_6BC35:
		STX		_acting_enemy ; seems kind of nuts to overwrite this here
		TXA
		ASL
		TAY
		LDA		byte_530,Y ; read stat value for current Xth entry (dead flag?)
		BMI		loc_6BC4E
loc_6BC3F: ; <- target HP >= current
		JSR		_bs_or_bitmasks_in_6_and_7
loc_6BC42: ; <- target HP < current
		ASL		word_6 ; next bit for bitmask
		LDX		_acting_enemy
		INX
		CPX		#8
		BNE		loc_6BC35

		LDA		word_6+1 ; read result of above bitmask checks
		RTS
loc_6BC4E:
		LDA		word_4
		BEQ		loc_6BC5D
		LDA		byte_530+1,Y
		BPL		loc_6BC3F
		LDA		word_4
		CMP		#5
		BCS		loc_6BC42
loc_6BC5D:
		JMP		(word_3C)

; =============== S U B	R O U T	I N E =======================================
sub_6BC60:
		LDA		byte_530+1,Y
		BPL		loc_6BC42
		BMI		loc_6BC3F ; unconditional 

; =============== S U B	R O U T	I N E =======================================
; tests an enemy's current HP against a fraction (half or quarter) of its MHP
;
_bs_test_enemy_HP:
		JSR		_bs_read_enemy_prop_HP
.enemy_hp_cmp_quarter: ; branch here after dividing MHP by 2 to divide by 2 again and run comparison
		LSR		byte_5A ; multilpe precision rightshift of HP in 59. this will be a target HP value
		ROR		byte_59
		LDA		_acting_enemy
		ASL
		TAY
		LDA		_enemy_HP+1,Y ; reference current HP
		CMP		byte_5A
		BEQ		.hp_cmp_tiebreaker ; branch down for tiebreaker
		BCC		loc_6BC42
		BCS		loc_6BC3F ; BCS->JAE branch if target HP >= current
.hp_cmp_tiebreaker:
		LDA		_enemy_HP,Y ; reference current HP (low byte)
		CMP		byte_59
		BCC		loc_6BC42
		BCS		loc_6BC3F ; BCS->JAE branch if target HP >= current

; =============== S U B	R O U T	I N E =======================================
; tests an enemy's current HP against a quarter of its MHP
;
_bs_test_enemy_HP_quarter:
		JSR		_bs_read_enemy_prop_HP
		LSR		byte_5A ; multiple precision rightshift of HP in 59
		ROR		byte_59
		JMP		.enemy_hp_cmp_quarter ; TAILCALL

; =============== S U B	R O U T	I N E =======================================
sub_6BC90:
		LDA		byte_530+1,Y
		CMP		#3
		BCC		loc_6BC3F
		BCS		loc_6BC42

; =============== S U B	R O U T	I N E =======================================
sub_6BC99:
		LDA		byte_530+1,Y
		AND		#$F
		BEQ		loc_6BC42
		BNE		loc_6BC3F

; =============== T A B L E =================================================
; handlers for checking various AI conditions
;
off_6BCA2:
		.WORD	sub_6BC60
		.WORD	_bs_test_enemy_HP
		.WORD	_bs_test_enemy_HP_quarter
		.WORD	sub_6BC90
		.WORD	sub_6BC99

; =============== S U B	R O U T	I N E =======================================
_b4_s10:
		CMP		#8
		BCS		loc_6BCBC
		STA		word_4
		SEC
		LDX		word_4
		LDA		#0
loc_6BCB7:
		ROL
		DEX
		BPL		loc_6BCB7
		RTS
loc_6BCBC:
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BCBF:
		STA		word_4
		JSR		_bs_init_bitmasks_in_6_and_7
loc_6BCC4:
		TXA
		PHA
		JSR		sub_6BCDE
		ORA		word_4
		CMP		#$FF
		BNE		loc_6BCD2
		JSR		_bs_or_bitmasks_in_6_and_7
loc_6BCD2:
		ASL		word_6
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_6BCC4
		LDA		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BCDE:
		STA		byte_10
		LDA		byte_42
		PHA
		LDA		byte_43
		PHA
		LDA		byte_10
		JSR		sub_6A8B3
		STA		byte_10
		PLA
		STA		byte_43
		PLA
		STA		byte_42
		LDA		byte_10
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_6BCF6:
;		LDA		#$FF
;		STA		byte_42
;		LDA		#0
;		STA		byte_55
;		STA		byte_56
;		TAX
;		RTS

; =============== T A B L E =================================================
; it looks like these maye be some of the actual logic for the enemy commands, which takes place after the message is set, in some cases
; index for this table comes from byte_4F (it can be modified during stage1)
;
_bs_emove_fptr_stage2_tbl:
		.WORD	_bs_emove_stage2_nothing
		.WORD	_bs_emove_stage2_01_parry
		.WORD	_b4_s2B_emove_stage2_02_through_06_attacks
		.WORD	_b4_s2B_emove_stage2_02_through_06_attacks
		.WORD	_b4_s2B_emove_stage2_02_through_06_attacks
		.WORD	_b4_s2B_emove_stage2_02_through_06_attacks 
		.WORD	_b4_s2B_emove_stage2_02_through_06_attacks
		.WORD	_bs_emove_stage2_07_try_flee 
		.WORD	sub_68576
		.WORD	_bs_emove_stage2_spell_robmagic
		.WORD	_bs_emove_stage2_nothing ; breath attacks
		.WORD	_bs_emove_stage2_nothing
		.WORD	_bs_emove_stage2_nothing
		.WORD	_bs_emove_stage2_nothing
		.WORD	_bs_emove_stage2_nothing
		.WORD	_bs_emove_stage2_nothing
		.WORD	_bs_emove_stage2_sleep_and_sweet_breath ; sweet breath
		.WORD	_bs_emove_stage2_toxic_breath
		.WORD	_bs_emove_stage2_nothing ; scorching breath.. that's weird
		.WORD	_bs_emove_stage2_spell_single ; BLAZE (see _bs_attackspell_single_tbl)
		.WORD	_bs_emove_stage2_spell_single ; BLAZEMORE
		.WORD	_bs_emove_stage2_spell_single ; BLAZEMOST
		.WORD	_bs_emove_stage2_spell_single ; ICEBOLT
		.WORD	_bs_emove_stage2_spell_party ; FIREBAL
		.WORD	_bs_emove_stage2_spell_party ; FIREBANE
		.WORD	_bs_emove_stage2_spell_party ; EXPLODET
		.WORD	_bs_emove_stage2_spell_party ; SNOWBLAST
		.WORD	_bs_emove_stage2_spell_party ; SNOWSTORM
		.WORD	_bs_emove_stage2_spell_party ; INFERNOS
		.WORD	_bs_emove_stage2_spell_party ; INFERMORE
		.WORD	_bs_emove_stage2_spell_party ; INFERMOST
		.WORD	_bs_emove_stage2_spell_single ; BEAT
		.WORD	_bs_emove_stage2_spell_party ; DEFEAT
		.WORD	_bs_emove_stage2_spell_sacrifice ; SACRIFICE
		.WORD	_bs_emove_stage2_sleep_and_sweet_breath ; SLEEP
		.WORD	_bs_emove_stage2_spell_stopspell ; STOPSPELL
		.WORD	_bs_emove_stage2_spell_sap ; SAP
		.WORD	_bs_emove_stage2_spell_defence ; DEFENCE
		.WORD	_bs_emove_stage2_spell_surround ; SURROUND
		.WORD	_bs_emove_stage2_spell_robmagic ; ROBMAGIC
		.WORD	_bs_emove_stage2_spell_chaos ; CHAOS
		.WORD	_bs_emove_stage2_spell_slow ; SLOW
		.WORD	_bs_emove_stage2_spell_limbo ; LIMBO
		.WORD	_bs_emove_stage2_nothing ; ZOMA_FREEZE_BEAM
		.WORD	_bs_emove_stage2_spell_bounce ; BOUNCE
		.WORD	_bs_emove_stage2_spell_increase ; INCREASE
		.WORD	_bs_emove_stage2_spell_increase2 ; INCREASE2
		.WORD	_bs_emove_stage2_spell_vivify_and_revive ; VIVIFY
		.WORD	_bs_emove_stage2_spell_vivify_and_revive ; REVIVE
		.WORD	_bs_emove_stage2_heal_single ; HEAL
		.WORD	_bs_emove_stage2_heal_single ; HEALMORE
		.WORD	_bs_emove_stage2_heal_single ; HEALALL
		.WORD	_bs_emove_stage2_heal_multi ; HEALUS
		.WORD	_bs_emove_stage2_heal_multi ; HEALUSALL
		.WORD	_bs_emove_stage2_heal_single_2 ; HEAL (2)
		.WORD	_bs_emove_stage2_heal_single_2 ; HEALMORE (2)
		.WORD	_bs_emove_stage2_heal_single_2 ; HEALALL (2)
		.WORD	_bs_emove_stage2_heal_multi_2 ; HEALUS (2)
		.WORD	_bs_emove_stage2_heal_multi_2 ; HEALUSALL (2)
		.WORD	_bs_emove_stage2_reinforce_specific
		.WORD	_bs_emove_stage2_reinforce_specific
		.WORD	_bs_emove_stage2_reinforce_specific
		.WORD	_bs_emove_stage2_reinforce_specific
		.WORD	_bs_emove_stage2_reinforce_specific

_bs_enemy_mp_cost:
		.BYTE	2  ; BLAZE
		.BYTE	6  ; BLAZEMORE
		.BYTE	12 ; BLAZEMOST
		.BYTE	3  ; ICEBOLT
		.BYTE	4  ; FIREBAL
		.BYTE	6  ; FIREBANE
		.BYTE	18 ; EXPLODET
		.BYTE	6  ; SNOWBLAST
		.BYTE	12 ; SNOWSTORM
		.BYTE	4  ; INFERNOS
		.BYTE	6  ; INFERMORE
		.BYTE	9  ; INFERMOST
		.BYTE	5  ; BEAT
		.BYTE	8  ; DEFEAT
		.BYTE	1  ; SACRIFICE
		.BYTE	3  ; SLEEP
		.BYTE	4  ; STOPSPELL
		.BYTE	3  ; SAP
		.BYTE	4  ; DEFENCE
		.BYTE	4  ; SURROUND
		.BYTE	0  ; ROBMAGIC
		.BYTE	5  ; CHAOS
		.BYTE	3  ; SLOW
		.BYTE	7  ; LIMBO
		.BYTE	0  ; ZOMA FREEZE BEAM
		.BYTE	8  ; BOUNCE
		.BYTE	4  ; INCREASE
		.BYTE	5  ; INCREASE2
		.BYTE	10 ; VIVIFY
		.BYTE	20 ; REVIVE
		.BYTE	3  ; HEAL
		.BYTE	6  ; HEALMORE
		.BYTE	7  ; HEALALL
		.BYTE	18 ; HEALUS
		.BYTE	62 ; HEALUSALL
		.BYTE	3  ; HEAL (2)
		.BYTE	6  ; HEALMORE (2)
		.BYTE	9  ; HEALALL (2)
		.BYTE	18 ; HEALUS (2)
		.BYTE	62 ; HEALUSALL (2)

; =============== T A B L E =================================================
; a table of function pointers for each type of enemy move
; NOTE: they may be the 1st stage logic for the move (when it prints what the move is and does some special effects
; the resolution logic is... just above!
;
_bs_emove_fptr_stage1_tbl:
		.WORD	_bs_emove_stage1_00_assessing
		.WORD	_bs_emove_stage1_01_protects_itself
		.WORD	_bs_emove_stage1_02_regular_attack
		.WORD	_bs_emove_stage1_03_attack_maybe_crit
		.WORD	_bs_emove_stage1_04_attack_maybe_sleep
		.WORD	_bs_emove_stage1_05_attack_maybe_poison
		.WORD	_bs_emove_stage1_06_attack_maybe_numb
		.WORD	_bs_emove_stage1_07_try_flee
		.WORD	_bs_emove_stage1_08_reinforce_own_type
		.WORD	_bs_emove_stage1_09_curious_dance
		.WORD	_bs_emove_stage1_0A_through_0F_breath_attacks
		.WORD	_bs_emove_stage1_0A_through_0F_breath_attacks
		.WORD	_bs_emove_stage1_0A_through_0F_breath_attacks
		.WORD	_bs_emove_stage1_0A_through_0F_breath_attacks
		.WORD	_bs_emove_stage1_0A_through_0F_breath_attacks
		.WORD	_bs_emove_stage1_0A_through_0F_breath_attacks
		.WORD	_bs_emove_stage1_10_sweet_breath
		.WORD	_bs_emove_stage1_11_toxic_breath
		.WORD	_bs_emove_stage1_12_scorching_breath
		.WORD	_bs_emove_stage1_spell_single ; BLAZE (see _bs_attackspell_single_tbl)
		.WORD	_bs_emove_stage1_spell_single ; BLAZEMORE
		.WORD	_bs_emove_stage1_spell_single ; BLAZEMOST
		.WORD	_bs_emove_stage1_spell_single ; ICEBOLT
		.WORD	_bs_emove_stage1_spell_party ; FIREBAL
		.WORD	_bs_emove_stage1_spell_party ; FIREBANE
		.WORD	_bs_emove_stage1_spell_party ; EXPLODET
		.WORD	_bs_emove_stage1_spell_party ; SNOWBLAST
		.WORD	_bs_emove_stage1_spell_party ; SNOWSTORM
		.WORD	_bs_emove_stage1_spell_party ; INFERNOS
		.WORD	_bs_emove_stage1_spell_party ; INFERMORE
		.WORD	_bs_emove_stage1_spell_party ; INFERMOST
		.WORD	_bs_emove_stage1_1F_chant_beat ; $12
		.WORD	_bs_emove_stage1_20_chant_beat ; $13
		.WORD	_bs_emove_stage1_21_chant_sacrifice ; $14
		.WORD	_bs_emove_stage1_22_chant_sleep
		.WORD	_bs_emove_stage1_23_chant_stopspell
		.WORD	_bs_emove_stage1_24_chant_sap
		.WORD	_bs_emove_stage1_25_chant_defence
		.WORD	_bs_emove_stage1_26_chant_surround
		.WORD	_bs_emove_stage1_27_chant_robmagic
		.WORD	_bs_emove_stage1_28_chant_chaos
		.WORD	_bs_emove_stage1_29_chant_slow
		.WORD	_bs_emove_stage1_2A_chant_limbo
		.WORD	_bs_emove_stage1_2B_zoma_freeze_beam
		.WORD	_bs_emove_stage1_2C_chant_bounce
		.WORD	_bs_emove_stage1_2D_chant_increase
		.WORD	_bs_emove_stage1_2E_chant_increase2
		.WORD	_bs_emove_stage1_2F_chant_vivify
		.WORD	_bs_emove_stage1_30_chant_revive
		.WORD	_bs_emove_stage1_heal_various_single
		.WORD	_bs_emove_stage1_heal_various_single
		.WORD	_bs_emove_stage1_heal_various_single
		.WORD	_bs_emove_stage1_heal_various_multi
		.WORD	_bs_emove_stage1_heal_various_multi
		.WORD	_bs_emove_stage1_heal_various_single
		.WORD	_bs_emove_stage1_heal_various_single
		.WORD	_bs_emove_stage1_heal_various_single
		.WORD	_bs_emove_stage1_heal_various_multi
		.WORD	_bs_emove_stage1_heal_various_multi
		.WORD	_bs_emove_stage1_reinforce_specific
		.WORD	_bs_emove_stage1_reinforce_specific
		.WORD	_bs_emove_stage1_reinforce_specific
		.WORD	_bs_emove_stage1_reinforce_specific
		.WORD	_bs_emove_stage1_reinforce_specific

; =============== T A B L E =================================================
; a table of function pointers for each major PC action
_bs_pc_action_fptr_tbl:
		.WORD	_bs_pcAction_00_attack
		.WORD	_bs_pcAction_01_chant
		.WORD	_bs_pcAction_02_parry
		.WORD	_bs_pcAction_03_item ;sub_6AE6C
		.WORD	sub_697D0 ; some kind of nonsense? "gales of flaming breath" .. is this used by BeDragon? why two of them?
		.WORD	sub_697D0
		.WORD	_bs_pcAction_06_equip_attack
		.WORD	nullsub_11 ; bypass the player's action

; =============== T A B L E =================================================
; a table of spell effect function pointers for player spells
; it's only a portion of the spells though, starting with "Lightning". Earlier spells (blaze, etc.) are handled by special case code with the same handler as 'Lighting'
; note, this is including spell effects for spells you dont expect to do anything in battle, like stepguard..
;
_bs_pc_spell_effect_fptr_tbl:
		.WORD	_bs_spell_multiple ; this table entry should not be used, as far as I can tell
		.WORD	_bs_spell_beat ; this is the first table entry that can get used
		.WORD	_bs_spell_defeat
		.WORD	_bs_spell_sacrifice 
		.WORD	_bs_spell_expel
		.WORD	_bs_spell_limbo
		.WORD	_bs_spell_robmagic
		.WORD	_bs_spell_slow
		.WORD	_bs_spell_speedup
		.WORD	_bs_spell_heal_single ; Heal
		.WORD	_bs_spell_heal_single ; Healmore
		.WORD	_bs_spell_heal_single ; Healall
		.WORD	_bs_spell_heal_multiple ; Dummy
		.WORD	_bs_spell_heal_multiple ; Healus
		.WORD	_bs_spell_heal_multiple ; Healusall
		.WORD	_bs_spell_vivify
		.WORD	_bs_spell_revive
		.WORD	_bs_spell_sleep
		.WORD	_bs_spell_awaken
		.WORD	_bs_spell_stopspell
		.WORD	_bs_spell_surround
		.WORD	_bs_spell_return
		.WORD	_bs_spell_chaos
		.WORD	_bs_spell_transform
		.WORD	_bs_spell_bedragon
		.WORD	_bs_spell_ironize
		.WORD	_bs_spell_sap
		.WORD	_bs_spell_defence
		.WORD	_bs_spell_upper
		.WORD	_bs_spell_increase
		.WORD	_bs_spell_multiple ; increase2?
		.WORD	_bs_spell_bounce
		.WORD	_bs_spell_barrier
		.WORD	_bs_spell_bikill
		.WORD	_bs_spell_chance
		.WORD	_bs_spell_antidote
		.WORD	_bs_spell_numboff ; $35
; after here, the item command handler is using the spell command handler via these special 'fake spells'
		.WORD	_bs_fake_spell_36 ; whats this ? ? not sure. seems to wake people up. It's in about the right order to be 'wake up powder' but that item setup otherwise as usable. Nonetheless the logic is here.
		.WORD	_bs_fake_spell_various
		.WORD	_bs_fake_spell_wizards_ring
		.WORD	_bs_fake_spell_black_pepper
		.WORD	_bs_fake_spell_dream_ruby
		.WORD	_bs_fake_spell_strength_seed
		.WORD	_bs_fake_spell_agility_seed
		.WORD	_bs_fake_spell_vitality_seed
		.WORD	_bs_fake_spell_luck_seed
		.WORD	_bs_fake_spell_intelligence_seed
		.WORD	_bs_fake_spell_acorns_of_life
		.WORD	_bs_fake_spell_medical_herb
		.WORD	nullsub_12 ; the dummied-out ITEM_BLANK_6A
		.WORD	_bs_fake_spell_silver_harp
		.WORD	_bs_fake_spell_sphere_of_light
		.WORD	_bs_fake_spell_fairy_water

; =============== S U B	R O U T	I N E =======================================
; Calculates a random damage range value for the player's spell indicated in byte_49
; returns it in u16[4] (MSB is always 0)
;
_bs_player_spell_randrange:
		LDA		byte_49
		ASL
		TAY
		LDA		_bs_player_spell_randrange_tbl+1,Y
		JSR		_b4_sF_rand_mul_A
		CLC
		ADC		_bs_player_spell_randrange_tbl,Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_6BEB9:
		LDX		_bs_curr_actor
		LDA		byte_558,X ; load the current actor's move, or something like that
		CMP		#$10 ; SWEET_BREATH
		BCS		loc_6BEC4 ; BCS->JAE - branch down for moves $10 and beyond
		ADC		#$15 ; otherwise.. rebase the table a bit
loc_6BEC4:
		SEC
		SBC		#$13 ; and..rebase the table again, this is confusing
		ASL
		TAY
		LDA		word_6B4C5+1,Y
		JSR		_b4_sF_rand_mul_A
		CLC
		ADC		word_6B4C5,Y
		STA		word_4
		LDA		#0
		STA		word_4+1

; done with random computation.. now look for modifiers
		LDX		_bs_curr_actor
		LDA		byte_558,X
		CMP		#$10
		BCS		locret_6BEF4
		LDA		_players_status ; just the first party member's status, huh?
		AND		#4
		BEQ		locret_6BEF4
; multiply precision multiply by 2 and then divide by 3
		ASL		word_4
		ROL		word_4+1
		LDX		#word_4
		LDA		#3
		JSR		_div16_by_8
locret_6BEF4:
		RTS

; =============== S U B	R O U T	I N E =======================================
; Calculates a random healing range for the current enemy actor's healing spell
; 
_bs_espell_heal_randrange:
		LDX		_bs_curr_actor
		LDA		byte_558,X
		SEC
		SBC		#$31 ; enemy move $31 is first healing spell
		TAX
		LDA		_bs_espell_heal_lookup_tbl,X

; FALLTHROUGH ;

; =============== S U B	R O U T	I N E =======================================
; Calculates a  random healing range for the type of healing spell stored in A
;
_b4_s1E_healing_randrange:
		ASL
		TAY
		LDA		_bs_healing_randrange_tbl,Y
		CMP		#$FF
		BEQ		loc_6BF1B
		LDA		_bs_healing_randrange_tbl+1,Y
		JSR		_b4_sF_rand_mul_A
		CLC
		ADC		_bs_healing_randrange_tbl,Y
		STA		word_4
		LDA		#0
		STA		word_4+1
		RTS
loc_6BF1B:
		LDA		#$FF
		STA		word_4
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; Calculates a random healing range for the player's spell currently in byte_49
;
_bs_player_heal_randrange:
		LDA		byte_49
		CMP		#SPELL_DUMMY_1D
		BCS		loc_6BF2E ; BCS->JAE branch down if >= DUMMY_1D
		SEC
		SBC		#SPELL_HEAL ; rebase $1A SPELL_HEAL down to 0
		JMP		_b4_s1E_healing_randrange
loc_6BF2E:
		SBC		#SPELL_DUMMY_1D ; rebase $1D SPELL_DUMMY_1D down to 0
		BNE		_b4_s1E_healing_randrange ; UNCONDITIONAL, in practice, only since SPELL_DUMMY_1D should never be used.




		ECHO "bank 04 free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB