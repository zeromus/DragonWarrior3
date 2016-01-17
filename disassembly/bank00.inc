
		ORG $8000

		PTR_IDX		_b0_s0_world_map_random_enounter_test
		PTR_IDX		_b0_s1_battle_typeA_launch
		PTR_IDX		_b0_s2_player_HP_read
		PTR_IDX		_b0_s3_player_MHP_read
		PTR_IDX		_b0_s4_player_HP_add
		PTR_IDX		_b0_s5_player_HP_subtract
		PTR_IDX		_b0_s6_player_MP_read
		PTR_IDX		_b0_s7_player_MMP_read
		PTR_IDX		_b0_s8_player_MP_add
		PTR_IDX		_b0_s9_player_MP_subtract
		PTR_IDX		_b0_sA_player_MP_set_sero
		PTR_IDX		_b0_sB_player_MP_test
		PTR_IDX		_b0_sC_player_LV_read
		PTR_IDX		_b0_sD_tavern_char_LV_read
		PTR_IDX		_b0_sE_player_STATUS_read
		PTR_IDX		_b0_sF_unassigned_formation_char_name_read
		PTR_IDX		_b0_s10_tavern_char_name_read
		PTR_IDX		_b0_s11_player_EffSTR_calc
		PTR_IDX		_b0_s12_player_EffAGI_calc
		PTR_IDX		_b0_s13_player_EffVIT_calc
		PTR_IDX		_b0_s14_player_EffINT_calc
		PTR_IDX		_b0_s15_player_EffLUCK_calc
		PTR_IDX		_b0_s16_player_EffATK_calc
		PTR_IDX		_b0_s17_player_rATK_read
		PTR_IDX		_b0_s18_player_EffDEF_calc
		PTR_IDX		_b0_s19_player_EXP_read
		PTR_IDX		_b0_s1A_player_EXP_add
		PTR_IDX		_b0_s1B_player_gold_read
		PTR_IDX		_b0_s1B_player_gold_add
		PTR_IDX		_b0_s1B_player_gold_subtract
		PTR_IDX		_b0_s1E_player_euipped_item_get
		PTR_IDX		_b0_s1F_player_weapon_get
		PTR_IDX		_b0_s21_player_shield_get
		PTR_IDX		_b0_s21_player_armor_get
		PTR_IDX		_b0_s22_player_helm_get
		PTR_IDX		_b0_s23_player_weapon_equip
		PTR_IDX		_b0_s24_player_shield_equip
		PTR_IDX		_b0_s25_player_armor_equip
		PTR_IDX		_b0_s24_player_helm_equip
		PTR_IDX		_b0_s28_player_inventory_item_get
		PTR_IDX		_b0_s29_player_inventory_item_add
		PTR_IDX		_b0_s2A_player_inventory_item_remove
		PTR_IDX		_b0_s2B_is_players_owns_item
		PTR_IDX		_b0_s2C_player_CLASS_read
		PTR_IDX		_b0_s2E_tavern_char_CLASS_read
		PTR_IDX		_b0_s2F_player_gender_read
		PTR_IDX		_b0_s30_tavern_char_gender_read
		PTR_IDX		_b0_s31_get_party_chars_list
		PTR_IDX		_b0_s32_get_tavern_chars_list
		PTR_IDX		_b0_s33_count_non_dead_party_chars
		PTR_IDX		_b0_s34_read_spell_related_data_byte
		PTR_IDX		_b0_s35	; spell related
		PTR_IDX		_b0_s37 ; spell related
		PTR_IDX		_b0_s38 ; spell related
		PTR_IDX		_b0_s39 ; spell related
		PTR_IDX		_b0_s3A_players_data_swap
		PTR_IDX		_b0_s3B_players_data_swap_in_battle
		PTR_IDX		_b0_s3C_get_free_inventory_slot
		PTR_IDX		_b0_s3D_player_remove_poison_status
		PTR_IDX		_b0_s3D_player_remove_death_status
		PTR_IDX		_b0_s45_check_if_item_equipped
		PTR_IDX		_b0_s46_players_level_up_test
		PTR_IDX		_b0_s47_players_next_EXP_calc
		PTR_IDX		_b0_s48_get_count_returnable_locations
		PTR_IDX		_b0_s49_set_returnable_locations_bit
		PTR_IDX		_b0_s4D_is_anybody_owns_item
		PTR_IDX		_b0_s4E_get_anybody_alone_temporary
		PTR_IDX		_b0_s4F_return_party_members
		PTR_IDX		_b0_s50_players_item_buffs_refresh
		PTR_IDX		_b0_s52_battle_typeFF_launch
		PTR_IDX		_b0_s53_random_encounter_select
		PTR_IDX		_b0_s54_heal_us_all_max
		PTR_IDX		_b0_s55_test_spell_allow_location
		PTR_IDX		_b0_s56_get_hero_alone_temporary
		PTR_IDX		_b0_s5B_run_command_spell
		PTR_IDX		_b0_s5C_player_inventory_search_for_cursed_item
		PTR_IDX		_b0_s5D_run_command_item_use
		PTR_IDX		_b0_s5E_check_if_item_can_be_equipped
		PTR_IDX		_b0_s5E_check_if_item_can_be_used
		PTR_IDX		_b0_s60_get_item_type
		PTR_IDX		_b0_s61_sram_shortcuts_init
		PTR_IDX		_b0_s62 ; spell related
		PTR_IDX		_b0_s63_player_unequip_all_type_items
		PTR_IDX		_b0_s64_respawn_at_the_king
		PTR_IDX		_b0_s65_ram_clear_game_vars_init
		PTR_IDX		_b0_s66_byte_6D40_clear
		PTR_IDX		_b0_s67_mysterious_hat_mp_modifier

		PTR_IDX		_b0_d3F_antics_index
		PTR_IDX		_b0_d42_item_use_effects_list
		PTR_IDX		_b0_d44_item_effects_list
		PTR_IDX		_b0_d58_hero_spell_related_data00
		PTR_IDX		_b0_d59_common_spell_related_data00

; -----------------------------------
; -- WRAPPERS FOR SYSTEM FUNCTIONS --
; -----------------------------------

; =============== S U B	R O U T	I N E =======================================
_wnd_safe:
		STA		byte_44
		TXA
		PHA
		TYA
		PHA
		LDA		byte_CE
		PHA
		LDA		byte_44
		FARX	_bE_sC_display_window
		STA		byte_44
		PLA
		STA		byte_CE
		PLA
		TAY
		PLA
		TAX
		LDA		byte_44
		RTS

; =============== S U B	R O U T	I N E =======================================
_wnd2E_ex:
		SYSX	_display_window,$2E
		STA		byte_47
		STA		byte_D4
		STA		byte_50
		RTS

; =============== S U B	R O U T	I N E =======================================
_wnd3E_bE_s5:
		SYSX	_display_window,$3E
		FARX	_bE_s5
		RTS

; =============== S U B	R O U T	I N E =======================================
; helper, used 5 times only in one function
_wnd3E_msg0xx_wait_key:
		PHA
		JSR		_wnd3E_bE_s5
		LDA		byte_53
		STA		byte_D2
		PLA
		JSR		_wrap_msg_m00_arg0
		JMP		_wait_for_key

; =============== S U B	R O U T	I N E =======================================
_msg005_msg0xx:
		PHA
		MSGX	_msg_m00,$005	; "$FD, $EF"
		PLA
		JMP		_wrap_msg_m00_arg0

; =============== S U B	R O U T	I N E =======================================
; unused anymore
;_b0_s51_wrapper_for_b1B_s0:
;		FARX	_b1B_s0
;		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_80D4:
;		JSR		sub_81FE
;		LDA		word_5E+1
;		JSR		sub_1743F1
;		SEC
;		SBC		#$A
;		BCS		loc_80E3
;		LDA		#0
;loc_80E3:
;		STA		word_4A+1
;		LDX		#3
;		STX		byte_4D
;loc_80E9:
;		LDA		#$A
;		JSR		sub_1743F1
;		CLC
;		ADC		word_4A+1
;		CMP		#9
;		BEQ		loc_80F9
;		CMP		#$19
;		BNE		loc_80FB
;loc_80F9:
;		LDA		#0
;loc_80FB:
;		LDX		byte_4D
;		STA		_enemy_roster_index_list,X
;		LDA		#1
;		STA		_enemy_group_count,X
;		DEC		byte_4D
;		BPL		loc_80E9
;		BRK
;		.BYTE	$CB, 7		; _b2_s9
;		JSR		_enemy_roster_compress
;		LDX		#3
;		LDA		#0
;loc_8113:
;		CLC
;		ADC		_enemy_group_count,X
;		DEX
;		BPL		loc_8113
;		CMP		#2
;		BCC		_b0_s51_wrapper_for_b1B_s0
;		STA		byte_4C
;		JSR		_enemy_roster_get_levels ; enemy roster	get min/max level enemy
;		LDX		#0
;		STX		byte_51
;loc_8127:
;		LDA		byte_4D,X
;		SEC
;		SBC		word_4A+1
;		CMP		#5
;		BCC		loc_8132
;		LDA		#4
;loc_8132:
;		TAY
;		LDA		byte_81AC,Y
;		STA		byte_4D,X
;		CLC
;		ADC		byte_51
;		STA		byte_51
;		INX
;		CPX		byte_4C
;		BCC		loc_8127
;		LDX		#0
;loc_8144:
;		STX		word_4A
;		LDA		byte_51
;		STA		byte_52
;		LDA		#0
;		STA		byte_53
;		LDX		word_4A
;		LDA		byte_4D,X
;		CLC
;		ADC		#1
;		LDX		#byte_52
;		JSR		_div16_by_8
;		LDX		word_4A
;		LDA		byte_52
;		BNE		loc_8162
;		LDA		#1
;loc_8162:
;		STA		byte_6AD5,X
;		CMP		#2
;		BCC		loc_8174
;		LDA		#$A
;		JSR		sub_1743F1
;		STA		byte_6AD9,X
;		JMP		loc_817F
;loc_8174:
;		LDA		#9
;		JSR		sub_1743F1
;		CLC
;		ADC		#1
;		STA		byte_6AD9,X
;loc_817F:
;		INX
;		CPX		byte_4C
;		BCC		loc_8144
;loc_8184:
;		CPX		#4
;		BCS		loc_8193
;		LDA		#0
;		STA		byte_6AD5,X
;		STA		byte_6AD9,X
;		INX
;		BPL		loc_8184
;loc_8193:
;		LDA		byte_4C
;		JSR		sub_1743F1
;		STA		byte_6A6D
;		LDX		#0
;loc_819D:
;		LDA		byte_6A36,X
;		STA		_enemy_roster_index_list,X
;		INX
;		CPX		#4
;		BCC		loc_819D
;		BRK
;		.BYTE	$80, $17		; _b4_s26
;		RTS
;byte_81AC:
;		.BYTE	  1,  2,  3,  4,  5

; =============== S U B	R O U T	I N E =======================================
; launches an FF type battle. bypasses some of the more normal battle startup
; logic, probably random encounter related
;
_b0_s52_battle_typeFF_launch:
		LDA		#$FF
		STA		_battle_type_fight
		JMP		_battle_launch_ex

; =============== S U B	R O U T	I N E =======================================
; enemy	roster get min/max level enemy
;
_enemy_roster_get_levels:
		LDA		#$FF
		STA		word_4A+1
		LDX		#0
		STX		word_5E+1
loc_81C0:
		STX		word_4A
		LDA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_81DE
		JSR		_get_enemy_info_ptr
		LDY		#0
		LDA		(word_60),Y
		AND		#$3F
		CMP		word_5E+1
		BCC		loc_81D8
		STA		word_5E+1
loc_81D8:
		CMP		word_4A+1
		BCS		loc_81DE
		STA		word_4A+1
loc_81DE:
		LDX		word_4A
		STA		byte_4D,X
		INX
		CPX		#4
		BCC		loc_81C0
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_enemy_info_ptr:
		STA		word_60
		LDA		#0
		STA		word_60+1
		LDA		#$17
		LDX		#word_60
		JSR		_mul16_by_8
		LDA		#<[_b0_d43_enemies_lib]
		LDY		#>[_b0_d43_enemies_lib]
		JMP		_add16_to_16

; =============== S U B	R O U T	I N E =======================================
sub_81FE:
		LDA		#0
		STA		word_5E+1
		JSR		_get_enemy_info_ptr
		LDY		#0
loc_8207:
		LDA		(word_60),Y
		AND		#$3F
		CMP		_players_level
		BEQ		loc_8212
		BCS		locret_8221
loc_8212:
		LDA		#$17
		LDX		#word_60
		JSR		_add8_to_16	; A = value
		INC		word_5E+1
		LDA		word_5E+1
		CMP		#$86
		BCC		loc_8207
locret_8221:
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s0_world_map_random_enounter_test:
		LDA		_pads+1			; random encounter disable cheat from PRG1J
		LSR						;
		BCS		locret_823F		;
		LDA		_npc_anim_script_idx
		BNE		locret_823F
		LDX		_playerWorldX
		DEX
		CPX		#$FE
		BCS		locret_823F
		LDY		_playerWorldY
		DEY
		CPY		#$FE
		BCS		locret_823F
		LDA		_global_flags_array.byte10
		BMI		locret_823F
		LDA		_global_flags_array.byte16
		AND		#$90
		CMP		#$80
		BEQ		locret_823F
		LDA		#$FF
		STA		byte_5C
		JSR		_world_map_random_enounter_select
		LDA		byte_5C
		BNE		locret_823F
		JMP		sub_174CBD
locret_823F:
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s53_random_encounter_select:
		LDA		#$FF
		STA		word_5E
		STA		_enemy_roster_index_list
		BNE		_random_enounter_select ; unconditional jump

; =============== S U B	R O U T	I N E =======================================
; called once per step, probably evaluating whether there should be a random encounter
; special case only for world map to check the repel and fairy water status
;
_world_map_random_enounter_select:
		LDA		byte_9A			; tilesetNumber_9A, but that must not be what it really means
		BNE		loc_828E
		LDA		_repel_or_fairy_water_timer
		AND		#$7F
		BEQ		loc_828E
		DEC		_repel_or_fairy_water_timer
		LDA		_repel_or_fairy_water_timer
		AND		#$7F
		BNE		loc_828E
		JSR		_wrap_bE_sD_wnd3E
		LDA		_repel_or_fairy_water_timer
		AND		#$80
		BEQ		loc_8285
		MSGX	_msg_m00,$19B	; "The Effect of Repel has run out"
		JMP		loc_8288
loc_8285:
		MSGX	_msg_m00,$19A	; "The Effect of Fairy Water has run out"
loc_8288:
		FARX	_bE_s33
		JSR		_wait_for_nmi_is_over_sync
loc_828E:
		LDA		#0
		STA		word_5E

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; this runs each step, to test whether to do a random battle
_random_enounter_select:
		LDA		#0
		STA		byte_4C
		STA		_battle_type_fight
		LDA		_location_type
		AND		#1
		BNE		_location_is_other
		LDA		_location_type
		AND		#2
		BEQ		_location_is_owerworld		; location_type = not overworld or location, but...? alefgard? ocean?

; load overworld tile coordinate X, subtract #F.. that's odd. mask it then by #$7F and shift it down.
; result is.. (coord-7)>>4)&7 as far as I can tell FYI, alefgard seems to be 158x135. therefore after
; subtraction it's 143x130. so I dont see what use any of that was. 
; but everything beyond a 120x120 area is ocean. i dunno. maybe it's fill tiles and the map is really
; 120x120. at least, it does truly fit in the #$7F mask well, you cant ever get into the water to the
; left and upwards of #$F and #$5 so maybe the idea here is just adjusting a the grid (8x8 blocks in
; this case?) to fit neatly in the world
; Uhhh _can_ you get into the water? this map im looking at has a ship screencapped in
; it http://www.nesmaps.com/maps/DragonWarrior3/DragonWarrior3Overworld2LMap.html

		LDA		_playerWorldX 
		SEC
		SBC		#$F
		AND		#$7F
		LSR
		LSR
		LSR
		LSR
		STA		word_4A
		LDA		_playerWorldY			; similar weird logic for overworld tile coordinate Y..
		SEC						; ((coord-5)>>1)&#$38 (next 3 higher bits than the Y coord).
		SBC		#5
		AND		#$70
		LSR
		ORA		word_4A
; so we have packed an index based on X and Y into 4A with 6 bits total. should be a size 64 table.. yep
; was this an attempt to compress the table? maybe we can't get near the edge of this map. 
		TAX
		LDA		byte_8A46,X
		LDY		#$40
		BNE		loc_82D7 ; unconditional jump

; =============== S U B	R O U T	I N E =======================================
; use overworld tile coordinate to create an index:
; (overworld_x>>4)|(overworld_y&0xF0) and reference a table
; leave that stashed in u8[4a]
;
_location_is_owerworld:
		LDA		_playerWorldX
		LSR
		LSR
		LSR
		LSR
		STA		word_4A
		LDA		_playerWorldY
		AND		#$F0
		ORA		word_4A
		TAX
		LDA		byte_8946,X
		LDY		#0
loc_82D7:
		CMP		#$FF						; if the result was a special value #$FF (no random encounters here) then dont
		BNE		loc_82DC					;  have a battle? this codepath is unused since that data doesnt exist
		RTS
loc_82DC:
		STA		word_4A						; stash the random encounter info byte into u8[4a], in case it wasnt already there
		LDA		_player_vehicle				; vehicle type
		CMP		#1
		BEQ		.check_encounter_ship		; branch for ship
		BCC		.check_encounter_foot		; branch for on foot
		RTS									; return for ramia, no random encounters
.check_encounter_ship:
		LDA		#0							; pick apart the selected random encounter definition byte: put top two bits into 4A
		STA		byte_4F ; meaning unsure
		ROL		word_4A
		ROL
		ROL		word_4A
		ROL
		STA		word_4A
		TYA									; maybe #$40 or maybe #$00? must be picking one of two blocks of the table,
		CLC									; selecting the oceanic entries?
		ADC		word_4A
		JMP		sub_835A
.check_encounter_foot:
		LDA		_standing_tile						; no random encounters in non-terrain tiles (>=8, theyre non-terrain tiles (castles and such)
		CMP		#TILE_OVERWORLD_FIRST_NONTERRAIN
		BCC		loc_8307
		CMP		#TILE_OVERWORLD_GLACIER						; glacier terrain type was patched in here. it counts as terrain
		BEQ		loc_8305
		RTS
loc_8305:
		LDA		#1							; use 1 for value of 4F, instead of actual overworld terrain tile
loc_8307:
		STA		byte_4F
		LDA		word_4A						; reload random encounter definition byte and branch down to shared code
		AND		#$3F
		JMP		sub_835A
; -- end of overworld specific random encounter checking --

; =============== S U B	R O U T	I N E =======================================
_location_is_other:
		LDA		#8
		STA		byte_4F
		LDA		byte_6AE6
		AND		#2
		BEQ		loc_8327
		DEC		byte_4F
		DEC		byte_4F
		LDA		byte_6AE6
		AND		#$FD
		STA		byte_6AE6
loc_8327:
		LDX		#0
		STX		word_4A
loc_832B:
		LDA		_mapNumber
		CMP		byte_8377,X
		BCS		loc_8333
		RTS
loc_8333:
		LDA		word_4A
		SEC
		SBC		byte_8377,X
		STA		word_4A
		INX
		LDA		_mapNumber
		CMP		byte_8377,X
		BCS		loc_8348
		ADC		word_4A
		JMP		loc_8356
loc_8348:
		LDA		word_4A
		CLC
		ADC		byte_8377,X
		STA		word_4A
		INX
		CPX		#$16						; loop 16 times
		BCC		loc_832B
		RTS
loc_8356:
		TAX
		LDA		byte_8A86,X

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_835A:
		STA		word_4A+1					; check again, possibly redundantly, for a random encounter definition
		CMP		#$FF						; byte of FF (which means no random encounters)
		BEQ		locret_8376
		LDA		#$F							; create a pointer u16[4b] * 15 into _random_encounter_overworld_tbl and
		LDX		#word_4A+1					; read a byte from it
		JSR		_mul16_by_8
		LDA		#<[_random_encounter_overworld_tbl]
		LDY		#>[_random_encounter_overworld_tbl]
		JSR		_add16_to_16
		LDY		#0
		LDA		(word_4A+1),Y
		BNE		sub_838D					; now we have a pointer to detailed information about the random encounters
											; in this tile. branch down to do more
locret_8376:								; fall through and return if the entry is 0
		RTS

; =============== T A B L E =================================================
; location/maps where battles can happen?
byte_8377:
		.BYTE	  $03,$04,$08,$09,$2D,$41,$58,$5B,$9C,$AB,$B2,$B3,$BB,$C0,$C3,$CD,$CF,$D9,$DB,$DF,$E4,$F3

; =============== S U B	R O U T	I N E =======================================
; at this point, u16[4b] contains a pointer to a random encounter info database (15 bytes long)
sub_838D:
		STA		word_4A						; stash first random encounter info byte
		LDA		word_5E						; some kind of difference between enemy and player levels, but not sure
		BNE		loc_83F3					; about that yet, maybe something entirely different at this point	
		LDA		word_4A						; reload _random_encounter_overworld_tbl[0] and isolate top 3 bits. use to reference a table
		LSR
		LSR
		LSR
		LSR
		LSR
		TAX
		LDA		byte_8628,X
		CPX		#3							; alternate randomization for special values 1 and 2?
		BCS		loc_83AE					; BCS->JAE branch down if not special value
		STA		byte_4D
		JSR		_rand
		CMP		byte_4D
		BCC		loc_83AC					; BCC->JB branch down (battle) if we rolled a value under that probability (1 in 255 or 1 in 127 i guess)
		RTS									; no battle
loc_83AC:
		LDA		#1							; use probability as 1 i guess? 
loc_83AE:
		STA		byte_4D
		LDA		#0
		STA		byte_4E						; some multiple precision clears
		LDX		byte_4F						; some multiple precision clears
		LDA		_location_type				; if we're not in a location, check daytime or nighttime. 
		BNE		loc_83C1
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_83C6					; BCS->JAE branch down if nighttime
loc_83C1:
		LDA		_random_encounter_overworld_probability_daytime_tbl,X
		BNE		loc_83C9					; unconditional, since this value should never be 0
loc_83C6:
		LDA		_random_encounter_overworld_probability_nighttime_tbl,X
loc_83C9:
		LDX		#byte_4D					; u16[4d] *= the value we just loaded
		JSR		_mul16_by_8
		LDA		#ITEM_GOLDEN_CLAW			; for 4d, use special case of #$64 when player has golden claw 
		STA		byte_CE
		JSR		_b0_s2B_is_players_owns_item
		BCC		loc_83DD
		LDA		#$64
		STA		byte_4D
		BNE		loc_83EB					; unconditinal jump
loc_83DD:									; player doesnt have golden claw
		LDA		byte_4E						; well, this should be zero?
		BNE		loc_83E7					; branch if 
		LDA		byte_4D
		CMP		#$64						; clamp u8[$4D] at #$64
		BCC		loc_83EB
loc_83E7:
		LDA		#$64
		STA		byte_4D
loc_83EB:
		JSR		_rand						; so the maximum odds of getting a battle are $63=99 -> 98 in 255
		CMP		byte_4D
		BCC		loc_83F3					; BCC->JB branch to battle if we're less than the target value
		RTS									; no battle
loc_83F3:
		JSR		_reset_enemy_data_buffers	; passed random encounter roll. start setting up the battle
		LDA		word_4A						; reload 4A which contained _random_encounter_overworld_tbl[0] and pick apart the fields
		AND		#3
		STA		byte_49
		LDA		word_4A
		AND		#$1C
		LSR
		LSR
		STA		byte_4D
		LDA		#0							;u16[4D] *= #$11 to get an index into a table
		STA		byte_4E
		LDA		#17
		LDX		#byte_4D
		JSR		_mul16_by_8
		LDA		#<[byte_90F3]
		LDY		#>[byte_90F3]
		JSR		_add16_to_16
		LDA		#1							; move to next byte in _random_encounter_overworld_tbl entry (pointer was in 4A)
		LDX		#word_4A+1
		JSR		_add8_to_16
		LDA		#100
		STA		byte_55
loc_8424:									; top of ~100 times loop
		DEC		byte_55
		BNE		loc_8429
		RTS									; abort if we didnt satisfy whatever is going on
loc_8429:
		JSR		_rand
		LDY		#0
loc_842E:
		CMP		(byte_4D),Y					; try up to #$D times walking through the table at u16[4D]
		BCC		loc_8437					; BCC->JB - branch down if we rolled a value under the current entry at Y
		INY
		CPY		#$D
		BCC		loc_842E					; BCC->JB - branch back up and try again if Y hasnt run out (#$C is the last offste referenced)
loc_8437:
		JSR		sub_8595					; Y is at an entry we found. load corresponding entry from _random_encounter_overworld_tbl
		BEQ		loc_8424					; try again? what did we accomplish? we validated Y values in the JSR above.
		LDA		(word_4A+1),Y				; other than that, nothing
		CMP		#$FF
		BEQ		loc_8424					; try again if we're FF
		CPY		#5
		BCC		loc_84B3					; BCC->JB - branch far away if we're <5
		BEQ		loc_84C3					; branch far away if we're ==5
		CPY		#11
		BCC		loc_84B0					; branch far away if we're 6,7,8,9,10
		BEQ		loc_84B6					; branch far away if we're 11
		LDA		(word_4A+1),Y				; just reload the value again otherwise (why?) seems redundant
		STA		byte_4F						; store this value in u16[4F] and multiply it by 6; use it as an offset to byte_907B
		LDA		#0
		STA		byte_50
		LDA		#6
		LDX		#byte_4F					; u16[4F] *= 6
		JSR		_mul16_by_8
		LDA		#<[byte_907B]
		LDY		#>[byte_907B]
		JSR		_add16_to_16
		LDX		#0							; clear u16[52]
		STX		byte_53
		STX		byte_52
loc_846C:
		TXA
		LSR
		TAY
		LDA		(byte_4F),Y
		STA		byte_51
		TXA
		AND		#1
		BEQ		loc_847E
		LSR		byte_51
		LSR		byte_51
		LSR		byte_51
loc_847E:
		LDA		byte_51
		AND		#7
		TAY
		LDA		byte_8638,Y
		JSR		sub_1743F1
		CLC
		ADC		byte_8640,Y
		BEQ		loc_84A5
		LDX		byte_53
		STA		_enemy_group_count,X
		LDA		byte_52
		CLC
		ADC		#2
		TAY
		LDA		(byte_4F),Y
		STA		_enemy_roster_index_list,X
		CMP		#$FF
		BEQ		loc_84A5
		INC		byte_53
loc_84A5:
		INC		byte_52
		LDX		byte_52
		CPX		#4
		BCC		loc_846C
		JMP		sub_85B3
loc_84B0:
		JMP		loc_84E9
loc_84B3:
		JMP		loc_851C
loc_84B6:
		LDA		#1
		STA		_enemy_group_count
loc_84BB:
		LDA		(word_4A+1),Y
		STA		_enemy_roster_index_list
		JMP		sub_85B3						; overworld battle launch from here
loc_84C3:
		LDA		#$14
		STA		byte_56
loc_84C7:
		DEC		byte_56
		BEQ		loc_84E4
		LDA		#5
		JSR		sub_1743F1
		TAY
		JSR		sub_8595
		BEQ		loc_84C7
		LDA		(word_4A+1),Y
		CMP		#$FF
		BEQ		loc_84C7
		STA		_enemy_roster_index_list+1
		LDA		#8
		STA		_enemy_group_count+1
loc_84E4:
		LDY		#5
		JMP		loc_84B6
loc_84E9:
		TYA
		TAX
		LDY		#$F
		LDA		(byte_4D),Y
		STA		byte_4F
		INY
		LDA		(byte_4D),Y
		STA		byte_50
		TXA
		TAY
		SEC
		SBC		#6
		ASL
		TAX
loc_84FD:
		DEX
		BMI		loc_8507
		ROR		byte_50
		ROR		byte_4F
		JMP		loc_84FD
loc_8507:
; inspect bottom 3 bits of overworld terrain type. 
; OR: has this been changed yet? I think so
; load X = a value from an overworld battle severity/probability table
		LDA		#3
		AND		byte_4F
		TAX
		LDA		byte_8630,X					; (1,  2,  2,  5)
		JSR		sub_1743F1					; registers are preserved
; incorporate value from another table
; have we just added a +/- factor (above) to the base value (below)?
; seems unlikely, values below are quite large
		CLC
		ADC		byte_8634,X					; (8,  4,  2,  3)
		STA		_enemy_group_count
		JMP		loc_84BB					; for overworld battle, branch back up to launch battle
loc_851C:
		LDA		#0
		LDX		#9
loc_8520:
		STA		byte_4F,X
		DEX
		BPL		loc_8520
		LDA		(word_4A+1),Y
		STA		_enemy_roster_index_list
		LDX		#1
		LDA		#$D
		STA		byte_53,Y
		STA		byte_59
loc_8533:
		LDA		#$14
		STA		byte_5A
loc_8537:
		DEC		byte_5A
		BEQ		loc_8571
		LDA		#6
		JSR		sub_1743F1
		TAY
		JSR		sub_8595
		BEQ		loc_8537
		LDA		byte_53,Y
		BNE		loc_8537
		LDA		(word_4A+1),Y
		CMP		#$FF
		BEQ		loc_8537
		STA		_enemy_roster_index_list,X
		LDA		#1
		STA		byte_53,Y
		CPY		#5
		BNE		loc_855F
		STA		byte_4F,X
loc_855F:
		JSR		_rand
		LDY		byte_59
		CMP		(byte_4D),Y
		BCS		loc_8571
		INX
		INC		byte_59
		CPY		#$F
		BCC		loc_8533
		LDX		#3
loc_8571:
		INX
		STX		byte_59
		LDX		#3
		LDA		#1
loc_8578:
		STA		_enemy_group_count,X
		DEX
		BPL		loc_8578
loc_857E:
		LDA		#3
		JSR		sub_1743F1
		BEQ		sub_85B3
		LDA		byte_59
		JSR		sub_1743F1
		TAX
		LDA		byte_4F,X
		BNE		loc_857E
		INC		_enemy_group_count,X
		JMP		loc_857E

; =============== S U B	R O U T	I N E =======================================
; Y: some value
sub_8595:
		LDA		_location_type				; return doing nothing if we're in the overworld map
		BNE		locret_85AB
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_85AC					; BCS->JAE branch down if it's nighttime
		CPY		#4
		BEQ		locret_85AB
		CPY		#$A
		BEQ		locret_85AB
		CPY		#$D
		RTS
loc_85AC:
		CPY		#0
		BEQ		locret_85AB
		CPY		#6
locret_85AB:
		RTS

; =============== S U B	R O U T	I N E =======================================
; evaluate player level vs enemies and word_5E somehow..
; leave difference in A for storing in 6A6A?
sub_85B3:
		JSR		_enemy_roster_get_levels
		LDA		_players_level
		SEC
		SBC		word_5E+1
		BCS		loc_85C0
		LDA		#0
loc_85C0:
		STA		byte_6A6A
		LDA		_location_type				; 0 in main worldmap...
		AND		#1
		BNE		_battle_launch_ex
		LDA		_repel_or_fairy_water_timer	; run the battle unless we have time remaining on repel/fairy water.
		AND		#$7F						;  a flag is in MSBit so only test bottom 7
		BEQ		_battle_launch_ex
		LDA		word_5E
		BNE		_battle_launch_ex
		LDA		byte_6A6A
		CMP		#5
		BCC		_battle_launch_ex
		RTS

; =============== S U B	R O U T	I N E =======================================
_reset_enemy_data_buffers:
		LDA		#$FF
		LDX		#3
loc_85DF:
		STA		_enemy_roster_index_list,X
		DEX
		BPL		loc_85DF
		LDA		#0
		LDX		#3
loc_85E9:
		STA		_enemy_group_count,X
		DEX
		BPL		loc_85E9
		RTS

; =============== S U B	R O U T	I N E =======================================
; eventually launches a battle, after setting up some other stuff. does it
; select a random enemy party?
;
_b0_s1_battle_typeA_launch:
		TAY
		JSR		_reset_enemy_data_buffers
		INY
		STY		_battle_type_fight
		LDX		#0
loc_85F9:
		DEY
		BEQ		loc_8606
loc_85FC:
		LDA		byte_88DE,X
		INX
		CMP		#$FF
		BNE		loc_85FC
		BEQ		loc_85F9
loc_8606:
		LDA		byte_88DE,X
		CMP		#$FF
		BEQ		_battle_sequence_handler
		STA		_enemy_roster_index_list,Y
		LDA		byte_8909,X
		STA		_enemy_group_count,Y
		INX
		INY
		BNE		loc_8606

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
;many other subroutines branch to this label
;
_battle_launch_ex:
		JSR		_enemy_roster_compress
		LDA		_enemy_roster_index_list ; see if the first enemy group is empty?
		CMP		#$FF
		BNE		_battle_sequence_handler
		RTS

; =============== T A B L E =================================================
; random encounter probability table. high values are less likely, low values are more likely
; rolling a value less than this results in a battle. therefore $01 is very rare and $80 is very common
byte_8628:
		.BYTE	$10,$40,$80,$01,$02,$04,$08,$10

; =============== T A B L E =================================================
; related to the severity/probability of random battles in an overworld terrain type
byte_8630:
		.BYTE	  1,  2,  2,  5
byte_8634:
		.BYTE	  8,  4,  2,  3
byte_8638:
		.BYTE	  1,  4,  3,  8,  1,  1,  1,  3
byte_8640:
		.BYTE	  8,  4,  1,  1,  1,  2,  3,  0

; =============== S U B	R O U T	I N E =======================================
; if enemy roster first slot is empty, shifts all enemy data by 1 left,
; then set the last as empty (compress enemy list)
;
_enemy_roster_compress:
		LDX		#0
		LDY		#0
loc_8654:
		LDA		_enemy_roster_index_list,X
		STA		word_4A
		CMP		#ENEMY_COUNT
		BCS		loc_866B
		LDA		_enemy_group_count,X
		BEQ		loc_866B
		STA		_enemy_group_count,Y
		LDA		word_4A
		STA		_enemy_roster_index_list,Y
		INY
loc_866B:
		INX
		CPX		#4
		BCC		loc_8654
loc_8670:
		CPY		#4
		BCS		locret_8682
		LDA		#$FF
		STA		_enemy_roster_index_list,Y
		LDA		#0
		STA		_enemy_group_count,Y
		INY
		JMP		loc_8670
locret_8682:
		RTS

; =============== S U B	R O U T	I N E =======================================
; this is the entire battle sequence. it flashes the screen, fades in the battle, runs the battle
; shows XP wrap-up at the end, and returns when it's time to go back to the map
;
_battle_sequence_handler:
		JSR		_nmi_allow_ppu_dequeue
		JSR		sub_88BD			; pre-battle screen flash
		LDA		#0
		LDX		#$77
loc_868D:
		STA		byte_580,X
		DEX
		BPL		loc_868D
		LDA		_battle_type_fight
		CMP		#$FF
		BNE		.dont_patch_fight
		LDX		#$1B				; patch FIGHT! over the wipe bitmap. see _wipe_fight_tbl for more details
.iterate_patch_fight:
		LDA		_wipe_fight_tbl,X
		STA		byte_5B0,X
		DEX
		BPL		.iterate_patch_fight
.dont_patch_fight:
		LDA		#BGM_BATTLE
		LDX		_battle_type_fight
		CPX		#9
		BNE		loc_86AE			; choose the battle music depending on the value of _battle_type_fight
		LDA		#BGM_EVIL_12
loc_86AE:
		FARX	_bB_s3_apu_load		; play the battle music
		JSR		sub_8841			; runs the pre-battle screen wipe, largely
		JSR		_ppu_force_dequeue	; oddly, after it's done, theres still something left in the PPU queue.
									; this will cause a few more tiles to go out (to blank the screen) but it won't be complete
									; however, in case FIGHT! was displayed, everything but the FIGHT! text will be gone
		LDA		_battle_type_fight	; if the screen says FIGHT! then hold a moment, so we can read it i guess
		CMP		#$FF
		BNE		loc_86C2
		LDX		#$14
		JSR		_sleep_X_sync
loc_86C2:
		JSR		_ppu_screen_clear	; now, finally, the last bit of the screen will be blanked
		LDA		#$FD
		STA		_spr_force_shuffle_mode
		LDA		_global_flags_array.byte2
		ORA		#$20
		STA		_global_flags_array.byte2
		LDA		#0					; reset screen scroll position to 0,0 so the battle can appear there
		STA		_ppu_scroll_shadow	;  regardless of where the map was located
		STA		_ppu_scroll_shadow+1
		LDA		_ppu_ctrl_shadow
		AND		#$FE
		STA		_ppu_ctrl_shadow
		JSR		_wait_for_nmi_is_over
		JSR		_wait_for_vblank_render_off
		LDA		_battle_type_fight
		CMP		#$FF
		BNE		loc_86F5
		LDA		#$30
		STA		_ram_pal_buf+1
		STA		_current_pc_status_pal_value
loc_86F5:
		FARX	_b2_s0
		FARX	_b2_s2
		LDA		#$40
		STA		_tmp21
		JSR		_pal_fade_step
		JSR		_wait_for_nmi_is_over
		JSR		_ppu_enable
		JSR		_pal_fade_in
		LDA		_battle_type_fight				; start up the battle differently depending on battle type
		CMP		#1								; branch to special logic for battle type 1
		BEQ		.is_battle_type_1
		CMP		#$FF							; branch to special logic for battle type != FF
		BNE		.is_battle_type_0
		FARX	_b4_s24_type80_battle_mode_handler	; must be battle type FF
		JMP		.end_battle_cleanup
.is_battle_type_1:
		FARX	_b4_s25_typeC0_battle_mode_handler
		JMP		.end_battle_cleanup
.is_battle_type_0:
		FARX	_b4_s0_type00_battle_mode_handler
.end_battle_cleanup:
		LDA		#0								; restore sprite shuffling mode for ingame
		STA		_spr_force_shuffle_mode
		STA		byte_5C
		RTS

byte_8734:
		.BYTE	$20,$1E,$20,$1E

; =============== S U B	R O U T	I N E =======================================
; related to the pre-battle screen wipe, runs multiple times per stage
sub_8738:
		LDX		#0
loc_873A:
		LDA		byte_4D,X
		CMP		byte_8734,X
		BCC		loc_8752
		CMP		#$90
		BCC		loc_874B
		LDA		#0
		STA		byte_4D,X
		BEQ		loc_8752
loc_874B:
		LDA		byte_8734,X
		TAY
		DEY
		STY		byte_4D,X
loc_8752:
		INX
		CPX		#4
		BCC		loc_873A
		LDA		#0
		STA		byte_55
		LDX		#$FF
		LDA		#1
		STA		byte_53
		STA		byte_54
		LDA		byte_4F
		SEC
		SBC		byte_4D
		BCS		loc_8770
		EOR		#$FF
		ADC		#1
		STX		byte_53
loc_8770:
		STA		byte_51
		LDA		byte_50
		SEC
		SBC		byte_4E
		BCS		loc_877F
		EOR		#$FF
		ADC		#1
		STX		byte_54
loc_877F:
		STA		byte_52
		CMP		byte_51
		BCC		loc_878A
		JSR		sub_87BA
		INC		byte_55
loc_878A:
		LDA		byte_51
		LSR
		STA		word_4A
		LDA		byte_4D
		STA		byte_56
		LDA		byte_4E
		STA		byte_57
loc_8797:
		JSR		sub_87D0
		LDA		word_4A
		CLC
		ADC		byte_52
		STA		word_4A
		CMP		byte_51
		BCC		loc_87B0
		SBC		byte_51
		STA		word_4A
		LDA		byte_57
		CLC
		ADC		byte_54
		STA		byte_57
loc_87B0:
		LDA		byte_56
		CMP		byte_4F
		BNE		sub_87C6
		LDA		byte_55
		BEQ		locret_87C5

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; gets called when a random battle happens, after the screen flashes
; called repeatedly while the sqirly screen wipe happens
; byte swapps an array u16 words_4D[4]
sub_87BA:
		LDX		#byte_4D
loc_87BC:
		JSR		_byteswap_word_at_X
		INX
		INX
		CPX		#$55
		BCC		loc_87BC
locret_87C5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_87C6:
		LDA		byte_56
		CLC
		ADC		byte_53
		STA		byte_56
		JMP		loc_8797

; =============== S U B	R O U T	I N E =======================================
sub_87D0:
		LDY		#0
		LDA		byte_55
		BEQ		loc_87D7
		INY
loc_87D7:
		LDA		byte_56,Y
		STA		word_4
		CMP		#$20
		BCS		locret_881F
		INY
		TYA
		AND		#1
		TAY
		LDA		#$80
		STA		word_4A+1
		LDA		#5
		STA		byte_4C
		LDA		byte_56,Y
		STA		word_4+1
		CMP		#$1E
		BCS		locret_881F
		ASL
		ASL
		LDX		#word_4A+1
		JSR		_add8_to_16
		LDA		word_4
		LSR
		LSR
		LSR
		JSR		_add8_to_16
		LDA		word_4
		AND		#7
		TAX
		LDY		#0
		LDA		(word_4A+1),Y
		AND		byte_8820,X
		BNE		locret_881F
		LDA		(word_4A+1),Y
		ORA		byte_8820,X
		STA		(word_4A+1),Y
		LDA		#0
		JSR		_print_char
locret_881F:
		RTS
byte_8820:
		.BYTE	  1,  2,  4,  8,$10,$20,$40,$80

; =============== S U B	R O U T	I N E =======================================
; byteswaps u16[X]
_byteswap_word_at_X:
		LDA		0,X
		LDY		1,X
		STY		0,X
		STA		1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; related to pre-battle screen wipe, runs multiple times per stage
sub_8831:
		LDY		#0
loc_8833:
		LDA		0,X
		STA		byte_4D,Y
		INX
		INY
		CPY		#4
		BCC		loc_8833
		JMP		sub_8738

; =============== S U B	R O U T	I N E =======================================
; runs most, but not all, of the pre-battle screen wipe
sub_8841:
		LDX		#$10
		STX		byte_58
		STX		byte_5A
		STX		byte_5C
		STX		word_5E
		DEX
		STX		byte_59
		STX		byte_5B
		STX		byte_5D
		STX		word_5E+1
loc_8854:
		JSR		sub_8897
		JSR		_ppu_force_dequeue
		LDY		#2
loc_885C:
		INC		word_5E
		INC		byte_5B
		DEC		byte_5C
		DEC		byte_59
		DEY
		BNE		loc_885C
		LDA		byte_5C
		BNE		loc_8854
loc_886B:
		JSR		sub_8897
		INC		byte_58
		DEC		byte_5A
		INC		word_5E+1
		DEC		byte_5D
		BNE		loc_886B
loc_8878:
		JSR		sub_8897
		INC		byte_5C
		DEC		word_5E
		INC		byte_58
		DEC		byte_5A
		BNE		loc_8878
loc_8885:
		JSR		sub_8897
		INC		byte_5C
		DEC		word_5E
		INC		byte_59
		DEC		byte_5B
		LDA		byte_59
		CMP		#$F
		BCC		loc_8885
		RTS

; =============== S U B	R O U T	I N E =======================================
; related to the pre-battle screen wipe, seems to run more commonly than some of the other subroutines but still not onc per stage
sub_8897:
		LDX		#byte_58
		JSR		sub_8831
		LDX		#byte_5C
		JMP		sub_8831

; =============== T A B L E =================================================
; a slim table that defines "FIGHT!" which appears during the wipe before some battles
; it takes the form of the bitmask that appears at $580
; however, this is put at $5B0 (since the table is slim, it is patched in at just the right location)
; it appears to be continually written on top of the bitmap that the swirly wipe generates, but im not 100% sure about that
_wipe_fight_tbl:
		.BYTE	$BC,$73,$D2,$27
		.BYTE	  4,$89,$12,$21
		.BYTE	  4,  9,$12,$21
		.BYTE	$1C,  9,$1E,$21
		.BYTE	  4,$E9,$12,$21
		.BYTE	  4,$89,$12,  1
		.BYTE	$84,$F3,$12,$21

; =============== S U B	R O U T	I N E =======================================
sub_88BD:
		LDX		#$C
loc_88BF:
		TXA
		PHA
		LDA		_ppu_mask_shadow
		EOR		#1
		STA		_ppu_mask_shadow
		LDX		#3
		JSR		_sleep_X_sync
		PLA
		TAX
		DEX
		BNE		loc_88BF
		LDA		_ppu_mask_shadow
		AND		#$EF
		STA		_ppu_mask_shadow
		JMP		_wait_for_nmi_is_over_sync

byte_88DE:
		.BYTE	$87,$81,$FF
		.BYTE	$65,$FF
		.BYTE	$88,$8A,$8A,$8A,$FF
		.BYTE	$89,$8A,$FF
		.BYTE	$8A,$FF
		.BYTE	$34,$FF
		.BYTE	$7D,$FF
		.BYTE	$83,$FF
		.BYTE	$85,$FF
		.BYTE	$82,$FF
		.BYTE	$7F,$FF
		.BYTE	$20,$FF
		.BYTE	$62,$FF
		.BYTE	$5F,$FF
		.BYTE	$75,$FF
		.BYTE	$81,$FF
		.BYTE	$6F,$FF
		.BYTE	$84,$FF
		.BYTE	$36,$FF
byte_8909:
		.BYTE	  1,  1,  0,  1,  0,  1,  1,  1,  1,  0,  1,  2,  0,  5,  0,  1
		.BYTE	  0,  2,  0,  1,  0,  1,  0,  1,  0,  2,  0,  8,  0,  1,  0,  1
		.BYTE	  0,  2,  0,  2,  0,  1,  0,  1,  0,  1,  0

; =============== T A B L E S =================================================
; random encounter probability lookups. high value means high probability, so you can see theyre higher at nght
_random_encounter_overworld_probability_daytime_tbl:
		.BYTE	  4, $F, $A, $F,$12,$19,$54,$12, $A
_random_encounter_overworld_probability_nighttime_tbl:
		.BYTE	  5,$13, $D,$13,$16,$1F,$54,$16, $A ; only used for overworld

; =============== T A B L E =================================================
; random encounter information for 16x16 blocks of overworld. traditionally dragon warriory!
byte_8946:
		.BYTE	$1F,$0A,$0A,$0A,$0A,$0A,$0A,$0A,$0A,$25,$25,$25,$25,$25,$25,$25
		.BYTE	$1F,$0A,$0A,$0A,$0A,$0A,$CA,$EC,$2C,$2C,$25,$25,$25,$25,$25,$25
		.BYTE	$1F,$1F,$09,$49,$89,$8A,$2E,$2D,$EC,$2C,$24,$24,$24,$24,$24,$24
		.BYTE	$1F,$09,$09,$48,$89,$AE,$AE,$2C,$EC,$EC,$E3,$24,$23,$23,$23,$23
		.BYTE	$1F,$09,$48,$08,$88,$8C,$AD,$2C,$2C,$D8,$E4,$24,$64,$61,$20,$20
		.BYTE	$0F,$0F,$0F,$08,$0C,$8C,$10,$2D,$6D,$18,$18,$24,$64,$61,$61,$20
		.BYTE	$0F,$0F,$0E,$0F,$0C,$0C,$10,$55,$56,$57,$18,$18,$24,$61,$21,$20
		.BYTE	$1A,$0E,$0D,$0D,$4C,$CC,$11,$55,$56,$17,$17,$20,$20,$20,$20,$20
		.BYTE	$1A,$4E,$4E,$4D,$8D,$91,$11,$54,$54,$16,$17,$27,$27,$27,$2A,$2A
		.BYTE	$1A,$1A,$5A,$4D,$30,$12,$12,$13,$13,$1C,$1C,$1C,$29,$2B,$2A,$27
		.BYTE	$1A,$1A,$5A,$71,$30,$12,$13,$13,$13,$13,$27,$27,$27,$2B,$27,$27
		.BYTE	$1B,$1B,$5B,$30,$30,$06,$06,$06,$06,$06,$06,$07,$07,$29,$27,$27
		.BYTE	$1B,$1B,$1B,$1B,$1B,$1D,$1D,$1D,$05,$05,$46,$07,$07,$27,$27,$27
		.BYTE	$1D,$1D,$1D,$1D,$1D,$1D,$2F,$1D,$05,$05,$04,$07,$07,$29,$27,$27 ; $04 here is just left of aliahan castle
		.BYTE	$1E,$DE,$DE,$DE,$DE,$DD,$1D,$1D,$05,$05,$04,$07,$E9,$E9,$29,$29
		.BYTE	$1E,$DE,$DE,$DE,$DE,$DE,$1E,$1E,$1E,$1E,$1E,$1E,$E9,$E9,$29,$29

byte_8A46:
		.BYTE	$33,$33,$33,$34,$3D,$3D,$3D,$3D,$33,$33,$33,$34,$34,$3D,$3D,$3D
		.BYTE	$33,$32,$32,$34,$34,$34,$3D,$3D,$33,$32,$32,$34,$34,$3C,$3C,$3C
		.BYTE	$33,$32,$32,$3F,$3C,$3C,$3C,$3C,$36,$36,$36,$37,$39,$39,$3A,$3A
		.BYTE	$36,$36,$36,$37,$37,$39,$3A,$3A,$36,$36,$36,$37,$39,$39,$3A,$3A
byte_8A86:
		.BYTE	 $B,$3F,$41,$4A,$FF,$FF,$4F,$4F,$FF,$53,$58,$5F,$5D,$FF,$3B,$FF
		.BYTE	$4C,$43,$54,$5A,$47,$38, $B,$FF, $B,$4E,$4E,$FF,$42,$FF,$46,$45
		.BYTE	$4A,$4B,$4B,$FF,$3B,$52,$52,$51,$FF,$59,$5F,$57,$5D,$5E,$3E,$FF
		.BYTE	$3E,$FF,$FF,$26,$22,$19,$19,$FF,$50,$50,$4C,$4D,$4D,$4D,$4D,$43
		.BYTE	$44,$FF,$55,$55,$56,$56,$5A,$5B,$5B,$5C,$47,$48,$FF,$48,$FF,$FF
		.BYTE	$FF,$28,$38,$35,$35

; =============== T A B L E S =================================================
; random encounter info structs. each entry is 15 bytes long
; [0] - PPPAAABB
;     P: probability of encounter index
;     A: related to which byte_90F3 table entry is chosen. oddly, the table doesnt have 8 entries despite
;        having 3 bits reserved here. so we should see no $10 bit set in [0] (that's true)
;     B: ?
; [1]-[D] - Contains something (enemy or group?) related to each entry in one of the byte_90F3 records
;           these are then used at least to reference byte_907B, so I dont expect them to exceed 20, but they do...
_random_encounter_overworld_tbl:
		.BYTE	$64,$FF,$3F,$40,$41,$42,$FF,$40,$3F,$41,$45,$42,$42,$FF,$FF
		.BYTE	$64,$FF,$43,$40,$41,$49,$28,$41,$43,$43,$40,$49,$FF,$FF,$FF
		.BYTE	$84,$55,$41,$43,$49,$55,$FF,$45,$43,$55,$44,$55,$55,$FF,$FF
		.BYTE	$84,$3F,$42,$43,$44,$60,$FF,$44,$42,$45,$43,$60,$60,$FF,$FF
		.BYTE	$60,$FF,$00,$FF,$01,$FF,$FF,$01,$00,$00,$01,$01,$00,$FF,$FF
		.BYTE	$60,$FF,$01,$FF,$00,$02,$00,$00,$01,$00,$01,$02,$FF,$FF,$FF
		.BYTE	$64,$01,$00,$02,$03,$01,$FF,$02,$00,$01,$03,$02,$FF,$FF,$FF
		.BYTE	$6C,$04,$05,$06,$08,$0B,$FF,$06,$08,$05,$07,$0B,$09,$FF,$FF
		.BYTE	$64,$0D,$0C,$07,$0B,$0D,$FF,$0C,$07,$0D,$0F,$0E,$1B,$FF,$FF
		.BYTE	$64,$0F,$0D,$11,$10,$0F,$04,$10,$0D,$10,$11, $E,$1B,$FF,$FF
		.BYTE	$64,$12,$14,$15,$0F,$16,$1B,$14,$11,$15,$12,$16,$18,$FF,$FF
		.BYTE	$48,$66,$63,$64,$2E,$66,$6C,$66,$2E,$6E,$5B,$66,$5B,$FF,$FF
		.BYTE	$68,$FF,$1E,$1C,$16,$19,$FF,$12,$1C,$1E,$1E,$1B,$14,$FF,$01
		.BYTE	$60,$21,$21,$1C,$23,$20,$13,$21,$1C,$1A,$23,$20,$FF,$FF,$FF
		.BYTE	$64,$1A,$23,$1C,$21,$20,$FF,$23,$23,$21,$1C,$20,$FF,$FF,$FF
		.BYTE	$88,$15,$22,$16,$1B,$19,$22,$17,$22,$FF,$22,$19,$FF,$01,$01
		.BYTE	$60,$27,$29,$21,$1C,$27,$FF,$29,$29,$27,$26,$25,$FF,$FF,$02
		.BYTE	$60,$26,$27,$29,$26,$25,$09,$26,$27,$29,$26,$25,$FF,$FF,$FF
		.BYTE	$68,$26,$2A,$27,$25,$2A,$FF,$2A,$26,$2A,$26,$47,$FF,$FF,$FF
		.BYTE	$64,$25,$2A,$27,$26,$25,$28,$27,$26,$2A,$FF,$47,$FF,$FF,$FF
		.BYTE	$68,$28,$2C,$2F,$2A,$28,$FF,$FF,$2F,$28,$2C,$33,$46,$FF,$FF
		.BYTE	$68,$2C,$2F,$28,$31,$2C,$FF,$2D,$2C,$2F,$28,$33,$46,$FF,$FF
		.BYTE	$68,$49,$34,$30,$39,$49,$3A,$49,$34,$39,$30,$47,$3A,$FF,$FF
		.BYTE	$6C,$3D,$39,$34,$3D,$3B,$FF,$39,$39,$34,$3D,$3B,$FF,$FF,$FF
		.BYTE	$6C,$34,$FF,$3D,$39,$3B,$FF,$39,$34,$31,$3D,$3B,$FF,$FF,$FF
		.BYTE	$64,$80,$7F,$7E,$7D,$80,$77,$80,$7F,$7E,$67,$80,$67,$0D,$0D
		.BYTE	$68,$3C,$3E,$32,$49,$3C,$FF,$3E,$32,$3D,$3C,$3E,$FF,$02,$07
		.BYTE	$68,$4F,$3C,$3E,$32,$4F,$FF,$4F,$3E,$32,$3C,$4F,$FF,$08,$08
		.BYTE	$88,$FF,$FF,$46,$1D,$FF,$FF,$FF,$1D,$46,$FF,$FF,$FF,$FF,$FF
		.BYTE	$68,$FF,$32,$4F,$18,$FF,$49,$FF,$18,$32,$4F,$FF,$FF,$FF,$FF
		.BYTE	$48,$FF,$46,$45,$FF,$52,$FF,$FF,$46,$45,$FF,$52,$5B,$FF,$FF
		.BYTE	$64,$3E,$3C,$3E,$3B,$3E,$2B,$3E,$3B,$3E,$3C,$3E,$FF,$FF,$FF
		.BYTE	$60,$49,$4B,$45,$4F,$48,$FF,$48,$4B,$45,$4B,$FF,$FF,$FF,$FF
		.BYTE	$68,$4B,$4A,$4F,$45,$4B,$FF,$4A,$44,$4B,$48,$4A,$FF,$10,$10
		.BYTE	$48,$7F,$7D,$7E,$7E,$7F,$77,$7F,$7E,$7D,$7E,$7F,$67,$06,$06
		.BYTE	$64,$4A,$4F,$48,$4B,$4A,$49,$4B,$31,$4A,$45,$4B,$FF,$FF,$FF
		.BYTE	$68,$48,$4F,$4A,$4B,$48,$35,$4A,$48,$4B,$FF,$31,$6C,$FF,$FF
		.BYTE	$68,$52,$48,$52,$FF,$52,$FF,$52,$48,$52,$FF,$52,$5B,$FF,$FF
		.BYTE	$64,$7D,$7C,$7F,$FF,$7D,$7B,$7D,$7F,$7C,$77,$7D,$FF,$05,$05
		.BYTE	$60,$3E,$4F,$54,$4B,$54,$FF,$FF,$54,$FF,$54,$FF,$FF,$FF,$FF
		.BYTE	$64,$78,$76,$74,$6C,$78,$FF,$78,$76,$74,$78,$78,$67,$0C,$0C
		.BYTE	$68,$FF,$43,$3F,$31,$54,$FF,$3E,$43,$45,$54,$4B,$FF,$FF,$FF
		.BYTE	$68,$55,$58,$50,$59,$55,$50,$55,$59,$54,$50,$55,$55,$04,$04
		.BYTE	$68,$50,$4C,$54,$4C,$50,$FF,$FF,$50,$54,$4C,$FF,$54,$09,$09
		.BYTE	$68,$50,$58,$3B,$4C,$50,$57,$50,$58,$31,$4C,$50,$58,$FF,$FF
		.BYTE	$68,$58,$50,$4C,$5F,$58,$56,$58,$50,$FF,$3A,$58,$FF,$03,$03
		.BYTE	$68,$4D,$50,$57,$58,$4D,$56,$4D,$57,$50,$58,$4D,$FF,$FF,$FF
		.BYTE	$64,$0D,$0B,$1B,$16,$19,$17,$21,$16,$19,$1E,$24,$1B,$FF,$FF
		.BYTE	$68,$5C,$5D,$5F,$FF,$5C,$2B,$FF,$5F,$5D,$5C,$5C,$FF,$13,$13
		.BYTE	$68,$5A,$FF,$52,$56,$5A,$5B,$5A,$5D,$52,$5D,$5A,$5B,$0A,$0A
		.BYTE	$68,$68,$69,$00,$FF,$68,$63,$69,$00,$68,$FF,$FF,$67,$12,$12
		.BYTE	$68,$69,$68,$6D,$FF,$69,$FF,$69,$6D,$68,$FF,$69,$67,$FF,$FF
		.BYTE	$68,$66,$6F,$69,$6F,$66,$67,$66,$6F,$69,$6F,$66,$77,$FF,$FF
		.BYTE	$46,$6A,$78,$5A,$76,$6A,$69,$6A,$FF,$78,$76,$6A,$76,$FF,$FF
		.BYTE	$68,$53,$6A,$6F,$68,$53,$FF,$53,$6A,$53,$66,$53,$FF,$FF,$FF
		.BYTE	$64,$69,$53,$71,$6F,$6D,$6B,$6B,$6F,$53,$71,$6B,$FF,$FF,$FF
		.BYTE	$64,$76,$78,$6C,$79,$76,$FF,$76,$79,$79,$6B,$76,$76,$FF,$FF
		.BYTE	$68,$53,$78,$74,$68,$00,$FF,$69,$78,$74,$53,$69,$6C,$FF,$FF
		.BYTE	$68,$53,$70,$6A,$6D,$53,$70,$6D,$74,$70,$63,$74,$70,$0E,$0E
		.BYTE	$68,$64,$5A,$74,$63,$64,$5E,$74,$63,$5A,$69,$74,$FF,$FF,$FF
		.BYTE	$68,$74,$53,$69,$FF,$74,$6C,$74,$71,$74,$6C,$74,$FF,$FF,$FF
		.BYTE	$68,$6D,$71,$FF,$69,$6D,$79,$6D,$71,$69,$79,$6D,$71,$FF,$FF
		.BYTE	$64,$7B,$7A,$79,$FF,$7B,$67,$7B,$79,$7A,$FF,$7B,$77,$FF,$FF
		.BYTE	$68,$7C,$7B,$7A,$FF,$7C,$6B,$7B,$7A,$FF,$7C,$7C,$FF,$0B,$0B
		.BYTE	$64,$72,$73,$3F,$40,$72,$64,$73,$60,$72,$5D,$73,$FF,$FF,$FF
		.BYTE	$60,$FF,$02,$00,$01,$FF,$FF,$02,$00,$01,$03,$02,$FF,$FF,$FF
		.BYTE	$60,$00,$03,$05,$02,$00,$FF,$05,$03,$02,$04,$05,$FF,$FF,$FF
		.BYTE	$44,$03,$01,$FF,$05,$03,$FF,$04,$01,$03,$06,$04,$FF,$00,$00
		.BYTE	$64,$05,$03,$04,$06,$05,$FF,$06,$01,$04,$08,$06,$07,$FF,$FF
		.BYTE	$84,$FF,$0A,$0B,$06,$FF,$FF,$0A,$06,$0B,$07,$0A,$0D,$FF,$FF
		.BYTE	$44,$0B,$0A,$04,$08,$0B,$FF,$0B,$0A,$0A,$0B,$07,$0D,$FF,$FF
		.BYTE	$64,$10,$12,$11,$0E,$10,$FF,$0E,$10,$11,$12,$0E,$1B,$FF,$FF
		.BYTE	$64,$13,$12,$0E,$14,$13,$FF,$14,$0E,$12,$13,$14,$1B,$FF,$FF
		.BYTE	$64,$11,$1B,$14,$13,$12,$0E,$FF,$13,$14,$1B,$FF,$1B,$FF,$FF
		.BYTE	$40,$16,$17,$FF,$19,$16,$FF,$16,$FF,$17,$19,$16,$19,$FF,$FF
		.BYTE	$64,$1A,$19,$17,$16,$1A,$FF,$1A,$16,$17,$19,$1A,$19,$FF,$FF
		.BYTE	$68,$20,$1D,$23,$FF,$20,$1F,$23,$1D,$20,$FF,$FF,$1F,$FF,$FF
		.BYTE	$64,$24,$FF,$20,$1D,$24,$1F,$24,$FF,$1D,$24,$FF,$FF,$FF,$FF
		.BYTE	$68,$44,$43,$61,$40,$44,$60,$47,$44,$43,$60,$47,$FF,$FF,$FF
		.BYTE	$64,$63,$6E,$5D,$5A,$63,$FF,$5D,$63,$6E,$5A,$5D,$5E,$FF,$FF
		.BYTE	$48,$18,$24,$FF,$20,$18,$FF,$18,$20,$1D,$24,$18,$FF,$FF,$FF
		.BYTE	$68,$6E,$5F,$63,$5D,$6E,$5E,$6E,$5F,$64,$5F,$6E,$6C,$FF,$FF
		.BYTE	$60,$5F,$63,$5C,$64,$5F,$FF,$5F,$5C,$63,$64,$5F,$6C,$FF,$FF
		.BYTE	$64,$2D,$33,$18,$28,$2D,$1F,$2D,$33,$18,$28,$2D,$FF,$0F,$0F
		.BYTE	$68,$38,$2F,$2C,$18,$38,$28,$38,$2C,$38,$26,$26,$FF,$FF,$FF
		.BYTE	$60,$FF,$49,$38,$09,$FF,$3A,$FF,$38,$49,$FF,$FF,$3A,$FF,$FF
		.BYTE	$60,$FF,$30,$49,$31,$FF,$3A,$30,$49,$31,$38,$30,$3A,$FF,$FF
		.BYTE	$44,$2C,$2F,$3C,$25,$1C,$35,$3E,$24,$23,$3C,$3E,$3A,$FF,$FF
		.BYTE	$68,$35,$46,$4E,$1D,$35,$FF,$35,$46,$4E,$4E,$35,$4E,$FF,$04
		.BYTE	$64,$4E,$35,$46,$47,$4E,$FF,$4E,$46,$35,$47,$4E,$4E,$FF,$FF
		.BYTE	$68,$4C,$4A,$37,$4B,$4C,$FF,$4C,$37,$37,$48,$4C,$FF,$FF,$FF
		.BYTE	$68,$3B,$49,$37,$4C,$3B,$18,$37,$4C,$3B,$4C,$37,$FF,$FF,$FF
		.BYTE	$68,$4C,$37,$4B,$37,$3B,$45,$37,$4C,$4C,$3A,$3B,$3A,$FF,$FF
		.BYTE	$68,$59,$55,$61,$51,$59,$51,$59,$55,$61,$51,$59,$55,$11,$11
		.BYTE	$68,$61,$59,$51,$55,$61,$FF,$61,$59,$51,$55,$61,$FF,$FF,$FF
		.BYTE	$44,$26,$34,$1B,$2A,$2F,$31,$1B,$26,$33,$24,$21,$FF,$FF,$FF

; =============== T A B L E =================================================
; 20 entries
byte_907B:
		.BYTE	$13,$00,$02,$04,$FF,$FF
		.BYTE	$0D,$00,$1B,$09,$FF,$FF
		.BYTE	$36,$00,$09,$31,$FF,$FF
		.BYTE	$0C,$00,$57,$31,$FF,$FF
		.BYTE	$00,$00,$31,$FF,$FF,$FF
		.BYTE	$2D,$00,$77,$6C,$FF,$FF
		.BYTE	$0C,$00,$75,$69,$FF,$FF
		.BYTE	$0D,$00,$3E,$09,$FF,$FF
		.BYTE	$0D,$00,$4F,$47,$FF,$FF
		.BYTE	$0D,$00,$59,$47,$FF,$FF
		.BYTE	$0C,$00,$5A,$2B,$FF,$FF
		.BYTE	$24,$00,$70,$6C,$FF,$FF
		.BYTE	$26,$00,$7C,$56,$FF,$FF
		.BYTE	$34,$00,$75,$77,$FF,$FF
		.BYTE	$2C,$00,$70,$57,$FF,$FF
		.BYTE	$2E,$00,$26,$1C,$FF,$FF
		.BYTE	$35,$00,$35,$48,$FF,$FF
		.BYTE	$0D,$00,$4C,$2B,$FF,$FF
		.BYTE	$2E,$25,$00,$09,$39,$6C
		.BYTE	$25,$04,$5C,$50,$2B,$FF

;----------------------------------------------
; each record is 17 bytes long
; [0]-[12] - some kind of array of choices
byte_90F3:
		.BYTE	$1C,$38,$46,$54,$70,$84,$92,$A0,$AE,$BC,$D8,$E3,$F1,$00,$00,$B6,$02
		.BYTE	$14,$28,$37,$46,$64,$78,$8C,$96,$A5,$AF,$D7,$E2,$F1,$40,$80,$B1,$01
		.BYTE	$12,$32,$3F,$44,$67,$71,$84,$9D,$B0,$BF,$DD,$E2,$F1,$40,$10,$B4,$02
		.BYTE	$0A,$14,$26,$30,$76,$76,$80,$8A,$9C,$A6,$EC,$F6,$FF,$40,$00,$93,$01

;----------------------------------------------
; hgfedcba - bits for every character class,
; 	bit = 0 means item can't be equipped by this class
; 	bit = 1 means item can be equipped
; a -
; b - wizard class
; c -
; d -
; e -
; f -
; g - fighter class
; h -
;
; ex. everyone can equip cypress stick (0th entry)
; ex. wizard (1<<1 = $02) can equip poison needle (8th entry)
; ex. fighter (1<<6 = $40) can equip iron claw (9th entry)
;
_b0_d40_class_equip_permission_mask_list:
		.BYTE	$FF,$FD,$FD,$FF,$FD,$F1,$79, $A,  2,$40,$B9,$10,$FD,$11,$11,$10
		.BYTE	 $E,$11, $E,$11,$11, $E,$B0,$3D,$29,$10,$11, $A,  1,$19,$11, $C
		.BYTE	$FF,$C8,$3D,$80,$31,$11,$1D,$FF,  1,$20,$FF,$48, $C,$11,  2,$3D
		.BYTE	$BF,$FF,$FF,$3D,$11,$11,$11, $E,$BD,$31,$11,  1,$11,$3D,$1D,$BF
		.BYTE	$1D,$AE,$11,$A0,$FF,$BF,$11,  1,$FF,$FF,$40,$FF,$FF,$FF,$FF

;----------------------------------------------
; whether items can be used by a given class.
; first $20 entries are weapons, final $7 entries are items $47-$4F
; sanity checks:
; ITEM_SACRED_AMULET $01 (only hero, as reported)
; ITEM_GOLDEN_CLAW $40 (only soldier, as per common sense)
; ITEM_BOOK_OF_SATORI $04 (only by pilgrim? that's odd. "but nothing happens". game checks out OK)
; ITEM_WIZARDS_RING $F (only hero, wizard, pilgrim, sage: yep)
;
_b0_d41_item_use_list:
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$11,$11,$FF
		.BYTE	 $E,$FF, $E,$FF,$FF,$FF,$FF,$FF,$20,$FF,$11,$FF,  1,$19,$FF, $C
		.BYTE	  1,$FF,$FF,$40,$FF,  4, $E, $F

;----------------------------------------------
; aka item use effects (in battle) list sanity checks:
; ITEM_WIZARDS_WAND $E2 (casts spells, yep)
; THORS AND SNOWBLAST SWORDS: $E3 both. that's odd. Theyre definitely different effects.
;
; bit $80 means the item has a special use in battle, other than 'but nothing happens'
; bit $40 is referenced by the battlesystem for some reason
; bit $10 means that item cannot be thrown away from inventory
; bit $08 means that item is cursed
; bit $04 means something... whether it's automatically consumable
; It would be nice to break this down into 128 macro lines to build the values
;
_b0_d42_item_use_effects_list:
		.BYTE	  0,  1,  2,  2,  1,  2,  2,$E2,  1,  1,  1,  2,  1,$E3,$E3,  2
		.BYTE	$F3,$14,$83, $B, $B,  2,$F0,  2,  3,  2,$A2,$E2,$F3,$E3,  3,$E2
		.BYTE	  1,  1,  1,  2,  2,  2,  2,  2,$10,  2,  1,  2,  2, $B,  2,  1
		.BYTE	  1,  3,$10,  2,$10,  2,$10,  3,  1,  2,$83,$10,  9,  1,  2,$10
		.BYTE	  2,  0,$18,  1,  8,  1,  2,$90,$90,$82,$83,$90,$14,  2,$82,$B0
		.BYTE	$90,$10,$13,$10,$10,$10,  6,$14,$10,$10,$10,$90,$14,$10,$13,$85
		.BYTE	$85,$85,$85,$85,$86,$C4,$C4,$E5,$84,$C4,$81,$14,$C5,  1,$10,$10
		.BYTE	$F0,$A1,$B0,$E6,$E4,$90,$14,$14,$14,$14,$14,$14,$14

_b0_d44_item_effects_list:
		.BYTE	  5,  3,  1,  2,$4B,$19, $F, $F,  1,$4D,$20,$25,$37,$41, $F,  5
		.BYTE	  0,$80,  7,$2D,  5,$19,  0,$62,$19,$41,$4B,$19,$23,  1, $F,$1B
		.BYTE	  1,  8, $F, $D, $B,$18,$3A,$1D,  0,  7,$23,  8,$2C,  7,$7D,$30
		.BYTE	  7,$4E,  0,  3,  0,$62,  0,  3,  9,  7, $F,  0,  1,$12,$58,  0
		.BYTE	 $A,  8,  0,$10,  2,  8,$23,$80,$80,$81,$8F,$80,$80,  0,$99,$80
		.BYTE	  0,$80,$80,$80,$80,  0,$83,$80,$80,$80,$80,$80,$80,$80,$1E,$98
		.BYTE	$88,$8C,$86,$90,$82,$88,$8A,$82,$99,$85,$81,$80,$83,$82,$80,$80
		.BYTE	$80,$81,  0,  5,$23,  0,$80,$80,  0,  0,  0,  0,  0

; =============== S U B	R O U T	I N E =======================================
; returns player's HP value, player index is in byte_CE,
; result value written in word_4 temp var
;
;"sub_PC_StoreHP"
_b0_s2_player_HP_read:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_HP,X
		STA		word_4
		LDA		_players_HP+1,X
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns player's MAX HP value, player index is in byte_CE
; result value written in word_4 temp var
; used at least twice in sram shourtucts and directly here
;
;"sub_PC_StoreMHP"
_b0_s3_player_MHP_read:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_MHP,X
		STA		word_4
		LDA		_players_MHP+1,X
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; adds to the player's HP value stored in byte_CF/byte_D0, clamps at MHP
;
;"sub_PC_AddHP"
_b0_s4_player_HP_add:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_HP,X
		CLC
		ADC		byte_CF
		STA		word_4
		LDA		_players_HP+1,X
		ADC		byte_D0
		BCS		loc_92ED
		STA		word_4+1
		LDA		_players_MHP+1,X
		CMP		word_4+1
		BEQ		loc_92E6
		BCS		loc_92F7
		BCC		loc_92ED
loc_92E6:
		LDA		_players_MHP,X
		CMP		word_4
		BCS		loc_92F7
loc_92ED:
		LDA		_players_MHP,X
		STA		word_4
		LDA		_players_MHP+1,X
		STA		word_4+1
loc_92F7:
		LDA		word_4
		STA		_players_HP,X
		LDA		word_4+1
		STA		_players_HP+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; subtract to the player's HP value stored in byte_CF/byte_D0, clamps at 0
; returns indication of whether HP was 0
;
;"_PC_SubtractHP"
_b0_s5_player_HP_subtract:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_HP,X
		SEC
		SBC		byte_CF
		STA		word_4
		LDA		_players_HP+1,X
		SBC		byte_D0
		STA		word_4+1
		BCS		loc_931D
		LDA		#0
		STA		word_4
		STA		word_4+1
loc_931D:
		LDA		word_4
		STA		_players_HP,X
		LDA		word_4+1
		STA		_players_HP+1,X
		LDA		word_4
		ORA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns player's MP value, player index is in byte_CE, store it in word_4 and
; returns indication of whether MP was 0
;
;"sub_PC_SetMP"
_b0_s6_player_MP_read:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_MP,X
		STA		word_4
		LDA		_players_MP+1,X
		STA		word_4+1
		ORA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns player's MAX MP value, player index is in byte_CE, store it in word_4 and
; should be used in info screens at least.
;
;"sub_PC_SetMMP"
_b0_s7_player_MMP_read:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_MMP,X
		STA		word_4
		LDA		_players_MMP+1,X
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; adds u8[CE] to the player's MP value stored in u8[CF], clamps at MMP
;
_b0_s8_player_MP_add:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_MP,X
		CLC
		ADC		byte_CF
		STA		word_4
		LDA		_players_MP+1,X
		ADC		byte_D0
		BCS		loc_9373
		STA		word_4+1
		LDA		_players_MMP+1,X
		CMP		word_4+1
		BEQ		loc_936C
		BCS		loc_937D
		BCC		loc_9373
loc_936C:
		LDA		_players_MMP,X
		CMP		word_4
		BCS		loc_937D
loc_9373:
		LDA		_players_MMP,X
		STA		word_4
		LDA		_players_MMP+1,X
		STA		word_4+1
loc_937D:
		LDA		word_4
		STA		_players_MP,X
		LDA		word_4+1
		STA		_players_MP+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; subtract u8[$CE] points from the player's HP value stored in u16[$CF], clamps at 0
; returns indication of whether HP was 0
; return with C=0 if insufficient MP. also word_4 has curr MP
; return with C=1 if suffient MP, and MP is deducted
;
_b0_s9_player_MP_subtract:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_MP,X
		SEC
		SBC		byte_CF
		STA		word_4
		LDA		_players_MP+1,X
		SBC		byte_D0
		STA		word_4+1
		BCS		loc_93A9
		LDA		_players_MP,X
		STA		word_4
		LDA		_players_MP+1,X
		STA		word_4+1
		CLC
		RTS
loc_93A9:
		LDA		word_4
		STA		_players_MP,X
		LDA		word_4+1
		STA		_players_MP+1,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets player's MP to 0 and return 0 in word_4 temp var
; never used by any part of the program, not with the sram shourtucts,
; not with direct links. if there is such operation somewhere, it
; seems performed directly
;
;"sub_PC_ZeroMP"
_b0_sA_player_MP_set_sero:
		LDA		byte_CE
		ASL
		TAX
		LDA		#0
		STA		_players_MP,X
		STA		_players_MP+1,X
		STA		word_4
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; consume MP while casting, attepmting to subtract the desired amount of
; MP, if success, return CF=0, or else return subtracted back and return C=1
;
_b0_sB_player_MP_test:
		JSR		_b0_s9_player_MP_subtract
		BCC		locret_93CF
		JSR		_b0_s8_player_MP_add
		SEC
locret_93CF:
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns of the player's LEVEL with additional flag parameters,
; return level in word_4 first byte, return additional flags in word_4+1
; (death, poison, etc. other flags)
;
_b0_sC_player_LV_read:
		JSR		_b0_sE_player_STATUS_read
		BIT		word_4+1
		BPL		_de_status_ret						; bit 80 of the second byte is 0, so player is dead
		BVS		_nm_status_ret						; bit 40 of the second byte is 1, so player is "NM"
		LDA		_global_flags_array.byte2
		AND		#$20
		BEQ		_non_battle_flags					; battle flags has priority
		LDX		byte_CE
		LDA		_player_battle_order_and_flags,X
		AND		#8
		BNE		_sl_status_ret						; check if player is sleep
		LDA		word_4+1
		AND		#$10
		BNE		_cf_status_ret						; or confused
_non_battle_flags:
		LDA		word_4+1
		AND		#$20
		BNE		_po_status_ret						; bit 20 of the second byte is 1, so player is poisoned
loc_93F5:
		STA		word_4+1
		LDA		#0
		STA		word_6
		LDX		byte_CE
		LDA		_players_level,X
		STA		word_4
		RTS
_de_status_ret:
		LDA		#3			; "DE" string index
		BNE		loc_93F5
_nm_status_ret:
		LDA		#2			; "NM" string index
		BNE		loc_93F5
_po_status_ret:
		LDA		#1			; "PO" string index
		BNE		loc_93F5
_sl_status_ret:
		LDA		#4			; "SL" string index
		BNE		loc_93F5
_cf_status_ret:
		LDA		#5			; "CF" string index
		BNE		loc_93F5

; =============== S U B	R O U T	I N E =======================================
; request the tavern char LVL parameter by position in tavern list
;
_b0_sD_tavern_char_LV_read:
		JSR		_b0_s32_get_tavern_chars_list
		LDX		byte_CE						; desired char position in list
		CPX		word_4
		BEQ		loc_9422					; test if less of equal
		BCS		loc_9431
loc_9422:
		LDA		word_4+1,X					; get selected char index
		TAX
		LDA		_tavern_chars_level,X		; get the level of tavern char
		STA		word_4
		LDA		#0
		STA		word_4+1
		STA		word_6
		RTS
loc_9431:
		LDA		#$FF
		STA		_tmp12+1					; return "no such char index"
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns current player's status word, player index is byte_CE,
; return value in word_4
;
_b0_sE_player_STATUS_read:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status,X
		STA		word_4
		LDA		_players_status+1,X
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; gets the unassigned character name for the selection list.
;
_b0_sF_unassigned_formation_char_name_read:
		LDA		byte_CE
		JSR		_get_unassigned_formation_char_by_list_idx
		ASL
		ASL
		ASL
		TAY
		LDX		#0
loc_9450:
		LDA		_players_name,Y
		STA		word_4,X
		INY
		INX
		CPX		#8
		BNE		loc_9450
		RTS

; =============== S U B	R O U T	I N E =======================================
; get's the tavern char name by the position in list
;
_b0_s10_tavern_char_name_read:
		JSR		_b0_s32_get_tavern_chars_list
		LDX		byte_CE
		CPX		word_4
		BCS		loc_9479 		; branch down to return empty string
		LDA		word_4+1,X
		ASL
		ASL
		ASL
		TAY
		LDX		#0
loc_946D:						; copy name to result
		LDA		_tavern_chars_name,Y
		STA		word_4,X
		INY
		INX
		CPX		#8
		BNE		loc_946D
		RTS
loc_9479:
		LDA		#$FF			; there is no char at this position
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns player's STR parameter to word_4 and A
;
;"sub_calc_EffSTR"
_b0_s11_player_EffSTR_calc:
		LDX		byte_CE
		LDA		_players_STR,X 	; reference STR stat
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; calculates effective player's AGI parameter to word_4 and A
; factors in whether the meteorite armband is equipped
;
_b0_s12_player_EffAGI_calc:
		LDA		#ITEM_METEORITE_ARMBAND		; check whether meteorite armband is equipped
		STA		byte_CF 					; stash parameter in byte_CF
		JSR		_b0_s45_check_if_item_equipped
		CMP		#ITEM_EMETEORITE_ARMBAND
		BEQ		.armband_equipped
.no_armband_equipped:
		LDX		byte_CE 					; load target player
		LDA		_players_AGI,X				; read AGI stat
loc_9496:
		STA		word_4						; store return value
locret_9498:
		RTS
.armband_equipped:
		JSR		.no_armband_equipped		; first, cache the base AGI
		ASL		word_4						; apply a 2x bonus
		BCC		locret_9498					; return if theres no overflow
		LDA		#$FF						; clamp to 255 otherwise
		BNE		loc_9496

; =============== S U B	R O U T	I N E =======================================
; returns player's VIT parameter to word_4 and A
;
_b0_s13_player_EffVIT_calc:
		LDX		byte_CE
		LDA		_players_VIT,X				; reference VIT stat
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; returns player's INT parameter to word_4 and A
;
_b0_s14_player_EffINT_calc:
		LDX		byte_CE						; load "target"
		LDA		_players_INT,X
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; calculates effective player's LUCK parameter to u24[4]
; (setting up for a luck-based calculation)
;
_b0_s15_player_EffLUCK_calc:
		JSR		_b0_s1E_player_euipped_item_get	; scan inventory
		LDA		word_6+1					; load helm from inventory
		CMP		#ITEM_EUNLUCKY_HELMET
		BEQ		.return_luck_0
		LDX		byte_CE						; "target"
		LDA		_players_LUCK,X				; load pc.luck for PC=target
loc_94C2:
		STA		word_4
		LDA		#0
		STA		word_4+1
		STA		word_6
		RTS
.return_luck_0:
		LDA		#0
		BEQ		loc_94C2

; =============== S U B	R O U T	I N E =======================================
; calculates effective ATK at u24 in word_4
;  If(unequipped) return STR;
;  If(!IsFighter) return STR+WeaponPow(weapon);
;    (there's no POW in the table for the golden claw. only fighters can equip
;    or use the golden claw (equip and use are equivalent, it ends up equipped)
;  //must be a fighter
;  if(equipped(IronClaw)) return STR+WeaponPow(IronClaw);
;  if(equipped(GoldenClaw)) return STR+55;
;  return clamp(STR-WeaponPow(weapon)/2,0); //yikes!
;
; TODO - rename to something like calculate
;
_b0_s16_player_EffATK_calc:
		JSR		_b0_s2C_player_CLASS_read		; fetch the PCs class and stash it
		PHA
		JSR		_b0_s1E_player_euipped_item_get							; restore class and stash it elsewhere
		PLA
		STA		word_6+1
		LDA		word_4							; fetch A=found weapon
		BPL		.no_weapon_equipped				; check whether it's equipped
		CMP		#ITEM_EMPTY						; check whether it's vacant
		BNE		.weapon_equipped
.no_weapon_equipped:
		JSR		_b0_s11_player_EffSTR_calc			; just return the PC's strength
		LDA		#0
		STA		word_4+1 ; clear out high
		STA		word_6
		RTS
.weapon_equipped:
		AND		#ITEM_TYPE_MASK
		TAY
		JSR		_b0_s11_player_EffSTR_calc			; begin accumulating attack power in u24 at word_4 by storing Effective STR
		LDA		#0
		STA		word_4+1
		LDX		word_6+1						; load the stashed player class, check whether its fighter. fighter ATK is
												; calculated differently
		CPX		#CLASS_FIGHTER
		BEQ		.calc_ATK_for_fighter
		LDX		#word_4							; destination RAM offset in X (base 0) for _add8_to_16
.power_from_weapon:								; ok, he's not a fighter
		JSR		_far_read_pri_stat_tbl			; read power of weapon
loc_9500:
		JSR		_add8_to_16						; accumulate into Effective ATK
loc_9503:
		LDA		#0								; clear high order bytes of u24 result and return
		STA		word_6
		RTS
.calc_ATK_for_fighter:
		LDX		#word_4							; destination RAM offset in X (base 0) for _add8_to_16
		CPY		#ITEM_IRON_CLAW					; check whether we're using weapons the fighter is allowed to equip
		BEQ		.power_from_weapon
		CPY		#ITEM_GOLDEN_CLAW
		BNE		.fighter_weapon_penalty 		; branch down if it's not any kind of claw
		LDA		#$37							; attack power of golden claw is $37 (55 decimal). Why did this have to
												; be hardcoded? Different for fighter, i guess. Not sure how it even gets
												; calculated for non-fighters.
		BNE		loc_9500						; this is not conditional, at this pointer
.fighter_weapon_penalty:
		JSR		_far_read_pri_stat_tbl			; use the weapon's power divided by 2 as a PENALTY from the fighter's
												; base strength. that's weird.
		LSR
		JSR		_sub8_from_16
		BCS		loc_9503						; clamp at 0
		LDA		#0
		STA		word_4							;store results and exit
		STA		word_4+1
		BEQ		loc_9503

; =============== S U B	R O U T	I N E =======================================
; gets current rATK parameter for a selected player in battle mode
;
_b0_s17_player_rATK_read:
		TXA
		PHA
		LDA		byte_CE
		TAX
		LDA		_player_battle_order_and_flags,X
		AND		#3
		ASL
		TAX
		LDA		_players_rATK,X
		STA		word_4
		LDA		_players_rATK+1,X
		STA		word_4+1
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
; calculates effective player's DEF
; EffDEF = EffAGI/2 + (armor.def + shield.def + helm.def)
; returns it as u24 in word_4
;
_b0_s18_player_EffDEF_calc:
		JSR		_b0_s1E_player_euipped_item_get
		LDA		word_4+1					; push the armor type
		PHA
		JSR		_b0_s12_player_EffAGI_calc 	; calculate effective AGI and divide by 2, stashing result
		LSR		word_4
		LDA		#0
		STA		word_4+1
		PLA									; pop the armor type
		CMP		#ITEM_EMPTY					; check if it was empty (no armor equipped)
		BEQ		.no_armor_equipped
		AND		#ITEM_TYPE_MASK				; mask off equip bit
											; fetch DEF and incorporate into running total
		TAY 								; setup Y=item to query
		LDX		#word_4						; destination RAM offset in X (base 0)
		JSR		_far_read_pri_stat_tbl
		JSR		_add8_to_16
.no_armor_equipped:
		LDA		word_6						; load shield type
		CMP		#ITEM_EMPTY					; check if it was empty(no shield equipped)
		BEQ		.no_shield_equipped
		AND		#ITEM_TYPE_MASK
		TAY									; fetch DEF and incorporate into running total
		LDX		#word_4						; destination RAM offset in X (base 0)
		JSR		_far_read_pri_stat_tbl
		JSR		_add8_to_16
.no_shield_equipped:
		LDA		word_6+1					; load shield type
		CMP		#ITEM_EMPTY
		BEQ		.no_helm_equipped
		AND		#ITEM_TYPE_MASK
		TAY									; fetch DEF and incorporate into running total
		LDX		#word_4						; destination RAM offset in X (base 0)
		JSR		_far_read_pri_stat_tbl		; "read_pri_stat_tbl"
		JSR		_add8_to_16
.no_helm_equipped:
		LDA		#0							; clear MSB of u24 temp value
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s19_player_EXP_read:
		LDX		byte_CE
		JSR		_X_mul3
		LDY		#0
loc_958D:
		LDA		_players_EXP,X
		STA		word_4,Y
		INX
		INY
		CPY		#3
		BNE		loc_958D
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s1A_player_EXP_add:
		JSR		_b0_sE_player_STATUS_read
		LDA		word_4
		AND		word_4+1
		BPL		locret_95EC					; if player is dead, jump
		JSR		_b0_s19_player_EXP_read
		CLC
		LDA		word_4
		ADC		byte_CF
		STA		word_4
		LDA		word_4+1
		ADC		byte_D0
		STA		word_4+1
		LDA		word_6
		ADC		byte_D1
		STA		word_6
		CMP		#$98						; check if new exp less or above $98967F (9999999)
		BCC		_exp_less_than_9999999
		BNE		_exp_above_9999999
		LDA		word_4+1
		CMP		#$96
		BCC		_exp_less_than_9999999
		BNE		_exp_above_9999999
		LDA		word_4
		CMP		#$7F
		BCC		_exp_less_than_9999999
_exp_above_9999999:
		LDA		#$98
		STA		word_6
		LDA		#$96
		STA		word_4+1
		LDA		#$7F
		STA		word_4						; clamp at 9999999
_exp_less_than_9999999:
		LDX		byte_CE
		JSR		_X_mul3
		LDY		#0
loc_95E0:
		LDA		word_4,Y
		STA		_players_EXP,X
		INX
		INY
		CPY		#3
		BNE		loc_95E0
locret_95EC:
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s1B_player_gold_read:
		LDA		_players_gold
		STA		word_4
		LDA		_players_gold+1
		STA		word_4+1
		LDA		_players_gold+2
		STA		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s1B_player_gold_add:
		LDA		_players_gold
		CLC
		ADC		byte_CE
		STA		word_4
		LDA		_players_gold+1
		ADC		byte_CF
		STA		word_4+1
		LDA		_players_gold+2
		ADC		byte_D0
		STA		word_6
		LDA		word_6
		BEQ		loc_9631
		LDA		word_4+1
		CMP		#$86
		BCC		loc_9631
		BNE		loc_9625
		LDA		word_4
		CMP		#$9F
		BCC		loc_9631
loc_9625:
		LDA		#$9F
		STA		word_4
		LDA		#$86
		STA		word_4+1
		LDA		#1
		STA		word_6				; clamp at 99999
loc_9631:
		LDY		#2
loc_9633:
		LDA		word_4,Y
		STA		_players_gold,Y
		DEY
		BPL		loc_9633
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s1B_player_gold_subtract:
		LDA		_players_gold
		SEC
		SBC		byte_CE
		STA		word_4
		LDA		_players_gold+1
		SBC		byte_CF
		STA		word_4+1
		LDA		_players_gold+2
		SBC		byte_D0
		BCC		loc_9663
		STA		word_6
		STA		_players_gold+2
		LDA		word_4
		STA		_players_gold
		LDA		word_4+1
		STA		_players_gold+1
		RTS
loc_9663:
		LDA		#$FF
		STA		_tmp12+1			; return FF if money is not enough
		RTS

; =============== S U B	R O U T	I N E =======================================
; analyzes the targeted player's equipped items; reports them in word_4/word_6
;
;"sub_inv_AnalyzeEquipped"
_b0_s1E_player_euipped_item_get:
		LDA		byte_CE				; setup PCx8 inventory ptr:
		ASL							; the desired player's inventory slot 0 is pointed to by X
		ASL							; initialize itemTypeCounter:
		ASL
		TAX
		LDA		#0
		STA		_tmp12+1			; $13 will store the item types we're scanning inventory for
.load_8slot_counter:
		LDY		#8
		TXA
		PHA
.iterate_inventory ; 9676
		LDA		_players_inventory_list,X	; checking inventory for something special? equipped?
		BPL		.nextslot					; skip if nonequipped
		CMP		#$FF						; skip if nulled
		BEQ		.nextslot					; mask off equipbit?
		AND		#$7F
		JSR		_b0_s60_get_item_type		; test against desired type
		CMP		_tmp12+1
		BEQ		loc_9690
.nextslot:
		INX
		DEY
		BNE		.iterate_inventory
		LDA		#$FF
		BNE		loc_9693
loc_9690:
		LDA		_players_inventory_list,X
loc_9693:
		LDY		_tmp12+1
		STA		word_4,Y			; storing some inventory item in $4?
		PLA
		TAX
		INY							; move to next player
		STY		_tmp12+1
		CPY		#4					; check done analyzing
		BNE		.load_8slot_counter
		RTS

; =============== S U B	R O U T	I N E =======================================
; a set of functions to select an item of the desired type in inventory,
; by its count number. for example if we have 3 items of the same type,
; the indexes of these items will be 0, 1 and 2, so we can read the first
; item of desired type in the list, the second and the third accordingly.
; if there are less items than desired count number (3 or above), result
; is "no more items"
;
_b0_s1F_player_weapon_get:
		LDA		#0
		STA		byte_42
		BEQ		_get_item_from_inventory

; =============== S U B	R O U T	I N E =======================================
_b0_s21_player_armor_get:
		LDA		#1
		STA		byte_42
		BNE		_get_item_from_inventory

; =============== S U B	R O U T	I N E =======================================
_b0_s21_player_shield_get:
		LDA		#2
		STA		byte_42
		BNE		_get_item_from_inventory

; =============== S U B	R O U T	I N E =======================================
_b0_s22_player_helm_get:
		LDA		#3
		STA		byte_42

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_get_item_from_inventory:
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#0
		LDA		#8
		STA		_tmp12
loc_96C4:
		LDA		_players_inventory_list,X				; get first available item
		CMP		#$FF
		BEQ		loc_96DB
		AND		#$7F									; mask "equipped" flag
		JSR		_b0_s60_get_item_type					; get item type
		CMP		byte_42									; compare against desired type
		BNE		loc_96DB
		LDA		_players_inventory_list,X				; put this item in the result list
		STA		word_4+1,Y
		INY												; Y - number of items of selected type is found
loc_96DB:
		INX
		DEC		_tmp12
		BNE		loc_96C4
		STY		word_4
		CPY		byte_CF									; we need only one item, here is its index
		BEQ		loc_96EF								; test if desired index is in our list range
		BCC		loc_96EF
		LDX		byte_CF									; pick up the particular item
		LDA		word_4+1,X
		STA		word_4+1
		RTS
loc_96EF:
		LDA		#$FF
		STA		word_4+1								; no items found
		RTS

; =============== S U B	R O U T	I N E =======================================
; a set of functions to equip a particulal item in the inventory with the
; corresponding type, selected by subroutine type. unequip all items first
; then look for selected item.
;
_b0_s23_player_weapon_equip:
		LDA		#0
		STA		byte_42
		JMP		_player_equip_item

; =============== S U B	R O U T	I N E =======================================
_b0_s25_player_armor_equip:
		LDA		#1
		STA		byte_42
		JMP		_player_equip_item

; =============== S U B	R O U T	I N E =======================================
_b0_s24_player_shield_equip:
		LDA		#2
		STA		byte_42
		JMP		_player_equip_item

; =============== S U B	R O U T	I N E =======================================
_b0_s24_player_helm_equip:
		LDA		#3
		STA		byte_42

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_player_equip_item:
		JSR		_b0_s63_player_unequip_all_type_items
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		byte_CF
		INY
		LDA		#9
		STA		_tmp12+1
loc_971D:
		DEC		_tmp12+1
		BEQ		loc_9740					; if there no available item for equip,
											; which is impossible, since we already here
											; fall through to ... surprize! unequip all items again!
											; looks like this is just old dead code branch, never
											; executed in the final release.
											; rebranched it to RTS
		LDA		_players_inventory_list,X	; check inventory
		CMP		#$FF
		BEQ		loc_9736					; out of items, equip a new item instantly
		AND		#$7F
		JSR		_b0_s60_get_item_type
		INX
		CMP		byte_42
		BNE		loc_971D					; check for desired type
		DEY
		BNE		loc_971D					; check for particular item index
		DEX
loc_9736:
		LDA		_players_inventory_list,X	; equip this item and quit
		ORA		#$80
		STA		_players_inventory_list,X
		INX
loc_9740:
		RTS

; =============== S U B	R O U T	I N E =======================================
; to use this subroutine, init byte_42 with desired item type
;
_b0_s63_player_unequip_all_type_items:
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDA		#9
		STA		_tmp12+1
loc_974D:
		DEC		_tmp12+1
		BEQ		locret_976F						; end of inventory
		LDA		_players_inventory_list,X
		CMP		#$FF
		BEQ		locret_976F						; out of inventory items
		AND		#$7F
		JSR		_b0_s60_get_item_type
		INX
		CMP		byte_42
		BNE		loc_974D						; check if we found an item of particular type
		DEX
		LDA		_players_inventory_list,X		; unequip this item
		AND		#$7F
		STA		_players_inventory_list,X
		INX
		JMP		loc_974D						; look for the next item of the same type
locret_976F:									; (is this possible to equim two helms? why not rts here?)
		RTS

; =============== S U B	R O U T	I N E =======================================
;
;"sub_checkItemCanBeEquipped"
_b0_s5E_check_if_item_can_be_equipped:
		LDX		byte_CF						; load item of interest, reference a table, and store it in word_5
		LDA		_b0_d40_class_equip_permission_mask_list,X
		STA		word_4+1
		LDA		byte_CF						; load item of interest and check against book of satori,
		CMP		#ITEM_BOOK_OF_SATORI		; a sentinel for the end of accessories
		BCS		.not_equippable
_checkClassMask:
		JSR		_b0_s2C_player_CLASS_read	; normal gear
		LDA		#0
		LDX		word_4
		INX									; make a bitmask based on X (our class)
		SEC
loc_9786:
		ROL
		DEX
		BNE		loc_9786
		AND		word_4+1					; AND our class mask bit vs the equip_allow_list_entry
		BNE		.class_can_equip
.not_equippable:
		CLC
		RTS
.class_can_equip:
		JSR		_b0_s2F_player_gender_read	; but now check whether we're gender-blocked
		BNE		_return_true_in_C			; if we're female, theres no extra restrictions
		LDA		byte_CF						; reload item of interest to check against a hardcoded list
		CMP		#ITEM_SWORD_OF_ILLUSION		; deny males equipping some things
		BEQ		.not_equippable
		CMP		#ITEM_REVEALING_SWIMSUIT
		BEQ		.not_equippable
		CMP		#ITEM_MAGIC_BIKINI
		BEQ		.not_equippable
_return_true_in_C:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; byte_CF contains item of interest
;
;"sub_checkItemCanBeUsed"
_b0_s5E_check_if_item_can_be_used:
		LDX		byte_CF					; items > BLACK_PEPPER are always allowed, as theyre items
		CPX		#ITEM_BLACK_PEPPER
		BCS		_return_true_in_C
		CPX		#$20					; check if it's a weapon
		BCC		.check_item_use_table
		CPX		#ITEM_SACRED_AMULET		; check non-weapon gear by looking for items < ITEM_SACRED_AMULET
		BCC		_return_true_in_C
		TXA								; accessories are $47-$4F. weapons are $00 to $1F. subtract $27 to
		SBC		#$27					; turn accessories into $20-$27, and therefore stacked onto the
		TAX								; end of the usability table controlling the items
.check_item_use_table:
		LDA		_b0_d41_item_use_list,X	; query the item use table and branch up to check against the class mask
		STA		word_4+1
		JMP		_checkClassMask

; =============== S U B	R O U T	I N E =======================================
; return single inventory item by its count number
;
_b0_s28_player_inventory_item_get:
		JSR		_get_player_inventory_items_list
		LDX		byte_CF
		LDA		word_4+1,X
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; return all available inventory items for selected player.
; return number of items in inventory and its list
;
_get_player_inventory_items_list:
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#8
		STY		_tmp12
		LDA		#$FF
loc_97D5:
		STA		word_4,Y						; prepare temp buffer
		DEY
		BNE		loc_97D5
		STY		word_4
loc_97DD:
		LDA		_players_inventory_list,X		; copy non zero inventory entries
		CMP		#$FF
		BEQ		loc_97EA
		INC		word_4
		STA		word_4+1,Y
		INY
loc_97EA:
		INX
		DEC		_tmp12
		BNE		loc_97DD
		RTS

; =============== S U B	R O U T	I N E =======================================
; insert a new item to the player's inventory if inventory not full,
; return error "inventory is full" in other case
;
_b0_s29_player_inventory_item_add:
		JSR		_get_player_inventory_items_list
		LDA		word_4
		CMP		#8
		BCS		loc_9803
		LDA		byte_CF
		LDY		word_4
		STA		word_4+1,Y
		JMP		_flush_player_inventory_items_list
loc_9803:
		LDA		#$FF
		STA		word_4
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; removes item at particular index (byte_CF) from a player's (in byte_CE) inventory
; not 100% sure of details
;
_b0_s2A_player_inventory_item_remove:
		JSR		_get_player_inventory_items_list
		LDY		byte_CF
		LDA		#$FF
		STA		word_4+1,Y

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_flush_player_inventory_items_list:
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		PHA
		LDY		#7
		LDA		#$FF
loc_981E:
		STA		_players_inventory_list,X		; wipe players items list
		INX
		DEY
		BPL		loc_981E
		PLA
		TAX
		INY
loc_9828:
		LDA		word_4+1,Y						; copy items list to the player's inventory
		CMP		#$FF							; except empty slots
		BEQ		loc_9833
		STA		_players_inventory_list,X
		INX
loc_9833:
		INY
		CPY		#8
		BNE		loc_9828
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; looking for particular item in inventories of all characters in party,
; return party member index and found item number in inventory and CF=1
; or CF=0
;
_b0_s2B_is_players_owns_item:
		JSR		_b0_s31_get_party_chars_list
		ASL		word_4
		ASL		word_4
		ASL		word_4							; set offset to last party member idx
		LDX		#0
loc_9845:
		LDA		_players_inventory_list,X
		AND		#$7F
		CMP		byte_CE
		BNE		loc_985B
		TXA
		AND		#7
		STA		word_4+1						; save item inventory position
		TXA
		LSR
		LSR
		LSR
		STA		word_4							; save player who owns this item
		SEC
		RTS
loc_985B:
		INX
		CPX		word_4
		BNE		loc_9845						; check for all players
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; check target inventory for an equpped item (specified by byte_CF)
; returns: C flag (set if a found item was equipped)
; returns: word_4 (the value found in the inventory (equipped or otherwise) if the item was found in the inventory)
; returns: A (same as word_4)
; TODO: this should just be checking to see if it's in the inventory _at all_. please rename me
;
_b0_s45_check_if_item_equipped:
		LDA		#$FF
		STA		word_4
		LDA		byte_CE 					; load target PC number
		ASL									; calculate offset to the target's inventory: mult 8 for target inventory buffer
		ASL
		ASL
		TAX
		LDY		#8							; setup a loop through 8 inventory entries
.checkequipped_iterate:
		LDA		_players_inventory_list,X	; read value from inventory
		AND		#$7F						; mask off equip flag
		CMP		byte_CF						; is it the item we were looking for?
		BEQ		.found_item
.next_check:
		INX
		DEY
		BNE		.checkequipped_iterate
		RTS									; return if unfound: clear C flag is important here to indicate no item found
.found_item:
		LDA		_players_inventory_list,X	; read value from inventory again, and store in word_4
		STA		word_4
		BPL		.next_check					; branch back if nonequipped (check top bit)
		RTS									; return if found and equipped: set C flag is important here

; =============== S U B	R O U T	I N E =======================================
; check for the free inventory slot of all players in party to place a new item
; for, when all player's inventory are full,
;
; if all players has it's inventory full, for return CF=0 and call for some
; reason sub _bD_s26_get_first_live_player_with_no_NM_status
;
_b0_s3C_get_free_inventory_slot:
		JSR		_b0_s31_get_party_chars_list
		ASL		word_4
		ASL		word_4
		ASL		word_4
		LDX		#0
loc_988F:
		LDA		_players_inventory_list,X
		CMP		#$FF
		BEQ		loc_98A0
		INX
		CPX		word_4
		BNE		loc_988F
		FARX	_bD_s26_get_first_live_player_with_no_NM_status
		CLC
		RTS
loc_98A0:
		TXA
		LSR
		LSR
		LSR
		STA		word_4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; look for equipped items in particular player's inventory and check if it
; is cursed, return cursed item index, or CF=0 if there are no cursed items
;
_b0_s5C_player_inventory_search_for_cursed_item:
		LDA		byte_CE
		ASL
		ASL
		ASL
		TAX
		LDY		#0
loc_98B0:
		TYA
		PHA
		LDA		_players_inventory_list,X
		BPL		loc_98C5
		CMP		#$FF
		BEQ		loc_98C5
		AND		#$7F
		TAY
		LDA		_b0_d42_item_use_effects_list,Y
		AND		#8
		BNE		loc_98CF
loc_98C5:
		PLA
		TAY
		INX
		INY
		CPY		#8
		BNE		loc_98B0
		CLC
		RTS
loc_98CF:
		PLA
		STA		word_4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; don't know why they need this as subroutine, but this is for making a list
; of characters available to add to party in tavern, including the hero itself
; and the autogenerated ones.
;
_get_full_chars_list:
		LDX		#$C
		LDA		#$FF
loc_98D8:
		STA		word_4,X					; clear buffer first for 12 entries
		DEX
		BNE		loc_98D8
		LDA		#8
		STA		_tmp12+1
		LDX		#0
		LDY		#0
		LDA		_players_selected_list		; shift first 8 bits of var
		JSR		_get_chars					; extract indexes
		LDA		#4
		STA		_tmp12+1					; shift the rest of 4 chars in list
		LDA		_players_selected_list+1	; if any

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_get_chars:
		LSR
		BCC		loc_98F8
		STY		word_4+1,X					; if bit is set, then char is present
		INX
loc_98F8:
		INY
		DEC		_tmp12+1
		BNE		_get_chars
		STX		word_4						; return the list and a number of available chars
		RTS

; =============== S U B	R O U T	I N E =======================================
; helper for tavern list display, gets the full characters list, then remove
; those who is in your party, result is the characters available to select
; in tavern list
;
_b0_s32_get_tavern_chars_list:
		JSR		_get_full_chars_list
		LDX		#0
loc_9905:
		LDY		#0
loc_9907:
		LDA		word_4+1,X				; find what char is in your party
		CMP		_party_formation,Y
		BNE		loc_9914
		LDA		#$FF
		STA		word_4+1,X				; remove them from complete list
		BNE		loc_9919
loc_9914:
		INY
		CPY		#4
		BNE		loc_9907
loc_9919:
		INX
		CPX		word_4
		BNE		loc_9905
		LDX		#0
		LDY		#0
loc_9922:
		LDA		word_4+1,X				; compress resulting filtered list
		CMP		#$FF					; to beginning of the output array
		BEQ		loc_9932
		PHA
		LDA		#$FF
		STA		word_4+1,X
		PLA
		STA		word_4+1,Y
		INY
loc_9932:
		INX
		CPX		word_4
		BNE		loc_9922
		STY		word_4					; number of non-assigned chars in Y
		RTS

; =============== S U B	R O U T	I N E =======================================
; request player's class info, player index in byte_CF, return value in word_4
; first byte
;
;"PC_FetchTargetClass"
_b0_s2C_player_CLASS_read:
		LDX		byte_CE
		LDA		_players_class_gender,X ; reference pc.classgender table for target PC
		AND		#7 						; mask off gender, leaving class only remaining
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s2E_tavern_char_CLASS_read:
		JSR		_b0_s32_get_tavern_chars_list
		LDX		byte_CE
		LDA		word_4+1,X
		TAX
		LDA		_tavern_chars_class_gender,X
		AND		#7
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; fetches the gender of a PC and stores result in word_4 as 1 or 0
;
;"PC_FetchGender"
_b0_s2F_player_gender_read:
		LDX		byte_CE
		LDA		_players_class_gender,X		; reference pc.classgender table for target PC

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; gets the gender from a ClassGender value, stores result in word_4 as 1 or 0
;
;"GenderFromClassGender"
_extract_gender_bit:
		LSR						; shift down gender bit to LSBit and isolate it
		LSR
		LSR
		AND		#1
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s30_tavern_char_gender_read:
		JSR		_b0_s32_get_tavern_chars_list
		LDX		byte_CE
		CPX		word_4
		LDA		word_4+1,X
		TAX
		LDA		_tavern_chars_class_gender,X
		JMP		_extract_gender_bit

; =============== S U B	R O U T	I N E =======================================
; return the list of characters in formation, and it's number
;
_b0_s31_get_party_chars_list:
		LDY		#0
		LDX		#0
loc_997A:
		LDA		_party_formation,Y
		STA		word_4+1,X
		BMI		loc_9982
		INX
loc_9982:
		INY
		CPY		#4
		BNE		loc_997A
		STX		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
; counts a number of players in current party, that is non dead
; stores result in word_4
;
_b0_s33_count_non_dead_party_chars:
		TXA
		PHA
		TYA
		PHA
		LDX		#0
		STX		word_4
loc_9992:
		LDA		_party_formation,X
		BMI		loc_99A1
		TXA
		ASL
		TAY
		LDA		_players_status+1,Y
		BPL		loc_99A1
		INC		word_4
loc_99A1:
		INX
		CPX		#4
		BNE		loc_9992
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
; calculate spell idx and availability for given player, fetch particular
; data byte from corresponding data sets (total 16)
;
_b0_s34_read_spell_related_data_byte:
		LDA		byte_CF
		STA		byte_42

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; byte_E  - byte index
; byte_F  - bitmask
; byte_10 - pointer to data
; if bit with number E in F is set, reads the data at ptr 10, or return FF
;
_read_spell_related_data_byte:
		JSR		_get_spell_related_data_ptr
		LDY		byte_E
		CPY		#8
		BCS		loc_99C0
		INY
loc_99B2:
		ROR		byte_F
		DEY
		BNE		loc_99B2
		BCC		loc_99C0
		LDY		byte_E
		LDA		(byte_10),Y
		STA		word_4
		RTS
loc_99C0:
		LDA		#$FF
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_spell_related_data_ptr:
		JSR		_b0_s2C_player_CLASS_read
		LDA		word_4
		BEQ		.hero_class_spells
		CMP		#7
		BEQ		.goofoff_class_spells
		STA		_tmp12+1
		LDA		byte_D0
		AND		#3
		BNE		.other_class_spells
		LDA		_tmp12+1
		CMP		#4
		BCS		.goofoff_class_spells	; as well as sorcerer
		CMP		#3
		BEQ		.other_class_spells
		LDY		byte_D0
		BEQ		loc_99F2
.other_class_spells:
		LDA		byte_D0
loc_99F2:
		AND		#3
		SEC
		SBC		#1
		STA		word_4
		ASL
		ASL
		STA		_tmp12+1
		LDA		byte_CE
		ASL
		ASL
		ASL
		CLC
		ADC		_tmp12+1
		STA		_tmp12+1
		LDA		byte_42
		PHA
		AND		#7
		STA		byte_E
		PLA
		LSR
		LSR
		LSR
		CLC
		ADC		_tmp12+1
		TAY
		LDA		_players_spell,Y
		STA		byte_F
		LDA		byte_42
		AND		#$18
		LSR
		LSR
		ASL		word_4
		ASL		word_4
		ASL		word_4
		CLC
		ADC		word_4
		TAX
		LDA		_common_spell_related_data_ptr_tbl,X
		STA		byte_10
		LDA		_common_spell_related_data_ptr_tbl+1,X
		STA		byte_11
		RTS
.goofoff_class_spells:
		LDA		#0			; goof-offs has no spells or commands
		STA		byte_F
		STA		byte_E
		RTS
.hero_class_spells:
		LDA		byte_D0		; hero has special extra 4 spells didn't used by other chars
		CMP		#2
		BNE		loc_9A4A
		LDA		#0
		STA		byte_F
		STA		byte_E
		RTS
loc_9A4A:
		LDA		byte_CE
		ASL
		ASL
		ASL
		STA		_tmp12+1
		LDA		byte_42
		PHA
		AND		#7
		STA		byte_E
		PLA
		LSR
		LSR
		LSR
		CLC
		ADC		_tmp12+1
		TAY
		LDA		_players_spell,Y
		STA		byte_F
		LDA		byte_42
		AND		#$18
		LSR
		LSR
		TAX
		LDA		_hero_spell_related_data_ptr_tbl,X
		STA		byte_10
		LDA		_hero_spell_related_data_ptr_tbl+1,X
		STA		byte_11
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s37:
		LDA		#8
		JSR		_arg1_oraA_sta42
		JMP		_read_spell_related_data_byte

; =============== S U B	R O U T	I N E =======================================
_b0_s38:
		LDA		#$10
		JSR		_arg1_oraA_sta42
		JMP		_read_spell_related_data_byte

; =============== S U B	R O U T	I N E =======================================
_b0_s35:
		LDA		#$18
		JSR		_arg1_oraA_sta42
		JMP		_read_spell_related_data_byte

; =============== S U B	R O U T	I N E =======================================
_b0_s39:
		LDX		#0
		LDA		#0
		STA		byte_42
loc_9AA9:
		TXA
		PHA
		JSR		_get_spell_related_data_ptr
		JSR		_count_bits_set_in_byte_F
		PLA
		TAX
		STY		word_4+1,X
		CLC
		LDA		#8
		ADC		byte_42
		STA		byte_42
		INX
		CPX		#4
		BNE		loc_9AA9
		LDX		#0
loc_9AC3:
		LDA		word_4+1,X
		STA		word_4,X
		INX
		CPX		#4
		BNE		loc_9AC3
		LDA		word_4
		ORA		word_4+1
		ORA		word_6
		ORA		word_6+1
		STA		byte_8
		RTS

; =============== S U B	R O U T	I N E =======================================
; arg byte_F bits set count
;
_count_bits_set_in_byte_F:
		LDX		#8
		LDY		#0
loc_9ADB:
		ROR		byte_F
		BCC		loc_9AE0
		INY
loc_9AE0:
		DEX
		BNE		loc_9ADB
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s62:
		LDA		#$18
		STA		byte_42
		JSR		_get_spell_related_data_ptr
		LDA		byte_F
		LDX		#0
loc_9AEF:
		CMP		#0
		BEQ		loc_9AF7
		LSR
		INX
		BNE		loc_9AEF
loc_9AF7:
		STX		word_6+1
		RTS

; =============== S U B	R O U T	I N E =======================================
_arg1_oraA_sta42:
		ORA		byte_CF
		STA		byte_42
		RTS

; =============== S U B	R O U T	I N E =======================================
; parameters swap when change the party formation during the regular game mode
;
_b0_s3A_players_data_swap:
		LDA		#7								; only first 7 parameters need to be swapped

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; do parameters swap between two selected characters in party
;
_players_data_swap_ex:
		STA		byte_B
		LDA		#0
		STA		_tmp12+1
loc_9B07:
		ASL
		TAX
		LDA		#4								; number of elements for party data related arrays
		CPX		#$12
		BNE		loc_9B11						; special check for battle related array, which has 4+8 indexes
		LDA		#$C								; so when swapping, only first 4 parameters is changes
loc_9B11:
		STA		byte_A
		LDA		_status_params_ptr_tbl,X		; ptr to first parameter in RAM
		STA		word_3C
		LDA		_status_params_ptr_tbl+1,X
		STA		word_3C+1
		LDX		_tmp12+1
		LDA		_status_params_size_list,X		; size of param element
		LDY		_status_param_lists_count,X		; number of lists on RAM with the same type of data
												; continuosly placed after the starting one
		JSR		_swap_status_params
		INC		_tmp12+1
		LDA		_tmp12+1
		CMP		byte_B
		BNE		loc_9B07
		RTS

; =============== S U B	R O U T	I N E =======================================
_swap_status_params:
		STA		word_4
		STY		byte_9
loc_9B35:
		LDA		word_4
		STA		byte_8				; param size backup
		LDA		byte_D0				; arg 1
		JSR		_mulA_to_tmp4		; mul to param size
		LDA		word_4+1
		STA		word_6+1			; store param 1 ofs
		LDA		byte_CF				; arg 0
		JSR		_mulA_to_tmp4		; mul to param size
loc_9B47:
		LDY		word_4+1			; get param 0 ofs
		LDA		(word_3C),Y			; swap two params
		PHA
		LDY		word_6+1
		LDA		(word_3C),Y
		LDY		word_4+1
		STA		(word_3C),Y
		PLA
		LDY		word_6+1
		STA		(word_3C),Y
		INC		word_4+1
		INC		word_6+1
		DEC		byte_8
		BNE		loc_9B47			; repeat as much times as param size is
		LDA		word_4
		STA		word_4+1
		LDA		byte_A
		LDX		#word_4+1
		JSR		_mul16_by_8			; data_size*array_size may be replaced with _mulA_to_tmp4
		LDX		#word_3C
		LDA		word_4+1
		JSR		_add8_to_16			; adjust offset to the new record
		DEC		byte_9
		BNE		loc_9B35			; repeat for number of continuosly placed arrays
		RTS

; =============== S U B	R O U T	I N E =======================================
; A muls to byte_4, store result in byte_5/byte_6
;
_mulA_to_tmp4:
		STA		word_4+1
		LDA		#0
		STA		word_6
		LDX		#word_4+1
		LDA		word_4
		JMP		_mul16_by_8

; shortcuts to PC stats tables and other unknown things
_status_params_ptr_tbl:
		.WORD	_players_level					; 7 u8[4] arrays starting from levels
		.WORD	_players_HP						; 5 u16[4] arrays starting from HP
		.WORD	_players_EXP					; 2 u24[4] arrays starting from EXP
		.WORD	_players_name					; 3 u8[8][4] arrays startinf from names
		.WORD	byte_6A4B						; 1 u8[4] array
		.WORD	_party_formation				; 1 u8[4] array
		.WORD	_party_equipment_buffs			; 1 u8[4] array
		.WORD	_player_battle_order_and_flags	; 2 u8[4] arrays
		.WORD	_players_rDEF					; 2 u16[4] arrays
		.WORD	byte_540 						; 3 u8[12] arrays
_status_params_size_list:
		.BYTE	  1,  2,  3,  8,  1,  1,  1 ,  1,  2,  1
_status_param_lists_count:
		.BYTE	  7,  5,  2,  3,  1,  1,  1 ,  2,  2,  3

; =============== S U B	R O U T	I N E =======================================
; parameters swap when change the party formation during the battle in special case
;
_b0_s3B_players_data_swap_in_battle:
		LDA		#$A
		JSR		_players_data_swap_ex	; do full parameters swap
		LDX		#0						; then readjust other battle parameters
loc_9BB4:
		STX		byte_B
		LDA		byte_540,X
		AND		#$FC
		ORA		byte_B
		STA		byte_540,X
		INX
		CPX		#4
		BNE		loc_9BB4
		LDX		#0
loc_9BC7:
		STX		word_4
		LDA		_player_battle_order_and_flags,X
		AND		#$10
		BEQ		loc_9BDA
		LDA		_player_battle_order_and_flags,X
		STA		word_4+1
		JSR		sub_9C09
		BCC		loc_9BE4
loc_9BDA:
		LDA		_player_battle_order_and_flags,X
		AND		#$FC
		ORA		word_4
		STA		_player_battle_order_and_flags,X
loc_9BE4:
		INX
		CPX		#4
		BNE		loc_9BC7
		LDX		#0
loc_9BEB:
		STX		word_4
		LDA		byte_54C,X
		BMI		loc_9C03
		STA		word_4+1
		JSR		sub_9C09
		BCC		loc_9C03
		LDA		byte_54C,X
		AND		#$F8
		ORA		word_4
		STA		byte_54C,X
loc_9C03:
		INX
		CPX		#$C
		BNE		loc_9BEB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_9C09:
		LDA		word_4+1
		AND		#3
		CMP		byte_CF
		BEQ		loc_9C19
		CMP		byte_D0
		BNE		loc_9C1F
		LDA		byte_CF
		BPL		loc_9C1B
loc_9C19:
		LDA		byte_D0
loc_9C1B:
		STA		word_4
		SEC
		RTS
loc_9C1F:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; when creating a new formation, the players, that already selected for new
; formation are removed from the list (set $FF). this helper gets a menu list
; index of the player left unassigned and return it's real character index
;
_get_unassigned_formation_char_by_list_idx:
		STA		word_4
		LDY		#$FF
		LDX		#0
loc_9C27:
		LDA		_party_formation,X
		BPL		loc_9C34
loc_9C2C:
		INX
		CPX		#4
		BNE		loc_9C27
		LDA		#0
		RTS
loc_9C34:
		INY
		CPY		word_4
		BNE		loc_9C2C
		TXA
		RTS

; =============== S U B	R O U T	I N E =======================================
; player poison status remove
;
_b0_s3D_player_remove_poison_status:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$DF
		STA		_players_status+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; player death status clear
;
_b0_s3D_player_remove_death_status:
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status+1,X
		ORA		#$80
		STA		_players_status+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_X_mul3:
		PHA
		TXA
		STA		_tmp12+1
		ASL
		CLC
		ADC		_tmp12+1
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; 0 - weapon
; 1 - armor
; 2 - shield
; 3 - helm
; 5 - other
;
;"sub_classifyItemType_returnA"
_b0_s60_get_item_type:
		CMP		#ITEM_GOLDEN_CLAW
		BEQ		.return_0_for_weapon		; return 0 if "golden claw"
		CMP		#0
		BCC		.try_as_armor
		CMP		#$20						; test against the highest weapon item
		BCS		.try_as_armor				; $20 is Clothes, the first item type that isnt a weapon
.return_0_for_weapon:
		LDA		#0
		RTS
.try_as_armor:
		CMP		#$20
		BCC		.try_as_shield
		CMP		#$38
		BCS		.try_as_shield
		LDA		#1							; return 1 for armor
		RTS
.try_as_shield:
		CMP		#$38
		BCC		._try_as_helm
		CMP		#$3F
		BCS		._try_as_helm
		LDA		#2							; return 2 for shield
		RTS
._try_as_helm:
		CMP		#$3F
		BCC		.return_5_for_other
		CMP		#$47
		BCS		.return_5_for_other
		LDA		#3							; return 3 for helm
		RTS
.return_5_for_other:
		LDA		#5
		RTS

_hero_spell_related_data_ptr_tbl:
		.WORD	_b0_d58_hero_spell_related_data00
		.WORD	_hero_spell_related_data01
		.WORD	_hero_spell_related_data02
		.WORD	_hero_spell_related_data03
_common_spell_related_data_ptr_tbl:
		.WORD	_b0_d59_common_spell_related_data00
		.WORD	_common_spell_related_data01
		.WORD	_common_spell_related_data02
		.WORD	_common_spell_related_data03
		.WORD	_b0_d5A_common_spell_related_data04
		.WORD	_common_spell_related_data05
		.WORD	_common_spell_related_data06
		.WORD	_common_spell_related_data07
		.WORD	_common_spell_related_data08
		.WORD	_common_spell_related_data09
		.WORD	_common_spell_related_data0A
		.WORD	_common_spell_related_data0B

; =============== S U B	R O U T	I N E =======================================
; return the number of currently available returnable locations
;
_b0_s48_get_count_returnable_locations:
		JSR		_CE_mul3
		LDA		_players_returnable_locations,X
		STA		word_6
		LDA		_players_returnable_locations+1,X
		STA		word_6+1
		LDA		_players_returnable_locations+2,X
		STA		byte_8
		LDA		#0
		STA		word_4
		LDY		byte_CF
		INY
		TAX
loc_9CCD:
		LSR		byte_8
		ROR		word_6+1
		ROR		word_6
		BCC		loc_9CDA
		INC		word_4
		DEY
		BEQ		loc_9CE0
loc_9CDA:
		INX
		CPX		#$14
		BNE		loc_9CCD
		RTS
loc_9CE0:
		TXA
loc_9CE1:
		CPX		#$13
		BEQ		loc_9CF2
		LSR		byte_8
		ROR		word_6+1
		ROR		word_6
		BCC		loc_9CEF
		INC		word_4
loc_9CEF:
		INX
		BNE		loc_9CE1
loc_9CF2:
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets the returnable location bit for every non-dead player
;
_b0_s49_set_returnable_locations_bit:
		LDX		#0
loc_9CF7:
		LDA		_returnable_areas_tbl,X		; check our _mapNumber against a special list
		CMP		_mapNumber
		BEQ		loc_9D05					; branch for a match
		INX
		CPX		#$14						; size of list
		BNE		loc_9CF7
		RTS
loc_9D05:
		LDA		#0							; found a match, number of location is X
		STA		word_4
		STA		word_4+1
		STA		word_6
		INX
		SEC
loc_9D0F:
		ROL		word_4						; store the Xth bit in tmp var
		ROL		word_4+1
		ROL		word_6
		DEX
		BNE		loc_9D0F
		LDX		#0
loc_9D1A:
		TXA
		ASL
		TAY
		LDA		_players_status,Y			; check if player is not dead
		AND		_players_status+1,Y
		BPL		loc_9D44
		TXA
		STA		word_6+1
		ASL
		ADC		word_6+1
		TAY
		LDA		_players_returnable_locations,Y	; apply return location bit
		ORA		word_4
		STA		_players_returnable_locations,Y
		LDA		_players_returnable_locations+1,Y
		ORA		word_4+1
		STA		_players_returnable_locations+1,Y
		LDA		_players_returnable_locations+2,Y
		ORA		word_6
		STA		_players_returnable_locations+2,Y
loc_9D44:
		INX
		CPX		#4
		BNE		loc_9D1A					; continue for all players
		RTS

; =============== S U B	R O U T	I N E =======================================
; A powerful global routine for search an item in posession, will look into
; party's inventory, as well as inventory of the tavern characters and Vault.
;
_b0_s4D_is_anybody_owns_item:
		JSR		_b0_s2B_is_players_owns_item		; first look for item in player's inventory
		BCS		loc_9D80
		LDA		byte_CE
		FARX	_bD_s17_search_vault_for_item		; then check vault (if you store it there)
		BCC		loc_9D80
		JSR		_b0_s32_get_tavern_chars_list		; then check all chars in tavern that may have it
		LDA		word_4
		BEQ		loc_9D7E
		LDX		#0
loc_9D5F:
		LDA		word_4+1,X
		ASL
		ASL
		ASL
		TAY
		LDA		#8
		STA		_tmp12+1
loc_9D69:
		LDA		byte_624A,Y
		CMP		#$FF
		BEQ		loc_9D74
		CMP		byte_CE
		BEQ		loc_9D80
loc_9D74:
		INY
		DEC		_tmp12+1
		BNE		loc_9D69
		INX
		DEC		word_4
		BNE		loc_9D5F
loc_9D7E:
		CLC
		RTS
loc_9D80:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; get the hero party member, put it into the first formation slot, then
; remove all other players from party and store them in temporary array
; along with it's statuses. in case there are no live heroes, put first
; undead and non-numb player.
; following is a set of routines for some places in game where you must
; leave your party and go alone (fortune telled in Assaram, or Navel of
; the Earth srine)
;
_b0_s56_get_hero_alone_temporary:
		LDX		#3
loc_9D84:
		TXA
		ASL
		TAY
		LDA		_players_status,Y			; look for non-dead player
		AND		_players_status+1,Y
		BPL		loc_9D98
		LDA		_players_class_gender,X		; we need hero class
		STX		word_4
		AND		#7
		BEQ		_get_player_alone_temporary
loc_9D98:
		DEX
		BPL		loc_9D84					; if there is no alive hero, let's find someone else

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; get first non-dead and non-numb party player and put it to the head of
; party, remove the rest of the players and store them into temp list
; not counting a glitch, when all players may be dead, there should be at
; least one last live player in party
;
_b0_s4E_get_anybody_alone_temporary:
		FARX	_bD_s26_get_first_live_player_with_no_NM_status

; =============== S U B	R O U T	I N E =======================================
_get_player_alone_temporary:
		LDA		word_4							; ok, here we got non dead player and it may be
		STA		_formation_char_index_tmp		; hero or not (if it's dead), and even can be not first in formation.
		JSR		_swap_to_first_in_formation		; here we put it first in formation anyway
		JSR		_b0_s31_get_party_chars_list
		LDA		word_4
		STA		_party_chars_count_tmp			; save the total party chars count (even dead ones)
		LDX		#0
loc_9DB0:
		LDA		_party_formation+1,X			; remove players from party formation and put
		STA		_tmp_party_formation,X			; into temp array
		LDA		#$FF
		STA		_party_formation+1,X
		TXA
		ASL
		TAY
		LDA		_players_status+2,Y				; also the same with statuses
		STA		_tmp_party_formation_status,Y
		LDA		_players_status+3,Y
		STA		_tmp_party_formation_status+1,Y
		LDA		#0
		STA		_players_status+2,Y
		STA		_players_status+3,Y
		INX
		CPX		#3
		BNE		loc_9DB0
		RTS

; =============== S U B	R O U T	I N E =======================================
; restore party members, removed with previous routine from the temp storage,
; swaps the first player back to it's place
;
_b0_s4F_return_party_members:
		LDX		#0
loc_9DDA:
		TXA
		LDA		_tmp_party_formation,X
		STA		_party_formation+1,X
		TXA
		ASL
		TAY
		LDA		_tmp_party_formation_status,Y
		STA		_players_status+2,Y
		LDA		_tmp_party_formation_status+1,Y
		STA		_players_status+3,Y
		INX
		CPX		#3
		BNE		loc_9DDA

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; swaps the first formation character with selected one from the temp var
; if both are the same, do nothing
;
_swap_to_first_in_formation:
		LDA		#0
		STA		byte_CF
		LDA		_formation_char_index_tmp
		AND		#3
		BEQ		locret_9E08
		STA		byte_D0
		JSR		_b0_s3A_players_data_swap
locret_9E08:
		RTS

; =============== S U B	R O U T	I N E =======================================
; Analyzes inventory for each player for items giving buffs and refresh buffs statuses
;
_b0_s50_players_item_buffs_refresh:
		LDA		#0
		STA		byte_CE
.player_buff_loop:
		LDA		byte_CE
		ASL											; player number to offset for _players_status
		TAX
		LDA		_players_status,X
		BPL		loc_9E42
		LDX		byte_CE
		LDY		#0
		STY		_party_equipment_buffs,X
loc_9E1C:
		TYA
		PHA
		LDA		_equipment_with_buffs_tbl,Y
		STA		byte_CF
		TYA
		PHA
		JSR		_b0_s45_check_if_item_equipped
		PLA
		TAY
		LDA		byte_CF
		ORA		#$80								; probably checking whether it's equipped
		CMP		word_4
		BNE		loc_9E3B
		LDX		byte_CE
		LDA		_equipment_buffs_tbl,Y				; load the parameter for the found item
		ORA		_party_equipment_buffs,X
		STA		_party_equipment_buffs,X
loc_9E3B:
		PLA
		TAY
		INY
		CPY		#5									; size of _party_equipment_buffs list
		BNE		loc_9E1C
loc_9E42:
		INC		byte_CE								; finish looping across characters
		LDA		byte_CE
		CMP		#4
		BCC		.player_buff_loop
		RTS

; =============== T A B L E S =================================================
; A table of special items with buff effects, and the related buff flags (see _party_equipment_buffs)
;
_equipment_with_buffs_tbl:
		.BYTE #ITEM_SACRED_ROBE
		.BYTE #ITEM_WATER_FLYING_CLOTH
		.BYTE #ITEM_ARMOR_OF_RADIANCE
		.BYTE #ITEM_RING_OF_LIFE
		.BYTE #ITEM_SHOES_OF_HAPPINESS
_equipment_buffs_tbl:						; TODO - symbolic constants
		.BYTE 1
		.BYTE 1
		.BYTE 3
		.BYTE 2
		.BYTE 4

; =============== S U B	R O U T	I N E =======================================
_CE_mul3:
		LDA		byte_CE
		ASL
		ADC		byte_CE
		TAX
		RTS

; =============== T A B L E =================================================
; The sorted list of returnable areas. see RETURN_TYPE_FIRST_IN_ALEFGARD
;
_returnable_areas_tbl:
		.BYTE	 $00 ; Aliahan Town
		.BYTE	 $09 ; Reeve
		.BYTE	 $01 ; Romaly
		.BYTE	 $14 ; Kanave
		.BYTE	 $0B ; Noaniels
		.BYTE	 $0C ; Assaram
		.BYTE	 $50 ; Isis town
		.BYTE	 $0A ; Portoga town
		.BYTE	 $0E ; Baharata
		.BYTE	 $33 ; Shrine of Dhama
		.BYTE	 $0F ; Lancel
		.BYTE	 $17 ; Jipang
		.BYTE	 $02 ; Eginbear
		.BYTE	 $06 ; Samanao
		.BYTE	 $19 ; Soo
		.BYTE	 $07 ; Brecconaly ; $F: note: RETURN_TYPE_FIRST_IN_ALEFGARD
		.BYTE	 $12 ; Haukness
		.BYTE	 $10 ; Cantlin
		.BYTE	 $1A ; Kol
		.BYTE	 $11 ; Rimuldar

; =============== S U B	R O U T	I N E =======================================
_b0_s5B_run_command_spell:
		BIT		_global_flags_array.byte2	; special logic for the king
		BVC		_spell_command_usual		; TAILCALL to usual handler
		SYSX	_display_window,$3E			; if king display error message:
		MSGX	_msg_m00,$164				; "The king cannot use that spell"

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_wait_for_key:
		JSR		_calc_pads
		LDA		_pads
		BEQ		_wait_for_key

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_wrap_bE_sB_arg0_clear_8E:
		LDA		#0
		FARX	_bE_sB

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_exit_and_clear_8E:
		LDA		#0
		STA		byte_8E
		RTS

; =============== S U B	R O U T	I N E =======================================
_spell_command_usual:
		LDA		#$29
		JSR		_wnd_safe
		CMP		#$FF
		BEQ		_wrap_bE_sB_arg0_clear_8E
		STA		byte_53
		STA		byte_CE
		JSR		_check_if_player_is_dead_ex
		BCS		loc_9EB3
		LDA		#$C5	; "<name> is dead and cannot cast the spell"
		JMP		_wnd3E_msg0xx_wait_key
loc_9EB3:
		JSR		_b0_sE_player_STATUS_read
		LDA		word_4+1
		AND		#$40
		BEQ		loc_9EC1
		LDA		#$D2	; "<name> is numb and cannot cast the spell"
		JMP		_wnd3E_msg0xx_wait_key
loc_9EC1:
		LDA		#$44
		STA		byte_CF
		JSR		_b0_s45_check_if_item_equipped
		LDA		word_4
		CMP		#$C4
		BNE		loc_9ED3
		LDA		#$C6	; "<name> is confused and cannot cast the spell"
		JMP		_wnd3E_msg0xx_wait_key
loc_9ED3:
		JSR		_b0_s2C_player_CLASS_read
		CMP		#7
		BEQ		loc_9EEE
		LDA		#2
		STA		byte_D0
		JSR		_b0_s39
		LDA		word_6+1
		BNE		loc_9EF3
		DEC		byte_D0
		JSR		_b0_s39
		LDA		word_6+1
		BNE		loc_9EF3
loc_9EEE:
		LDA		#$C4	; "<name> doesn't know any spells..."
		JMP		_wnd3E_msg0xx_wait_key
loc_9EF3:
		LDA		byte_D0
		FARX	_b1_s17
		CMP		#$FF
		BEQ		_wait_for_key
		STA		byte_49
		TAX
		LDA		#_b4_dD_spells_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$3F
		JSR		_b0_s67_mysterious_hat_mp_modifier
		JSR		_b0_sB_player_MP_test
		BCS		loc_9F13
		LDA		#$20	; "MP is not high enough"
		JMP		_wnd3E_msg0xx_wait_key
loc_9F13:
		LDX		byte_49
		STX		_msg_directobject_param
		CPX		#SPELL_RETURN
		BEQ		loc_9F2A
		LDA		#_b4_dD_spells_list_fidx
		JSR		_sys0_byte_read_x
		BPL		loc_9F34
		LDA		#$2B
		JSR		_wnd_safe
		JMP		loc_9F2D
loc_9F2A:
		FARX	_b1_s15
loc_9F2D:
		CMP		#$FF
		BNE		loc_9F34
		JMP		_wait_for_key
loc_9F34:
		STA		byte_50
		STA		word_4
		LDA		byte_53
		STA		byte_D2
		STA		byte_CE
		LDX		byte_49
		LDA		#_b4_dD_spells_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$3F
		JSR		_b0_s67_mysterious_hat_mp_modifier
		JSR		_b0_s9_player_MP_subtract
		JSR		_wnd3E_bE_s5
		MSGX	_msg_m00,$002	; "<name> chants <spell>"
		SYSX	_apu_load,SFX_ENEMY_CASTING
		FARX	_b2_s7_screen_spell_blink
		LDA		byte_50
		STA		byte_CE
		STA		byte_D2
		LDX		#$F
		JSR		_sleep_X_sync
		JSR		_b0_s55_test_spell_allow_location
		BCS		loc_9F75
		MSGX	_msg_m00,$081	; "However, the spell is broken"
		JMP		_wait_for_key
loc_9F75:
		LDX		#0
loc_9F77:
		LDA		_command_spell_idx_list,X
		CMP		byte_49
		BEQ		loc_9F81
		INX
		BNE		loc_9F77
loc_9F81:
		TXA
		ASL
		TAX
		LDA		_command_spell_lib,X
		LDY		_command_spell_lib+1,X
		STA		word_3C
		STY		word_3C+1
		LDA		byte_50
		STA		byte_CE
		JSR		_call_indirect_3C
		BCS		loc_9F9F
		MSGX	_msg_m00,$040	; "But nothing happens"
		JMP		_wait_for_key
loc_9F9F:
		LDA		byte_49
		CMP		#$26
		BEQ		loc_9FB8
		CMP		#$3B
		BEQ		loc_9FB8
		CMP		#$38
		BEQ		loc_9FB8
		CMP		#$3C
		BEQ		loc_9FB8
		CMP		#$39
		BEQ		loc_9FB8
		JMP		_wait_for_key
loc_9FB8:
		JMP		_exit_and_clear_8E

; =============== S U B	R O U T	I N E =======================================
_call_indirect_3C:
		JMP		(word_3C)

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_heal:
		JSR		_check_if_player_is_dead_ex
		BCC		locret_9FE9
		LDA		byte_49
		SEC
		SBC		#$1A
		FARX	_b4_s1E

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_spell_heal_ex:
		LDA		word_4
		STA		byte_CF
		LDA		word_4+1
		STA		byte_D0
		JSR		_check_if_player_is_dead
		BCC		locret_9FE9
		JSR		_b0_s4_player_HP_add
		MSGX	_msg_m00,$014	; "<name> has recovered"
		JSR		_wndMINMAX_STAT_pal_adjust
		JSR		_pause_or_skip
		SEC
locret_9FE9:
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s54_heal_us_all_max:
		LDA		#$1F
		STA		byte_49			; use the maximum of heal value
		LDA		#$FF
		STA		byte_46			; disables the display of heal result
		BNE		_heal_us_all	; unconditional

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_heal_us_all:
		LDA		#0
		STA		byte_46			; enables the display of heal result

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_heal_us_all:
		LDX		#$FF
		STX		byte_CF			; set the arg to heal to max
		STX		byte_D0
		INX
loc_9FFF:
		TXA
		PHA
		STA		byte_CE			; heal only non-dead players
		STA		byte_D2
		JSR		_check_if_player_is_dead_ex
		BCC		loc_A031
		LDA		byte_49
		CMP		#$1F
		BEQ		loc_A01D		; check if we need to randomize hp to add
		LDA		#$C				; do it
		FARX	_b4_sF_rand_mul_A
		ADC		#$2C
		STA		byte_CF
		LDA		#0
		STA		byte_D0
loc_A01D:
		JSR		_b0_s4_player_HP_add
		LDA		byte_46
		BNE		loc_A031		; if we need to display a message, do it
		LDA		#$14	; "<name> has recovered"
		JSR		_msg005_msg0xx
		JSR		_wndMINMAX_STAT_pal_adjust
loc_A031:
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_9FFF
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_revive:
		JSR		_check_if_player_exist_or_dead
		BCC		loc_A077
		LDY		byte_49
		CPY		#$20
		BNE		loc_A04B
		JSR		_rand
		AND		#1
		BNE		loc_A079
loc_A04B:
		LDA		byte_50
		ASL
		TAX
		LDA		#$80
		STA		_players_status+1,X
		JSR		_b0_s3_player_MHP_read
		CPY		#$20
		BNE		loc_A05F
		LSR		word_4+1
		ROR		word_4
loc_A05F:
		LDA		word_4
		STA		byte_CF
		LDA		word_4+1
		STA		byte_D0
		JSR		_b0_s4_player_HP_add
		LDA		#$3C	; "<name> comes back to life"
loc_A06C:
		JSR		_wrap_msg_m00_arg0
		JSR		_wndMINMAX_STAT_pal_adjust
		FARX	_bE_s10
		SEC
		RTS
loc_A077:
		CLC
		RTS
loc_A079:
		LDA		#$3D	; "<name> does not comes back to life"
		BNE		loc_A06C

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_curseoff:
		JSR		_check_if_player_is_dead
		BCC		locret_A09B
		JSR		_b0_s5C_player_inventory_search_for_cursed_item
		BCC		locret_A09B
		LDA		word_4
		STA		byte_CF
		JSR		_b0_s28_player_inventory_item_get
		LDA		word_4+1
		STA		_msg_directobject_param
		JSR		_b0_s2A_player_inventory_item_remove
		MSGX	_msg_m00,$0C3	; "The curse on <name> is gone"
		SEC
locret_A09B:
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_antidote:
		JSR		_check_if_player_is_dead
		BCC		locret_A0B9
		LDA		_players_status+1,X
		AND		#$20
		BEQ		loc_A0BA
		LDA		_players_status+1,X
		AND		#$DF
		STA		_players_status+1,X
		MSGX	_msg_m00,$044	; "The poison leaves <name>'s body"
		JSR		_wndMINMAX_STAT_pal_adjust
		SEC
locret_A0B9:
		RTS
loc_A0BA:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_numboff:
		JSR		_check_if_player_is_dead
		BCC		locret_A0D9
		LDA		_players_status+1,X
		AND		#$40
		BEQ		loc_A0BA		; player not in "NM" state
		LDA		_players_status+1,X
		AND		#$BF			; clear "NM state
		STA		_players_status+1,X
		MSGX	_msg_m00,$042	; "<name>'s numbness goes away"
		JSR		_wndMINMAX_STAT_pal_adjust
		SEC
locret_A0D9:
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_repel:
		LDA		#$FF
		STA		_repel_or_fairy_water_timer
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_daynight:
		FARX	_bC_s10_spell_daynight
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_x_ray:
		FARX	_bC_s1E_spell_x_ray_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_return:
		LDA		byte_53
		STA		byte_CE
		FARX	_b6_s6_spell_return_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_outside:
		FARX	_b6_sC_spell_outside_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_invisible:
		FARX	_b6_sD_spell_invisible_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_stepguard:
		FARX	_b6_sF_spell_stepguard_use
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets CF=1 if 
_b0_s55_test_spell_allow_location:
		LDA		_location_type
		AND		#1
		BEQ		loc_A167
		LDA		_mapNumber
		CMP		#$38
		BEQ		loc_A165
		CMP		#$C3
		BCC		loc_A167
		CMP		#$C6
		BCC		loc_A165
		CMP		#$CF
		BEQ		loc_A165
		CMP		#$D0
		BNE		loc_A167
loc_A165:
		CLC
		RTS
loc_A167:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_wndMINMAX_STAT_pal_adjust:
		LDA		byte_CE
		PHA
		FARX	_b4_s1A_status_pal_adjust_and_update
		JSR		_wndMINMAX_STAT
		PLA
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
_wndMINMAX_STAT:
		JSR		_b0_s31_get_party_chars_list
		LDA		word_4
		CLC
		ADC		#$D	; $D + [1..4] _wnd0E_minmax_stat_ply[1..4]
		FARX	_bE_sC_display_window
		RTS

; =============== S U B	R O U T	I N E =======================================
_check_if_player_is_dead:
		LDA		byte_50

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_check_if_player_is_dead_ex:
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_A195
		SEC
		RTS
loc_A195:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_check_if_player_exist_or_dead:
		LDA		byte_50
		ASL
		TAX
		LDA		_players_status,X
		BPL		loc_A195
		LDA		_players_status+1,X
		BMI		loc_A195
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; u16[CF] = (mp==0)?(0):(mp*3/4+1)
;
_b0_s67_mysterious_hat_mp_modifier:
		PHA											; this ended up scanning the inventory for a player...
		JSR		_b0_s1E_player_euipped_item_get
		LDA		word_6+1							; fetch the equipped hat from the player inventory scan
		CMP		#ITEM_EMYSTERIOUS_HAT				; compare to mysterious hat
		BNE		.no_mp_cost_modifier
		PLA											; somehow we got here with A=mpCost
		BEQ		_store_mp_cost						; store result 0 if original cost was 0
		JSR		_store_mp_cost						; stash the original cost for math (apply mysterious hat MP adjustment)
		LDA		#3
		LDX		#byte_CF
		JSR		_mul16_by_8
		LDA		#4
		JSR		_div16_by_8
		LDA		#1
		JMP		_add8_to_16	; A = value ; TAILCALL
.no_mp_cost_modifier:
		PLA

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_store_mp_cost:
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		RTS

_command_spell_lib:
		.WORD	_cmd_spell_heal	; heal
		.WORD	_cmd_spell_heal	; healmore
		.WORD	_cmd_spell_heal	; healall
		.WORD	_cmd_spell_heal_us_all
		.WORD	_cmd_spell_heal_us_all
		.WORD	_cmd_spell_revive
		.WORD	_cmd_spell_revive
		.WORD	_cmd_spell_curseoff
		.WORD	_cmd_spell_antidote
		.WORD	_cmd_spell_numboff
		.WORD	_cmd_spell_repel
		.WORD	_cmd_spell_daynight
		.WORD	_cmd_spell_open	; the same as "Final key" item
		.WORD	_cmd_spell_x_ray
		.WORD	_cmd_spell_return
		.WORD	_cmd_spell_outside
		.WORD	_cmd_spell_invisible
		.WORD	_cmd_spell_stepguard

_command_spell_idx_list:
		.BYTE	$1A,$1B,$1C,$1E,$1F,$20,$21,$36,$34,$35,$37,$38,$39,$3A,$26,$3B
		.BYTE	$3C,$3D

; =============== S U B	R O U T	I N E =======================================
; ok, got it. previously Y adresation of 34*5 bytes runs out of 256 range, so
; it will wrap around. need more offsets to load the rest, so we has here a lot
; of redundant code. rewritten.
;
_b0_s61_sram_shortcuts_init:
		LDA		#<[_sram_b0_s2_player_HP_read]
		STA		word_4
		LDA		#>[_sram_b0_s2_player_HP_read]
		STA		word_4+1
		LDX		#_b0_s2_player_HP_read_fidx	; first sub idx in lib
loc_A208a:
		LDY		#0
loc_A208:
		LDA		_sram_bank0_bn_code,Y
		STA		(word_4),Y
		INY
		CPY		#[_sram_bank0_bn_code_end-_sram_bank0_bn_code]
		BNE		loc_A208
		TXA
		LDY		#1
		STA		(word_4),Y
		LDA		word_4
		CLC
		ADC		#[_sram_bank0_bn_code_end-_sram_bank0_bn_code]
		STA		word_4
		LDA		word_4+1
		ADC		#0
		STA		word_4+1
		INX
		CPX		#_b0_s3B_players_data_swap_in_battle_fidx	; last sub idx in lib
		BNE		loc_A208a
		RTS

; code loaded into 6xxx sram area to faster access of code
; rewritten with direct access without stack parameters
_sram_bank0_bn_code:
		LDY		#0
		JMP		_sys0_safe
_sram_bank0_bn_code_end:

; =============== S U B	R O U T	I N E =======================================
; after all players is dead, you can respawn at the king with all other players
; except hero dead but hero is fully restored. this function is placed here
; due to lack of the free space at the system bank. currently may be moved
; back
;
_b0_s64_respawn_at_the_king:
		JSR		_b0_s31_get_party_chars_list
		LDX		#0
loc_A292:
		LDA		_players_class_gender,X		; look for a HERO class
		AND		#7
		BEQ		loc_A2A0
		INX
		CPX		word_4
		BNE		loc_A292
		LDX		#0
loc_A2A0:
		TXA									; full hero respawn
		ASL
		TAY
		LDA		#$80
		STA		_players_status,Y
		STA		_players_status+1,Y
		LDA		_players_MHP,Y
		STA		_players_HP,Y
		LDA		_players_MHP+1,Y
		STA		_players_HP+1,Y
		LDA		_players_MMP,Y
		STA		_players_MP,Y
		LDA		_players_MMP+1,Y
		STA		_players_MP+1,Y
		LSR		_players_gold+2
		ROR		_players_gold+1
		ROR		_players_gold					; set the proper palette
		FARX	_bD_s28_frame_palette_by_status_adjust
		LDA		#DAYNIGHT_CYCLE_DAWN
		STA		_world_map_steps_count
		JMP		_location_palette_and_rand_update

; spell related data
_b0_d58_hero_spell_related_data00:
		.BYTE	  0,$1A,$15,$2A,  3,$26,$24,$22
_hero_spell_related_data01:
		.BYTE	$10,$1B,  4,$1C,  7,$20,$11,$1F
_hero_spell_related_data02:
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
_hero_spell_related_data03:
		.BYTE	$1A,$26,$3B,$37,$1B,$1C,$20,$1F
_b0_d59_common_spell_related_data00:
		.BYTE	  0,$2D,  9,$2E,  3,$26,  6,$18
_common_spell_related_data01:
		.BYTE	  1,$17, $A, $C,  4,$32,  7,$30
_common_spell_related_data02:
		.BYTE	  2,$27, $B,$29,  5,$28,  8,$33
_common_spell_related_data03:
		.BYTE	$3B,$26,$3A,$3D,$38,$36,$3C,$39
_b0_d5A_common_spell_related_data04:
		.BYTE	$2B,$1A,$15,$34, $D,$19,$25,$22
_common_spell_related_data05:
		.BYTE	$2C,$1B,$12,$35, $E,$24,$16,$23
_common_spell_related_data06:
		.BYTE	$31,$1C,$13,$1E, $F,$20,$14,$21
_common_spell_related_data07:
		.BYTE	$1A,$34,$1B,$35,$20,$1C,$1E,$21
; =============== T A B L E =================================================
; what a useless table. I guess it would control the selection of antics somehow, but it's non-functional
;
_b0_d3F_antics_index:
		.BYTE	  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, $A, $B, $C, $D, $E, $F
		.BYTE	$10,$11,$12,$13,$14,$15,$16,$17,$18,$19,$1A,$1B,$1C,$1D,$1E,$1F
		.BYTE	$20,$21,$22,$23

; =============== S U B	R O U T	I N E =======================================
; Seemingly the main post-battle leveling loop. Runs 4 times for 4 players
;
_b0_s47_players_next_EXP_calc:
		LDX		#0
loc_A35D:
		TXA
		PHA
		STA		byte_CE					; store this player in a variable to be used by nested leveling logic
		JSR		_player_next_EXP_level_represh
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_A35D
		RTS

; =============== S U B	R O U T	I N E =======================================
; calculate next level EXP value for single player
; X: player number to levelup
;
_player_next_EXP_level_represh:
		TXA
		PHA								; save X for later
		LDA		_players_level,X
		LDX		#0						; select EXP stat curve
		JSR		_eval_stat_curve
		PLA								; restore A, multiply by 3 to slot it into the table at _players_next_EXP
		STA		word_6+1
		ASL
		ADC		word_6+1
		TAX
		LDA		word_4					; store u24[4] to table _players_next_EXP
		STA		_players_next_EXP,X
		LDA		word_4+1
		STA		_players_next_EXP+1,X
		LDA		word_4+2
		STA		_players_next_EXP+2,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; check if players experience exceeded the maximum for current level
; execute levelup process for every character if test passed
;
_b0_s46_players_level_up_test:
		LDX		#0
		STX		byte_48
		STX		byte_51
_levelup_loop:
		LDA		byte_51
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_A3CE
		LDX		byte_51
		LDA		_players_level,X
		CMP		#$63
		BCS		loc_A3CE
		LDA		byte_51
		ASL
		ADC		byte_51
		TAX
		LDA		_players_EXP+2,X
		CMP		_players_next_EXP+2,X
		BCC		loc_A3CE
		BEQ		loc_A3BA
		BCS		_player_levelup				; jump out to levelup calc
loc_A3BA:
		LDA		_players_EXP+1,X
		CMP		_players_next_EXP+1,X
		BCC		loc_A3CE
		BEQ		loc_A3C6
		BCS		_player_levelup				; jump out to levelup calc
loc_A3C6:
		LDA		_players_EXP,X
		CMP		_players_next_EXP,X
		BCS		_player_levelup				; jump out to levelup calc
loc_A3CE:
		INC		byte_51
		LDX		byte_51
		CPX		#4
		BNE		_levelup_loop
		LDA		byte_48
		BEQ		locret_A3EF
		JSR		_wndMINMAX_STAT
		JSR		_pause_or_skip
		LDA		#0
		STA		byte_8E
		FARX	_bE_sB
locret_A3EF:
		RTS
_do_levelup:
		LDX		byte_51						; levelup player, return to main loop to test other players
		INC		_players_level,X
		JSR		_b0_s47_players_next_EXP_calc
		JMP		_levelup_loop
_player_levelup:
		LDA		_global_flags_array.byte2
		AND		#$20
		BNE		loc_A410
		LDA		byte_48
		BNE		loc_A410
		FARX	_bE_sD
		SYSX	_display_window,$3D
		LDA		#$F4
		STA		byte_48
loc_A410:
		MSGX	_msg_m00,$005		; "$FD,$EF"
		LDA		#0
		STA		byte_56
		STA		byte_58
		FARX	_bB_s3_apu_load		; some kind of optimization, A is 0 in any case, so use FARX instead of SYSX
		SYSX	_apu_load,BGM_LEVELUP
		LDA		byte_51
		STA		byte_D2
		MSGX	_msg_m00,$0C0		; "<name> goes up to the next level
		LDX		byte_51
		INC		_players_level,X	; player levels-up here
		FARX	_bB_s7_apu_wait		; delays and jingles?
		JSR		_map_music_select_and_load
		JSR		_wndBTL_STAT
		LDX		byte_51				; take player's level back down 1?
		DEC		_players_level,X
		LDA		byte_51
		STA		byte_CE
		LDY		#0					; initialize a loop in byte_52 across stats (STR first, etc.)
		STY		byte_52
loc_A448:
		LDA		byte_52				; for the current stat, find the location of the players stats in ram and store in word_40
		ASL
		TAY
		LDA		_levelup_stat_ptr_tbl,Y
		LDX		_levelup_stat_ptr_tbl+1,Y
		STA		word_40
		STX		word_40+1
		LDX		byte_51				; push the player's level
		LDA		_players_level,X
		PHA
		LDX		byte_52				; remember which stat is being worked on. but increment it by 1 since _eval_stat_curve uses a numbering scheme rebased with EXP at 0
		INX
		JSR		_eval_stat_curve
		LDA		word_4				; reference results of _eval_stat_curve, add 10. stash into byte_42 as a holder for result
		CLC
		ADC		#10
		STA		byte_42

; pop player's level, shr by 1, and add it into byte_42 holder
; this appears to be an absolute minimum baseline for the development of all stats.
; it's probably why according to "game mechanics FAQ" you kind of alternate between 0 or 1 gains when youre struggling
		PLA
		LSR
		CLC
		ADC		byte_42

; at this point we have the target baseline for the stat
; reload the player number. reference _levelup_stat_ptr_tbl to read the current stat value
; compare our current stat to the target baseline. branch if target stat >= curr stat
		LDY		byte_51
		CMP		(word_40),Y
		BCS		.under_baseline

; target stat < curr stat; we're over the baseline
; we have a 50/50 roll here
.run_stat_as_50_50:
		JSR		_rand
		AND		#1
		BEQ		.no_stat_gain ; 50% chance of gaining no stat. skip processing and message entirely
		BNE		.one_stat_gain ; 50% chance of gaining 1 stat point. the 1 present in A is important, it'll be used for the gain value

.under_baseline:
; reference some output from _eval_stat_curve - use the selected scaling table and stat curve index to get a scaling factor
		LDY		byte_11 ;
		LDA		(word_3E),Y

; set up for multiplication. I hope u24[4,5,6] is empty prior to this. maybe its known to be for normal stats or maybe it doesnt matter
; we'll reference more output from _eval_stat_curve - _tmp12, which is the generic scaling factor for the target stat for the relevant class
; u24[4,5,6] = _tmp12 * scaling (keeping in mind `scaling` is a fx 4.4 value)
		STA		word_4
		LDA		_tmp12
		LDX		#word_4
		LDY		#word_4
		JSR		_mul_u24_by_fx44

; now we have a scaling factor in u8[4]. itll be something in the range of (0.0 to 2.0)*_tmp12
; roll a random bell curve byte into word_3c
; u8[$3C] *= combined_scaling
		FARX	_b4_sE
		LDA		word_4
		LDX		#word_3C
		JSR		_mul16_by_8
; divide that back down for reasons unknown, probably just renormalizing
		LDA		#$6E
		JSR		_div16_by_8

; take result of random*scaling work
; I'm not real confident about what comes next, it uses some values from lower in the callstack
		LDA		word_3C
		BEQ		.run_stat_as_50_50 ; if we got a zero, run stat as 50/50

		LDX		byte_52 ; reload current stat number?
		BEQ		.senseless; branch if we're on stat 0? that doesnt make sense
		STA		byte_54,X  ; uhh store resulting scaling factor onto byte_54, for what purpose i dont know

.senseless:
; this seems impossible, maybe ap rogramming error when "run_stat_as_50_50" as added
; here, A is always equal to the gain we calculated, and we would have taken the above branch
		CMP		#0
		BEQ		.no_stat_gain

.one_stat_gain:
; final stat gain is in A. put in textbox system for display
		JSR		_set_u8_in_msg_number_parameter_F8
; add gain to the target stat. clamp at 255 if needed
		LDY		byte_51 ; target player
		CLC
		ADC		(word_40),Y
		BCC		.no_clamp_stat
		LDA		#$FF
.no_clamp_stat:
; store increased stat
		STA		(word_40),Y

; reload current stat number and add #$A0 to get a message index.. display a couple of messages per stat
		LDA		byte_52
		CLC
		ADC		#$A0	; "Strength goes up <number> point<s>."	base message also AGI, VIT, LUCK, INT
		JSR		_msg005_msg0xx

.no_stat_gain:
; go to next target stat. loop back
		INC		byte_52
		LDA		byte_52
		CMP		#5
		BEQ		loc_A4D2
		JMP		loc_A448

loc_A4D2:
		LDX		byte_51
		LDA		_players_level,X
		LDX		#3
		JSR		sub_A5A4
		JSR		sub_A8A8
		LDA		_players_MHP+1,X
		CMP		word_4+1
		BCC		loc_A4FA
		BEQ		loc_A4EA
		BCS		loc_A4F1
loc_A4EA:
		LDA		_players_MHP,X
		CMP		word_4
		BCC		loc_A4FA
loc_A4F1:
		JSR		_rand
		AND		#1
		BEQ		loc_A52C
		BNE		loc_A50D
loc_A4FA:
		ASL		byte_56
		BEQ		loc_A52C
		LDA		#5
		FARX	_b4_sF_rand_mul_A
		CLC
		ADC		#$FE
		CLC
		ADC		byte_56
		BMI		loc_A52C
		BEQ		loc_A52C
loc_A50D:
		JSR		_set_u8_in_msg_number_parameter_F8
		JSR		sub_A8A8
		LDA		_msg_number_parameter_F8
		CLC
		ADC		_players_MHP,X
		STA		_players_MHP,X
		BCC		loc_A522
		INC		_players_MHP+1,X
loc_A522:
		LDA		#$B8	; "The maximum HP goes up <number> point<s>."
		JSR		_msg005_msg0xx
loc_A52C:
		JSR		_b0_s2C_player_CLASS_read
		CMP		#4
		BCS		loc_A58D
		LDX		byte_51
		LDA		_players_level,X
		LDX		#5
		JSR		sub_A5A4
		JSR		sub_A8A8
		LDA		_players_MMP+1,X
		CMP		word_4+1
		BCC		loc_A55B
		BEQ		loc_A54B
		BCS		loc_A552
loc_A54B:
		LDA		_players_MMP,X
		CMP		word_4
		BCC		loc_A55B
loc_A552:
		JSR		_rand
		AND		#1
		BEQ		loc_A58D
		BNE		loc_A56E
loc_A55B:
		ASL		byte_58
		BEQ		loc_A58D
		LDA		#5
		FARX	_b4_sF_rand_mul_A
		CLC
		ADC		#$FE
		CLC
		ADC		byte_58
		BMI		loc_A58D
		BEQ		loc_A58D
loc_A56E:
		JSR		_set_u8_in_msg_number_parameter_F8
		JSR		sub_A8A8
		LDA		_msg_number_parameter_F8
		CLC
		ADC		_players_MMP,X
		STA		_players_MMP,X
		BCC		loc_A583
		INC		_players_MMP+1,X
loc_A583:
		LDA		#$B9	; "The maximum MP goes up <number> point<s>."
		JSR		_msg005_msg0xx
loc_A58D:
		JSR		_b0_s2C_player_CLASS_read
		LDA		word_4
		CMP		#7
		BNE		loc_A59A
		LDA		#4
		BNE		loc_A59E
loc_A59A:
		CMP		#4
		BCS		loc_A5A1
loc_A59E:
		JSR		sub_A5B9
loc_A5A1:
		JMP		_do_levelup

; =============== S U B	R O U T	I N E =======================================
sub_A5A4:
		PHA
		JSR		_eval_stat_curve
		LDA		#4
		LDX		#word_4
		JSR		_mul16_by_8
		LDA		#$A
		JSR		_add8_to_16
		PLA
		LSR
		JMP		_add8_to_16

; =============== S U B	R O U T	I N E =======================================
sub_A5B9:
		STA		byte_55
		ASL
		TAX
		LDA		off_A6EE,X
		LDY		off_A6EE+1,X
		STA		word_40
		STY		word_40+1
		LDA		#0
		STA		byte_52
		STA		byte_45
loc_A5CD:
		LDY		byte_52
		LDA		(word_40),Y
		CMP		#$FF
		BNE		loc_A5D6
		RTS
loc_A5D6:
		STA		byte_57
		AND		#$3F
		STA		byte_58
		LDA		byte_55
		CMP		#4
		BNE		loc_A5E5
		JMP		loc_A65B
loc_A5E5:
		LDA		byte_58
		CMP		#$3F
		BNE		loc_A5EE
		JMP		loc_A6E7
loc_A5EE:
		LDA		byte_57
		BMI		loc_A642
		LDX		byte_51
		LDA		_players_level,X
		SEC
		SBC		byte_58
		CLC
		ADC		#1
		CMP		#3
		BCC		loc_A604
		JMP		loc_A6E7
loc_A604:
		ASL
		TAX
		LDA		off_A716,X
		LDY		off_A716+1,X
		STA		word_4A
		STY		word_4A+1
		LDX		byte_51
		LDA		_players_level,X
		LDX		#5
		JSR		_eval_stat_curve
		LDY		#2
		LDX		byte_51
		SEC
		LDA		_players_INT,X
		SBC		word_4
		CLC
		ADC		#$F
		BMI		loc_A62F
		DEY
		CMP		#$19
		BCC		loc_A62F
		DEY
loc_A62F:
		LDA		(word_4A),Y
		BNE		loc_A636
		JMP		loc_A6E7
loc_A636:
		JSR		_rand
		CMP		(word_4A),Y
		BEQ		loc_A661
		BCC		loc_A661
		JMP		loc_A6E7
loc_A642:
		LDX		byte_51
		LDA		_players_level,X
		CLC
		ADC		#1
		CMP		byte_58
		BCS		loc_A651
		JMP		loc_A6E7
loc_A651:
		JSR		_rand
		AND		#8
		BNE		loc_A661
		JMP		loc_A6E7
loc_A65B:
		LDA		byte_57
		STA		byte_58
		BNE		loc_A642
loc_A661:
		LDX		#$20
		LDA		byte_55
		CMP		#4
		BNE		loc_A66D
		LDX		#$24
		BNE		loc_A673
loc_A66D:
		CMP		#3
		BNE		loc_A673
		LDX		#$40
loc_A673:
		STX		byte_43
		ASL
		TAX
		LDA		off_A6F8,X
		LDY		off_A6F8+1,X
		STA		word_3C
		STY		word_3C+1
		LDA		off_A702,X
		LDY		off_A702+1,X
		STA		word_3E
		STY		word_3E+1
		LDA		byte_51
		ASL
		ASL
		ASL
		LDX		#word_3E
		JSR		_add8_to_16
		LDA		#0
		STA		byte_44
loc_A699:
		LDY		byte_44
		LDA		(word_3C),Y
		CMP		byte_52
		BEQ		loc_A6C0
loc_A6A1:
		INC		byte_44
		LDA		byte_44
		CMP		byte_43
		BNE		loc_A699
		LDA		byte_45
		BEQ		loc_A6E7
		LDA		byte_55
		CMP		#4
		BCS		loc_A6E7
		LDA		#$BA	; "<name> lerns a new spell"
		JSR		_msg005_msg0xx
		JMP		loc_A6E7
loc_A6C0:
		TYA
		PHA
		LSR
		LSR
		LSR
		TAY
		PLA
		AND		#7
		TAX
		SEC
		LDA		#0
loc_A6CD:
		ROL
		DEX
		BPL		loc_A6CD
		STA		byte_42
		AND		(word_3E),Y
		BNE		loc_A6E7
		LDA		byte_42
		ORA		(word_3E),Y
		STA		(word_3E),Y
		LDA		#1
		STA		byte_45
		JSR		_set_u8_in_msg_number_parameter_F8
		JMP		loc_A6A1
loc_A6E7:
		INC		byte_52
		LDA		byte_52
		JMP		loc_A5CD
off_A6EE:
		.WORD	_common_spell_related_data0B
		.WORD	_common_spell_related_data08
		.WORD	_common_spell_related_data09
		.WORD	_common_spell_related_data0A
		.WORD	_antics_index
off_A6F8:
		.WORD	_b0_d58_hero_spell_related_data00
		.WORD	_b0_d59_common_spell_related_data00
		.WORD	_b0_d5A_common_spell_related_data04
		.WORD	_b0_d59_common_spell_related_data00
		.WORD	_b0_d3F_antics_index
off_A702:
		.WORD	_players_spell
		.WORD	_players_spell
		.WORD	_players_spell+4
		.WORD	_players_spell
		.WORD	_players_spell

; =============== T A B L E =================================================
; When leveling up, stats are increased in a loop. this table points to the ram containing each current stat
;
_levelup_stat_ptr_tbl:
		.WORD	_players_STR
		.WORD	_players_AGI
		.WORD	_players_VIT
		.WORD	_players_LUCK
		.WORD	_players_INT

off_A716:
		.WORD	byte_A71C
		.WORD	byte_A71F
		.WORD	byte_A722
byte_A71C:
		.BYTE	$FF,$80,  0
byte_A71F:
		.BYTE	$FF,$FF,$80
byte_A722:
		.BYTE	$FF,$FF,$FF

; =============== S U B	R O U T	I N E =======================================
; selects, for the target player's class and a target stat, a 'stat curve' which is a function of level. Evaluates it.
; A: the player's current level. we should be using this as input to the defined curve
; X: target stat type. 0=EXP, 1=STR, etc. That's offset by 1 from the normal sense of stat types.
; output: u24[4,5,6] - result of the evaluation
; output: word_3C
; output: word_3E - a scaling table to use
; output: _tmp12 - the mysterious value calculated from the MSBits of the stat curve
;
; WHY IS THIS SUCH INSANE GARBAGE?
; Well, the developers wanted to have several knobs to tune without having to rebuild giant tables full of bugs.
; But the structure of the stat curve table with the #$80 bit and LSBits is unforgivable, that should be broken out
;
_eval_stat_curve:
		STA		_tmp13 ; stash the player's current level
		STX		byte_10 ; stash the requested stat
; adjust stat type index to table offset and store ptr from that table in word_3C
		TXA
		ASL
		TAY
		LDA		_stat_curve_tbl,Y
		LDX		_stat_curve_tbl+1,Y
		STA		word_3C
		STX		word_3C+1
		JSR		_b0_s2C_player_CLASS_read
; class is now stored in word_4.
loc_A739:
; this is a loop that advances the ptr in word_3c N times (5 bytes) where N=class type
		DEC		word_4
		BMI		loc_A747
		LDA		#5
		LDX		#word_3C
		JSR		_add8_to_16
		JMP		loc_A739
; done advancing word_3C
loc_A747:
; preparing a ptr to store in word_3E. it might be byte_A806, or it might be [word_3C] which we just built, or it might be something based on _stat_curve_scale_tbl
		LDA		#<[byte_A806]
		LDY		#>[byte_A806]
		LDX		byte_10 ; remember requested stat
		BEQ		.for_exp; branch down if requested stat is EXP

; requested stat is not EXP.
; choose one of X=0 or X=2 depending on MSBit of [word_3C] (that's the first entry of the stat curve)
		LDY		#0
		LDX		#0 ; use _stat_curve_scale_tbl_0 by default ($00,$10,$08,$10,$20)
		LDA		(word_3C),Y
		BPL		loc_A75B
; use _stat_curve_scale_tbl_1 instead (must be an aggressive gainer?) ($08,$10,$18,$20,$08)
		INX
		INX
loc_A75B:
		LDA		_stat_curve_scale_tbl,X
		LDY		_stat_curve_scale_tbl+1,X

.for_exp:
; well, we finally have a value ready to put in word_3E...
; we'll use it in this function for EXP, otherwise it's considered output for the caller to use
		STA		word_3E
		STY		word_3E+1

; clear _tmp12, we'll be building a value in there
		LDA		#0
		STA		_tmp12
; setup a 4 times loop? or maybe 5 times
		LDY		#4
; we're going to begin reading the final entry in the stat curve.. entry[4].. and shifting it down 4 (after masking by #$80)
; repeat for each entry. this is really bizarre
loc_A76B:
		TYA
		PHA
		LDA		(word_3C),Y
		AND		#$80
loc_A771:
		LSR
		DEY
		BPL		loc_A771
; done shifting. incorporate it into _tmp12
		ORA		_tmp12
		STA		_tmp12
		PLA
		TAY
		DEY
		BPL		loc_A76B
; done looping

; so what, after all that? we just built a value that could be in another damn byte. its utterly constant for a given stat curve
; so, shift down 2 more times, ehhhh?
		LSR		_tmp12
		LSR		_tmp12
		LDA		byte_10 ; requested stat
		BEQ		.for_exp2 ; branch down if its = (EXP)

; not an EXP stat: mask result to a smaller value? what the heck? why would we have even put a larger value in the table? well, we usually do. wtf.
		LDA		_tmp12
		AND		#$F
		STA		_tmp12

.for_exp2:
; clear byte at word_4 for accumulation
		LDY		#0
		STY		word_4
loc_A790:
; now we're inspecting the bottom 7 bits of those table entries?
; accumulate into word_4
		LDA		(word_3C),Y
		AND		#$7F
		CLC
		ADC		word_4
		STA		word_4
		CMP		_tmp13 ; remember the input level
		BCS		loc_A7A2 ; run again if we're not up to the target level.
; next table entry. we can't loop more than 5 times or we run out of table
		INY
		CPY		#5
		BNE		loc_A790
loc_A7A2:
; so, we found out which stat curve entry we're on by which level we're on
; store the resulting index in byte_11... the caller will want this. it's not useful to us.
		STY		byte_11

; clear 11 values (backwards) starting at u8[4]: so, u8[4,5,6,7,8,9,A,B,C,D,E]
; we'll be doing u24 math in this range and storing other temp values in here
		LDA		#0
		LDY		#10
loc_A7A8:
		STA		word_4,Y
		DEY
		BPL		loc_A7A8

; I think this is setting a constant? it's initializing u24[7,8,9] to $000010
		LDA		#$10
		STA		$07

		LDA		byte_10 ; load requested stat
		BEQ		loc_A7BE ; check whether its EXP

; for non-EXP: copy _tmp12 to u24[4,5,6] (accumulation will occur begin with that)
		LDA		_tmp12
		STA		word_4

; if target level is finished counting down, return
		DEC		_tmp13
		BEQ		locret_A7F3
; target level not finished counting down..

loc_A7BE:
; byte_E contains a 0-4 step through a stat curve
; read the current entry and select the bottom 7 bits (the level span) which will go into byte_F
		LDY		byte_E
		LDA		(word_3C),Y
		AND		#$7F
		BEQ		loc_A7EF ; skip subsequent logic if level span is 0 (would it be harmful, anyway? maybe wrecked by off by one indexing values)
		STA		byte_F ; stash that entry for counting down

loc_A7C8:
; u24[4,5,6] += u24[7,8,9] * _tmp12 (intermediate in u24[B,C,D])
		LDX		#$07
		LDY		#$0B
		LDA		_tmp12
		JSR		_mul_u24_by_fx44
		LDX		#$0B
		LDY		#$04
		JSR		_add_24_to_24

; if it's EXP, then reference our 3E table to scale the result here (for non-EXP, this table is used by the caller of this function)
; u24[7,8,9] *= (word_3E),Y
		LDA		byte_10 ; load requested stat
		BNE		.not_exp ; check whether its not EXP
		LDY		byte_E ; E contains our position 0-4 in the stat curve based on level... I think
		LDA		(word_3E),Y
		LDX		#$07
		LDY		#$07
		JSR		_mul_u24_by_fx44

.not_exp:
		DEC		_tmp13 ; decrement the memory of the input level
		BEQ		locret_A7F3 ; bail if we're done (no need to step through the stat curve beyond the target level)

; if we're not done...
		DEC		byte_F ; decrement the level span counter
		BNE		loc_A7C8 ; step the stat curve again unless we're done with the level span

; done with the level span. bounce to the next level span
loc_A7EF:
		INC		byte_E
		BNE		loc_A7BE ; well, this is unexpected. we should never get anywhere near this high. it should be stopping at 5 or something like that. maybe extra looping is benign

; at this point u24[4,5,6] contains the results we needed

locret_A7F3:
		RTS

; =============== T A B L E =======================================
; Pointers to stat curves
_stat_curve_tbl:
		.WORD	_stat_curve_EXP_tbl
		.WORD	_stat_curve_STR_tbl
		.WORD	_stat_curve_AGI_tbl
		.WORD	_stat_curve_VIT_tbl
		.WORD	_stat_curve_LUCK_tbl
		.WORD	_stat_curve_INT_tbl

; =============== T A B L E =======================================
; Selects one of the two tables below for non-exp stat curves
;
_stat_curve_scale_tbl:
		.WORD	_stat_curve_scale_tbl_0
		.WORD	_stat_curve_scale_tbl_1

; =============== T A B L E S =======================================
; These might be fx 4.4 scalers used for stat curves
;

; this one is used for EXP
byte_A806:
		.BYTE	$20,$18,$14,$12,$10

; these are used for other stats
_stat_curve_scale_tbl_0:
		.BYTE	$00,$10,$08,$10,$20
_stat_curve_scale_tbl_1:
		.BYTE	$08,$10,$18,$20,$08

; =============== S U B	R O U T	I N E =======================================
; u24[Y] = (u24[X] * A) >> 4
;
_mul_u24_by_fx44:
		JSR		_mul_u24_by_u8
		LDA		#4
		STA		byte_47
		TYA
		TAX
loc_A81E:
		LSR		byte_46
		ROR		2,X
		ROR		1,X
		ROR		0,X
		DEC		byte_47
		BNE		loc_A81E
		RTS

; =============== S U B	R O U T	I N E =======================================
; u24[Y] = u24[X] * A
;
_mul_u24_by_u8:
		PHA ; save A from clobbering
		STA		byte_42
; clear u8[43-47] for workspace
		LDA		#0
		STA		byte_43
		STA		byte_44
		STA		byte_45
		STA		byte_46
		STA		byte_47
		LDA		0,X
		STA		0,Y
		LDA		1,X
		STA		1,Y
		LDA		2,X
		STA		2,Y
loc_A849:
		LSR		byte_42
		BCC		loc_A869
		LDA		0,Y
		CLC
		ADC		byte_43
		STA		byte_43
		LDA		1,Y
		ADC		byte_44
		STA		byte_44
		LDA		2,Y
		ADC		byte_45
		STA		byte_45
		LDA		byte_47
		ADC		byte_46
		STA		byte_46
loc_A869:
		TYA
		TAX
		ASL		0,X
		ROL		1,X
		ROL		2,X
		ROL		byte_46
		LDA		byte_42
		BNE		loc_A849
		LDA		byte_43
		STA		0,Y
		LDA		byte_44
		STA		1,Y
		LDA		byte_45
		STA		2,Y
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; u24[Y] += u24[X]
;
_add_24_to_24:
		CLC
		LDA		0,X
		ADC		0,Y
		STA		0,Y
		LDA		1,X
		ADC		1,Y
		STA		1,Y
		LDA		2,X
		ADC		2,Y
		STA		2,Y
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_A8A8:
		LDA		byte_51
		ASL
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
; stores a u8 in the _msg_number_parameter_F8 text variable. preserves stack
; A: u8 to store
_set_u8_in_msg_number_parameter_F8:
		PHA
		STA		_msg_number_parameter_F8
		LDA		#0
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; displays the basic battle stat window if battle mode is on, mostly the same
; as _b4_s6_wndBTL_STAT, but with different flag testing, may be redundant
;
_wndBTL_STAT:
		LDA		byte_CE
		PHA
		JSR		_b0_s31_get_party_chars_list
		LDA		word_4
		CLC
		ADC		#3	; 3 + [1..4] _wnd04_btl_stat_ply[1..4]
		TAX
		LDA		_global_flags_array.byte2
		AND		#$20
		BEQ		loc_A8D2
		TXA
		FARX	_bE_s0_display_window_ex
loc_A8D2:
		PLA
		STA		byte_CE
		RTS

; "stat curves"
; the tables below are organized into 5 entries per class times 8 classes
; see _eval_stat_curve for more details than you care to know, where these are all used
;
_stat_curve_EXP_tbl:
		.BYTE	$81,$88,$84,$1C,$FF ; exp
		.BYTE	$02,$88,$85,$9C,$FF
		.BYTE	$02,$88,$86,$9A,$7F
		.BYTE	$82,$08,$86,$19,$7F
		.BYTE	$02,$88,$88,$16,$7F
		.BYTE	$02,$88,$07,$99,$7F
		.BYTE	$82,$08,$05,$9B,$7F
		.BYTE	$02,$88,$08,$98,$FF

_stat_curve_STR_tbl:
		.BYTE	$82,$20,$0A,$80,$FF ; 6 - here i calculated the mystery byte
		.BYTE	$04,$28,$05,$31,$FF ; 2
		.BYTE	$00,$12,$29,$A7,$7F ; 4
		.BYTE	$80,$25,$0C,$82,$7F ; 4
		.BYTE	$80,$09,$23,$80,$FF ; 6
		.BYTE	$86,$17,$00,$80,$FF ; 6
		.BYTE	$86,$08,$80,$23,$7F ; 8
		.BYTE	$84,$2B,$00,$1B,$FF ; 2

_stat_curve_AGI_tbl:
		.BYTE	$82,$20,$0C,$80,$7F
		.BYTE	$8E,$10,$00,$93,$FF
		.BYTE	$87,$07,$0F,$80,$7F
		.BYTE	$80,$1B,$16,$86,$7F
		.BYTE	$80,$62,$00,$00,$FF
		.BYTE	$80,$3B,$00,$80,$7F
		.BYTE	$80,$0B,$8D,$14,$7F
		.BYTE	$00,$09,$46,$8A,$7F

_stat_curve_VIT_tbl:
		.BYTE	$85,$1F,$88,$00,$7F
		.BYTE	$83,$06,$28,$85,$7F
		.BYTE	$81,$08,$0F,$94,$7F
		.BYTE	$80,$2E,$08,$80,$FF
		.BYTE	$84,$0A,$8E,$0B,$7F
		.BYTE	$00,$24,$26,$98,$FF
		.BYTE	$82,$09,$26,$80,$FF
		.BYTE	$82,$03,$0E,$85,$7F

_stat_curve_LUCK_tbl:
		.BYTE	$0A,$27,$31,$80,$FF
		.BYTE	$82,$09,$25,$80,$FF
		.BYTE	$83,$1D,$0E,$80,$FF
		.BYTE	$80,$27,$3B,$80,$7F
		.BYTE	$00,$1D,$45,$00,$FF
		.BYTE	$95,$1C,$0A,$80,$7F
		.BYTE	$84,$05,$1E,$8A,$FF
		.BYTE	$00,$89,$0A,$85,$7F

_stat_curve_INT_tbl:
		.BYTE	$8E,$23,$00,$80,$7F ; etc for INT
		.BYTE	$80,$0E,$37,$80,$7F
		.BYTE	$80,$0E,$37,$80,$7F
		.BYTE	$80,$18,$4A,$80,$7F
		.BYTE	$04,$1E,$40,$00,$FF
		.BYTE	$80,$0D,$00,$42,$FF
		.BYTE	$82,$43,$00,$00,$FF
		.BYTE	$00,$05,$4A,$80,$FF

_common_spell_related_data0B:
		.BYTE	  2,$3F,$3F, $A,$17,$3F,$3F,$1F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F
		.BYTE	$1A,$29,$3F,$3F,$3F,  6,$3F,$3F,$3F,$3F,  4,$1D,$21,$3F,$3F,$26
		.BYTE	$23,$3F,$10,$3F,$12,$3F,  7,$3F,$3F,$3F, $C,$3F,$3F,$3F,$3F,$3F
		.BYTE	$3F,$3F,$3F,$3F,$3F,$3F,$3F,$14,$3F,$3F,$3F, $E,$3F,$3F,$FF
_common_spell_related_data08:
		.BYTE	  1,$11,$24,$87, $E,$1D, $B,$17,$26,  5,$14,$1A,$20,$3F,$3F,$3F
		.BYTE	$3F,$3F,$3F,$3F,$3F,$3F,$3F,$8F, $C,$3F,$3F,$3F,$3F,$3F,$3F,$3F
		.BYTE	$3F,$3F,$3F,$3F,$3F,$3F, $D,$9B,$A5,$A2,$3F,$3F,$3F,$84,$89,$3F
		.BYTE	$98,$3F,$95,$A8,$3F,$3F,$1E,$3F,$19,$23,$12, $A,$21,$13,$FF
_common_spell_related_data09:
		.BYTE	$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F, $C,$1A,$A4
		.BYTE	$3F,$3F,$96,$1C,$A9,  2,$94,$3F,$3F,$85,  1, $E,$1E,$3F,$22,$3F
		.BYTE	$18,$26,  9,$90, $D,$87,$3F,$3F,$3F,$3F,$3F,$88,$12,$3F,$3F,$3F
		.BYTE	$3F,$20,$3F,$3F, $B, $F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$FF
_common_spell_related_data0A:
		.BYTE	  1,$11,$24,$87, $E,$1D, $B,$17,$26,  5,$14,$1A,$20, $C,$1A,$A4
		.BYTE	$3F,$3F,$96,$1C,$A9,  2,$94,$8F, $C,$85,  1, $E,$1E,$3F,$22,$3F
		.BYTE	$18,$26,  9,$90, $D,$87, $D,$9B,$A5,$A2,$3F,$88,$12,$84,$89,$3F
		.BYTE	$98,$20,$95,$A8, $B, $F,$1E,$3F,$19,$23,$12, $A,$21,$13,$FF
_antics_index:
		.BYTE	$1C,$14,$28,$10, $A,  5,$18,$13,  7,$22,$1D,  3, $F,$20,  2,$5F
		.BYTE	$1F,$2D, $E,$1E,$25,$27,$1A,$15, $B,$32,$46,$55,$21,$3C, $C,$1B
		.BYTE	$12,$23,$FF

; =============== S U B	R O U T	I N E =======================================
_wrap_wnd3E_msg148_bE_s33:
		LDA		#$48	; "Doesn't have an item yet"
		BNE		_wnd3E_msg1xx_bE_s33

; =============== S U B	R O U T	I N E =======================================
_wrap_wnd3E_msg167_bE_s33:
		LDA		#$67	; "The king bears no items"

;; FALLTHOURGH ;;

; =============== S U B	R O U T	I N E =======================================
_wnd3E_msg1xx_bE_s33:
		JSR		_wnd3E_msg1xx
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_b0_s5D_run_command_item_use:
		LDA		_global_flags_array.byte2
		AND		#$40
		BNE		_wrap_wnd3E_msg167_bE_s33	; "The King bears no items"
		SYSX	_display_window,$2C
		LDX		#5
		JSR		_sleep_X_sync
		SYSX	_display_window,$69
		FARX	_bA_sE
		CMP		#$FF
		BEQ		default_action_item_refresh_branch
		STA		byte_45
		STA		byte_53
		STA		byte_D2
		STA		byte_CE
		STA		byte_CF
		JSR		_b0_s28_player_inventory_item_get
		LDA		word_4
		BEQ		_wrap_wnd3E_msg148_bE_s33	; "<name> doesn't have an item yet."
		SYSX	_display_window,$6B
		CMP		#$FF
		BEQ		default_action_item_refresh_branch
		STA		byte_46
		STA		byte_CF
		JSR		_b0_s28_player_inventory_item_get
		LDA		word_4+1
		STA		byte_48
		AND		#$7F ; mask off equip bit; store as direct object
		STA		_msg_directobject_param
		JSR		_b0_s2C_player_CLASS_read
		LDA		word_4
		CMP		#5
		BNE		loc_AB3F
		LDA		#$4C						; merchant item menu (appraise)
		BNE		loc_AB41
loc_AB3F:
		LDA		#$15						; regular item menu
loc_AB41:
		FARX	_bE_sC_display_window
		CMP		#$FF
default_action_item_refresh_branch:
		BEQ		.default_action_item_refresh
		CMP		#3
		BNE		loc_AB4F
		JMP		.item_appraise_command
loc_AB4F:
		CMP		#1
		BNE		loc_AB56
		JMP		.item_transfer_command
loc_AB56:
		CMP		#2
		BNE		.item_use_command
		JMP		.item_discard_command
.item_use_command:
		JSR		sub_ADAC
		BCC		loc_AB65
		JMP		_pause_default_action_item_refresh
loc_AB65:
		LDA		byte_48
		AND		#$7F
		CMP		#$77
		BCS		loc_AB8B
		TAX
		LDA		_b0_d44_item_effects_list,X
		BPL		loc_ABDD
		LDA		_b0_d42_item_use_effects_list,X
		AND		#$40
		BEQ		loc_AB8B
		CPX		#$67
		BEQ		loc_AB8B
		CPX		#$70
		BEQ		loc_AB8B
		JSR		_wnd2E_ex
		TAX
		BPL		loc_AB8B
.default_action_item_refresh:
		JMP		_default_action_item_refresh
loc_AB8B:
		LDA		byte_45
		PHA
		LDA		byte_46
		PHA
		LDA		byte_47
		PHA
		LDA		byte_48
		PHA
		JSR		sub_AE12
		PLA
		STA		byte_48
		AND		#$7F
		TAX
		PLA
		STA		byte_47
		PLA
		STA		byte_46
		PLA
		STA		byte_45
		BCC		loc_ABE0
		LDA		_b0_d42_item_use_effects_list,X
		AND		#4
		BEQ		loc_ABCF
		CPX		#$68
		BEQ		loc_ABCC
		CPX		#$76
		BCS		loc_ABCC
		CPX		#$4C
		BEQ		loc_ABC9
		CPX		#$58
		BCC		loc_ABCC
		CPX		#$65
		BNE		loc_ABC9
		JMP		loc_AC4E
loc_ABC9:
		JMP		loc_AC4B
loc_ABCC:
		JMP		loc_AC51
loc_ABCF:
		CPX		#$4E
		BEQ		loc_AC0D
		CPX		#$6D
		BNE		loc_ABDA
		JMP		_item_refresh
loc_ABDA:
		JMP		_default_action_item_refresh
loc_ABDD:
		SYSX	_display_window,$3E
loc_ABE0:
		CPX		#$6B
		BEQ		loc_AC0D
		JMP		_but_nothing_happens_special_test
		
.item_transfer_command:
		JSR		sub_ADF4
		BCS		loc_AC0D
		JSR		_b0_s31_get_party_chars_list
		DEC		word_4
		LDA		word_4
		BEQ		loc_ABF8
		JSR		_wnd2E_ex
loc_ABF8:
		STA		byte_47
		STA		byte_CE
		CMP		#$FF
		BEQ		.default_action_item_refresh
		JSR		_player_inventory_item_add
		LDA		word_4
		BMI		loc_AC10
		JSR		sub_ACBE
		JSR		sub_AC57
loc_AC0D:
		JMP		_pause_default_action_item_refresh
loc_AC10:
		LDA		byte_47
		CMP		byte_45
		BNE		sub_AC7D
		PHA
		LDA		byte_48
		PHA
		JSR		sub_AC57
		PLA
		STA		byte_48
		PLA
		STA		byte_45
		STA		byte_CE
		JSR		_player_inventory_item_add
		JSR		sub_ACBE
		JMP		loc_AC0D
.item_discard_command:
		JSR		sub_ADF4
		BCS		loc_AC0D
		SYSX	_display_window,$3E
		LDA		byte_48
		AND		#$7F
		TAX
		LDA		_b0_d42_item_use_effects_list,X
		AND		#$10
		BEQ		loc_AC48
		MSGX	_msg_m00,$12A	; "It must not be thrown away"
		JMP		_pause_default_action_item_refresh
loc_AC48:
		JSR		_throw_away_item
loc_AC4B:
		JSR		_pause_or_skip
loc_AC4E:
		FARX	_bC_s20_warp_bE_sB_arg0
loc_AC51:
		JSR		sub_AC57
		JMP		_item_refresh_ex

; =============== S U B	R O U T	I N E =======================================
sub_AC57:
		LDA		byte_45
		STA		byte_CE
		LDA		byte_46
		STA		byte_CF
		JSR		_b0_s2A_player_inventory_item_remove
		LDA		byte_48
		CMP		#$AA
		BEQ		loc_AC70
		CMP		#$B1
		BEQ		loc_AC70
		CMP		#$B2
		BNE		locret_AC73
loc_AC70:
		FARX	_bE_s10
locret_AC73:
		RTS

; =============== S U B	R O U T	I N E =======================================
_player_inventory_item_add:
		LDA		byte_48
		AND		#$7F
		STA		byte_CF
		JMP		_b0_s29_player_inventory_item_add

; =============== S U B	R O U T	I N E =======================================
sub_AC7D:
		SYSX	_display_window,$3E
		LDA		byte_47
		STA		byte_D2
		MSGX	_msg_m00,$169	; "However, <name> cannot have one thing more"
		JMP		_pause_default_action_item_refresh

; =============== S U B	R O U T	I N E =======================================
_but_nothing_happens_special_test:
		LDA		byte_48
		AND		#$7F
		CMP		#ITEM_WING_OF_WYVERN
		BEQ		_default_action_item_refresh
		LDX		#3
loc_AC94:
		CMP		byte_ACB1-1,X
		BEQ		_pause_default_action_item_refresh
		DEX
		BNE		loc_AC94
		MSGX	_msg_m00,$040	; "But nothing happens"

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_pause_default_action_item_refresh:
		JSR		_pause_or_skip

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_default_action_item_refresh:
		FARX	_bC_s20_warp_bE_sB_arg0

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_item_refresh:
		LDA		#0
		STA		byte_48

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_item_refresh_ex:
		LDA		#0
		STA		byte_8E
		JSR		_b0_s50_players_item_buffs_refresh
		RTS
		
byte_ACB1:
		.BYTE	ITEM_VASE_OF_DROUGHT
		.BYTE	ITEM_MAGIC_BALL
		.BYTE	ITEM_RAINBOW_DROP

; =============== S U B	R O U T	I N E =======================================
sub_ACBE:
		SYSX	_display_window,$3E
		JSR		_get_fist_non_dead_layer_idx
		LDA		byte_45
		CMP		byte_47
		BEQ		loc_ACFC
		LDY		#$2B	; base idx $12B "Transfers <> to" up to $133 "Takes the <> from ghost"
		ASL
		TAX
		LDA		_players_status+1,X
		ASL
		BMI		loc_ACD9
		BCS		loc_ACE1
		INY		; here will be $131
		INY
		INY		
loc_ACD9:
		INY		; only jump here, then $12E
		INY
		INY
		LDX		#2
		JSR		sub_AD13
loc_ACE1:
		LDA		byte_47
		ASL
		TAX
		LDA		_players_status+1,X
		ASL
		BMI		loc_ACEE
		BCS		loc_ACF8
		INY		; $12C or $12F or $132
loc_ACEE:
		INY		; $12D or $130 or $133
		CPY		#$2E	; check if above $12E
		BCC		loc_ACF8
		LDX		#3
		JSR		sub_AD13
loc_ACF8:
		TYA
		JMP		_wrap_msg_m00_arg1
loc_ACFC:
		ASL
		TAX
		LDY		#$34	; base idx $134 "makes as if <> to transfer something" up to $136
		LDA		_players_status+1,X
		ASL
		BMI		loc_AD09
		BCS		loc_AD0F
		INY				; or "Takes the <> from Tool bag"
loc_AD09:
		INY				; or "Takes the <> from ghost"
		LDX		#3
		JSR		sub_AD13
loc_AD0F:
		TYA
		JMP		_wrap_msg_m00_arg1

; =============== S U B	R O U T	I N E =======================================
sub_AD13:
		LDA		byte_D2,X
		PHA
		LDA		byte_D2
		STA		byte_D2,X
		PLA
		STA		byte_D2
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_fist_non_dead_layer_idx:
		LDX		#0
loc_AD20:
		LDA		_players_status+1,X
		ASL
		BMI		loc_AD28
		BCS		loc_AD2C
loc_AD28:
		INX
		INX
		BNE		loc_AD20
loc_AD2C:
		TXA
		LSR
		STA		byte_D5
		RTS

; =============== S U B	R O U T	I N E =======================================
_throw_away_item:
		JSR		_get_fist_non_dead_layer_idx
		STA		byte_D4
		LDY		#$27	; base idx $127 "<name> throws away the <item>"
		LDA		byte_45
		ASL
		TAX
		LDA		_players_status+1,X
		ASL
		BMI		loc_AD45
		BCS		loc_AD4B
		INY		; idx $129 "takes the from ghost and throw"
loc_AD45:
		INY		; ids $128 "takes the from tool box and throw"
		LDX		#2
		JSR		sub_AD13
loc_AD4B:
		TYA
		JMP		_wrap_msg_m00_arg1
		
; =============== S U B	R O U T	I N E =======================================
.item_appraise_command:
		SYSX	_display_window,$3E
		LDA		byte_45
		ASL
		TAX
		LDA		_players_status+1,X
		ASL
		BCS		loc_AD62
		MSGX	_msg_m00,$126	; "is dead and can't use the item"
		JMP		_pause_default_action_item_refresh
loc_AD62:
		MSGX	_msg_m00,$11B	; "takes the <> and check it out"
		LDA		byte_48
		AND		#$7F
		TAX
		LDA		_b0_d42_item_use_effects_list,X
		PHA
		AND		#$10
		BEQ		loc_AD7B
		MSGX	_msg_m00,$123	; "This is a nice piece of work"
		MSGX	_msg_m00,$124	; "I doubt even a shopkeeper..."
		JMP		loc_ADA1
loc_AD7B:
		LDA		byte_48
		AND		#$7F
		JSR		_b0_s60_get_item_type
		CLC
		ADC		#$1D			; $11D base "this look like a weapon" etc.
		JSR		_wrap_msg_m00_arg1
		LDA		byte_48
		AND		#$7F
		TAX
		FARX	_bD_s12
		FARX	_bD_s13
		LDX		#3
loc_AD95:
		LDA		byte_BF,X
		STA		byte_63E,X
		DEX
		BNE		loc_AD95
		MSGX	_msg_m00,$121	; "<name>: `This is worth <number> piece<s> of gold if sold to an item store"
loc_ADA1:
		PLA
		AND		#8
		BNE		loc_ADA9
		MSGX	_msg_m00,$116	; "it doesn't look like special cursed"
loc_ADA9:
		JMP		_pause_default_action_item_refresh

; =============== S U B	R O U T	I N E =======================================
sub_ADAC:
		LDA		byte_48
		AND		#$7F
		STA		byte_CF
		LDA		byte_45
		STA		byte_CE
		ASL
		TAX
		LDY		#$26	; $126 "is dead and can't use the item"
		LDA		_players_status+1,X
		ASL
		BCC		loc_ADC3
		BPL		loc_ADC6
		DEY				; $125 "is unable to move and can't use the item"
loc_ADC3:
		TYA
		BNE		_wnd3E_msg1xx
loc_ADC6:
		JSR		_b0_s5E_check_if_item_can_be_used
		BCC		_display_name_cannot_use_the_item
		LDA		#ITEM_NOH_MASK
		STA		byte_CF
		JSR		_b0_s45_check_if_item_equipped
		LDA		word_4
		BPL		_return_false_in_C
		CMP		#$FF
		BEQ		_return_false_in_C
		AND		#$7F
		STA		_msg_directobject_param
		LDA		#$15	; "<name> is confused by the Noh Mask."

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_wnd3E_msg1xx:
		PHA
		SYSX	_display_window,$3E
		PLA
		JSR		_wrap_msg_m00_arg1
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_return_false_in_C:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_display_name_cannot_use_the_item:
		SYSX	_display_window,$3E
		MSGX	_msg_m00,$0BF	; "<name> cannot use the <item>"
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_ADF4:
		LDA		byte_48
		BPL		_return_false_in_C
		AND		#$7F
		TAX
		LDA		_b0_d42_item_use_effects_list,X
		AND		#8
		BEQ		_return_false_in_C
		STX		byte_D2
		SYSX	_apu_load,BGM_CURSE_JINGLE
		SYSX	_display_window,$3E
		MSGX	_msg_m00,$152	; "the <> is stuck to the body"
		FARX	_bD_s22_se_wait_and_map_music_start
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; triggered when *USE is picked on an item in the field
;
sub_AE12:
		LDA		byte_48
		AND		#$7F						; remove equip bit
		CMP		#ITEM_WING_OF_WYVERN
		BEQ		loc_AE1D
		SYSX	_display_window,$3E			; that one's special, we need to launch a "where" places list.
loc_AE1D:
		LDY		#$FD						; pre-roll loop one step early
		LDA		byte_48						; reload target item in case above jsr whacked it..
		AND		#$7F						; remove equip bit
		TAX
loc_AE24:
		LDA		_b0_d44_item_effects_list,X	; reference item effects table
		BPL		loc_AE2C					; if it's <$80, skip Y+=3 (one function pointer and one text message)
		INY									; Y+=3
		INY
		INY
loc_AE2C:
		DEX 								; decrease item number by 1
		BNE		loc_AE24 					; loop back up if we didnt hit zero
		LDA		_items_use_lib+1,Y			; special item handler fallback
		STA		word_3C
		LDA		_items_use_lib+2,Y
		STA		word_3C+1
		LDA		_items_use_lib,Y			; special item message index
		BEQ		loc_AE4F					; no message
		CMP		#$5C						; check for special messages see below
		BEQ		loc_AE52
		CMP		#$64  						; number less than 64 here are $1xx messages
		BCC		loc_AE4C
		JSR		_wrap_msg_m00_arg0
		JMP		loc_AE4F 					; proceed to handle script
loc_AE4C:
		JSR		_wrap_msg_m00_arg1
loc_AE4F:
		JMP		(word_3C)					; dispatch to script callback
loc_AE52:
		LDA		_location_type				; test if fairy water is working. Uhhhhhhhhhhhh from what I can tell, this should be 0,1,2 but we're testing for other things down here.
		CMP		#2 
		BCC		loc_AE68
		BEQ		loc_AE62 ; UNCONDITIONAL, PROBABLY
		CMP		#3
		BEQ		loc_AE62
		CMP		#7
		BNE		loc_AE68
loc_AE62:
		MSGX	_msg_m00,$040	; "But nothing happens"
		JSR		_pause_or_skip
loc_AE68:
		LDA		#$5C						; idx $15C "Holds <item> by the thread... and Sailor..."
		BNE		loc_AE4C ; UNCONDITIONAL

; =============== S U B	R O U T	I N E =======================================
; Sword of gaia, in volcano
;
_item_gaias_sword_use:
		LDA		_playerWorldX
		CMP		#$4A ; check for position at volcano
		BNE		_msg_name_uses_item_clc
		LDA		_playerWorldY
		CMP		#$90
		BNE		_msg_name_uses_item_clc
		MSGX	_msg_m00,$13C	; "<> throws the <> in the crater"
		JSR		_sleep_30
		FARX	_bC_s24_volcano_event
		RTS

; =============== S U B	R O U T	I N E =======================================
; "<user> puts the <item> on
_item01_use:
		JSR		sub_B143
		BCC		locret_AE8B
		FARX	_bE_s33
		SEC
locret_AE8B:
		RTS

; =============== S U B	R O U T	I N E =======================================
; used in particular place at the 2nd floor of the Samano castle
;
_item_mirror_of_ra_use:
		LDA		_mapNumber
		CMP		#$62
		BNE		_void_event
		LDA		_playerMapX
		CMP		#$D
		BNE		_void_event
		LDA		_playerMapY
		CMP		#6
		BNE		_void_event
		LDA		_global_flags_array.byte18	; never used twice, but you may keep it
		AND		#$20
		BNE		_void_event
		FARX	_b5_s5_mirror_of_ra_trigger_on
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_msg_name_uses_item_clc:
		MSGX	_msg_m00,$153	; "<name> uses the <item>."

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; a null event handler
_void_event:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item0A_float_use:
		FARX	_bC_s22
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_lamp_of_darkness_use:
		FARX	_bC_s12_sleep_X_sync_50
		FARX	_bC_s11_item_lamp_of_darkness_use
		RTS

; =============== S U B	R O U T	I N E =======================================
; staff of change usage
_item_staff_of_change_use:
		FARX	_b6_s15_item_staff_of_change_use
		BCC		locret_AECC
		JSR		_sleep_30
		FARX	_bC_s20_warp_bE_sB_arg0
		SEC
locret_AECC:
		RTS

; =============== S U B	R O U T	I N E =======================================
; become invisible, for a while
_item_invisibility_herb_use:
		JSR		_sleep_30
		FARX	_b6_sE_item_invisibility_herb_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_magic_ball_use:
		FARX	_bC_s13_item_magic_ball_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_thief_key_use:
		FARX	_bC_sD_item_thief_key_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_magic_key_use:
		FARX	_bC_sE_item_magic_key_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_cmd_spell_open:
		FARX	_bC_sF_item_final_key_use
		RTS

; =============== S U B	R O U T	I N E =======================================
; "<user> falls asleep!" <wait> "<user> is numb and unable to move". possibly glitched by my testing
_item12_use:
		MSGX	_msg_m00,$018	; "<name> falls asleep"
		JSR		_player_set_numb_status
		JSR		_pause_or_skip

; =============== S U B	R O U T	I N E =======================================
_item_wakeup_powder_use:
		FARX	_b6_s12_item_wakeup_powder_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_royal_scroll_use:
		LDA		_global_flags_array.byte1				; reference a quest flag to see whether this quest has already been done
		AND		#$20
		BNE		_void_event
		LDA		_mapNumber
		CMP		#$2F					; whichever map norud's on
		BNE		loc_AF38				; search a range of positions for where norud might be
		LDA		_playerMapX
		CMP		#$26
		BCC		loc_AF38
		CMP		#$29
		BCS		loc_AF38
		LDA		_playerMapY
		CMP		#5
		BCC		loc_AF38
		CMP		#7
		BCS		loc_AF38
		LDA		_npcs_pos_list			; check for npc with index 0 is at the right place
		CMP		#$27
		BNE		loc_AF38
		MSGX	_msg_m00,$1A1			; "Ahem! So thou wouldst go east"
		SYSX	_apu_load,SFX_MENU_PROMPT
		SYSX	_display_window,$1D
		TAX
		BNE		loc_AF32
		MSGX	_msg_m00,$1A2			; "Ahem! It is a request of the king"
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#4
		FARX	_bC_s0_npc_anim_script_init
		SEC
		RTS
loc_AF32:
		MSGX	_msg_m00,$1A3	; "Well, then there is nothing I can do four you"
		JSR		_pause_or_skip
loc_AF38:
		MSGX	_msg_m00,$106	; "However, Norud is not here"
		JSR		_pause_or_skip
loc_AF3E:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_wing_of_wyvern_use:
		FARX	_b1_s15
		CMP		#$FF
		BEQ		loc_AF78
		STA		byte_50
		SYSX	_display_window,$3E
		MSGX	_msg_m00,$0AA	; "<name> flings the <item> into the air."
		JSR		_sleep_30
		FARX	_b6_s6_spell_return_use
		BCS		loc_AF3E
		MSGX	_msg_m00,$040	; "But nothing happens."
		JSR		_pause_or_skip
loc_AF78:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_locket_of_love_use:
		MSGX	_msg_m00,$108	; "The spirit of Errol and Olivia devotions
		JSR		_sleep_30
		FARX	_b6_s11_item_locket_of_love_use
		BCC		loc_AF92
		MSGX	_msg_m00,$10B	; "Oh, Errol, my belowed. I've been waiting for you"
		MSGX	_msg_m00,$109	; "The curse on Olivia is broken"
		SEC
		RTS
loc_AF92:
		MSGX	_msg_m00,$102	; "But nothing happening now"
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
; surprisingly complex water blaster usage routine, which selects for every
; kind of different NPCs a different kind of messages either the "huh?",
; "stop that" or "yikes, it's cold"... why so much care about this?
;
_item_water_blaster_use:
		LDA		_playerMapX
		STA		word_4+1
		LDA		_playerMapY
		STA		word_6
		LDY		_playerFacingDir
		BEQ		loc_AFB2
		DEY
		BEQ		loc_AFB7
		DEY
		BEQ		loc_AFBC
		DEC		word_4+1
		JMP		loc_AFBE
loc_AFB2:
		DEC		word_6
		JMP		loc_AFBE
loc_AFB7:
		INC		word_4+1
		JMP		loc_AFBE
loc_AFBC:
		INC		word_6
loc_AFBE:
		LDX		#0
loc_AFC0:
		LDA		_npcs_pos_list+1,X
		CMP		#$FF
		BEQ		loc_AF78
		CMP		word_6
		BNE		loc_AFD2
		LDA		_npcs_pos_list,X
		CMP		word_4+1
		BEQ		loc_AFD8
loc_AFD2:
		INX
		INX
		INX
		INX
		BNE		loc_AFC0
loc_AFD8:
		TXA
		LSR
		LSR
		STA		word_4
		JSR		sub_177EFC
		LDA		word_6
		AND		#$1F
		TAX
		LDA		#$70	; "C'mon! Stop that!"
		LDY		byte_B006,X
		BEQ		loc_AFF6
		DEY
		BEQ		loc_AFF8
		DEY
		BNE		loc_AF78
		LDA		#$B4	; "Huh?!"
		BNE		loc_AFF8
loc_AFF6:
		LDA		#$6F	; "Yikes! This is cold."
loc_AFF8:
		JSR		_wrap_msg_m00_arg0
		FARX	_bC_s12_sleep_X_sync_50
		FARX	_bC_s20_warp_bE_sB_arg0
		FARX	_b6_s10_water_blaster_npc_anim
		SEC
		RTS
byte_B006:
		.BYTE	  0,  0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  1,  0,  0,  0,  1
		.BYTE	  2,  2,  3,  3,  0,  2,  2,  2,  3,  1,  0,  3,  3,  3,  0,  2

; =============== S U B	R O U T	I N E =======================================
_item_thigh_bone_use:
		LDA		#0
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		LDA		_ghostShipWorldY
		SEC
		SBC		_playerWorldY
		BMI		loc_B03C
		STA		_msg_number_parameter_F8
		LDA		#$12	; $110 "<number> to the south"
		BNE		loc_B045
loc_B03C:
		EOR		#$FF
		TAX
		INX
		STX		_msg_number_parameter_F8
		LDA		#$10	; $110 "<number> to the north"
loc_B045:
		JSR		_wrap_msg_m00_arg1
		LDA		_ghostShipWorldX
		SEC
		SBC		_playerWorldX
		BMI		loc_B056
		STA		_msg_number_parameter_F8
		LDA		#$11	; $110 "<number> to the east"
		BNE		loc_B05F
loc_B056:
		EOR		#$FF
		TAX
		INX
		STX		_msg_number_parameter_F8
		LDA		#$13	; $110 "<number> to the west"
loc_B05F:
		JSR		_wrap_msg_m00_arg1
		MSGX	_msg_m00,$114	; "is the direction indicated."
		JSR		_pause_or_skip

; =============== S U B	R O U T	I N E =======================================
_item_echoing_flute_use:
		FARX	_bC_sC_item_echoing_flute_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_fairy_flute_use:
		SYSX	_apu_load,BGM_JINGLE_FAIRY_FLUTE
		JSR		_sleep_30
		LDA		_mapNumber
		CMP		#$EF
		BNE		loc_B097
		LDA		_playerMapX
		CMP		#$F
		BCC		loc_B097
		CMP		#$12
		BCS		loc_B097
		LDA		_playerMapY
		CMP		#$11
		BCC		loc_B097
		CMP		#$14
		BCS		loc_B097
		LDA		_global_flags_array.byte5
		AND		#$20
		BNE		loc_B097
		FARX	_bC_s2B_item_fairy_flute_use
		RTS
loc_B097:
		FARX	_bD_s22_se_wait_and_map_music_start
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_silver_harp_use:
		SYSX	_apu_load,BGM_JINGLE_SILVER_HARP
		FARX	_bB_s7_apu_wait
		LDA		_global_flags_array.byte10
		BMI		loc_B0B5
		JSR		_b0_s53_random_encounter_select
		LDY		_enemy_roster_index_list
		INY
		BEQ		loc_B0B5
		JSR		sub_174CBD
		SEC
		RTS
loc_B0B5:
		FARX	_bD_s22_se_wait_and_map_music_start
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_rainbow_drop_use:
		JSR		_sleep_30
		FARX	_b6_s1F_item_rainbow_drop_use
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_common_orbs_use:
		FARX	_bC_s26_item_common_orbs_use
		RTS

; item use callbacks. I guess we could compress this table now that we've changed how the calls work (??)
; begins at sacred amulet?  or maybe it's the ring of life.
; TODO - there's something majorly messed up about the naming of the handlers in here. they must be indexed somewhere else
;
_items_use_lib:
		.BYTE	  0
		.WORD	_item_gaias_sword_use
		.BYTE	  0
		.WORD	_item01_use
		.BYTE	  0
		.WORD	_item01_use
		.BYTE	  0
		.WORD	_item01_use
		.BYTE	  0
		.WORD	_item01_use
		.BYTE	  0
		.WORD	_item01_use
		.BYTE	  0
		.WORD	_void_event
		.BYTE	$A5				; $0A5	"<name> puts the <item> on a finger and makes a wish"
		.WORD	_item_wizards_ring_use
		.BYTE	$9B				; $09B	"<name> scatters the <item>"
		.WORD	_item_black_pepper_use
		.BYTE	$C				; $10C
		.WORD	_item_mirror_of_ra_use
		.BYTE	  0
		.WORD	_item0A_float_use
		.BYTE	$56				; $156	; "<name> lights the <item>"
		.WORD	_item_lamp_of_darkness_use
		.BYTE	$60				; $160
		.WORD	_item_staff_of_change_use
		.BYTE	$57				; $157
		.WORD	_item_invisibility_herb_use
		.BYTE	  0
		.WORD	_item_magic_ball_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_thief_key_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_magic_key_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_cmd_spell_open	; _item_final_key_use is the same as "open" spell
		.BYTE	$C				; $10C	; "<name> peers inside the <item>."
		.WORD	_item12_use
		.BYTE	$62				; $162	; "Puts the <item> in the palm of hand"
		.WORD	_item_wakeup_powder_use
		.BYTE	$58				; $158
		.WORD	_item_royal_scroll_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_seed_of_strength_use
		.BYTE	$53
		.WORD	_item_seed_of_agility_use
		.BYTE	$53
		.WORD	_item_seed_of_vitality_use
		.BYTE	$53
		.WORD	_item_seed_of_luck_use
		.BYTE	$53
		.WORD	_item_seed_of_intelligence_use
		.BYTE	$A7				; $0A7	; "<name> peels the <item> and puts it in <her/his> mouth"
		.WORD	_item_acorns_of_life_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_medical_herb_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_antidote_herb_use
		.BYTE	$A9				; $0A9
		.WORD	_item_fairy_water_use
		.BYTE	  0
		.WORD	_item_wing_of_wyvern_use
		.BYTE	$AB				; $0AB	; "<name> grinds up the <item> and gives it to <name>"
		.WORD	_item_leaf_of_the_world_tree
		.BYTE	$AC				; $0AC	; ""
		.WORD	_void_event		; dummied out item
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_locket_of_love_use
		.BYTE	$53				; $153	; "<name> uses the <item>"
		.WORD	_item_full_moon_herb_use
		.BYTE	$5B
		.WORD	_item_water_blaster_use
		.BYTE	$5C
		.WORD	_item_thigh_bone_use
		.BYTE	$59				; $159 "<name> blows the <item>."
		.WORD	_item_echoing_flute_use
		.BYTE	$59				; $159 "<name> blows the <item>."
		.WORD	_item_fairy_flute_use
		.BYTE	$AF				; $0AF
		.WORD	_item_silver_harp_use
		.BYTE	$5F				; $15F "<name> raises the <item> to the skies"
		.WORD	_item_rainbow_drop_use
		.BYTE	$C7				; $0C7 "<name> gives the <item> as an offering"
		.WORD	_item_common_orbs_use

; =============== S U B	R O U T	I N E =======================================
sub_B143:
		LDA		byte_48
		AND		#$7F
		STA		_msg_directobject_param
		LDA		byte_45
		STA		byte_CE
		STA		byte_D2
		LDA		byte_46
		STA		byte_CF
		JSR		_b0_s28_player_inventory_item_get
		LDA		word_4+1
		BMI		loc_B166
		STA		byte_42
		LDA		byte_45
		FARX	_b4_s1F
		MSGX	_msg_m00,$09F	; "<name> puts the <item> on."
		SEC
		RTS
loc_B166:
		MSGX	_msg_m00,$163	; "<name> has already put the <item> on."
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_wizards_ring_use:
		LDA		byte_45
		STA		byte_CE
		LDA		#$19
		FARX	_b4_sF_rand_mul_A
		ADC		#$A
		STA		byte_CF
		LDA		#0
		STA		byte_D0
		JSR		_b0_s8_player_MP_add
		JSR		_wndMINMAX_STAT_pal_adjust
		JSR		_rand
		CMP		#$19
		BCS		loc_B196
		LDA		#$4E
		FARX	_b4_s20
		JSR		_b0_s2A_player_inventory_item_remove
		LDA		#$A6	; "The Ring silently crumbles into pieces"
		JSR		_msg005_msg0xx
loc_B196:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_seed_of_strength_use:
		LDX		byte_45				; player's index temp storage
		LDA		_players_STR,X
		JSR		_item_seeds_use_common
		STA		_players_STR,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_seed_of_agility_use:
		LDX		byte_45
		LDA		_players_AGI,X
		JSR		_item_seeds_use_common
		STA		_players_AGI,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_seed_of_intelligence_use:
		LDX		byte_45
		LDA		_players_INT,X
		JSR		_item_seeds_use_common
		STA		_players_INT,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_seed_of_luck_use:
		LDX		byte_45
		LDA		_players_LUCK,X
		JSR		_item_seeds_use_common
		STA		_players_LUCK,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_seed_of_vitality_use:
		LDX		byte_45
		LDA		_players_VIT,X
		JSR		_item_seeds_use_common
		STA		_players_VIT,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; prints a number points added to the particular parameter while
; using the sees items
;
_item_seeds_use_common:
		PHA									; stash the stat we came in here with
		JSR		_rand
		AND		#1							; makes the random number tiny, 1 or 2
		ADC		#1
		JSR		_write_u8_to_u24_msg_number_parameter_F8	; prepare it for printing
		PLA									; unstash the stat we came in here with
		CLC
		ADC		_msg_number_parameter_F8	; add bonus to stat (sneakily we pull it out of the spot we just saved it for printing)
		PHA									; push sum
		LDA		byte_48
		CLC
		ADC		#$41						; "parameter goes up" messages based on item type
		JSR		_msg005_msg0xx
		PLA									; pop sum
		LDX		byte_45						; restore player's index
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_acorns_of_life_use:
		JSR		_rand
		AND		#3
		CLC
		ADC		#2
		STA		word_4
		LDA		byte_45
		ASL
		TAX
		CLC
		LDA		_players_MHP,X
		ADC		word_4
		STA		_players_MHP,X
		BCC		loc_B212
		INC		_players_MHP+1,X
loc_B212:
		LDA		word_4
		JSR		_write_u8_to_u24_msg_number_parameter_F8
		LDA		#$A8
		JSR		_msg005_msg0xx
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_medical_herb_use:
		JSR		_common_item_use_param_load
		MSGX	_msg_m00,$005	; "$FD, $EF"
		LDA		#$F
		FARX	_b4_sF_rand_mul_A
		ADC		#$23
		STA		word_4
		LDA		#0
		STA		word_4+1
		JMP		_spell_heal_ex

; =============== S U B	R O U T	I N E =======================================
_item_antidote_herb_use:
		JSR		_common_item_use_param_load
		MSGX	_msg_m00,$005	; "$FD, $EF"
		JSR		_cmd_spell_antidote
		BCC		_msg_nothing_happens_sec
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_fairy_water_use:
		LDA		#$7F
		STA		_repel_or_fairy_water_timer
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_leaf_of_the_world_tree:
		JSR		_common_item_use_param_load
		LDA		#$21
		STA		byte_49
		MSGX	_msg_m00,$005	; "$FD, $EF"
		JSR		_cmd_spell_revive
		BCC		_msg_nothing_happens_sec
		RTS

; =============== S U B	R O U T	I N E =======================================
_item_full_moon_herb_use:
		JSR		_common_item_use_param_load
		MSGX	_msg_m00,$005	; "$FD, $EF"
		JSR		_cmd_spell_numboff
		BCC		_msg_nothing_happens_sec
		RTS

; =============== S U B	R O U T	I N E =======================================
_msg_nothing_happens_sec:
		MSGX	_msg_m00,$040	; "But nothing happens"
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; BLACK PEPPER item should only make all non death players to sneeze if
; used with item use menu. 
; Slightly weird logic to create line breaks between each player sneeze.
;
_item_black_pepper_use:
		JSR		_b0_s33_count_non_dead_party_chars
		LDA		word_4
		STA		byte_55
		LDX		#0
loc_B272:
		TXA
		PHA
		STA		byte_D2
		ASL
		TAX
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_B28C ; branch for dead player
		MSGX	_msg_m00,$09C	; "<name><b> sneezes"
		DEC		byte_55
		BEQ		loc_B28C ; if we're done
		MSGX	_msg_m00,$005	; "$FD, $EF"
loc_B28C:
		PLA
		TAX
		INX
		CPX		#4
		BNE		loc_B272
		JSR		_pause_or_skip
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_player_set_numb_status:
		LDA		byte_45
		STA		byte_D2
		ASL
		TAX
		LDA		_players_status+1,X			; set NM flag
		ORA		#$40
		STA		_players_status+1,X
		LDA		#$A
		JSR		_msg005_msg0xx	; "<name> is numb and unable to move"
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
; sets the text parameter u24AttackDisplayDamage=A
_write_u8_to_u24_msg_number_parameter_F8:
		STA		_msg_number_parameter_F8
		LDA		#0
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		RTS

; =============== S U B	R O U T	I N E =======================================
_common_item_use_param_load:
		LDA		byte_47
		STA		byte_50
		STA		byte_CE
		STA		byte_D2
		LDA		byte_45
		STA		byte_53
		RTS

; struct EnemyInfo
;	{
;		u8 level; //0
;		u16 xp; //1
;		u8 agility; //3
;		u8 gold_lsb; //4
;		u8 atk_lsb //5
;		u8 def_lsb; //6
;		u8 hp_lsb; //7
;		u8 mp; //8 no MSB here. 255 will mean infinite
;		u8 item_dropped; //9
;		u8 moveset[8]; //$A
;		union {
;			struct { //only bottom 2 bits used for all these
;				u8 gold_msb; //$12
;				u8 atk_msb; //$13
;				u8 def_msb; //$14
;				u8 hp_msb; //$15
;			};
;			struct { // only top 6 bits used for all these
;				u8 protections; //$12
;					BFI?DNxx - not all bits known
;						B - Blaze protection
;						F - Fire protection
;						I - Ice protection
;						D - Defeat protection
;						N - iNfernos protection
;				u8 oddflags[3]; // $13,$14,$15 - unknown meanings
;			};
;		};
;		u8 drop_odds;	//$16 presumably, a value a random byte roll has to exceed, but thats just a wild guess.
;						//note the $B4 odds of dropping a $B0 item (wayfarer's clothes) for enemy $12...
;						// ENEMY_GAS_CLOUDS ? well, that seems unlikely.
; }
; one day I'd like to work out a procedure for building these from a text file. maybe a small lua or c# script
; that can run and convert an input configuration file to a .bin for INCBIN at this point.
; it might also be nice to reprogram the table to be less dumb, that would be good practice programming. could
; move it to a spare bank
_b0_d43_enemies_lib:
;           0 | 1   2 | 3 | 4 | 5 | 6 | 7 | 8 |0  |A    B   C   D   E   F 10   11| 12| 13|14 |15 |16
;		        LV|XP     |AGI| GP|ATK|DEF| HP| MP|ITM|            MOVES             |  A|  B|  C|  D|ODDS
		.BYTE	  1,  4,  0,  4,  2,  9,  5,  8,  0,$E5,$82,  2,$82,  2,  7,  2,  7,  2,  0,  0,$30,$30,$16 ; slime
		.BYTE	  1,  5,  0,  6,  2, $A,  6,  9,  0,$E5,$82,  2,  2,  2,  2,  2,  2,  2,  0,  0,$30,$30,$25 ; black raven
		.BYTE	  2,  7,  0,  5,  2, $C,  8, $A,  0,$E5,$82,  7,  2,  2,  2,  7,  2,  2,  0,  0,$30,$30,$22 ; pretty good drop odds, lets check it: that's a horned rabbit with 1/16 odds of dropping a medical herb
		.BYTE	  3,  8,  0,  6,  3, $D,  8, $D,  0,$C5,$82,  2,$82,  2,  2,  2,  2,  2,  0,  0,$70,$30,$24
		.BYTE	$43,  6,  0,  8,  4, $B,  7, $C, $C,$68,  2,$82,$82,  2,$26,  2,$26,  2,  0,  0,$40,$10,$14
		.BYTE	$43, $B,  0,  7,  3, $E,  8, $F,  0,$65,  2,  2,  1,$82,  2,  2,  2,  2,  0,  0,$30,$30,$22
		.BYTE	  4, $C,  0, $C,  6,$10,  9, $A,  0,$E6,$87,  2,  5,  2,  7,  5,  2,  2,  0,  0,$B0,$30,$12
		.BYTE	  4, $D,  0, $D, $A, $B, $F,$17, $A,$67,$13,$93,$82,  7,$13,$13,$13,$13,  0,  0,  0,  4,$34
		.BYTE	  4,  8,  0, $A,  4,$12, $B, $C,  0,$E2,$82,  2,  2,  8,  2,  8,  2,  8,  0,  0,$30,$30,$15
		.BYTE	  4,$15,  0,$14,  5, $E, $A,$1E,$FF,$5F,  2,$36,$36,  2,$36,$36,$36,$36,$A4,$10,$B0,$24,$35
		.BYTE	  4, $C,  0, $A,  7,$14,  9,$11,  0,$65,$82,  2,$82,  7,  2,  2,  2,  2,  0,  0,$74,$34,$2A
		.BYTE	  4, $E,  0,  9,  8,$13, $C,$14,$14,$C5,  7,  2,$87,  2,  2,$22,  2,$22,  0,  0,$40,$24,$64
		.BYTE	  5,$14,  0, $C,  9,$18, $C,$19,  0,$E6,  7,  5,$82,  2,  5,  2,  2,  5,  0,  0,$70,$70,$22
		.BYTE	  6,$1F,  0, $B, $C,$1B,$19,$28,$19,$65,$AD,$2D,  2,  2,  2,  2,$2D,  2,  0,  0,  0,$10,$32
		.BYTE	  6,$1D,  0, $F, $D,$1E,$18,$1C,$1E,$83,  2,$82,$23,  2,  2,  2,$23,  2,  0,  0,$54,$50,$14
		.BYTE	  7,$1D,  0, $B, $F,$1C,  4,$32,$1E,$E4,  2,$82,  2,$29,  2,$29,  2,$29,  0,  0,$C0,$10,$15
		.BYTE	$46,$1A,  0, $D, $D,$20, $F,$19,  0,$65,$87,  2,  6,  2,  2,  2,  6,  6,$40,  0,$70,$30,$72
		.BYTE	  8,$23,  0, $C, $C,$20,$3C,$1C,  0,$B0,$82,  8,  2,$82,  8,  2,  8,  2,  0,  0,$70,$74,$B4
		.BYTE	$48,$23,  0,$1C, $E,$16, $E,$19,$12,$E1,  2,$82,$93,$13,  2,$13,$13,$13,  0,  0,$C0,$C0,$75
		.BYTE	  9,$27,  0,  8,$12,$1E, $C,$18,  0,$E7,  2,  7,  2,$10,  2,$10,  2,  2,  0,  0,$74,$BC,$23
		.BYTE	  9,$2F,  0, $E,$14,$28,$10,$23,  0,$66,$87,  2,$11,  2,  2,  2,  2,$11,$40,  0,$70,$30,$32
		.BYTE	$49,$2D,  0, $E, $F,$24,$12,$19,$14,$E0,$87,  2,  2,  2,$82,$82,  2,  2,  0,  0,$40,$70,$74
		.BYTE	 $A,$35,  0,$10, $E,$2A,$16,$28,  4,$E3,  2,$82,$82,  2,  2,$25,  2,$25,$40,  0,$84,$70,$55
		.BYTE	 $A,$38,  0, $F, $F,$2B,$19,$1E,  0,$E8,$87,  2,$84,  7,  4,$10,  2,$10,$40,  0,$B4,$70,$33
		.BYTE	 $A,$21,  0, $C, $C,$20,$3C,$1C,  0,$B0,$82,  8,  2,$82,  8,  2,  8,  2,  0,  0,$70,$74,$B4
		.BYTE	$4A,$3D,  0,$13,$13,$33,$1C,$23,  9,$62,$96,  2,  2,  2,  2,$16,  2,$16,  0,  0,$40,$24,$74
		.BYTE	$4A,$37,  0,$11, $F,$31,$23,$1A,  4,$88,  7,  2,$88,  5,  2,$26,  2,  2,$40,  0,$40,$10,$B5
		.BYTE	 $B,$44,  0, $A,$1E,$2F,$2D,$37,  0,$82,$83,  2,$BB,  2,  2,  2,$3B,  2,$40,$30,$B0,$7C,$24
		.BYTE	$4B,$41,  0,$16,$14,$30,$31,$23,  4,$2A,  2,$81,  2,$82,  2,  3,  7,$23,$40,$10,$54,$54,$76
		.BYTE	$4B,$46,  0,$12,$17,$31,$25,$26,$1E, $A,$82,  2,$A2,  2,  2,  2,$22,  2,$50,$10,$50,$54,$34
		.BYTE	 $B,$3C,  0,$15,$12,$37,$19,$32,  0,$DF,$83,  8,  2,  2,  2,  2,  8,  2,$20,$10,$74,$B4,$B5
		.BYTE	$CB,  5,  0,$40,$5E, $F,$25,$28,$FF,$E1,  9,$A9,$2E,$82,$23,$26,$31,$31,$FD,$30,$CC,$78,$84
		.BYTE	 $C,$49,  0,$13, $C,$37,$31,$23,  0,$65,  2,  2,  3,  2,  2,  2,  2,  2,  0,$30,$74,$70,$5B
		.BYTE	 $C,$4E,  0,$13,$17,$32,$6E,$28,$1E,$BD,$82,  2,$2E,  2,$2E,  2,  2,  2,$40,$10,$50,$B4,$74
		.BYTE	 $D,$52,  0,$1D,$19,$37,$2F,$23, $A,$E2,$82,  2,$9C,  2,  2,$1C,$1C,$1C,$54,$10,$94,$68,$B4
		.BYTE	 $D,$48,  0,$14,$23,$2D,$29,$2D,  0,$E3,$82, $A,$82,  7,  2, $A,  2, $A,$C0,$10,$B4,$74,$75
		.BYTE	 $D,$52,  0,$14,$24,$3C,$23,$37,$1E,$67,$83,  2,$3D,  2,  2,$3D,$3D,  2,  8,$30,$94,$84,$94
		.BYTE	 $E,$5C,  0,$14,$14,$27,$34,$28, $A,$68,$87,  2,  2,$82,$16,$16,$31,$31,$60,  0,$50,$14,$34
		.BYTE	 $E,$62,  0,$12,$19,$32,$1E,$1E, $A,$A7,$87,  2,  2,$17,$17,  2,$17,$17,$40,$10,$90,  4,$25
		.BYTE	 $E,$5F,  0,$14, $F,$43,$2D,$2A,  5,$E4,  8,$82,  2,$26,  2,  2,  2,$26,  0,$10,$50,$54,$15
		.BYTE	$10,$80,  0,$19,$20,$3C,$2E,$2A, $A,$F3,  2,$87,$A6,$28,  2,  2,$28,$26,$40,$10,$64,$68,$35
		.BYTE	 $F,$69,  0,$18,$1C,$32,$3C,$25,  0,$E2, $A,  2, $A, $A,  2, $A,  2, $A,$C0,$10,$74,$34,$75
		.BYTE	 $F,$6E,  0, $A,$19,$45,$2D,$32,  0,  4,  2,  7,  2,  2,  2,  2,  2,  2,$40,$10,$B4,$74,$36
		.BYTE	 $E,$16,  1,$12,$26,$2D,$32,$32,$FF,$E1,$38,  2,$38,  2,$38,  2,$38,  2,$54,$10,$54,$34,$75
		.BYTE	$11,$A2,  0,$1C,$2D,$41,$31,$3C, $C,$38,  7,$82,$87,  2,$17,  2,$17,  2,  0,$10,$54,$48,$35
		.BYTE	$50,$87,  0,$14,$19,$3F,$32,$23,  0,$AA,  7,$89,  2,  8,  7,  2,  8,  9,  0,$10,$74,$74,$15
		.BYTE	$1E,$72,  6,$3A,$55,$63,$55,$5F,$FF,$E9,$33,$8B,$1B,$23,$22,$28,$14,$1B,$A4,$60,$A4,$1C,$95
		.BYTE	$12,$AA,  0,$1A,$23,$4B,$34,$28,  6,$E8,  2,$88,$82,  2,  2,  8,  2,  2,$40,$10,$94,$A0,$34
		.BYTE	$13,$DC,  0,$1E,$47,$3C,$3C,$3C, $C,  9,$82,  2,$82,  2,$18,  2,$18,  2,  0,  0,$90,$80,$35
		.BYTE	$17,$2C,$10,$2F,  5,$28,$FF,  4, $C,$60,  2,  7,$13,  7,  2,$13,  7,$13,$FC,$FC,$FF,$F4,$F3
		.BYTE	$15,$29,  1,$19,$2D,$40,$2D,$46,  3,$5F,  2,$82,$87,  2,  2,  2,  2,$29,$40,$10,$40,$44,$74
		.BYTE	$11,$96,  0,$18,$14,$44,$37,$2D,  0,$88,$82,  3,  2,  2,  3,  2,  2,  2,  0,$10,$74,$74,$34
		.BYTE	$13,$64,  0,$17,$19,$37,$21,$46,  0,$ED,  7, $D,$19,$20,$20,$19,$21, $D,$A4,$20,$C0,$30,$36
		.BYTE	$16,$57,  1,$38,$30,$35,$2B,$50,$16,$F3,$80,$28,$80,$B2,$80,$A8,  0,  2,$54,$20,$A8,$A8,$73
		.BYTE	$59,$89,  0,$43,$19,$C8,$37,$78,  0,  0,  3,$10,  2,  2,  2,  2,  2,$10,$94,$60,$B4,$B4,$77
		.BYTE	$18,$78,  1,$20,$35,$4B,$32,$78,  6, $C,$A3,  7,$A3,  2,  2,$23,  3,  2,$50,$10,$54,$54,$75
		.BYTE	$12,$AF,  0,$18,$1E,$32,$2B,$2B,  0,$63,  2,  2,  2,  2,$82,$82,  2,  2,  0,$10,$74,$70,$74
		.BYTE	$13,$D2,  0,$23,$12,$17,$C8,$14, $F,  0,$87,$3B,$96,$3B,$16,$3B,$22,$16,$FC,$D0,$D8,$3C,$13
		.BYTE	$19,$20,  3,$28,$B4,$50,$3C,$50,  0,$64, $B,  2, $B,  2,  2, $B,  2, $B,$C0,$10,$B4,$78,  4
		.BYTE	$14,$EB,  0,$1C,$2A,$4F,$43,$3A, $C,$B0,$82,$23,  2,$82,  2,$23,  2,$32,$40,$10,$A4,$A4,$14
		.BYTE	$15,$31,  1,$1E,$34,$33,$32,$36,$18,$56,$82,$18,$18,$32,$32,  2,  2,$18,$80,$10,$94,$68,$36
		.BYTE	$14,$E4,  0,$1D,$25,$34,$3A,$37,  8,$60,$25,$82,$A5,$82,$A5,$82,$25,  2,$40,$10,$54,$90,$32
		.BYTE	$15,$3B,  1,$17,$2F,$50,$64,$3C,  0,$24,  3,  2,  3,  2,  2,  2,  3,  2,$80,$10,$74,$74,$34
		.BYTE	$12,$C5,  0,$1C,$23,$2F,$64,$26,  4,$68,$2E,$82,$2E,  2,  7,$2E,  2,$2E,$64,$10,$54,$54,$74
		.BYTE	$12,$B4,  0,$23,$26,$37,$32,$28,  0,$EC,$88,  2,  6,  2,  8,  6,  2,  6,$54,$50,$70,$78,$74
		.BYTE	$14,$F0,  0,$1E,$26,$41,$2D,$36,  5,$5F,$A5,$25,  2,  2,  2,  2,$25,  2,$60,$20,$94,$54,$35
		.BYTE	$16,$63,  1,$20,$46,$55,$28,$87,  0,$64,  2,  2,  2,  2,  2,  2,  2,  2,$20,$10,$70,$B4,$35
		.BYTE	$15,$22,  1,$19,$2D,$44,$96,$32,  0,$33,  3,  2,  2,  2,  2,  3,  2,  2,$10,$10,$70,$74,$35
		.BYTE	$15,  7,  1,$20,$33,$48,$32,$3C, $C,$C5,$96,  2,$82,$16,  2,$16,  2,$32,$60,$20,$94,$54,$36
		.BYTE	$17,$6F,  1,$21,$3D,$45,$3C,$64,$1C,$A7,$82,  2,$2A,  2,$2A,  2,$2A,  2,$40,$10,$60,$54,$36
		.BYTE	$17,$B8,  1,$1E,$37,$55,$28,$5A,  0,$5F,  2,  2,  2,  2,  2,  2,  2,  2,  0,$10,$74,$F8,$34
		.BYTE	$10,$78,  0,$14, $F,$43,$10,$62,  0,$20,  0,  2,  2,  2,  2,  1,  2,  2,  0,$10,$F4,$FC,$1C
		.BYTE	$17,$61,  1,$18,$3A,$4B,$37,$4B,  0,$67,  2,  2,$10,  2,  2,$10,$10,  2,$50,$10,$70,$74,$34
		.BYTE	$12,$A5,  0,$1E,$23,$3E, $A,$28,  0,$EC,  6,  2,  6,  2,  2,  6,  2,  6,$40,  0,$70,$70,$33
		.BYTE	$17,$70,  1,$17,$19,$41,$32,$50,  0,$66,$81,$3F,  5,$11,  5,$11,  2,  5,  0,$10,$F4,$78,$5C
		.BYTE	$17,$74,  1,$21,$20,$3C,$34,$3C,$10,$4C,$82,$1C,  2,  2,$9C,  2,  2,$1C,  4,$10,$54,$40,$37
		.BYTE	$19,$A2,  1,$23,$50,$5C,$96,$46,  5,$25,  2,$A5,$82,  2,$25,  2,$25,  2,$84,$10,$98,$54,$75
		.BYTE	$20,$AC,  3,$3A,$2A,$78,$37,$73,  0,$85,$82,  3,  8,  2,  2,  2,  3,  2,$54,$10,$B0,$B4,$76
		.BYTE	$18,$A1,  1,$12,$33,$51,$28,$3C,  0,$69,  2, $B, $B,  2,  2,  2, $A,  2,$C4,$10,$70,$74,$75
		.BYTE	$16,$66,  1,$25,$28,$41,$34,$5D,$12,$E2,  7,$82,  2,$82,  2,$3D,$3D,$37,$54,$20,$54,$A4,$73
		.BYTE	 $C,$CF,  1,$55,$3F,$41,$32,$46,$64,$D6,$18,$B2,$AA,$B2,$18,$32,$2A,  7,$A0,$20,$54,$64,$74
		.BYTE	$1E,$E7,  2,$32,$1F,$3F,$41,$46,$12,$8A,$82,$1A,  2,$1A,  2,  2,$1A,  2,$54,$60,$94,$94,$25
		.BYTE	$18,$95,  1,$17,$36,$55,$36,$8C,  0,$41, $D,  2, $D,  2,  2, $D,$10, $D,$34,$20,$B4,$74,$75
		.BYTE	$26,$F4,  6,$44,$4B,$78,$46,$50,  0,$E8,  3,  2, $B,  2, $B,  2, $A,  2,$40,$20,$74,$74,$74
		.BYTE	$19,$B0,  1,$28,$44,$55,$3A,$5F,  0,$E4,$BE,  2,$BE,  2,  2,$3E,  2,  2,$50,$10,$74,$74,$74
		.BYTE	$1D,$8C,  2,$19,$58,$59,$C8,$44,  0,$40,$82,  2,  2,$10,$10,  2,$10,  2,$A8,$50,$78,$B8,$74
		.BYTE	$20,$D4,  3,$3C,$55,$58,$28,$5A,$14,$94,$39,  7,$80,$B9,$87,$80,$39,  7,$54,$60,$50,$14,$36
		.BYTE	$1A,$94,  2,  0,$69,  0,  0,$F4,  4,$55,$80,  0,  0,$80,$80,$A1,$21,$21,  0,$30,$F0,$3D,$E5
		.BYTE	$1B, $B,  2,$21,$37,$8C,$5A,$6E,  0,$5F,  2,  2,  3,  2,  2,  2,  2,  2,$60,$10,$74,$74,$74
		.BYTE	$1D,$A1,  2,$43,$5F,$44,$3C,$78,$14,$E9,$87,$27,$3D,$B7,$27,$2F,$32,$2F,$68,$20,$A4,$14,$66
		.BYTE	$E4,$8C,  5,$5A,$78,$71,$C8,$78, $F,$E2,  2,$82,  2,$8B,$2E, $B,  2,$2C,$A8,$A4,$60,$68,$74
		.BYTE	$19,$B8,  1,$32,$5A,$53,$3C,$6E,  0,$64, $E,  2, $D,  2,$82, $D,  2, $D,$30,$20,$74,$74,$75
		.BYTE	$21,  6,  4,$2A,$69,$9B,$20,$FA,  0,  1,  3,  2,  2,  2,  2,  2,  3,  2,  0,$20,$70,$74,$24
		.BYTE	$21,$2E,  4,$33,$44,$48,$2F,$50,$12,$94,$8D,  2,  2, $D, $D,$1A,$1A,$1A,$34,$10,$64,$14,$35
		.BYTE	$D0, $A,  0,$46,$FF,$39,$64,$32,$FF,$A3,$26,$82,$A5,$A9,$28,$89,  0,  7,$FF,$FC,$FC,$FC,$F6
		.BYTE	$1C,$4B,  2,$37,$45,$55,$2D,$50,$18,$C2,$8D,$14,$82,$14, $D,  2,$14,$14,$40,$20,$A4,$58,$75
		.BYTE	$23,  0,  5,$24,$64,$61, $F,$C8,  0,$2B,  2,  2,  2,  2,$82,  2,  2,  2,$10,$10,$70,$74,$75
		.BYTE	$1F,$4B,  3,$4B,$3A,$5F,$3A,$4B,$12,$86,$A5,  2,$A5,$82,$A5,$82,$25,  2,$54,$60,$54,$A8,$15
		.BYTE	$62,$DF,  2,$64,$2A,$5E,$4E,$F0, $A,$8F,$82,  2,$27,$A7,$A7,$A2,$14,$20,$A4,$20,$B4,$4C,$A6
		.BYTE	$22,$A6,  4,$3A,$49,$73,$3F,$82,  0,$8E,$82,  2,$12,  2,$82,$92,  2,  2,$54,$60,$B0,$78,$56
		.BYTE	$22,$10,  4,$3B,$2A,$43,$2F,$55,$14,$D5,  2,$1F,  2,$20,  2,$1F,  2,$20,$B4,$70,$94,$54,$56
		.BYTE	$3F,$68,$1F,$32,$C8,$78,$44,$2C, $C,$1D,$8B,  2,$8B,  2,$82,$8B,$82,$8B,$C0,$3C,$74,$7D,$F0 ; orichi: note the 0 drop odds (100% of time)
		.BYTE	$25,$F4,  6,$1D,$3E,$8C,$28,$C3,  0,$34,  3,  2,  2,  2,  2,  2,  2,$82,$94,$64,$74,$B8,$35
		.BYTE	$2A,$70,$17,$46,$B4,$96,$3B,$C8,  0,$5F, $C,  2, $C,  2, $C,  2,  2, $C,$80,$20,$B4,$78,$75
		.BYTE	$3F,  8,  0,  7,  2,$12,  6,  6,  0,$65,  2,  2,  7,  2,  7,  2,  7,  2,  0,  0,  0,  0,$34
		.BYTE	$23,$D0,  2,$3B,$4E,$5A,$4B,$46,  0,$89,  2,$88,  2,$88,  2,  8,  8,$3C,$14,$10,$74,$74,$7C
		.BYTE	$26,$AE,  6,$50,$43,$69,$3C,$82,$1E,$55,$82,  2,$1F,  2,$10,$10,$1F,$1F,$74,$20,$C4,$6C,$A4
		.BYTE	$26,$8A,  7,$48,$69,$50,$3C,$96,$FF,$F3,$87,  2, $A,$89,$2E,$14,$3D,$33,$94,$20,$64,$64,$74
		.BYTE	$58,  8,$9D,$96, $A,$37,$FF,  6,$FF,$C9,  7,  2,  7,$17,  7,  7,$17,  7,$FC,$FC,$FF,$FC,$F4
		.BYTE	$24,$F6,  4,$2D,$30,$5F, $A,$AA,  5,$27,$82,$3F,$26,  2,  2,$3F,$26,  2,  0,$20,$D0,$F8,$56
		.BYTE	$23,$46,  5,$2F,$58,$78,$50,$73,$1E,$BC,  2,$A3,$82,$18,  2,$23,  2,$18,$94,$24,$94,$A8,$76
		.BYTE	$26,$C4,  9,$50,$69,$B4,$3C,$40, $C, $D,$82,  2,$83,$82,  2,  3,$82,$82,$80,$30,$98,$A9,$F6
		.BYTE	$28,$86,  1,$3C,$FF,$A5,$32,$D2,  0,$4A,  2,  2,  7,  2,  7,  2,  2,  2,$3F,$F0,$74,$74,$36
		.BYTE	$27,$2E,  9,$3E,$3A,$82,$41,$C8,  0,$DF,$82,  2,$82,  2, $E, $D,$8D, $E,$34,$20,$74,$74,$65
		.BYTE	$24,$36,  6,$48,$5A,$7D,$55,$78, $C,$B2,  2,$BE,  2,$1A,  2,$3E,  2,$1A,$64,$20,$90,$18,$74
		.BYTE	$26,$2A,  8,$34,$A0,$96, $A,$C2,  0,$64,$83,  7,$82,  2,  2,$82,  2,  2,$60,$10,$70,$75,$75
		.BYTE	$27,$20,  8,$3A,$82,$9B,$46,$96,  0,$E0,$83,  7,  7,  2,  3,  2,  2,  2,$44,$10,$74,$B4,$74
		.BYTE	$2B,$C4,  9,$23,$96,$C8,$5A,$5E,  0, $D,  2,  2,  2,  2,$83,  3,  2,  2,$18,$20,$74,$75,$74
		.BYTE	$2A,$DC, $A,$46,$5A,$8B,$50,$8C,$18,$BC,$82,  2,$9B,$38,  2,  2,$1B,$38,$50,$20,$A8,$B8,$B5
		.BYTE	$2B,$22, $B,$4B,$8C,$50,$96,$82,$64,$92, $D,$82,$19,$99,$30,$30,$30,$30,$A0,$20,$E4,$54,$B5
		.BYTE	$5E,$C0,  8,$96,$7D,$69,$50,$64,$35,$41,$87,$2C,$A8,$28,$28,$33,$33,$33,$94,$20,$90,$18,$74
		.BYTE	$29,$BA,  9,$3A,$5A,$73,$50,$7D,$30,$96,$87,  2,$82,  2,$95,  2,$15,$39,$74,$20,$94,$24,$E6
		.BYTE	$29,$12, $C,$4C,$4B,$89,$78,$96,  0,$69, $B, $B, $B,  2,$82,$82,  2, $B,$88,$30,$B8,$7C,$B6
		.BYTE	$29,$EA, $B,$43,$78,$87,$4E,$FA,$1B, $D,$2A,$82,$AA,  2,  2,$2A,  2,$82,$54,$60,$54,$68,$75
		.BYTE	$2A,$28, $A,$3E,$6B,$8C,$4B,$78,  0,$61, $B,$BE, $B,  2,$3E, $B,  2, $B,$94,$10,$F4,$74,$74
		.BYTE	$2B,$C6, $C,$37,$50,$64,$39,$5D,$15,$C1,$82,$20,  2,$20,  2,$20,  2,$20,$68,$38,$94,$78,$65
		.BYTE	$2C,$AC, $D,$2B,$35,$AA,$2D,$5E,  0,$DF, $D,  2, $E, $E,  2,  2, $E, $E,$38,$74,$B0,$79,$55
		.BYTE	$2C,$F4, $B,$4E,$78,$91,$3C,$A0,$32,$BC,$1E,$82,$95,$2C,$1E,  2,$15,$2C,$20,$24,$50,$18,$75
		.BYTE	$2D,$6C, $C,$63,$43,$9E,$48,$AA,$1F,$8E,  3,$82,$82,  2,$82,$82,$32,$32,$68,$68,$A4,$98,$55
		.BYTE	$2E,$1C,$25,$32,$5E,$F0,$32,$26,  0,$35,  2,  2,  2,  2,$8B,$82,$8B,$8B,$D1,$3C,$B4,$FE,$F5
		.BYTE	$3F,$A8,$2F,$48,$C2,$D2,$C8,$C2,$FF,$BC, $C,$99,  2,$19, $C,$99,  2,$99,$55,$7C,$E4,$7D,$F6
		.BYTE	$3F,$DC,$37,  0, $F,$68,  0,$84,  0,$93,  2,  2,  2,  2,  2,  2,  2,$82,  0,$3D,$FC,$BF,$F6
		.BYTE	$3F,$FF,$FF,$55,  0,$DC,$64,$84,$FF,$4B,$19,$82,$8C,$95,$AA,$82,$99,$A8,$94,$3C,$A4,$7F,$F7 ; meteorite armband!!
		.BYTE	$3F,  0,  0,$FF,  0,$26,$2C,$FF,$FF,$41, $F,$9B,$8F,$82,$AB,$8F,$AC,$8F,$B8,$7E,$F1,$3F,$F7 ; mysterious hat!!
		.BYTE	$3F,  0,  0,$50,  0,$40,$C8,$FF,$FF,$41,$9B, $E,  2,  2,$82,$AB,$8F,$AB,$FC,$3D,$F0,$FF,$F7 ; mysterious hat!!
		.BYTE	$3F,  0,  0,$64,  0,$E6,$DC,$90,$1B,  0,$9E,  2,$22,$82,  2,$33,$33,$33,$3C,$FC,$FC,$FD,$F7 ; cypress stick!
		.BYTE	$7F,$98,  8,$13,  0,$41,$2A,$96,  0,  0,  2,  1,  2,  2,  3,  2,  2,  2,$50,$3C,$74,$7C,$F7 ; cypress stick! (checks out on wikis)
		.BYTE	$3F,$C0,$12,$23,  0,$59,$28,$90,  0,  0,$82,  3,  2,$82,  2,  2,  2,$82,$50,$3C,$F4,$FD,$F7 ; cypress stick! (checks out on wikis)
		.BYTE	$3F,$50,  0,$14,  0,$37,$1F,$3C,  0,$80,  2,  2,  2,  2,  2,  2,  2,  2,$40,$3C,$74,$7C,$F7 ; (equipped?) cypress stick! (checks out on wikis)

; =============== S U B	R O U T	I N E =======================================
_b0_s65_ram_clear_game_vars_init:
		LDA		#0
		STA		byte_0
		STA		byte_1
		TAY
loc_BF57:
		STA		(byte_0),Y
		INY
		BNE		loc_BF57
		INC		byte_1
		LDX		byte_1
		CPX		#7
		BEQ		loc_BF74
		CPX		#1
		BNE		loc_BF57
		INC		byte_1
		BNE		loc_BF57
		LDX		#1
loc_BF6E:
		STA		byte_6A3E,X
		INX
		BNE		loc_BF6E
loc_BF74:
		LDA		#$90
		STA		_ppu_ctrl_shadow
		LDA		#$18
		STA		_ppu_mask_shadow
		LDA		#$E
		STA		_cur_mmc_cmd
		LDA		#0
		STA		_cur_chr0_bank_prg_hi
		LDA		#$AC
		STA		_playerWorldX
		LDA		#$DB
		STA		_playerWorldY
		LDA		#$30
		STA		_current_pc_status_pal_value
		LDA		#$FF
		STA		_playerShipX
		STA		_playerShipY
		LDX		#0
loc_BF9D:
		STA		_players_pos_list,X
		INX
		CPX		#$80
		BNE		loc_BF9D

; =============== S U B	R O U T	I N E =======================================
_b0_s66_byte_6D40_clear:
		LDA		#$FF
		LDX		#0
loc_BFA9:
		STA		byte_6D40,X
		INX
		CPX		#$A0
		BNE		loc_BFA9
		RTS

		ECHO "bank 00 free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB