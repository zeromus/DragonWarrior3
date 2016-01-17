
		ORG $8000

		PTR_IDX		_bD_s2
		PTR_IDX		_bD_s3
		PTR_IDX		_bD_s4
		PTR_IDX		_bD_s5
		PTR_IDX		_bD_s6
		PTR_IDX		_bD_s7
		PTR_IDX		_bD_s9
		PTR_IDX		_bD_sA
		PTR_IDX		_bD_sB_get_hero_and_its_gender_and_status
		PTR_IDX		_bD_sC
		PTR_IDX		_bD_sD
		PTR_IDX		_bD_sE
		PTR_IDX		_bD_s10
		PTR_IDX		_bD_s11
		PTR_IDX		_bD_s12
		PTR_IDX		_bD_s13
		PTR_IDX		_bD_s14
		PTR_IDX		_bD_s15
		PTR_IDX		_bD_s16_general_speak_with_npc
		PTR_IDX		_bD_s17_search_vault_for_item
		PTR_IDX		_bD_s18
		PTR_IDX		_bD_s19
		PTR_IDX		_bD_s1A
		PTR_IDX		_bD_s1B
		PTR_IDX		_bD_s1C
		PTR_IDX		_bD_s1D
		PTR_IDX		_bD_s1E
		PTR_IDX		_bD_s1F_get_vault_items_count
		PTR_IDX		_bD_s20_npc_hndl31
		PTR_IDX		_bD_s21
		PTR_IDX		_bD_s22_se_wait_and_map_music_start
		PTR_IDX		_bD_s23
		PTR_IDX		_bD_s24
		PTR_IDX		_bD_s26_get_first_live_player_with_no_NM_status
		PTR_IDX		_bD_s27_give_item_to_player_msg1
		PTR_IDX		_bD_s28_frame_palette_by_status_adjust
		PTR_IDX		_bD_s29

; =============== S U B	R O U T	I N E =======================================
_bD_s19:
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		LDY		#0
		LDA		(word_6C),Y
		STA		byte_80
		INY
		LDA		(word_6C),Y
		STA		byte_81

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_bD_s1A:
		JSR		sub_140192
		JSR		sub_14007C
		JSR		sub_177373
		JMP		sub_17731E

; =============== S U B	R O U T	I N E =======================================
_bD_sA:
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		JSR		sub_14007C
		JSR		sub_177385
		JMP		sub_17732F

; =============== S U B	R O U T	I N E =======================================
sub_14007C:
		LDY		#2
		LDA		(word_6C),Y
		AND		#$F
		JSR		sub_1778D7
		LDY		#3
		LDA		(word_6C),Y
		JSR		sub_177909
		LDY		#3
		LDA		(word_6C),Y
		AND		#$3C
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s1B:
		JSR		_bD_s1E
		JSR		_bD_s1C
		JMP		_bD_s1D

; =============== S U B	R O U T	I N E =======================================
_bD_s1E:
		LDX		byte_2D
		STX		byte_80
		LDY		byte_2E
		STY		byte_81
		LDA		_location_type
		AND		#1
		BNE		loc_1400B2
		JSR		sub_1777B7
		BCC		locret_1400EC
		BCS		loc_1400C8
loc_1400B2:
		JSR		sub_1777C2
		BCC		locret_1400EC
		LDA		_player_vehicle
		CMP		#1
		BNE		loc_1400D6
		LDA		_playerMapX
		STA		byte_80
		LDA		_playerWorldY
		STA		byte_81
		JMP		loc_1400D6
loc_1400C8:
		LDA		_player_vehicle
		CMP		#1
		BNE		loc_1400D6
		LDA		_playerWorldX
		STA		byte_80
		LDA		_playerWorldY
		STA		byte_81
loc_1400D6:
		JSR		sub_140192
		LDA		#4
		JSR		sub_1778D7
		LDA		byte_6BA
		JSR		sub_177909
		JSR		sub_177373
		LDY		#$10
		JSR		sub_17731E
locret_1400EC:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s1C:
		JSR		sub_1772F4
		JMP		sub_1400F6

; =============== S U B	R O U T	I N E =======================================
_bD_s1D:
		JSR		sub_177305

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_1400F6:
		LDA		_location_type
		AND		#2
		BNE		locret_14011C
		STX		byte_80
		STY		byte_81
		JSR		sub_1777B7
		BCC		locret_14011C
		JSR		sub_140192
		LDA		word_3C
		JSR		sub_1778D7
		LDA		word_3E
		AND		#3
		JSR		sub_177909
		JSR		sub_177373
		LDY		word_3C+1
		JSR		sub_17731E
locret_14011C:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s18:
		LDA		byte_AC
		AND		#$1F
		BNE		locret_14011C
		LDA		_players_pos_list+2
		AND		#$F
		JSR		sub_1778D7
		LDA		_players_pos_list+3
		JSR		sub_177909
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
		LDA		byte_14018A
		STA		_spr_ram
		LDA		byte_14018A+1
		STA		_spr_ram+3
		LDA		byte_14018A+2
		STA		_spr_ram+4
		LDA		byte_14018A+3
		STA		_spr_ram+7
		LDA		byte_14018A+4
		STA		_spr_ram+8
		LDA		byte_14018A+5
		STA		_spr_ram+$B
		LDA		byte_14018A+6
		STA		_spr_ram+$C
		LDA		byte_14018A+7
		STA		_spr_ram+$F
		RTS
		
byte_14018A:
		.BYTE	$6F,$80,$6F,$88,$77,$80,$77,$88

; =============== S U B	R O U T	I N E =======================================
sub_140192:
		JSR		sub_1778B5
		JMP		sub_17787B

; CHECK ME! ANY POINTERS HERE?
; this is lists of default npc for every kind and every instance of each location,
; there are maximum $FA locations here from $100 possible se seems we are full here ;)
; data structures are zero-terminated lists starting with location 00 to FF
; every list consists of a set of records, size of record may be 5, 6, 7, 8 or 9
; depending on first byte & 7 value (see loookup table)
;
_bD_d1_location_npc_lists_lib:
_npcl00:.BYTE	$18,$2E,  1,$82,$89
		.BYTE	$18,$1F,  2,$85,$92
		.BYTE	$18,$1D, $A,$8B,$A2
		.BYTE	$18,$52,  6,$9B,$8A
		.BYTE	$78,$2E,$97,$90,$B4
		.BYTE	$BE,$2C,$27,  3,$9C,$69,  4,$25
		.BYTE	$9F, $F,$26,$84,$8D,$8D,$51,$16,$21
		.BYTE	$5F,$1E,$FE,$8A,$9A,$1D,$50,$17,$26
		.BYTE	$90,$23,$2B,  7,$1F
		.BYTE	$90,$16,$2A,$13,$1E
		.BYTE	$50,$1E,$EA,$94,$23
		.BYTE	$90, $F,$2D,$95,$27
		.BYTE	$90,$23,$1C,$9D,$25
		.BYTE	$90,$16,$2C,$9C,$1F
		.BYTE	$90,$2F,$29,$1B,$1A
		.BYTE	$90, $F,$28,$1C, $D
		.BYTE	0
_npcl01:.BYTE	$78,  9,$1C,$8F,$AE
		.BYTE	$78, $B,$1C,$92,$AE
		.BYTE	$18,$16,$17,$97,$A3
		.BYTE	$78,  9,$1D,$8F,$98
		.BYTE	$18,$51,  6,$83,$9B
		.BYTE	$7C, $B,$21,$1D,$1C,$1C,$15
		.BYTE	$FE,$2E,$B5,  9,$9B,$20,$1D,$27
		.BYTE	$9E, $A,$37,$91,$8A,$59,$10, $C
		.BYTE	$FF, $F,$B4, $E,  1, $B,$1E,$1E,$23
		.BYTE	$FF, $F,$B7,$1A,$86,$B5,$1F,$1D,$28
		.BYTE	$FF,$17,$B6, $C,$88,$8F,$AC, $E,  3
		.BYTE	$DF,$36,$B0,$12,$A0, $A,$5A,$11, $C
		.BYTE	$90,$16,$13,$85,$23
		.BYTE	$50,$16,$FB,$89,$23
		.BYTE	$D0, $F,$AF,  5,$27
		.BYTE	$D0,$15,$B1, $F,$28
		.BYTE	$D0,$2C,$B2,$1E,$27
		.BYTE	$D0,  8,$B3,$A0,$2D
		.BYTE	0
_npcl02:.BYTE	$18,$13,$C1,$A0,$A7
		.BYTE	$18, $A,$BF,$8D,$A4
		.BYTE	$18, $A,$C0,$88,$A2
		.BYTE	$18,$1E,$C3, $F,$1B
		.BYTE	$18,$2C,$C2,$9D,$86
		.BYTE	$9A, $A,$A2,$85,$91,$52
		.BYTE	$1C,$17,$C4,$15,$1A,$15,$1B
		.BYTE	$9F,$2D,$A0, $E,$86,$81,$52,$1F,  3
		.BYTE	$9F,$18,$A1,$91,$8F,$99,$C5,$1F,  6
		.BYTE	$90,$35,$A3,$83,$26
		.BYTE	$90,  5,$A4,$13,$20
		.BYTE	0
_npcl03:.BYTE	$18,$4E,  0,$87,$86
		.BYTE	$18,$4E,  0,$8B,$86
		.BYTE	$18,$E0,$B2,$89,$86
		.BYTE	0
_npcl04:.BYTE	$78,$62,$11,$89,$82
		.BYTE	0
_npcl05:.BYTE	0
_npcl06:.BYTE	$18,$1D,$1C,$81,$89
		.BYTE	$98,$16,$CB,$1C,$1F
		.BYTE	$98,$22,$CD,$91,$99
		.BYTE	$18,$50,$EC,$95,$86
		.BYTE	$18,$1C,$ED,$96,$87
		.BYTE	$18,$70,  0,$95,$87
		.BYTE	$18,$14,$EE,$94,$87
		.BYTE	$18,$64,$EF,$95,$88
		.BYTE	$18,$64,$F0,$94,$89
		.BYTE	$18,$34,$F1,$96,$89
		.BYTE	$18,$17,$F2,$9D,$98
		.BYTE	$99,$23,$CC,$18,$23,$21
		.BYTE	0
_npcl07:.BYTE	$98,$1F, $F,$98,$98
		.BYTE	$98, $D,$EE, $E,$13
		.BYTE	$78,$1F,$E0,$8B,$94
		.BYTE	$98, $F,$F0,$9F,$8D
		.BYTE	$18,$53,  6,$98,$83
		.BYTE	$78,$1E,$F6,$85,$86
		.BYTE	$98,$2E,$E8,$89,$88
		.BYTE	$98,$13,$E9, $E,  5
		.BYTE	$98,$36,$EA,$97,$89
		.BYTE	$98,$2C,$EB,$1A,  8
		.BYTE	$98, $F,$ED,$85,$98
		.BYTE	$98,$17,$EC,  7, $F
		.BYTE	$99,$12,$EF,$9E,$81,$10
		.BYTE	0
_npcl08:.BYTE	0
_npcl09:.BYTE	$18,$17,$3C,$8B,$82
		.BYTE	$18,$1E, $B,$88,$90
		.BYTE	$18,$53,  6,$96,$8E
		.BYTE	$18,$76,  0,$97,$97
		.BYTE	$19,$45,$5C,$97,$86,$47
		.BYTE	$5F,$1E,$FF,$85,$84,$89,$52,  3,$10
		.BYTE	$9F,$2C,$47,  3,$8A,$9D,  0,$10,$17
		.BYTE	$90,$11,$45, $A, $D
		.BYTE	$90, $A,$46,$86,$10
		.BYTE	$50,$1C,$EB,$90,$14
		.BYTE	$D0,$17,$C2,$98,$17
		.BYTE	0
_npcl0A:.BYTE	$18,$28,  0,$A3,$1A
		.BYTE	$18,$16,$13,$A3,$8B
		.BYTE	$18,$4A,$99,$84,$BA
		.BYTE	$18,$17,$9C,$A4,$BA
		.BYTE	$78,$2D,$95,$A2,$BA
		.BYTE	$1B,$47,$5C,$A7,$88,$17,$41
		.BYTE	$9F,$22,$81,$1E,$84,$95,$52,$26, $D
		.BYTE	$90,$16,  9,$9E,  8
		.BYTE	$90,$2F,$7F,$21, $C
		.BYTE	$90,$14,$7E,$9E, $D
		.BYTE	$90,$14,$82,$18,$10
		.BYTE	$90,$15,$80,$23,$10
		.BYTE	0
_npcl0B:.BYTE	$18,$1E,$32,  7,  4
		.BYTE	$18,$12,$81,$87,$87
		.BYTE	$18,$20,$83,  4, $E
		.BYTE	$18,$16,$87,$9B,$94
		.BYTE	$18,$15,$82, $C, $D
		.BYTE	$18,$35,$84, $D,  6
		.BYTE	$18,$22,$85,$98,$86
		.BYTE	$18,$2C,$86,$13, $F
		.BYTE	$18,$1D,$11,$8D,$92
		.BYTE	$18,$2D,$3E,$10,$15
		.BYTE	$18,$37,$88, $E,$1B
		.BYTE	0
_npcl0C:.BYTE	$18,$1F,$10,$9A,$97
		.BYTE	$18,$16,$74,$98,$8E
		.BYTE	$18,$51,  6,$82,$8B
		.BYTE	$9A,$24,$65,$85,$9C,$7A
		.BYTE	$9A,$24,$62,$83,$9D,$79
		.BYTE	$9B,$2E,$66,$8D,$9A,$16,$7F
		.BYTE	$9B,$26,$64,$86,$9D,$24,$7B
		.BYTE	$9E,$16,$61,$85,$99,$76,  5,$17
		.BYTE	$9E,$12,$5E,$87,$92,$28, $F,  3
		.BYTE	$9E,  9,$5C,$19,  6,$7D,$12, $B
		.BYTE	$DE,$1E,$CD,$82,$82,$77,  6,$19
		.BYTE	$DF,$1E,$CE,$82,$8F,$89,$7E,$19,$1D
		.BYTE	$5F,$1C,$F0,$98,$8A,$95,$52,$15,$1D
		.BYTE	$BF,$24,$63,$84,$9C,$26,$76, $D,$13
		.BYTE	$9F,$11,$60, $D,$97,$12,$78,  3,$19
		.BYTE	$9F,$16,$5D, $D,$90,$1D,$75,  1,$16
		.BYTE	$9F,$2C,$5F,$13,$14,$26,$80, $E,$1C
		.BYTE	$10,$91,  0,$90,  2
		.BYTE	$90,$1E,  6,$17,  2
		.BYTE	0
_npcl0D:.BYTE	0
_npcl0E:.BYTE	$18,$1C,$14,$91,$87
		.BYTE	$18,$22,  6,$86,$84
		.BYTE	$98, $F,$8C,$99,$91
		.BYTE	$18,$4E,  0,$90,$96
		.BYTE	$18,$4E,  0,$8D,$96
		.BYTE	$18,$64,$A0,$8F,$97
		.BYTE	$18,$15,$9F,$8B,$9A
		.BYTE	$78,$23,$80,$8D,$9A
		.BYTE	$98, $C,$8E,$81,$9B
		.BYTE	$98, $E,$8A,$16,  6
		.BYTE	$98,$2E,$89, $B,  6
		.BYTE	$98,$1E, $A,$8B,$8F
		.BYTE	$98,$1D,$8B,$84,$8F
		.BYTE	$98,$2D,$89,  3, $D
		.BYTE	$98, $D,$88,$85,$94
		.BYTE	$98,$2E,$8F,$8E,$9D
		.BYTE	$98,$16,$90,$90,$9D
		.BYTE	0
_npcl0F:.BYTE	$78,$52,$87,$8E,$8B
		.BYTE	$18,$78,$BC,$87,$94
		.BYTE	$18,  6,$BA,$83,$94
		.BYTE	$18,  6,$BB,$99,$94
		.BYTE	$18,$1F,$1A,$8E,$AF
		.BYTE	$18, $C,$BD, $B,$1C
		.BYTE	$1D, $E,$BE,$8A,$AF,$8D,  9,$30
		.BYTE	$90,$2D,$9C,  6,$2C
		.BYTE	$90,$1E, $D,$8E,$29
		.BYTE	$90, $D,$9F,$14,$28
		.BYTE	$50,$1F,$F3,$98,$29
		.BYTE	$90,$2C,$9D,$19,$30
		.BYTE	$90, $E,$9E,$14,$31
		.BYTE	0
_npcl10:.BYTE	$F8, $B,$1B, $F,  1
		.BYTE	$F8, $B,$1D,$19, $C
		.BYTE	$78,$1E,$E3,$8A,$84
		.BYTE	$18,$95,$52,$9D,$95
		.BYTE	$F8,$22,$1E,$91,$90
		.BYTE	$F8,$22,$1F,$90,$9E
		.BYTE	$F8,$2A,$1C,$8D,$85
		.BYTE	0
_npcl11:.BYTE	$F8,$2E,$28,$AE,$80
		.BYTE	$F8,$15,$2F,$80,$91
		.BYTE	$F8,$23,$2B,$93,$8E
		.BYTE	$F8,$22,$DC,$90,$85
		.BYTE	$78,$1D,$E4,$A0,$95
		.BYTE	$F8,$15,$2D,$90,$98
		.BYTE	$F8, $F,$2E,$22,$1D
		.BYTE	$F8,$20,$25,$98,$89
		.BYTE	$F8,$2C,$26,$9C,$89
		.BYTE	$F8,$35,$27,$20, $C
		.BYTE	$78,$1E,$F9,$A7,$88
		.BYTE	$F8, $F,$29,$27, $B
		.BYTE	$F8,$2E,$2A,$29, $F
		.BYTE	$F8,$16,$DD,$1C,$10
		.BYTE	$F8,$2E,$2C,$14,$17
		.BYTE	0
_npcl12:.BYTE	$18,$45,$5C,$16,$21
		.BYTE	$F8,$2E,$12,$9A,$83
		.BYTE	$F8,$1C,$13,$91,$8A
		.BYTE	$98,$1F,$11,$8B,$81
		.BYTE	$78,$1F,$E2,$93,$8F
		.BYTE	$18,$47,$5C,$18,$25
		.BYTE	$F8,$16,$11,$82,$89
		.BYTE	$F8, $F,$10,  5,  5
		.BYTE	$F8, $D,$1A,$8C,$A2
		.BYTE	$78,$1E,$F8,$89,$89
		.BYTE	$F8, $E,$14,$8A,$8B
		.BYTE	$F8,$2E,$15,  8,$11
		.BYTE	$F8,$2E,$16,$19,$10
		.BYTE	$18,$46,$5C,$1C,$22
		.BYTE	$F8,$21,$18,$82,$A2
		.BYTE	$F8,$2E,$17,  5,$1D
		.BYTE	$F8,$17,$19,$15,$1B
		.BYTE	0
_npcl13:.BYTE	$18,$2E,$E8,$15,$1E
		.BYTE	$18,$1E,$EA,$8C,$8F
		.BYTE	$18,$23,$E9,$9F,$8C
		.BYTE	0
_npcl14:.BYTE	$18,$52,  6,$84,$82
		.BYTE	$18,$22,$5D,$8E,$8B
		.BYTE	$18,$1E, $C,$96,$99
		.BYTE	$9B, $C,$48,$8C,$83,$8D,$52
		.BYTE	$9F,$15,$4B,$97,$83,$62,$5F, $D,  2
		.BYTE	$9F,$2F,$4C,$99,$83,$14,$60,$18,  9
		.BYTE	$9F,$1F,$4D,$1C,$84,$9D,$52,$19,$13
		.BYTE	$DF,$1F,$C4,$96,$93,$8D,$5E,$1A,$1B
		.BYTE	$90, $F,$4E, $C,$16
		.BYTE	$50,$1D,$EC,$82,$18
		.BYTE	$90,$2D,$4A,  6, $E
		.BYTE	$90,$16,$49,  8,  9
		.BYTE	0
_npcl15:.BYTE	$FB,$E3,$D2,$90,$82,$6A,$86
		.BYTE	8, $A,$B3,$12,$85
		.BYTE	8,$23,$B9,$1D,$89
		.BYTE	8,$2E,$B6,$10, $C
		.BYTE	8,$1D,$19,  7,$8B
		.BYTE	8,$21,$B4,  6,$96
		.BYTE	8,$15,$B5, $E,$15
		.BYTE	8,$1E,$29,  3,$9B
		.BYTE	8,$23,  6,$1C,$93
		.BYTE	8,$16,$B8, $F,$A3
		.BYTE	8, $B,$B7,$16,$1A
		.BYTE	0
_npcl16:.BYTE	$18,$52,  6,$85,$86
		.BYTE	$18,$1D,$18,$83,$9B
		.BYTE	$1C,$22,$42, $B,$17, $A, $F
		.BYTE	$1C,$2E,$AE,$97,$A0,$18,$20
		.BYTE	$1D,$22,$AF,$9E,$85,$21,$1D,  6
		.BYTE	$BE,$1F, $C,$97,$8C,$82,$1F,  6
		.BYTE	$BF,$2E,$99,$84,$8C,$91,$D8,$18,  5
		.BYTE	$DF,$13,$D0, $C,$8C,$91,$52,  3,$18
		.BYTE	$50,$12,$F2,$94,  6
		.BYTE	$D0,$1C,$D1,$9F, $C
		.BYTE	$90,$15,$9A,$91, $E
		.BYTE	$90,$17,$9B, $B,$22
		.BYTE	0
_npcl17:.BYTE	$18,$38,$D7,$26,  5
		.BYTE	$18,$39,$D9,$90,$94
		.BYTE	$18,$4E,  0,$92,$BB
		.BYTE	$18,$20,$DE,$91,$BB
		.BYTE	$78,$B1,$96,$92,$DC
		.BYTE	$78,$38,$98,$92,$DD
		.BYTE	$9A,$3B,$B2,$93,$94,$DA
		.BYTE	$9A,$3B,$B1,$9B,$92,$D8
		.BYTE	$DB,$32,$D3,$92,$87,$B1,$D6
		.BYTE	$9B,$3E,$B9,$9E,$AA,$BD,$A3
		.BYTE	$9B,$3D,$BC,$A0,$3A,$38,$DC
		.BYTE	$9F,$3A,$AE,$89,$85,$BD,$A3,$1B,  5
		.BYTE	$9F,$3F,$AD, $A,$89,$BD,$A3,$1B,  6
		.BYTE	$9F,$39,$AF,$10,$8A,$B9,$52,  8,  7
		.BYTE	$9F,$3F,$B0,$1B,$8B,$B9,$52,  8,  6
		.BYTE	$9F,$3A,$B6,$93,$A6,$B5,$DD,$1E,$2B
		.BYTE	$9F,$3B,$B8,$1A,$A9,$B9,$52,$1E,$2C
		.BYTE	$9F,$35,$BB, $E,$B4,$52,$DB,$12,$3A
		.BYTE	$9F,$3E,$B7,$92,$AD,$B7,$52,  3,$2E
		.BYTE	$9F,$51,$B3, $A,$A9,$BF,$52,  3,$2D
		.BYTE	$90,$3E,$B4,$85,$2C
		.BYTE	$90,$21,$B5,$86,$32
		.BYTE	$90,$36,$BA,$1D,$33
		.BYTE	0
_npcl18:.BYTE	$18,$16,$CB,$9D,$A6
		.BYTE	$18,$76,  0,$9A,$8B
		.BYTE	8,$13,$CF, $D,$14
		.BYTE	8,$10,$CD,  4,$12
		.BYTE	8,$93,$D3,$16,$93
		.BYTE	8,$93,$D4,$16,$8F
		.BYTE	8,$26,$44,  6,$86
		.BYTE	8,$12,$CC,  6,$8A
		.BYTE	8,$12,$CE, $D,$8E
		.BYTE	8,$1D,$D1,$12,$89
		.BYTE	8,$13,$D2,$14,$89
		.BYTE	8, $E,$D0,$16,$84
		.BYTE	0
_npcl19:.BYTE	$18,$4E,  0,$8F,$83
		.BYTE	$18,$1E,$1B,$86,$91
		.BYTE	$18,$47,$C8,$97,$89
		.BYTE	$18,$23,$43,$96,$98
		.BYTE	$9B,$37,$A8,$11,$84,$AD,$A3
		.BYTE	$9B,$2D,$AB, $E,$8F,$45,$5C
		.BYTE	$1C,$22,$C7,$90,$83, $F,  2
		.BYTE	$1C,$45,$5C,  5,$1A,  8,$1B
		.BYTE	$9E,$16,$AA,$98,$8C,$CA, $F, $E
		.BYTE	$9F,$1E, $E,$86,$88,$B5,$A3,$11,  2
		.BYTE	$1F,$46,$5C,$85,$8D,$AD,$C9,$18, $E
		.BYTE	$9F,$16,$AC,$85,$8E,$95,$52,$19, $C
		.BYTE	$90,$14,$A9, $A,$15
		.BYTE	$90,$2F,$A7,$11,$1C
		.BYTE	$50,$1D,$F4,$93,$13
		.BYTE	0
_npcl1A:.BYTE	$F8,$66,  7,$82,$81
		.BYTE	$F8,$17, $E,$8C,$9D
		.BYTE	$78,$1C,$E1,$95,$89
		.BYTE	$F8,$1E, $D,$87,$98
		.BYTE	$F8,$13, $F,$82,$9F
		.BYTE	$F8,$2E,  6,$8E,$86
		.BYTE	$F8, $E,  8,$99,$8B
		.BYTE	$F8,$2D,  9, $C,$11
		.BYTE	$F8,$16, $A,$12, $E
		.BYTE	$78,$1F,$F7,$99,$91
		.BYTE	$F8,$16, $B,$18,$17
		.BYTE	$F9,$3E, $C,  5,$11,$3F
		.BYTE	0
_npcl1B:.BYTE	$18,$22,$3D,$84,$82
		.BYTE	0
_npcl1C:.BYTE	0
_npcl1D:.BYTE	$78,$4E,  6,$89,$83
		.BYTE	$18,$E3,$B2,$83,$89
		.BYTE	$78,$4D,  7,  3, $F
		.BYTE	$18,$E1,$B2,$8F,$90
		.BYTE	0
_npcl1E:.BYTE	$18,$4E,  0,$82,$83
		.BYTE	$18,$4E,  0,$85,$83
		.BYTE	$18,$23,$40,$85,$85
		.BYTE	0
_npcl1F:.BYTE	$18,$52,  6,$8B,$8B
		.BYTE	0
_npcl20:.BYTE	$78,  6,$8D,$86,$85
		.BYTE	$18,$4E,  0,$85,$89
		.BYTE	$18,$4E,  0,$87,$89
		.BYTE	0
_npcl21:.BYTE	$18,$1E,$1E,$90,$90
		.BYTE	$78,$2A,  8,$8D,$8A
		.BYTE	$48, $A,  9,  9,$92
		.BYTE	0
_npcl22:.BYTE	$18,$42,$55,  2,  8
		.BYTE	$78,$7A, $B,$87,$84
		.BYTE	$78,$43,$8E, $A,  5
		.BYTE	0
_npcl23:.BYTE	$78,$5A,$8F,$8E,$99
		.BYTE	$78,$45, $C,$8C,$A9
		.BYTE	$78,$47, $C,$90,$A9
		.BYTE	$78,$7A, $D,$86,$96
		.BYTE	$78,$7A, $E,$96,$96
		.BYTE	$18,$72,  0,$8E,$FD
		.BYTE	0
_npcl24:.BYTE	$18,$39,$AD,  3,  2
		.BYTE	$18,$1E,$16,$85,$86
		.BYTE	0
_npcl25:.BYTE	$78,$6C,$90,$88,$89
		.BYTE	$78,$6C,$90,$86,$89
		.BYTE	$18,$72,  0,$87,$87
		.BYTE	$18,$4E,  0,$8B,$BC
		.BYTE	$18,$4E,  0,$83,$BC
		.BYTE	$18,$4E,  0,$87,$B6
		.BYTE	$18,$4E,  0,$87,$BE
		.BYTE	$18,$7E,  0,$87,$C0
		.BYTE	$18,$4E,  0,$8B,$B8
		.BYTE	$18,$4E,  0,$83,$B8
		.BYTE	0
_npcl26:.BYTE	$78,$52, $F,$87,$83
		.BYTE	0
_npcl27:.BYTE	0
_npcl28:.BYTE	$F8, $E,  5,$83,$87
		.BYTE	$F8,$2D,  4,$82,$88
		.BYTE	0
_npcl29:.BYTE	$F8,$6E,$DB,$89,$88
		.BYTE	0
_npcl2A:.BYTE	$F8,$21,$DA,$88,$88
		.BYTE	0
_npcl2B:.BYTE	$78,  8,$10,$97,$8F
		.BYTE	0
_npcl2C:.BYTE	$78,  8,$10,$97,$8F
		.BYTE	0
_npcl2D:.BYTE	0
_npcl2E:.BYTE	$F8,$52,$33,$84,$A0
		.BYTE	0
_npcl2F:.BYTE	$78,$78,$9A,$A7,$86
		.BYTE	0
_npcl30:.BYTE	$78,$78,$9A,$A7,$86
		.BYTE	0
_npcl31:.BYTE	0
_npcl32:.BYTE	0
_npcl33:.BYTE	$18,$4E,  0,$8B,$90
		.BYTE	$18,  6,  4,$8D,$8D
		.BYTE	$18,$4E,  0,$8F,$90
		.BYTE	$78,  6,$B2,$8F,$A4
		.BYTE	$90,$12,$93,$85, $B
		.BYTE	$90,$12,$92,$95, $B
		.BYTE	$90,$14,$94,$12,$1C
		.BYTE	$90,$2D,$95, $B,$17
		.BYTE	$90,$1F,$96, $A,$1D
		.BYTE	$90,$22,$97, $F,$15
		.BYTE	0
_npcl34:.BYTE	$F8, $A,$34,$92,$A5
		.BYTE	0
_npcl35:.BYTE	0
_npcl36:.BYTE	0
_npcl37:.BYTE	0
_npcl38:.BYTE	0
_npcl39:.BYTE	0
_npcl3A:.BYTE	$F8,$12,$37,$84,$82
		.BYTE	$F8,$13,$38,$85,$83
		.BYTE	$F8,$12,$3A,$8B,$A9
		.BYTE	$F8,$12,$39,$8E,$A9
		.BYTE	0
_npcl3B:.BYTE	0
_npcl3C:.BYTE	0
_npcl3D:.BYTE	$78,$22,$12,$97,$9D
		.BYTE	$78,$2E,$13,$AA,$87
		.BYTE	$78,$2C,$14,$AA,$9A
		.BYTE	0
_npcl3E:.BYTE	0
_npcl3F:.BYTE	$78,$13,$16,$90,$83
		.BYTE	0
_npcl40:.BYTE	$78,$10,$19,$82,$9E
		.BYTE	$78,$22,$18,$A2,$8F
		.BYTE	0
_npcl41:.BYTE	$50,$2E,$69,  4,  5
		.BYTE	$90,$20,$2E,  7,  5
		.BYTE	0
_npcl42:.BYTE	8,$16,$53,  4,$83
		.BYTE	$48,$2F,$68,  6,  6
		.BYTE	0
_npcl43:.BYTE	$18,$93,$57,$82,$82
		.BYTE	$1D,$17,$56,  4,$89,$97,  2,  9
		.BYTE	8,$28,$58,  9,$89
		.BYTE	8,$8F,$52,  8,$82
		.BYTE	0
_npcl44:.BYTE	$18,$16,  3,$82,$83
		.BYTE	$18,$43,$55,  5, $D
		.BYTE	$90,$12,$30,$88,  5
		.BYTE	$90,$2A,$2F,$87, $A
		.BYTE	0
_npcl45:.BYTE	$9F,$6A,$44,$83,$84,$89,$52,  2, $B
		.BYTE	$90, $A,$43,$85,  6
		.BYTE	$D0,$11,$C1,  8,  3
		.BYTE	0
_npcl46:.BYTE	$9F,$1B,$34, $F,$81, $A,$59, $E,$1C
		.BYTE	$9F,$23,$33,  4,$82, $A,$5A, $F,$1C
		.BYTE	$90,  8,$32,  4,  8
		.BYTE	$90,$2D,$35,$88,  7
		.BYTE	$90,$2E,$39,$9B, $A
		.BYTE	$90,  9,$36,$8D, $B
		.BYTE	$90, $B,$37,$90, $B
		.BYTE	$90,$22,$3A,$87,$15
		.BYTE	$90,$14,$3D,$15,$16
		.BYTE	$90,$1F,$38,$1A,$1A
		.BYTE	$90,  9,$3C,  2,$1B
		.BYTE	$90,  9,$31,$8C,$1C
		.BYTE	$90, $B,$31,$91,$1C
		.BYTE	$90,$15,$3B,  2, $E
		.BYTE	0
_npcl47:.BYTE	$50,  2,$AE,$89,  4
		.BYTE	$90,  9,$3E,$86,  8
		.BYTE	$90, $B,$3F,$8C,  8
		.BYTE	$90,$2B,$40, $E, $E
		.BYTE	$90,$2D,$41,  5,$10
		.BYTE	$90, $A,$42,$8A,$14
		.BYTE	$D0,  6,$C0,$8B,  5
		.BYTE	0
_npcl48:.BYTE	$78,$11,$26,  2,  2
		.BYTE	$78,$1F,$28, $D,  2
		.BYTE	$78,$15,$25,$86,$8E
		.BYTE	$78,$22,$27,$84,$84
		.BYTE	$78,$2F,$29,$8C,$89
		.BYTE	$78, $C,$2A,$8B,$8A
		.BYTE	$78,$17,$A5,$8E,$8C
		.BYTE	$18,$11,  5,$81,$8C
		.BYTE	$18,  6,  0,$84,$99
		.BYTE	0
_npcl49:.BYTE	0
_npcl4A:.BYTE	$D0,$1A,$B8,$8D,  3
		.BYTE	$50,  2,$AA,$92,  3
		.BYTE	$D0,  5,$B9,$90,  4
		.BYTE	$D0,$29,$BB, $E,  7
		.BYTE	$D0, $A,$BA,$90, $C
		.BYTE	0
_npcl4B:.BYTE	0
_npcl4C:.BYTE	$78,$6A,$22,  3,  3
		.BYTE	0
_npcl4D:.BYTE	$DF,$21,$BC,$82,$84,$A3,$52,  5,  5
		.BYTE	0
_npcl4E:.BYTE	$18,$74,  0,$83,$8A
		.BYTE	$18,$74,  0,$85,$8A
		.BYTE	$18,$74,  0,$87,$8A
		.BYTE	0
_npcl4F:.BYTE	$5B,  2,$B0,$8F,$87,  6,$C6
		.BYTE	$90, $A,$A5,$8A, $A
		.BYTE	$90,  7,$A6,$91,  8
		.BYTE	0
_npcl50:.BYTE	$18,$52,  6,$9D,$91
		.BYTE	$18,$2A,$8A, $E,  5
		.BYTE	$18,$1D,$12,$89,$A2
		.BYTE	$9F,$1F,  7,$9F,$99,$8D,$52, $F,$21
		.BYTE	$50,$1E,$F1,$9F,$1F
		.BYTE	$90, $F,$67,$1F,$28
		.BYTE	$90,$16,$6A,$96,$21
		.BYTE	$90, $D,$6D,$12,$24
		.BYTE	$90,$50,$6B,$12,$28
		.BYTE	$90,$2A,$69,$87,$27
		.BYTE	$90,$2C,$6C,  6,$1C
		.BYTE	$90,$2F,$68,$83,$21
		.BYTE	$90,$15,  8,$83,$19
		.BYTE	0
_npcl51:.BYTE	$18,$2E,$8B,  4,  6
		.BYTE	$48,$1D,$78,  1,  3
		.BYTE	0
_npcl52:.BYTE	8,$15,$8C,  4,$82
		.BYTE	0
_npcl53:.BYTE	$78,$62,$93,$83,$90
		.BYTE	0
_npcl54:.BYTE	0
_npcl55:.BYTE	$18,$12,$8E,$80,$81
		.BYTE	$18,  9,$8D,$90,$B5
		.BYTE	$18, $B,$8D,$94,$B5
		.BYTE	$1C,$41,$55,  7,$1A,$10, $A
		.BYTE	$1C,$42,$55,$15,$1A,$15,$19
		.BYTE	$1C,$43,$55,$1B,$17,  9,$2E
		.BYTE	$1F,$41,$55,$10,$98,$89,$52,  5, $B
		.BYTE	$9F,$10,$71,$1E,$93,$89,$52,  5, $D
		.BYTE	$9F,$26,$74,$18,$90,$89,$8F,$1E, $B
		.BYTE	$9F,$12,$6F,$86,$91,$89,$90,$1E, $D
		.BYTE	$BF,$27,$72, $C,$8C,$C0,$79,  5,$1A
		.BYTE	$90,$25,$73,$14, $A
		.BYTE	$90,  7,$6E,$94,  7
		.BYTE	$90, $A,$70,$8C,  7
		.BYTE	$90, $A,$70,$98,  7
		.BYTE	0
_npcl56:.BYTE	$9A,  9,$77,$88,$93,$91
		.BYTE	$9A, $B,$78,$8C,$93,$92
		.BYTE	$5F,$1A,$B1,$8A,$84,$B5,$93,$11,  6
		.BYTE	$9F,$25,$76,$88,$86,$B5,$7E,$11,  7
		.BYTE	$90,$27,$75,$8C,  6
		.BYTE	$90,$35,$7B,$10,  6
		.BYTE	$90,$37,$7C,$12,  7
		.BYTE	$90,$27,$79,  5, $D
		.BYTE	$90,$42,$7A,$12, $D
		.BYTE	0
_npcl57:.BYTE	$9F,$26,$7D,$86,$8B,$A5,$94,  8, $A
		.BYTE	8,$43,$97,  9,  9
		.BYTE	$48,$A7,$7A,  5,$89
		.BYTE	8,$25,$96,  5,  6
		.BYTE	8,$A5,$95,  9,$86
		.BYTE	$48,$1A,$AD,  6,$84
		.BYTE	0
_npcl58:.BYTE	$78,$56,$91,$88,$83
		.BYTE	$18,$4E,  0,$85,$84
		.BYTE	$18,$4E,  0,$8B,$84
		.BYTE	0
_npcl59:.BYTE	$18,$E1,$B2,$A2,$A6
		.BYTE	0
_npcl5A:.BYTE	0
_npcl5B:.BYTE	0
_npcl5C:.BYTE	$18,$52,  6,$83,$82
		.BYTE	$18,$1E, $B,$88,$89
		.BYTE	$9F,$16,$98,$87,$84,$9E,$A8,  3, $D
		.BYTE	8,$A3,$A9, $B,$8D
		.BYTE	8,$94,$AC, $A,$8F
		.BYTE	8,$93,$AA,  3,$8F
		.BYTE	8,$AF,$AB,  7,$8F
		.BYTE	0
_npcl5D:.BYTE	$D0,$11,$D5,  2,  3
		.BYTE	0
_npcl5E:.BYTE	$DF,$1E,$D6,$82,$85,$1C,$F6,  3,  5
		.BYTE	8,$11,$F7,  2,$84
		.BYTE	0
_npcl5F:.BYTE	$78,$81,  2,$91,$9F
		.BYTE	0
_npcl60:.BYTE	$78,$27,  1, $F, $B
		.BYTE	$78, $E,  0,$12,  2
		.BYTE	$78,  8,$8B,$82,$83
		.BYTE	$18,$E3,$B2,$8C,$81
		.BYTE	$18,$2B,$FF,  8,  2
		.BYTE	0
_npcl61:.BYTE	$18, $A,$45,$8F,$9B
		.BYTE	$18, $A,$F8,$8D,$9B
		.BYTE	$18,$25,$FA, $C, $E
		.BYTE	$18,$27,$FB,$10,$10
		.BYTE	$19, $B,$F9,  7,$87,  8
		.BYTE	$1A, $A,$F8,$8E,$87,$59
		.BYTE	$1D,  2,  0,$8E,$8B,$1B,$3C,$1D
		.BYTE	$9F,$1B,$CE, $D,$81,$AD,$FD,$14,$11
		.BYTE	$9F, $A,$1E,$9B,$87,$AD,$FC,$14, $F
		.BYTE	$90,$2D,$CF,$16,  9
		.BYTE	$90,$2C,$D0,$18, $C
		.BYTE	$90,  9,$D1,$8D, $C
		.BYTE	$90, $B,$D1,$8F, $C
		.BYTE	0
_npcl62:.BYTE	$18,$5E,  0,$8D,$B7
		.BYTE	$48,$81,$41, $D,$85
		.BYTE	0
_npcl63:.BYTE	0
_npcl64:.BYTE	0
_npcl65:.BYTE	$98,$6B,$F1,$82,$83
		.BYTE	0
_npcl66:.BYTE	$98,$20,$F2,$84,$83
		.BYTE	0
_npcl67:.BYTE	$98,$2D,$F3,  2,  4
		.BYTE	0
_npcl68:.BYTE	$F8,  7,  3,$87,$87
		.BYTE	0
_npcl69:.BYTE	$98, $B,$F9,$16,$13
		.BYTE	$98, $B,$FC,$8C,$9A
		.BYTE	$98,  9,$FC,$89,$9A
		.BYTE	$98,$2F,$F8,$13, $D
		.BYTE	$98, $B,$F7,$12,  5
		.BYTE	$98,$12,$F4,$88,$80
		.BYTE	$18,$43,$55,$99,$85
		.BYTE	$98,$2E,$F6, $D, $E
		.BYTE	$98,$15,$F5,  8, $C
		.BYTE	$98,$37,$FB,  6,$19
		.BYTE	$98,$34,$FA,  2,$16
		.BYTE	$F8,$23,$D8,$91,$99
		.BYTE	0
_npcl6A:.BYTE	$18,$4E,  0,$81,$83
		.BYTE	$18,$4E,  0,$81,$81
		.BYTE	0
_npcl6B:.BYTE	$98,  6,$FD,$8B,$85
		.BYTE	$98, $B,$FE,$8C,$88
		.BYTE	$98,$2E,$FF,$12,  8
		.BYTE	$F8,$2A,$D9,  4,  6
		.BYTE	$F8,$21,  0,  4, $E
		.BYTE	$F8,  9,  1,$88,$93
		.BYTE	$78,  2,$B4,$8A,$84
		.BYTE	0
_npcl6C:.BYTE	$F8,$2C,  2,  9,  5
		.BYTE	0
_npcl6D:.BYTE	$DB,$36,$C3,$82,$83,$B7,$52
		.BYTE	8,$10,$5B,  4,$84
		.BYTE	0
_npcl6E:.BYTE	$7C,$22,$6A,$84,$83,  3,  4
		.BYTE	0
_npcl6F:.BYTE	$18,$4E,  0,$84,$84
		.BYTE	$1D,$52,$9A,$84,$82,$D0,  2,  5
		.BYTE	0
_npcl70:.BYTE	$9B,$2E,$83,$81,$84,$42,$55
		.BYTE	8,$9F,$9B,  2,$86
		.BYTE	8,$B7,$93,  2,$88
		.BYTE	0
_npcl71:.BYTE	$DF,  2,$CF,$89,$86, $A,$59, $E,$1A
		.BYTE	$9F,$1E,$86,$14,$8D, $A,$5A, $F,$1A
		.BYTE	$90,  9,$84,$87, $A
		.BYTE	$90,$23,$1D, $B, $D
		.BYTE	$90,$2F,$87,$14,  5
		.BYTE	$90,  9,$85,$8D,$18
		.BYTE	0
_npcl72:.BYTE	$78,$20,$6B,$87,$8F
		.BYTE	$78,$1E,$6C,$86,$A4
		.BYTE	0
_npcl73:.BYTE	$18,$20,$65,$89,$92
		.BYTE	$DF,$1E,$C5,$8A,$82,$9D,$64, $A,  1
		.BYTE	0
_npcl74:.BYTE	$18,$2E, $D,$98,$82
		.BYTE	$9F,$2E,$51,  5,$8C,$95,  0, $B,  2
		.BYTE	$DF,$1F,$C6,$19,$95,$8D,$66,$19,  7
		.BYTE	$90,$15,$50,$13, $D
		.BYTE	$90,$16,  2,$8B,  3
		.BYTE	0
_npcl75:.BYTE	$18,$2E, $E,$9F,$82
		.BYTE	$18,$26,$6C,$A3,$93
		.BYTE	$18,$12,$68,$9B,$97
		.BYTE	$18,$24,$69,$9E,$98
		.BYTE	$18,$14,$6D,$A1,$97
		.BYTE	$18,$10,$6E,$A1,$99
		.BYTE	$18,$2F,$6A,$A9,$97
		.BYTE	$18,$2A,$6B,$A1,$93
		.BYTE	$9B,$10,$55,$26,$88,$A9,$52
		.BYTE	$FE,$12,$C8,$83,$8B,$6F,  4, $B
		.BYTE	$DE,$14,$CA,  3,$94,$70,  4,$1C
		.BYTE	$9E,$13,$54,$16,$89,$6F,  5,$1B
		.BYTE	$BF,$1E,$53,$84,$84,$16,$71,  4,$1A
		.BYTE	$FF,$21,$C9,  8,$8E,$22,$70,  3, $C
		.BYTE	$90,$20,  3,$92,$17
		.BYTE	$50,$17,$ED,$93,  3
		.BYTE	$D0,$2F,$C7,$25, $E
		.BYTE	0
_npcl76:.BYTE	$9B,$22,$52,  3,  3,$1F,$67
		.BYTE	$48,$A3,$6E,  2,$82
		.BYTE	0
_npcl77:.BYTE	$78,$22,$77,  4,  2
		.BYTE	0
_npcl78:.BYTE	$18, $E,$3F,  3,  1
		.BYTE	$18,$2E,$89,$8A,$85
		.BYTE	0
_npcl79:.BYTE	$1D,  5,$7C,$83,$85,  6,  9,  4
		.BYTE	$48,$5D,$75,  1,  1
		.BYTE	0
_npcl7A:.BYTE	$48,$10,$46,  2,$84
		.BYTE	$48,$26,$45,  7,$83
		.BYTE	0
_npcl7B:.BYTE	0
_npcl7C:.BYTE	0
_npcl7D:.BYTE	0
_npcl7E:.BYTE	0
_npcl7F:.BYTE	$F8,$B7,$20,$8B,$84
		.BYTE	$F8,$2E,$21,$8A,$83
		.BYTE	$F8,$1D,$22,  9,  2
		.BYTE	$F8,$9F,$23,$82,$81
		.BYTE	$F8,$20,$24,$83,$89
		.BYTE	0
_npcl80:.BYTE	$18,$51,  6,$82,$84
		.BYTE	$F8, $A,$32,$89,$89
		.BYTE	$F8,$1F,$30,$86,$83
		.BYTE	$F9,$69,$31,$81,$89,$6B
		.BYTE	0
_npcl81:.BYTE	0
_npcl82:.BYTE	$18,$14,$EB,$83,$87
		.BYTE	0
_npcl83:.BYTE	$9F,$35,$4F,$81,$84,$1F,$61,  3,  4
		.BYTE	8,$B7,$52,  3,$87
		.BYTE	8,$AF,$62,  7,$87
		.BYTE	0
_npcl84:.BYTE	$78,$6E,$7C,$15, $C
		.BYTE	$18,$45,$5C,$94,$89
		.BYTE	$78,$6E,$7E,$98,$86
		.BYTE	$78,$6E,$7B,$8D,$88
		.BYTE	$78,$20,$7F,$8F,$8D
		.BYTE	$78,$6D,$7D, $B,$15
		.BYTE	$18,$47,$5C,$14,$14
		.BYTE	0
_npcl85:.BYTE	0
_npcl86:.BYTE	$1D,$E3,$B2,$85,$85,$E1,  4,  5
		.BYTE	0
_npcl87:.BYTE	$78,$11,$26,  2,  2
		.BYTE	$78,$1F,$28, $D,  2
		.BYTE	$78,$15,$25,$86,$8E
		.BYTE	$78,$22,$27,$84,$84
		.BYTE	$78,$2F,$29,$8C,$89
		.BYTE	$78, $C,$2A,$8B,$8A
		.BYTE	$78,$17,$A5,$8E,$8C
		.BYTE	$18,$11,  5,$81,$8C
		.BYTE	0
_npcl88:.BYTE	0
_npcl89:.BYTE	$18,$4E,  0,$84,$81
		.BYTE	$78,$2A,$85,$84,$83
		.BYTE	$18,$2F,$B0,$85,$84
		.BYTE	$78,$34,$83,$84,$85
		.BYTE	$78,$35,$84,$83,$84
		.BYTE	0
_npcl8A:.BYTE	$18,$3E,$DF,$8D,$88
		.BYTE	0
_npcl8B:.BYTE	0
_npcl8C:.BYTE	$18,  6,$D5,$81,$81
		.BYTE	0
_npcl8D:.BYTE	$78,$22,$8A,$85,$84
		.BYTE	0
_npcl8E:.BYTE	$98,$3A,$10,$84,$83
		.BYTE	0
_npcl8F:.BYTE	$18,$4E,  0,$84,$84
		.BYTE	$18,$13,$B1,  6,  4
		.BYTE	0
_npcl90:.BYTE	0
_npcl91:.BYTE	$18,$12,  0,$87,$88
		.BYTE	$98,$34,$E7, $C,$17
		.BYTE	$98,$4B,$E6,$8A,$93
		.BYTE	0
_npcl92:.BYTE	0
_npcl93:.BYTE	0
_npcl94:.BYTE	0
_npcl95:.BYTE	$78,$7A,$43,$96,$96
		.BYTE	$78,$45, $C,$8C,$A9
		.BYTE	$78,$47, $C,$90,$A9
		.BYTE	$78,$7A,$42,$86,$96
		.BYTE	0
_npcl96:.BYTE	0
_npcl97:.BYTE	0
_npcl98:.BYTE	0
_npcl99:.BYTE	$78,$11,$26,  2,  2
		.BYTE	$78,$1F,$28, $D,  2
		.BYTE	$78,$15,$25,$86,$8E
		.BYTE	$78,$22,$27,$84,$84
		.BYTE	$78,$2F,$29,$8C,$89
		.BYTE	$78, $C,$2A,$8B,$8A
		.BYTE	$78,$17,$A5,$8E,$8C
		.BYTE	$18,$11,  5,$81,$8C
		.BYTE	0
_npcl9A:.BYTE	$78,$11,$26,  2,  2
		.BYTE	$78,$1F,$28, $D,  2
		.BYTE	$78,$15,$25,$86,$8E
		.BYTE	$78,$22,$27,$84,$84
		.BYTE	$78,$2F,$29,$8C,$89
		.BYTE	$78, $C,$2A,$8B,$8A
		.BYTE	$78,$17,$A5,$8E,$8C
		.BYTE	$18,$11,  5,$81,$8C
		.BYTE	0
_npcl9B:.BYTE	0
_npcl9C:.BYTE	$98,$62,$D8,  9,$14
		.BYTE	$F8,$5F,$D7, $A,$28
		.BYTE	$98, $D,$D9,  6,$33
		.BYTE	0
_npcl9D:.BYTE	$98,$4F,$DA, $E,$11
		.BYTE	$98,$60,$DB,$88,$96
		.BYTE	$98,$60,$DC,$88,$9B
		.BYTE	$18,$EB,$B2,$88,$A0
		.BYTE	$98,$60,$DE,$88,$A5
		.BYTE	$98,$E9,$E1,$92,$9B
		.BYTE	$18,$E3,$B2,$92,$A5
		.BYTE	$98,$68,$E0,$92,$A0
		.BYTE	$98,$60,$DD,$92,$96
		.BYTE	$98,$4D,$DF, $E,$27
		.BYTE	0
_npcl9E:.BYTE	0
_npcl9F:.BYTE	0
_npclA0:.BYTE	$F8,$22,$DE,$87,$86
		.BYTE	0
_npclA1:.BYTE	0
_npclA2:.BYTE	0
_npclA3:.BYTE	0
_npclA4:.BYTE	0
_npclA5:.BYTE	0
_npclA6:.BYTE	$78, $A,$44,$8E,$9A
		.BYTE	0
_npclA7:.BYTE	0
_npclA8:.BYTE	0
_npclA9:.BYTE	0
_npclAA:.BYTE	0
_npclAB:.BYTE	$98,  6,$FD,$8B,$85
		.BYTE	$78,  2,$B4,$8A,$84
		.BYTE	$18,  9,  0,$88,$87
		.BYTE	$18,  9,  0,$88,$89
		.BYTE	$18,  9,  0,$88,$8B
		.BYTE	$18,  9,  0,$88,$8D
		.BYTE	$18, $B,  0,$8C,$8D
		.BYTE	$18, $B,  0,$8C,$8B
		.BYTE	$18, $B,  0,$8C,$89
		.BYTE	$18, $B,  0,$8C,$87
		.BYTE	$18,$27,  0,$8D,$8C
		.BYTE	$18,$27,  0,$8D,$88
		.BYTE	$18,$25,  0,$87,$8C
		.BYTE	$18,$25,  0,$87,$88
		.BYTE	$18,$72,  0,$86,$A0
		.BYTE	$18,$12,  0,$86,$A1
		.BYTE	$18,$1E,  0,$86,$A3
		.BYTE	$18,$26,  0,$86,$A4
		.BYTE	$18,$2E,  0,$86,$A5
		.BYTE	$18,$36,  0,$86,$A6
		.BYTE	$18,$42,  0,$86,$A7
		.BYTE	$1A,$16,  2,$86,$A2,  0
		.BYTE	0
_npclAC:.BYTE	$50,  2,$94,$89,  4
		.BYTE	$50,  6,$AE,$8A,  5
		.BYTE	$D0, $B,$3B,$8B,  6
		.BYTE	$D0,  9,$3B,$87,  6
		.BYTE	$D0,  9,$3B,$87,  9
		.BYTE	$D0, $B,$3B,$8B,  9
		.BYTE	$D0, $B,$3B,$8B, $C
		.BYTE	$D0,  9,$3B,$87, $C
		.BYTE	$10,$72,  0,$8A,$27
		.BYTE	0
_npclAD:.BYTE	$50, $F,$30, $E,  1
		.BYTE	$50, $F,$A9,$1A,  6
		.BYTE	$50,$17,$36, $C,  8
		.BYTE	$50, $A,$37,$91, $A
		.BYTE	$50, $B,$2D,$92,$2E
		.BYTE	$50,  9,$2B,$8F,$18
		.BYTE	$50,  9,$2D,$8F,$2E
		.BYTE	$50,$2E,$A8,  9,$1B
		.BYTE	$50, $B,$2B,$1D,$1C
		.BYTE	$50,$36,$32,$12,$20
		.BYTE	$50,$16,$2E,$85,$23
		.BYTE	$50,$16,$2F,$89,$23
		.BYTE	$50, $F,$31,  5,$27
		.BYTE	$50,$15,$33, $F,$28
		.BYTE	$50,$16,$30,$97,$23
		.BYTE	$50,$2C,$34,$1E,$27
		.BYTE	$50,  8,$35,$A0,$2D
		.BYTE	$10,$51,  6,$83,$1B
		.BYTE	0
_npclAE:.BYTE	$50,$1A,$A6,$8D,  3
		.BYTE	$50, $A,$2B,$90, $C
		.BYTE	$50,  5,$A7,$90,  4
		.BYTE	$50,$29,$2C, $E,  7
		.BYTE	0
_npclAF:.BYTE	$50,$6A,$38,  3,  3
		.BYTE	0
_npclB0:.BYTE	$50,$21,$39,$82,  4
		.BYTE	0
_npclB1:.BYTE	0
_npclB2:.BYTE	$18,  9,  0,$8B,$8E
		.BYTE	$18, $B,  0,$8E,$8E
		.BYTE	$18,  8,  0,$8D,$92
		.BYTE	$18,  8,  0,$8C,$93
		.BYTE	$18,$12,  0,$8D,$A4
		.BYTE	$18,$2F,  0,$90,$98
		.BYTE	$18,$15,  0,$86,$99
		.BYTE	$18, $A,  0,$8C,$A3
		.BYTE	$18, $A,  0,$8D,$A3
		.BYTE	0
_npclB3:.BYTE	$78,$11,$26,  2,  2
		.BYTE	$78,$1F,$28, $D,  2
		.BYTE	$78,$15,$25,$86,$8E
		.BYTE	$78,$22,$27,$84,$84
		.BYTE	$78,$2F,$29,$8C,$89
		.BYTE	$78, $C,$2A,$8B,$8A
		.BYTE	$78,$17,$A5,$8E,$8C
		.BYTE	$18,$11,  5,$81,$8C
		.BYTE	$78,  6,$AB,$84,$8B
		.BYTE	0
_npclB4:.BYTE	0
_npclB5:.BYTE	0
_npclB6:.BYTE	0
_npclB7:.BYTE	$18,$39,$E3,$90,$94
		.BYTE	$78,$3B,$88,$93,$94
		.BYTE	$18,$4E,  0,$92,$BB
		.BYTE	$18,$20,$E6,$91,$BB
		.BYTE	$9A,$3B,$C1,$9B,$92,$52
		.BYTE	$9B,$3E,$C5,$9E,$AA,$BD,$A3
		.BYTE	$9B,$3D,$BC,$A0,$39,$38,$E5
		.BYTE	$1D,$51,$E4, $A,$A9,$52,$12,$3A
		.BYTE	$9F,$3A,$BE,$89,$85,$BF,$52,  3,$2D
		.BYTE	$5F,$21,$89,$86,$B2,$BD,$E0,$1B,  5
		.BYTE	$9F,$3F,$BD, $A,$89,$BD,$A3,$1B,  6
		.BYTE	$9F,$39,$BF,$10,$8A,$B9,$52,  8,  7
		.BYTE	$9F,$3F,$C0,$1B,$8B,$B9,$52,  8,  6
		.BYTE	$DF,$3A,$D4,$93,$A6,$B5,$DD,$1E,$2B
		.BYTE	$9F,$3B,$C4,$1A,$A9,$B9,$52,$1E,$2C
		.BYTE	$9F,$36,$BA,$9D,$B3,$B7,$52,  3,$2E
		.BYTE	$90,$35,$C6, $E,$34
		.BYTE	$90,$3E,$C3,$92,$2D
		.BYTE	$90,$3E,$C2,$85,$2C
		.BYTE	0
_npclB8:.BYTE	$18,$3F,$E7,$83,$87
		.BYTE	$18,$39,$E1,$82,$87
		.BYTE	0
_npclB9:.BYTE	0
_npclBA:.BYTE	0
_npclBB:.BYTE	$18,$5B,  0,$A2,$8C
		.BYTE	0
_npclBC:.BYTE	0
_npclBD:.BYTE	0
_npclBE:.BYTE	0
_npclBF:.BYTE	0
_npclC0:.BYTE	$18,$1C,$14,$91,$87
		.BYTE	$18,$22,  6,$86,$84
		.BYTE	$78,$23,$80,$8D,$9A
		.BYTE	$9A, $F,$8C,$99,$91,$A5
		.BYTE	$9E,$1D,$8B,$84,$8F,$A4,$17,$11
		.BYTE	$9F,$2D,$89,  3,$8D,$AF,$A1,$18,  3
		.BYTE	$9F, $D,$8D,$85,$94,$8F,$52,$18,  7
		.BYTE	$9F, $C,$8E,$81,$9B,$AF,$A3,$19,$14
		.BYTE	$9F,$1E, $A,$8B,$8F,$14,$A2,$16,  4
		.BYTE	$10,$4E,  0,$8D,$16
		.BYTE	$10,$4E,  0,$90,$16
		.BYTE	$10,$64,$A0,$8F,$17
		.BYTE	$90, $E,$8A,$16,  6
		.BYTE	$90,$2E,$8F,$8E,$1D
		.BYTE	$90,$16,$90,$90,$1D
		.BYTE	0
_npclC1:.BYTE	$18,$2D,$A7,  2,  7
		.BYTE	$18,$20,$A6,$85,$86
		.BYTE	0
_npclC2:.BYTE	$18,$1C,$14,$91,$87
		.BYTE	$18,$22,  6,$86,$84
		.BYTE	$78,$14,$81,$85,$98
		.BYTE	$9A, $F,$8C,$99,$91,$A5
		.BYTE	$9E,$1D,$8B,$84,$8F,$A4,$17,$11
		.BYTE	$9F,$2D,$89,  3,$8D,$AF,$A1,$18,  3
		.BYTE	$9F, $D,$8D,$85,$94,$8F,$52,$18,  7
		.BYTE	$9F, $C,$8E,$81,$9B,$AF,$A3,$19,$14
		.BYTE	$9F,$1E, $A,$8B,$8F,$14,$A2,$16,  4
		.BYTE	$10,$4E,  0,$8D,$16
		.BYTE	$10,$4E,  0,$90,$16
		.BYTE	$10,$64,$A0,$8F,$17
		.BYTE	$90, $E,$8A,$16,  6
		.BYTE	$90,$2E,$8F,$8E,$1D
		.BYTE	$90,$16,$90,$90,$1D
		.BYTE	0
_npclC3:.BYTE	0
_npclC4:.BYTE	$F8,$21,$35,$86,$85
		.BYTE	$F8,$17,$36,$87,$85
		.BYTE	0
_npclC5:.BYTE	0
_npclC6:.BYTE	$78, $A,$1B,$8E,$9A
		.BYTE	$78, $A,$1A,$96,$8C
		.BYTE	0
_npclC7:.BYTE	0
_npclC8:.BYTE	0
_npclC9:.BYTE	0
_npclCA:.BYTE	0
_npclCB:.BYTE	$18,$13,  0,$8B,$9C
		.BYTE	$18,$59,  0,$8A,$9C
		.BYTE	$18,$91,  0,$8D,$C4
		.BYTE	$18,$85,  0,$8D,$C4
		.BYTE	0
_npclCC:.BYTE	$18,$4E,  0,$89,$88
		.BYTE	$18,$4E,  0,$8D,$88
		.BYTE	$18,$4E,  0,$8D,$8B
		.BYTE	$18,$4E,  0,$89,$8B
		.BYTE	$18,$4E,  0,$8D,$B6
		.BYTE	$18,$4E,  0,$88,$BC
		.BYTE	$18,$4E,  0,$8E,$BC
		.BYTE	$18,$4E,  0,$89,$B9
		.BYTE	$18,$4E,  0,$8D,$B9
		.BYTE	$18,$4E,  0,$89,$B6
		.BYTE	$18,$7E,  0,$8B,$86
		.BYTE	$18,$7C,  0,$8B,$85
		.BYTE	$18,$7D,  0,$8C,$85
		.BYTE	$18,$7F,  0,$8C,$86
		.BYTE	0
_npclCD:.BYTE	$78,$1E,$6D,$88,$82
		.BYTE	$18,$20,$63,$87,$8F
		.BYTE	0
_npclCE:.BYTE	$18,$2E, $F,$9F,$82
		.BYTE	$78,$1D,$72,$82,$97
		.BYTE	$18,  9,$71,$83,$94
		.BYTE	$78, $B,$74,$25, $E
		.BYTE	$78,$22,$73,  6,$85
		.BYTE	$9B,$28,$55,$26,$88,$A9,$52
		.BYTE	$1D,$16,$72,$15,$93,$95,$1F,  8
		.BYTE	$5E,$17,$EE,$93,$83,$73,$1A,$18
		.BYTE	$DF,$2D,$CB,  8,$8E,$95,  0,$14,  4
		.BYTE	$90,$14,  4,$92,$17
		.BYTE	$D0,$36,$CC,$16,  9
		.BYTE	$90,$14,$59,$A1,$17
		.BYTE	$90,$2C,$5A,$A1,$19
		.BYTE	$90,$34,$5B,$A3,$19
		.BYTE	$90,$2F,$58,$A9,$17
		.BYTE	$90,$36,$57,$A1,$13
		.BYTE	$90,  9,$56,$10,  2
		.BYTE	0
_npclCF:.BYTE	$18,$71,  0,$96,$8B
		.BYTE	0
_npclD0:.BYTE	0
_npclD1:.BYTE	0
_npclD2:.BYTE	0
_npclD3:.BYTE	0
_npclD4:.BYTE	0
_npclD5:.BYTE	0
_npclD6:.BYTE	0
_npclD7:.BYTE	0
_npclD8:.BYTE	$FA,$22,$DF,$89,$87,$92
		.BYTE	0
_npclD9:.BYTE	0
_npclDA:.BYTE	0
_npclDB:.BYTE	0
_npclDC:.BYTE	0
_npclDD:.BYTE	0
_npclDE:.BYTE	0
_npclDF:.BYTE	0
_npclE0:.BYTE	0
_npclE1:.BYTE	$78,$10,$15,$93,$90
		.BYTE	0
_npclE2:.BYTE	0
_npclE3:.BYTE	0
_npclE4:.BYTE	0
_npclE5:.BYTE	0
_npclE6:.BYTE	0
_npclE7:.BYTE	0
_npclE8:.BYTE	0
_npclE9:.BYTE	$78,$10,$17,$91,$93
		.BYTE	0
_npclEA:.BYTE	0
_npclEB:.BYTE	$18, $A,  0,$90,$8F
		.BYTE	$18,$12,  0,$91,$8F
		.BYTE	$18, $A,  0,$92,$8F
		.BYTE	$18, $A,  0,$91,$8E
		.BYTE	0
_npclEC:.BYTE	$18,  8,  0,$88,$87
		.BYTE	$18,  9,  0,$86,$88
		.BYTE	0
_npclED:.BYTE	$18,$1E, $D,$85,$84
		.BYTE	0
_npclEE:.BYTE	$18, $A,  0,$85,$86
		.BYTE	$18, $A,  0,$88,$86
		.BYTE	$18, $A,  0,$86,$85
		.BYTE	$18,$12,  0,$87,$84
		.BYTE	0
_npclEF:.BYTE	$18,$6E,  0,$8F,$B2
		.BYTE	0
_npclF0:.BYTE	0
_npclF1:.BYTE	0
_npclF2:.BYTE	0
_npclF3:.BYTE	$18,$52,  6,$8C,$84
		.BYTE	$98,$22,$CD,$91,$99
		.BYTE	$18,$1D,$1D,$81,$89
		.BYTE	$1B,$34,$F1,$9D,$8F,$64,$F4
		.BYTE	$1C,$17,$F3,$92,$A6,  8,$16
		.BYTE	$1F,$1F,$34,$1F,$97,$B5,$F5,$1D,$12
		.BYTE	$90,$22,$CC,$19,$23
		.BYTE	$90,$16,$CB,$1C,$1F
		.BYTE	$90,$15,$C8, $E,$12
		.BYTE	$90,$64,$C9,$99,  4
		.BYTE	$90,$2E,$CA,$19,$15
		.BYTE	0
_npclF4:.BYTE	$78, $A,$8C,$8F,$9B
		.BYTE	$78, $A,$8C,$8D,$9B
		.BYTE	$78,$24,  3,  7,$11
		.BYTE	$79, $B, $A,  7,$87,  8
		.BYTE	$1A, $A,$F8,$8E,$87,$59
		.BYTE	$9F,$1B,$D5, $D,$81,$AD,$A3,$14,$11
		.BYTE	$9F, $A,$1E,$9B,$87,$AD,$A3,$14, $F
		.BYTE	$90,$2D,$CF,$16,  9
		.BYTE	$90,$2C,$D6,$18, $C
		.BYTE	$50,  2,$B3,$8E, $B
		.BYTE	$90,  9,$D7,$8D, $C
		.BYTE	$90, $B,$D7,$8F, $C
		.BYTE	0
_npclF5:.BYTE	8,$81,$52, $D,$85
		.BYTE	0
_npclF6:.BYTE	$D0,$11,$F1,  2,  3
		.BYTE	0
_npclF7:.BYTE	$18,$E3,$B2,$8C,$81
		.BYTE	$78,  8,  4,$81,$83
		.BYTE	0
_npclF8:.BYTE	$78, $C,  5,$81,$8A
		.BYTE	0
_npclF9:.BYTE	$18,$52,  6,$8C,$84
		.BYTE	$98,$22,$CD,$91,$99
		.BYTE	$18,$1D,$1D,$81,$89
		.BYTE	$1B,$34,$F1,$9D,$8F,$64,$FE
		.BYTE	$1C,$17,$F3,$92,$A6,  8,$16
		.BYTE	$1F,$1F,$34,$1F,$97,$B5,$F5,$1D,$12
		.BYTE	$90,$22,$D4,$19,$23
		.BYTE	$90,$16,$D3,$1C,$1F
		.BYTE	$90,$15,$C8, $E,$12
		.BYTE	$10,$64,$FE,$99,  4
		.BYTE	$90,$2E,$D2,$19,$15
		.BYTE	0

; =============== S U B	R O U T	I N E =======================================
; calculates the color of the window and dialog frames palette value (idx 01)
; based on current players status.
;
_bD_s28_frame_palette_by_status_adjust:
		LDX		#0
		STX		byte_10
loc_1415A4:
		TXA
		ASL
		TAY
		LDA		_players_status,Y		; test if any players dead (80)
		EOR		_players_status+1,Y
		BPL		loc_1415B1
		INC		byte_10					; death people counter
loc_1415B1:
		INX
		CPX		#4
		BNE		loc_1415A4
		LDA		byte_10
		BNE		loc_141612				; at least one is dead, then color is orange
		LDX		#0
		STX		byte_10
loc_1415BE:
		TXA
		ASL
		TAY
		LDA		_players_status,Y
		AND		_players_status+1,Y
		BPL		loc_1415EF
		LDA		_players_MHP,Y
		STA		byte_11
		LDA		_players_MHP+1,Y
		STA		_tmp12
		LSR		_tmp12
		ROR		byte_11
		LSR		_tmp12
		ROR		byte_11
		LDA		_players_HP+1,Y
		CMP		_tmp12
		BEQ		loc_1415E6
		BCC		loc_1415ED
		BCS		loc_1415EF
loc_1415E6:
		LDA		_players_HP,Y
		CMP		byte_11
		BCS		loc_1415EF
loc_1415ED:
		INC		byte_10
loc_1415EF:
		INX
		CPX		#4
		BNE		loc_1415BE
		LDA		byte_10
		BEQ		loc_1415FC
		LDA		#$2A
		BNE		loc_141614
loc_1415FC:
		LDA		_global_flags_array.byte2
		AND		#$20
		BNE		loc_14160A
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_14160E
loc_14160A:
		LDA		#$30
		BNE		loc_141614
loc_14160E:
		LDA		#$21
		BNE		loc_141614
loc_141612:
		LDA		#$27				; orange (death)
loc_141614:
		LDX		byte_6A58
		BNE		loc_14161B
		LDA		#$30
loc_14161B:
		STA		_ram_pal_buf+1
		STA		_current_pc_status_pal_value
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s29:
		LDX		#0
loc_141624:
		LDA		byte_6A6F,X
		CMP		#$18
		BEQ		loc_141631
loc_14162B:
		INX
		CPX		#4
		BNE		loc_141624
		RTS
loc_141631:
		TXA
		PHA
		FARX	_b4_sE
		LDA		_players_level
		LDX		#word_3C
		JSR		_mul16_to_8
		LDA		#$64
		JSR		_div16_to_8
		INC		word_3C
		LDA		word_3C
		CMP		#$82
		BCC		loc_141650
		LDA		#$82
		FARX	_b4_sF_rand_mul_A
loc_141650:
		STA		word_4
		PLA
		TAX
		LDA		word_4
		STA		byte_6A73,X
		JMP		loc_14162B

; =============== S U B	R O U T	I N E =======================================
_bD_s2:
		LDA		_location_type
		AND		#1
		BNE		loc_141666
		JSR		sub_14193F
locret_141665:
		RTS
loc_141666:
		LDA		_npc_anim_script_idx
		BNE		locret_141665
		LDA		byte_90
		AND		#$F
		BNE		locret_141665
		LDA		_mapNumber
		CMP		#$B
		BEQ		loc_14167B
		CMP		#$78
		BNE		loc_141682
loc_14167B:
		LDA		_global_flags_array.byte2
		AND		#4
		BEQ		locret_141665
loc_141682:
		LDY		#$13
loc_141684:
		LDA		_players_pos_list,Y
		CMP		#$FF
		BEQ		loc_141697
		AND		#$40
		BNE		locret_141665
		INY
		INY
		INY
		INY
		CPY		#$70
		BCC		loc_141684
loc_141697:
		LDA		#1
		STA		word_72+1
		LDA		byte_90
		AND		#$70
		LSR
		CLC
		ADC		#$10
		STA		word_72
		LDA		byte_6AE6
		BMI		loc_1416AE
		LDA		word_72
		STA		byte_91
loc_1416AE:
		JSR		loc_1416B1
loc_1416B1:
		JSR		sub_1416B7
		JMP		loc_141B48

; =============== S U B	R O U T	I N E =======================================
sub_1416B7:
		LDA		#0
		STA		byte_7F
		LDA		byte_176
		BEQ		loc_1416CE
		LDX		#0
		LDA		word_72
loc_1416C4:
		CMP		byte_177,X
		BEQ		locret_1416D4
		INX
		CPX		#4
		BNE		loc_1416C4
loc_1416CE:
		LDY		#3
		LDA		(word_72),Y
		BPL		loc_1416D5
locret_1416D4:
		RTS
loc_1416D5:
		AND		#$FC
		STA		(word_72),Y
		JSR		sub_1417DD

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_bD_sE:
		AND		#3
		PHA
		LDY		#3
		ORA		(word_72),Y
		STA		(word_72),Y
		LDY		#0
		LDA		(word_72),Y
		PHA
		TAX
		INY
		LDA		(word_72),Y
		PHA
		TAY
		JSR		sub_1777C2
		PLA
		TAY
		PLA
		TAX
		BCC		loc_141722
		JSR		_map_ReadTileCheckedXY
		AND		#$E0
		CMP		byte_8C
		BNE		loc_141722
		LDA		byte_8E
		BPL		loc_141724
		LDY		#0
		LDA		(word_72),Y
		SEC
		SBC		_playerMapX
		CLC
		ADC		#8
		STA		word_4
		INY
		LDA		(word_72),Y
		SEC
		SBC		_playerMapY
		CLC
		ADC		#7
		STA		word_4+1
		FARX	_bE_s9
		BCC		loc_141724
loc_141722:
		PLA
		RTS
loc_141724:
		LDY		#2
		LDA		(word_72),Y
		AND		#$F
		JSR		sub_1778D7
		LDY		#3
		LDA		(word_72),Y
		PHA
		JSR		sub_177909
		PLA
		AND		#$3C
		BEQ		loc_141722
		TAY
		JSR		sub_177385
		JSR		sub_17732F
		INC		byte_7F
		PLA
		BEQ		loc_14176A
		CMP		#1
		BEQ		loc_14175C
		CMP		#2
		BEQ		loc_141777
		JSR		sub_141924
		JSR		_ptr72_byte_0_dec
		JSR		sub_141831
		BCC		loc_141784
		JMP		_ptr72_byte_0_inc
loc_14175C:
		JSR		sub_141924
		JSR		_ptr72_byte_0_inc
		JSR		sub_141831
		BCC		loc_141784
		JMP		_ptr72_byte_0_dec
loc_14176A:
		JSR		sub_141924
		JSR		_ptr72_byte_1_dec
		JSR		sub_141831
		BCC		loc_141784
		BCS		_ptr72_byte_1_inc
loc_141777:
		JSR		sub_141924
		JSR		_ptr72_byte_1_inc
		JSR		sub_141831
		BCC		loc_141784
		BCS		_ptr72_byte_1_dec
loc_141784:
		LDA		byte_7F
		BEQ		locret_141790
		LDY		#3
		LDA		#$40
		ORA		(word_72),Y
		STA		(word_72),Y
locret_141790:
		RTS

; =============== S U B	R O U T	I N E =======================================
_ptr72_byte_0_dec:
		LDY		#0
		LDA		(word_72),Y
		SEC
		SBC		#1
		STA		(word_72),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
_ptr72_byte_1_dec:
		LDY		#1
		LDA		(word_72),Y
		SEC
		SBC		#1
		STA		(word_72),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
_ptr72_byte_0_inc:
		LDY		#0
		LDA		(word_72),Y
		CLC
		ADC		#1
		STA		(word_72),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
_ptr72_byte_1_inc:
		LDY		#1
		LDA		(word_72),Y
		CLC
		ADC		#1
		STA		(word_72),Y
locret_1417B8:
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_1417B9:
;		JSR		sub_141831
;		BCS		locret_1417B8
;		LDA		_heroTileMovePixelsRemain
;		BEQ		loc_1417C9
;		LDA		_playerFacingDir
;		AND		#1
;		BNE		loc_1417DB
;loc_1417C9:
;		CLC
;locret_1417CA:
;		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_1417CB:
;		JSR		sub_141831
;		BCS		locret_1417CA
;		LDA		_heroTileMovePixelsRemain
;		BEQ		loc_1417C9
;		LDA		_playerFacingDir
;		AND		#1
;		BNE		loc_1417C9
;loc_1417DB:
;		SEC
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1417DD:
		JSR		_rand
		LDX		_heroTileMovePixelsRemain
		BEQ		locret_141801
		PHA
		LDY		#0
		LDA		(word_72),Y
		TAX
		INY
		LDA		(word_72),Y
		TAY
		JSR		sub_1777CD
		PLA
		BCS		locret_141801
		AND		#$FE
		STA		word_4
		LDA		_playerFacingDir
		AND		#1
		EOR		#1
		ORA		word_4
locret_141801:
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_141802:
;		JSR		sub_141831
;		BCS		locret_141801
;		LDY		#1
;loc_141809:
;		LDA		(word_72),Y
;		AND		#7
;		CMP		#7
;		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_141810:
;		JSR		sub_141831
;		BCS		locret_141801
;		LDY		#0
;		BEQ		loc_141820
;		JSR		sub_141831
;		BCS		locret_141801
;		LDY		#1
;loc_141820:
;		LDA		(word_72),Y
;		AND		#7
;		BEQ		loc_1417DB
;		CLC
;		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_141828:
;		JSR		sub_141831
;		BCS		locret_141801
;		LDY		#0
;		BEQ		loc_141809

; =============== S U B	R O U T	I N E =======================================
sub_141831:
		JSR		_ptr72_get_word
		JSR		_map_ReadTileCheckedXY
		AND		#$E0
		STA		byte_78
		JSR		sub_141878
		BCS		locret_141861
		JSR		sub_141884
		BCS		locret_141861
		JSR		sub_1418BB
		BCS		locret_141861
		JSR		sub_1418C7
		BCS		locret_141861
		JSR		sub_1418D5
		BCS		locret_141861
		JSR		sub_141862
		BCS		locret_141861
		JSR		sub_1418F4
		BCS		locret_141861
		JSR		sub_1418FE
locret_141861:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141862:
		LDA		word_7C
		AND		#$1F
		TAX
		LDA		_tile_type_and_collision_flags,X
		AND		#$F
		CMP		#7
		BEQ		loc_141876
		CMP		#8
		BEQ		loc_141876
loc_141874:
		CLC
		RTS
loc_141876:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141878:
		LDA		word_7C
		AND		#$1F

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_bD_s3:
		TAX
		LDA		_tile_type_and_collision_flags,X
		BPL		loc_141874
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141884:
		JSR		_ptr72_get_word
		STX		word_4
		STY		word_4+1
		LDA		#0
		STA		byte_74
		LDA		#1
		STA		byte_75
		LDY		#0
loc_141895:
		LDA		(byte_74),Y
		CMP		#$FF
		BEQ		loc_1418A6
		CMP		word_4
		BEQ		loc_1418A8
		INY
loc_1418A0:
		INY
		INY
		INY
		JMP		loc_141895
loc_1418A6:
		CLC
		RTS
loc_1418A8:
		INY
		LDA		(byte_74),Y
		CMP		word_4+1
		BNE		loc_1418A0
		DEY
		TYA
		INY
		CMP		word_72
		BNE		loc_1418B9
		JMP		loc_1418A0
loc_1418B9:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1418BB:
		JSR		_ptr72_get_word
		TXA
		CMP		_mapWidth
		BCS		locret_1418C6
		TYA
		CMP		_mapHeight
locret_1418C6:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1418C7:
		LDA		word_7C
		AND		#$E0
		CMP		byte_78
		BNE		loc_1418D3
		CMP		byte_8C
		BEQ		loc_1418A6
loc_1418D3:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1418D5:
		LDA		byte_8E
		BPL		loc_1418F2
		JSR		_ptr72_get_word
		TXA
		SEC
		SBC		_playerMapX
		CLC
		ADC		#8
		STA		word_4
		TYA
		SEC
		SBC		_playerMapY
		CLC
		ADC		#7
		STA		word_4+1
		FARX	_bE_s9
		RTS
loc_1418F2:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1418F4:
		LDA		byte_79
		BEQ		loc_1418F2
		JSR		_ptr72_get_word
		JMP		sub_1777C2

; =============== S U B	R O U T	I N E =======================================
sub_1418FE:
		LDA		_heroTileMovePixelsRemain
		BEQ		loc_1418F2
		LDA		_playerFacingDir
		CMP		#3
		BEQ		loc_14190F
		CMP		#1
		BEQ		loc_14191C
		BNE		loc_1418F2
loc_14190F:
		LDA		_playerMapX
		SEC
		SBC		#8
loc_141914:
		LDY		#0
		CMP		(word_72),Y
		BNE		loc_1418F2
		SEC
		RTS
loc_14191C:
		LDA		_playerMapX
		CLC
		ADC		#7
		JMP		loc_141914

; =============== S U B	R O U T	I N E =======================================
sub_141924:
		LDA		#0
		STA		byte_79
		JSR		_ptr72_get_word
		JSR		sub_1777C2
		BCS		locret_141934
		LDA		#$FF
		STA		byte_79
locret_141934:
		RTS

; =============== S U B	R O U T	I N E =======================================
_ptr72_get_word:
		LDY		#0
		LDA		(word_72),Y
		TAX
		INY
		LDA		(word_72),Y
		TAY
locret_14193E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_14193F:
		LDA		byte_90
		AND		#$3F
		BNE		locret_14193E
		LDA		_location_type
		AND		#2
		BNE		locret_14193E
		LDA		_blockPlayerInputDuringMap
		BNE		locret_14193E
		LDX		_ghostShipWorldX
		LDY		_ghostShipWorldY
		CPX		_playerWorldX
		BNE		loc_14195B
		CPY		_playerWorldY
		BEQ		locret_14193E
loc_14195B:
		LDA		byte_97
		AND		#$10
		BEQ		locret_14193E
		STX		byte_80
		STY		byte_81
		JSR		sub_1777B7
		PHP
		PLA
		STA		word_3C+1
		JSR		sub_141A92
		BCS		locret_14193E
		JSR		_rand
		AND		#7
		BEQ		loc_14197D
		LDA		byte_9D
		JMP		loc_141995
loc_14197D:
		JSR		_rand
		AND		#3
		STA		word_3E
		LDA		byte_9D
		AND		#3
		EOR		word_3E
		CMP		#2
		BNE		loc_141993
		LDA		byte_9D
		JMP		loc_141995
loc_141993:
		LDA		word_3E
loc_141995:
		AND		#3
		PHA
		BEQ		loc_1419B0
		CMP		#1
		BEQ		loc_1419BE
		CMP		#2
		BEQ		loc_1419CC
		DEC		byte_80
		JSR		sub_1419FB
		BCS		loc_1419E8
		LDA		byte_80
		STA		_ghostShipWorldX
		JMP		loc_1419D7
loc_1419B0:
		DEC		byte_81
		JSR		sub_1419FB
		BCS		loc_1419E8
		LDA		byte_81
		STA		_ghostShipWorldY
		JMP		loc_1419D7
loc_1419BE:
		INC		byte_80
		JSR		sub_1419FB
		BCS		loc_1419E8
		LDA		byte_80
		STA		_ghostShipWorldX
		JMP		loc_1419D7
loc_1419CC:
		INC		byte_81
		JSR		sub_1419FB
		BCS		loc_1419E8
		LDA		byte_81
		STA		_ghostShipWorldY
loc_1419D7:
		LDX		_ghostShipWorldX
		LDY		_ghostShipWorldY
		JSR		sub_1777B7
		BCC		loc_1419E8
		LDA		byte_9D
		ORA		#8
		STA		byte_9D
		BNE		loc_1419EF
loc_1419E8:
		PLA
		JSR		_rand
		AND		#3
		PHA
loc_1419EF:
		LDA		byte_9D
		AND		#$FC
		STA		byte_9D
		PLA
		ORA		byte_9D
		STA		byte_9D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1419FB:
		LDA		_heroTileMovePixelsRemain
		BEQ		loc_141A50
		LDA		_playerFacingDir
		BEQ		loc_141A2E
		CMP		#1
		BEQ		loc_141A1D
		CMP		#2
		BEQ		loc_141A3F
		LDA		_playerWorldX
		SEC
		SBC		#8
		TAX
		CMP		_ghostShipWorldX
		BEQ		loc_141A4E
		INX
		CPX		_ghostShipWorldX
		BNE		loc_141A50
		SEC
		RTS
loc_141A1D:
		LDA		_playerWorldX
		CLC
		ADC		#6
		TAX
		CMP		_ghostShipWorldX
		BEQ		loc_141A4E
		INX
		CPX		_ghostShipWorldX
		BNE		loc_141A50
		SEC
		RTS
loc_141A2E:
		LDA		_playerWorldY
		SEC
		SBC		#7
		TAX
		CMP		_ghostShipWorldY
		BEQ		loc_141A4E
		INX
		CPX		_ghostShipWorldY
		BNE		loc_141A50
		SEC
		RTS
loc_141A3F:
		LDA		_playerWorldY
		CLC
		ADC		#6
		TAX
		CMP		_ghostShipWorldY
		BEQ		loc_141A4E
		INX
		CPX		_ghostShipWorldY
		BNE		loc_141A50
loc_141A4E:
		SEC
		RTS
loc_141A50:
		JSR		sub_141A92
		BCS		locret_141A91
		LDX		byte_80
		LDY		byte_81
		CPX		_playerWorldX
		BNE		loc_141A61
		CPY		_playerWorldY
		BEQ		loc_141A4E
loc_141A61:
		CPX		byte_2D
		BNE		loc_141A69
		CPY		byte_2E
		BEQ		loc_141A4E
loc_141A69:
		JSR		sub_1777B7
		PHP
		PLA
		EOR		word_3C+1
		AND		#1
		BNE		loc_141A4E
		LDA		byte_80
		SEC
		SBC		#$10
		CMP		#$DF
		BCS		locret_141A91
		LDA		byte_81
		SEC
		SBC		#$F
		CMP		#$E1
		BCS		locret_141A91
		LDX		byte_80
		LDY		byte_81
		JSR		sub_176CA4
		LDA		word_7C
		CMP		#1
locret_141A91:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141A92:
		LDA		byte_8E
		BPL		loc_141AAE
		LDA		byte_80
		SEC
		SBC		_playerWorldX
		CLC
		ADC		#8
		STA		word_4
		LDA		byte_81
		SEC
		SBC		_playerWorldY
		CLC
		ADC		#7
		STA		word_4+1
		FARX	_bE_s9
		RTS
loc_141AAE:
		CLC
locret_141AAF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141AB0:
		LDA		_location_type
		AND		#2
		BNE		locret_141AAF
		LDA		byte_9D
		AND		#8
		BEQ		locret_141AAF
		LDX		_ghostShipWorldX
		LDY		_ghostShipWorldY
		LDA		byte_9D
		AND		#3
		BEQ		loc_141AD2
		CMP		#1
		BEQ		loc_141AD6
		CMP		#2
		BEQ		loc_141ADA
		INX
		JMP		loc_141ADB
loc_141AD2:
		INY
		JMP		loc_141ADB
loc_141AD6:
		DEX
		JMP		loc_141ADB
loc_141ADA:
		DEY
loc_141ADB:
		JSR		sub_1777B7
		BCS		loc_141AE7
		LDA		byte_9D
		AND		#7
		STA		byte_9D
		RTS
loc_141AE7:
		LDA		byte_9D
		CLC
		ADC		#$10
		STA		byte_9D
		LDA		#$14
		STA		byte_8
		JSR		sub_141B0B
		JSR		sub_141B0B
		JSR		sub_141B0B
		JSR		sub_141B0B
		LDA		byte_9D
		AND		#$F0
		BNE		locret_141B0A
		LDA		byte_9D
		AND		#$F7
		STA		byte_9D
locret_141B0A:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141B0B:
		LDA		byte_9D
		PHA
		LDY		byte_8
		JMP		loc_141C8B

; =============== S U B	R O U T	I N E =======================================
_bD_s6:
		LDA		_location_type
		AND		#1
		BNE		loc_141B1C
		JMP		sub_141AB0
loc_141B1C:
		LDA		_npc_anim_script_idx
		BEQ		loc_141B3A
		LDA		#>[_players_pos_list]
		STA		word_72+1
		LDX		#0
loc_141B27:
		LDA		_npc_anim_script_phase_slot_list,X
		STA		word_72
		TXA
		PHA
		JSR		sub_141B45
		PLA
		TAX
		INX
		CPX		_npc_anim_script_phase_count
		BNE		loc_141B27
		RTS
loc_141B3A:
		LDA		#>[_players_pos_list]
		STA		word_72+1
		LDA		byte_91
		STA		word_72
		JSR		sub_141B45

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_141B45:
		JSR		sub_141B50
loc_141B48:
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141B50:
		LDY		#3
		LDA		(word_72),Y
		BPL		loc_141B5E
		LDA		byte_6AE6
		BMI		loc_141B5C
locret_141B5B:
		RTS
loc_141B5C:
		LDA		(word_72),Y
loc_141B5E:
		AND		#$40
		BEQ		locret_141B5B
		LDA		_npc_anim_script_idx
		CMP		#$31
		BNE		loc_141B6D
		LDA		#2
		BNE		loc_141B73
loc_141B6D:
		LDY		#3
		LDA		(word_72),Y
		AND		#3
loc_141B73:
		PHA
		LDY		#0
		LDA		(word_72),Y
		TAX
		INY
		LDA		(word_72),Y
		TAY
		PLA
		BEQ		loc_141B90
		CMP		#1
		BEQ		loc_141B8C
		CMP		#2
		BEQ		loc_141B94
		INX
		JMP		loc_141B95
loc_141B8C:
		DEX
		JMP		loc_141B95
loc_141B90:
		INY
		JMP		loc_141B95
loc_141B94:
		DEY
loc_141B95:
		JSR		sub_1777C2
		BCS		loc_141BA3
		LDY		#3
		LDA		#$BF
		AND		(word_72),Y
		STA		(word_72),Y
locret_141BA2:
		RTS
loc_141BA3:
		LDY		#2
		LDA		(word_72),Y
		CLC
		ADC		#$10
		STA		(word_72),Y
		LDA		#0
		STA		byte_8
		STA		byte_9
		JSR		sub_141C7E
		JSR		sub_141C7E
		JSR		sub_141C7E
		JSR		sub_141C7E
		LDY		#2
		LDA		(word_72),Y
		AND		#$F0
		BEQ		loc_141BCE
		LDA		byte_6AE6
		BPL		locret_141BA2
		JMP		_wait_for_nmi_is_over_sync
loc_141BCE:
		INY
		LDA		#$BF
		AND		(word_72),Y
		STA		(word_72),Y
		LDX		byte_9
		BNE		sub_141C10
		LDX		byte_6AE6
		BPL		locret_141C0F
		PHA
		LDA		byte_6AE6
		AND		#$7F
		STA		byte_6AE6
		LDY		#0
		LDA		(word_72),Y
		TAX
		INY
		LDA		(word_72),Y
		TAY
		JSR		_map_ReadTileCheckedXY
		PLA
		TAX
		LDA		word_7C
		AND		#$1F
		CMP		#$1C
		BNE		sub_141C1C
		LDY		#0
		LDA		#$FE
		STA		(word_72),Y
		INY
		STA		(word_72),Y
		INY
		INY
		LDA		(word_72),Y
		AND		#$3C
		FARX	_bC_s9
locret_141C0F:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141C10:
		TAX
		AND		#$C3
		STA		(word_72),Y
		TXA
		AND		#$3C
		FARX	_b5_s3
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141C1C:
		LDA		_mapNumber
		CMP		#$4E ; Eginbear Boulder Puzzle Basement
		BNE		locret_141C0F
		LDA		#5
		CMP		_npcs_pos_list+1
		BNE		locret_141C0F
		CMP		_npcs_pos_list+5
		BNE		locret_141C0F
		CMP		_npcs_pos_list+9
		BNE		locret_141C0F
		LDA		_npcs_pos_list
		CLC
		ADC		_npcs_pos_list+4
		CLC
		ADC		_npcs_pos_list+8
		CMP		#$F
		BNE		locret_141C0F
		LDX		_playerMapX
		STX		word_3C
loc_141C46:
		LDY		_playerMapY
		INC		word_3C
		LDX		word_3C
		JSR		_map_ReadTileCheckedXY
		AND		#$1F
		CMP		#8
		BEQ		loc_141C46
		LDA		word_3C
		SEC
		SBC		_playerMapX
		CLC
		ADC		#8
		ASL
		STA		word_4
		LDA		#$E
		STA		word_4+1
		LDA		#8
		STA		byte_7485
		FARX	_bC_sA
		DEC		word_4+1
		DEC		word_4+1
		LDA		#$1B
		STA		byte_7470
		FARX	_bC_sA
		SYSX	_apu_load,#SFX_BLAST_95
		JMP		_ppu_set_dequeue_flag

; =============== S U B	R O U T	I N E =======================================
sub_141C7E:
		LDY		#3
		LDA		(word_72),Y
		PHA
		AND		#$3C
		BEQ		loc_141C9F
		CLC
		ADC		byte_8
		TAY
loc_141C8B:
		LDX		#4
		JSR		sub_1741FD
		LDA		word_6
		CMP		#$F8
		BNE		loc_141CA1
		PLA
		LDX		_tmp21
		JSR		sub_141D22
		INC		byte_8
		RTS
loc_141C9F:
		PLA
		RTS
loc_141CA1:
		LDA		_npc_anim_script_idx
		CMP		#$31
		BNE		loc_141CAC
		PLA
		JMP		loc_141CE3
loc_141CAC:
		PLA
		AND		#3
		BEQ		loc_141CCB
		CMP		#1
		BEQ		loc_141CC4
		CMP		#2
		BEQ		loc_141CE3
		DEC		word_6+1
		LDA		word_6+1
		CMP		#$FF
		BEQ		loc_141CF9
		JMP		sub_141D09
loc_141CC4:
		INC		word_6+1
		BEQ		loc_141CF9
		JMP		sub_141D09
loc_141CCB:
		DEC		word_4
		LDA		_location_type
		AND		#1
		BNE		loc_141CDB
		LDA		word_4
		CMP		#$F7
		BEQ		loc_141CF9
		BNE		sub_141D09
loc_141CDB:
		LDA		word_4
		CMP		#$F3
		BEQ		loc_141CF9
		BNE		sub_141D09
loc_141CE3:
		INC		word_4
		LDA		_location_type
		AND		#1
		BNE		loc_141CF3
		LDA		word_4
		CMP		#$EF
		BEQ		loc_141CF9
		BNE		sub_141D09
loc_141CF3:
		LDA		word_4
		CMP		#$EB
		BNE		sub_141D09
loc_141CF9:
		LDA		#$F8
		STA		word_4
		STA		word_4+1
		STA		word_6
		STA		word_6+1
		JSR		sub_141D09
		JMP		sub_141D22

; =============== S U B	R O U T	I N E =======================================
sub_141D09:
		LDX		_tmp21
		LDA		word_4
		STA		_spr_ram,X
		LDA		word_4+1
		STA		_spr_ram+1,X
		LDA		word_6
		STA		_spr_ram+2,X
		LDA		word_6+1
		STA		_spr_ram+3,X
		INC		byte_8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141D22:
		LDA		_location_type
		AND		#1
		BEQ		locret_141D21
		TXA
		AND		#$F0
		TAX
		INX
		INX
		LDA		_spr_ram,X
		INX
		INX
		INX
		INX
		AND		_spr_ram,X
		INX
		INX
		INX
		INX
		AND		_spr_ram,X
		INX
		INX
		INX
		INX
		AND		_spr_ram,X
		CMP		#$F8
		BNE		locret_141D21
		LDA		#$FF
		STA		byte_9
locret_141D21:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_sD:
		LDA		#0
		STA		byte_176
		STA		byte_177
		STA		byte_178
		STA		byte_179
		STA		byte_17A
		LDX		#0
		LDA		#$F8
loc_141D64:
		STA		byte_180,X
		INX
		CPX		#$40
		BNE		loc_141D64
		LDA		#<[_npcs_pos_list]
		STA		word_6C
		LDA		#>[_npcs_pos_list]
		STA		word_6C+1
loc_141D74:
		LDY		#0
		LDA		(word_6C),Y
		CMP		#$FF
		BEQ		locret_141DBF
		STA		byte_80
		TAX
		INY
		LDA		(word_6C),Y
		STA		byte_81
		TAY
		JSR		sub_1777C2
		BCC		loc_141DB9
		LDX		_playerMapX
		LDY		_playerMapY
		JSR		_map_ReadTileCheckedXY
		AND		#$E0
		STA		byte_79
		LDX		byte_80
		LDY		byte_81
		JSR		_map_ReadTileCheckedXY
		AND		#$E0
		CMP		byte_79
		BNE		loc_141DB9
		JSR		sub_177668
		LDY		#3
		LDA		(word_6C),Y
		AND		#$C3
		ORA		byte_6BB
		STA		(word_6C),Y
		LDA		byte_6BB
		FARX	_b5_s4
		JSR		_bD_s1A
loc_141DB9:
		JSR		_add_6c_by_4
		JMP		loc_141D74
locret_141DBF:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s9:
		LDA		byte_AC
		AND		#$1F
		BNE		locret_141DCE
		LDA		_heroTileMovePixelsRemain
		BNE		loc_141DCF
		LDA		byte_86
		BEQ		loc_141DCF
locret_141DCE:
		RTS
loc_141DCF:
		LDA		_player_vehicle
		BNE		locret_141DCE

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_bD_s7:
		LDA		byte_AC
		AND		#$1F
		BNE		locret_141DCE
		LDA		#1
		STA		word_72+1
		LDA		#4
		STA		word_72
		LDY		#4
		LDX		#4
		JSR		sub_1741FD
		LDA		byte_97
		LDX		_blockPlayerInputDuringMap
		CPX		#$12
		BCS		loc_141DFC
		AND		#$7F
		CMP		#$40
		BCC		loc_141DFC
		JSR		sub_141E22
		JMP		loc_141DFF
loc_141DFC:
		JSR		sub_141E76
loc_141DFF:
		LDX		_blockPlayerInputDuringMap
		CPX		#$22
		BCS		loc_141E13
		LDA		byte_97
		AND		#$3F
		CMP		#$20
		BCC		loc_141E13
		JSR		sub_141E22
		JMP		loc_141E16
loc_141E13:
		JSR		sub_141E76
loc_141E16:
		LDA		byte_97
		AND		#$1F
		CMP		#$10
		BCC		locret_141E21
		JSR		sub_141E22
locret_141E21:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141E22:
		LDA		word_72
		LSR
		TAX
		LDA		_players_status,X
		BPL		locret_141E21
		LDX		_tmp21
		LDY		#3
		LDA		(word_72),Y
		AND		#3
		BEQ		loc_141E5B
		CMP		#1
		BEQ		loc_141E4C
		CMP		#2
		BEQ		loc_141E6A
		DEC		_spr_ram+3,X
		DEC		_spr_ram+7,X
		DEC		_spr_ram+$B,X
		DEC		_spr_ram+$F,X
		JMP		sub_141E76
loc_141E4C:
		INC		_spr_ram+3,X
		INC		_spr_ram+7,X
		INC		_spr_ram+$B,X
		INC		_spr_ram+$F,X
		JMP		sub_141E76
loc_141E5B:
		DEC		_spr_ram,X
		DEC		_spr_ram+4,X
		DEC		_spr_ram+8,X
		DEC		_spr_ram+$C,X
		JMP		sub_141E76
loc_141E6A:
		INC		_spr_ram,X
		INC		_spr_ram+4,X
		INC		_spr_ram+8,X
		INC		_spr_ram+$C,X

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_141E76:
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		LDA		_tmp21
		CLC
		ADC		#$10
		STA		_tmp21
locret_141E84:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s4:
		LDA		_player_vehicle
		BNE		locret_141E84

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_bD_s5:
		JSR		sub_141EB3
		LDA		_players_pos_list+7
		AND		#$FC
		STA		_players_pos_list+7
		LDA		byte_6BC
		AND		#3
		ORA		_players_pos_list+7
		STA		_players_pos_list+7
		LDA		byte_95
		STA		byte_96
		LDA		byte_94
		STA		byte_95
		LDA		byte_93
		STA		byte_94
		LDA		byte_92
		STA		byte_93
		SEC
		ROR		byte_97
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141EB3:
		LDX		#$B
		JSR		sub_141EBA
		LDX		#7

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_141EBA:
		LDA		_players_pos_list+4,X
		AND		#$FC
		STA		_players_pos_list+4,X
		LDA		_players_pos_list,X
		AND		#3
		ORA		_players_pos_list+4,X
		STA		_players_pos_list+4,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; looking for the first non-dead player with NM status flag clear
; returns its index or the first char in formation if no others are left.
;
_bD_s26_get_first_live_player_with_no_NM_status:
		LDX		#0
loc_141ED0:
		LDA		_players_status,X
		AND		_players_status+1,X
		BPL		loc_141EDF
		LDA		_players_status+1,X
		AND		#$40
		BEQ		loc_141EE9
loc_141EDF:
		INX
		INX
		CPX		#8
		BNE		loc_141ED0
		LDA		#0
		BEQ		loc_141EEB
loc_141EE9:
		TXA
		LSR
loc_141EEB:
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_vault_item_store:
		STA		byte_C5
		LDY		#[_vault_last_item-_vault_items_list]
loc_141EF2:
		LDA		_vault_items_list-1,Y
		STA		_vault_items_list,Y
		DEY
		BNE		loc_141EF2
		LDA		byte_C5
		STA		_vault_items_list
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_vault_item_pickup:
		LDA		_vault_items_list,X
		STA		byte_C5
		INX
loc_141F09:
		LDA		_vault_items_list,X
		STA		_vault_items_list-1,X
		INX
		BPL		loc_141F09
		LDA		#$FF
		STA		byte_608C
		LDA		byte_C5
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_141F1A:
;		LDA		#1
;		INX
;loc_141F1D:
;		DEX
;		BEQ		locret_141F23
;		ASL
;		BCC		loc_141F1D
;		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s12:
		LDA		#_b0_d44_item_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$7F
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#3
		TAX
loc_141F3B:
		BEQ		locret_141F23
		JSR		_argC0_mul_9
		DEX
		JMP		loc_141F3B
locret_141F23:
		RTS

; =============== S U B	R O U T	I N E =======================================
_argC0_mul_9:
		ASL		byte_C0
		ROL		byte_C1
		ROL		byte_C2
		LDA		byte_C0
		STA		word_4
		LDA		byte_C1
		STA		word_4+1
		LDA		byte_C2
		STA		word_6
		ASL		byte_C0
		ROL		byte_C1
		ROL		byte_C2
		ASL		byte_C0
		ROL		byte_C1
		ROL		byte_C2
		CLC
		LDA		byte_C0
		ADC		word_4
		STA		byte_C0
		LDA		byte_C1
		ADC		word_4+1
		STA		byte_C1
		LDA		byte_C2
		ADC		word_6
		STA		byte_C2
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s13:
		LDX		#2
loc_141F78:
		LDA		byte_C0,X
		STA		word_4,X
		DEX
		BPL		loc_141F78
		CLC
		LDA		word_4
		ADC		#3
		STA		word_4
		LDA		word_4+1
		ADC		#0
		STA		word_4+1
		LDA		word_6
		ADC		#0
		STA		word_6
		LDX		#2
loc_141F94:
		LSR		word_6
		ROR		word_4+1
		ROR		word_4
		DEX
		BNE		loc_141F94
		SEC
		LDA		byte_C0
		SBC		word_4
		STA		byte_C0
		LDA		byte_C1
		SBC		word_4+1
		STA		byte_C1
		LDA		byte_C2
		SBC		word_6
		STA		byte_C2
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141FB1:
		JSR		_sram_b0_s1B_player_gold_read
		SEC
		LDA		word_4
		SBC		byte_C0
		LDA		word_4+1
		SBC		byte_C1
		LDA		word_6
		SBC		byte_C2
		RTS

; =============== S U B	R O U T	I N E =======================================
_question_to_select_char_display_arg12:
		LDX		#$12
		BNE		_question_to_select_char_display_ex

; =============== S U B	R O U T	I N E =======================================
_question_to_select_char_display_arg7:
		LDX		#7

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_question_to_select_char_display_ex:
		STA		byte_C4
		TXA
		PHA
		JSR		_sram_b0_s31_get_party_chars_list
		PLA
		TAY
		LDX		word_4
		DEX
		STX		byte_C3
		TXA
		BEQ		loc_141FEE
		TYA
		PHA
		LDX		#2
		LDA		byte_C4
		FARX	_bE_s4_msg_m00
		SYSX	_display_window,$1C
		STA		byte_C3
		PLA
		TAX
		JSR		_bD_s10
		LDA		byte_C3
loc_141FEE:
		CMP		#4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_141FF1:
		LDA		byte_CE
		PHA
		LDA		byte_CF
		PHA
		LDA		byte_D0
		PHA
		LDA		byte_C0
		STA		byte_CE
		LDA		byte_C1
		STA		byte_CF
		LDA		byte_C2
		STA		byte_D0
		JSR		_sram_b0_s1B_player_gold_subtract
		SYSX	_display_window,$68
		PLA
		STA		byte_D0
		PLA
		STA		byte_CF
		PLA
		STA		byte_CE
		RTS

; =============== S U B	R O U T	I N E =======================================
_players_gold_add_from_arrC0:
		LDA		byte_C0
		STA		byte_CE
		LDA		byte_C1
		STA		byte_CF
		LDA		byte_C2
		STA		byte_D0
		JMP		_sram_b0_s1B_player_gold_add

; =============== S U B	R O U T	I N E =======================================
_player_gold_add_arrC0_test_overflow:
		JSR		_sram_b0_s1B_player_gold_read
		CLC
		LDA		byte_C0		; add arrC0 value to current player's gold
		ADC		word_4
		STA		word_4
		LDA		byte_C1
		ADC		word_4+1
		STA		word_4+1
		LDA		byte_C2
		ADC		word_6
		STA		word_6
		SEC
		LDA		#$9F		; decrease 99999 to check if not above
		SBC		word_4
		LDA		#$86
		SBC		word_4+1
		LDA		#1
		SBC		word_6
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_14203D:
		LDY		#2
loc_14203F:
		LDA		byte_C0,Y
		STA		word_4,Y
		LDA		#0
		STA		byte_C0,Y
		DEY
		BPL		loc_14203F
		STA		byte_C6
		LDA		#$20
		STA		byte_C7
		LDY		#3
loc_142055:
		ASL		word_4
		ROL		word_4+1
		ROL		word_6
		DEY
		BNE		loc_142055
		LDY		#$E
loc_142060:
		LDA		word_6
		CMP		#$A
		BCC		loc_142076
		SBC		#$A
		STA		word_6
		LDA		byte_C1
		ORA		byte_C7
		STA		byte_C1
		LDA		byte_C0
		ORA		byte_C6
		STA		byte_C0
loc_142076:
		LSR		byte_C7
		ROR		byte_C6
		ASL		word_4
		ROL		word_4+1
		ROL		word_6
		DEY
		BNE		loc_142060
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s15:
		TXA
		TAY
		JSR		sub_1420A8
		LDA		(byte_BE),Y
		AND		#$7F
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s14:
		JSR		sub_1420A8
		LDY		#$FF
loc_142093:
		INY
		LDA		(byte_BE),Y
		BPL		loc_142093
		INY
		TYA
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s1F_get_vault_items_count:
		LDX		#0
loc_14209D:
		LDA		_vault_items_list,X
		BMI		loc_1420A5
		INX
		BPL		loc_14209D
loc_1420A5:
		STX		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1420A8:
		LDA		byte_6FF
		ASL
		TAX
		LDA		off_1427CC,X
		STA		byte_BE
		LDA		off_1427CC+1,X
		STA		byte_BF
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s17_search_vault_for_item:
		PHA
		JSR		_bD_s1F_get_vault_items_count
		PLA
		DEX
		BMI		loc_1420C8
loc_1420C0:
		CMP		_vault_items_list,X
		BEQ		loc_1420CA
		DEX
		BPL		loc_1420C0
loc_1420C8:
		SEC
		RTS
loc_1420CA:
		CLC
locret_1420CB:
		RTS

; =============== S U B	R O U T	I N E =======================================
; stores items of a player to the vault from newtown!
; why not use this function to remove a player in tavern without need to
; remove it's items manually?
;
_player_items_flush_to_vault:
		LDA		#0
		STA		byte_CF
loc_1420D0:
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		BEQ		locret_1420CB
		LDA		word_4+1
		AND		#$7F
		JSR		_vault_item_store
		JSR		_sram_b0_s2A_player_inventory_item_remove
		JMP		loc_1420D0

; =============== S U B	R O U T	I N E =======================================
_bD_s22_se_wait_and_map_music_start:
		FARX	_bB_s7_apu_wait
		JMP		_map_music_select_and_load

; =============== S U B	R O U T	I N E =======================================
sub_1420EE:
		MSGX	_msg_m00,$205	; "Wery well, i will record your current..."
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_1420FA
		FARX	_b7_sD_save_data
		RTS
loc_1420FA:
		MSGX	_msg_m00,$294	; "I can't record due your position, etc.."
		PLA						; here is return one level above the caller of this routine itself
		PLA						; can't be replaced with MSGX *_break opcode
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl2_b6_s16_tavern_character_registration:
		FARX	_b6_s16_tavern_character_registration
locret_142103:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142104:
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		STA		byte_CF
loc_14210B:
		DEC		byte_CF
		BMI		locret_142103
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$7F
		CMP		byte_C5
		BNE		loc_14210B
		JMP		_sram_b0_s2A_player_inventory_item_remove

; =============== S U B	R O U T	I N E =======================================
sub_142135:
		LDA		byte_6FF
		CMP		#7
		BNE		loc_14213F
		JMP		sub_1423CC
loc_14213F:
		MSGX	_msg_m00,$21E	; "This store deals weapons and armor"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_14215A
loc_142147:
		MSGX	_msg_m00,$21F	; "What will you buy"
		SYSX	_display_window,$12
		LDA		#$FF
		STA		byte_C9
		LDA		#0
		SYSX	_display_window,$36
		CMP		#$FE
		BCC		loc_14215D
loc_14215A:
		JMP		loc_1421F1
loc_14215D:
		TAX
		JSR		_bD_s15
		STA		byte_C5
		STA		byte_D2
		TAX
		JSR		_bD_s12
		JSR		sub_141FB1
		BCS		loc_142174
		MSGX	_msg_m00,$220	; "Hate to say it but you're little low on money"
		JMP		loc_1421E6
loc_142174:
		MSGX	_msg_m00,$221	; "You mean the <item>, ah good choice"
loc_142177:
		LDA		#$22
		JSR		_question_to_select_char_display_arg7	; $222 "Who will take it"
		BCS		loc_14215A
		STA		byte_CE
		STA		byte_D2
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		CMP		#8
		BCC		loc_1421AA
		MSGX	_msg_m00,$223	; "Beg your pardon it appears <name> cannot have anything more"
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#2
		BCC		loc_1421A6
		MSGX	_msg_m00,$224	; "Perhaps someone else"
		FARX	_bE_s1C_yes_or_no_question
		CMP		#1
		BCC		loc_142177
		BEQ		loc_1421A6
		JMP		loc_1421F1
loc_1421A6:
		MSGX	_msg_m00_break,$225	; "Please Come again"
loc_1421AA:
		LDA		byte_C5
		STA		byte_CF
		STA		_msg_directobject_param
		FARX	_b0_s5E_check_if_item_can_be_equipped
		BCS		loc_1421C0
		MSGX	_msg_m00,$226	; "Cannot equip with that"
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1421C0
		JMP		loc_142177
loc_1421C0:
		JSR		sub_14246C
		LDA		byte_C3
		STA		byte_CE
		LDA		byte_C5
		STA		byte_CF
		JSR		_sram_b0_sE_player_STATUS_read
		BIT		word_4
		BMI		loc_1421D8
		MSGX	_msg_m00,$227	; "All right then, I'll give it to this..."
		JMP		loc_1421E3
loc_1421D8:
		BVC		loc_1421E0
		MSGX	_msg_m00,$228
		JMP		loc_1421E3
loc_1421E0:
		MSGX	_msg_m00,$229
loc_1421E3:
		JSR		_sram_b0_s29_player_inventory_item_add
loc_1421E6:
		MSGX	_msg_m00,$22A
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_1421F1
		JMP		loc_142147
loc_1421F1:
		MSGX	_msg_m00_break,$22B
loc_1421F5:
		LDA		byte_6FF
		CMP		#$1E
		BNE		loc_1421FF
		JMP		sub_1423CC
loc_1421FF:
		CMP		#$29
		BNE		loc_14221D
		LDA		_global_flags_array.byte4
		AND		#$20
		BEQ		loc_14221D
		LDA		_global_flags_array.byte2
		BMI		loc_14221D
		LDA		#$1C
		STA		byte_CE
		FARX	_b0_s4D_is_anybody_owns_item
		BCS		loc_14221D
		LDA		#$2D
		STA		byte_6FF
loc_14221D:
		MSGX	_msg_m00,$22C
		SYSX	_display_window,$16
		LDX		#7
		JSR		_bD_s10
		CMP		#1
		BCC		loc_142234
		BEQ		loc_142231
loc_14222E:
		JMP		loc_1422DD
loc_142231:
		JMP		sub_1422E1
loc_142234:
		MSGX	_msg_m00,$22D
		SYSX	_display_window,$12
		LDA		#$FF
		STA		byte_C9
		LDA		#0
		SYSX	_display_window,$36
		CMP		#$FE
		BCS		loc_14222E
		TAX
		JSR		_bD_s15
		STA		byte_C5
		TAX
		JSR		_bD_s12
		JSR		sub_141FB1
		BCS		loc_14225C
		MSGX	_msg_m00,$22E
		JMP		loc_1422D2
loc_14225C:
		LDA		byte_C5
		STA		byte_D2
		STA		byte_CF
		MSGX	_msg_m00,$22F
loc_142265:
		LDA		#$30
		JSR		_question_to_select_char_display_arg7	; $230 "Who will take posession"
		BCC		loc_14226F
		JMP		loc_1422DD
loc_14226F:
		STA		byte_CE
		STA		byte_D2
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		CMP		#8
		BCC		loc_142293
		MSGX	_msg_m00,$232
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#2
		BCC		loc_142290
		MSGX	_msg_m00,$233
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142265
loc_142290:
		JMP		loc_1422DD
loc_142293:
		FARX	_b0_s5E_check_if_item_can_be_used
		BCS		loc_1422B0
		LDA		byte_C3
		STA		byte_D2
		MSGX	_msg_m00,$231
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1422B0
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#2
		BCC		loc_1422DD
		JMP		loc_142265
loc_1422B0:
		JSR		sub_14246C
		LDA		byte_C3
		STA		byte_CE
		STA		byte_D2
		JSR		_sram_b0_sE_player_STATUS_read
		BIT		word_4
		BMI		loc_1422C6
		MSGX	_msg_m00,$234
		JMP		loc_1422CB
loc_1422C6:
		BVC		loc_1422CB
		MSGX	_msg_m00,$235
loc_1422CB:
		LDA		byte_C5
		STA		byte_CF
		JSR		_sram_b0_s29_player_inventory_item_add
loc_1422D2:
		MSGX	_msg_m00,$236
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_1422DD
		JMP		loc_142234
loc_1422DD:
		MSGX	_msg_m00_break,$240

; =============== S U B	R O U T	I N E =======================================
sub_1422E1:
		LDA		#$37
		JSR		_question_to_select_char_display_arg7	; $237 "Whos posession do you wish to sell"
		BCS		loc_1422DD
		STA		byte_CE
		STA		byte_CF
		STA		byte_D2
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		BNE		loc_142303
		MSGX	_msg_m00,$238
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#2
		BCS		sub_1422E1
		BCC		loc_1422DD
loc_142303:
		MSGX	_msg_m00,$239
		SYSX	_display_window,$2D
		LDX		#$13
		JSR		_bD_s10
		CMP		#9
		BCS		loc_1422DD
		STA		byte_BD
		STA		byte_CF
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$7F
		STA		byte_C5
		CMP		#$5E
		BEQ		loc_142333
		TAX
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#$10
		BEQ		loc_14233A
loc_14232D:
		MSGX	_msg_m00,$23A
		JMP		loc_14235E
loc_142333:
		LDA		byte_6FF
		CMP		#$29
		BNE		loc_14232D
loc_14233A:
		LDX		byte_C5
		JSR		_bD_s12
		JSR		_bD_s13
		LDA		byte_C5
		STA		byte_D2
		LDX		#2
loc_142348:
		LDA		byte_C0,X
		STA		_msg_number_parameter_F8,X
		DEX
		BPL		loc_142348
		SYSX	_display_window,$12
		MSGX	_msg_m00,$23B
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_14236C
		MSGX	_msg_m00,$23E
loc_14235E:
		MSGX	_msg_m00,$23F
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142369
		JMP		loc_1422DD
loc_142369:
		JMP		sub_1422E1
loc_14236C:
		JSR		_player_gold_add_arrC0_test_overflow
		BCS		loc_142377
		MSGX	_msg_m00,$28A	; "But you can't take that much money"
		JMP		loc_14235E
loc_142377:
		MSGX	_msg_m00,$23C	; "Thank you rof your business"
		LDA		byte_C3
		STA		byte_CE
		LDA		byte_BD
		STA		byte_CF
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$80
		BEQ		loc_1423AA
		LDX		byte_C5
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#8
		BEQ		loc_1423AA
		SYSX	_apu_load,BGM_CURSE_JINGLE
		JSR		_bD_s22_se_wait_and_map_music_start
		LDA		byte_C5
		STA		byte_D2
		MSGX	_msg_m00,$152 ; "<tab>The <item> is stuck to the body because of the curse."
		MSGX	_msg_m00,$23D ; "I see. what a pity"
		JMP		loc_14235E
loc_1423AA:
		JSR		_sram_b0_s2A_player_inventory_item_remove
		JSR		_players_gold_add_from_arrC0
		SYSX	_display_window,WND_STATUS_INFO_GOLD
		LDA		byte_C5
		CMP		#$5E
		BNE		loc_1423C9
		LDA		_global_flags_array.byte4
		ORA		#$20
		STA		_global_flags_array.byte4
		LDA		_global_flags_array.byte2
		ORA		#$80
		STA		_global_flags_array.byte2
loc_1423C9:
		JMP		loc_14235E

; =============== S U B	R O U T	I N E =======================================
sub_1423CC:
		MSGX	_msg_m00,$5E8	; "Oh, my friend. I've been waiting for you"
loc_1423CF:
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1423DA
		MSGX	_msg_m00,$5E9 ; "`Don't be that way! Take a look!`"
		JMP		loc_1423CF
loc_1423DA:
		LDA		#0
		STA		byte_C9
		SYSX	_display_window,$36
		CMP		#8
		BCC		loc_1423E9
		MSGX	_msg_m00_break,$5EA ; "`How's that? Nothing to your liking?That's too bad. ,Please come again`"
loc_1423E9:
		TAX
		JSR		_bD_s15
		STA		byte_C5
		TAX
		JSR		_bD_s12
		LDX		#4
loc_1423F5:
		ASL		byte_C0
		ROL		byte_C1
		ROL		byte_C2
		DEX
		BNE		loc_1423F5
		LDX		#2
loc_142400:
		LDA		byte_C0,X
		STA		_msg_number_parameter_F8,X
		DEX
		BPL		loc_142400
		MSGX	_msg_m00,$5EB
		SYSX	_display_window,$12
		JSR		loc_14245F
		MSGX	_msg_m00,$5EC
		JSR		sub_14245C
		MSGX	_msg_m00,$5EE
		JSR		sub_14245C
		MSGX	_msg_m00,$5EF
		JSR		sub_14245C
		MSGX	_msg_m00_break,$5F0

; =============== S U B	R O U T	I N E =======================================
sub_142426:
		FARX	_b0_s3C_get_free_inventory_slot
		BCC		loc_142446
		STA		byte_C3
		JSR		sub_141FB1
		BCC		loc_142449
		JSR		sub_14246C
		SYSX	_display_window,$12
		LDA		byte_C3
		STA		byte_CE
		LDA		byte_C5
		STA		byte_CF
		JSR		_sram_b0_s29_player_inventory_item_add
		MSGX	_msg_m00_break,$5F1
loc_142446:
		MSGX	_msg_m00_break,$5F2
loc_142449:
		MSGX	_msg_m00_break,$5F3

; =============== S U B	R O U T	I N E =======================================
sub_14244C:
		LSR		byte_C2
		ROR		byte_C1
		ROR		byte_C0
		LSR		_msg_number_parameter_F8+2
		ROR		_msg_number_parameter_F8+1
		ROR		_msg_number_parameter_F8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_14245C:
		MSGX	_msg_m00,$5ED
loc_14245F:
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142467
		JMP		sub_14244C
loc_142467:
		PLA
		PLA
		JMP		sub_142426

; =============== S U B	R O U T	I N E =======================================
sub_14246C:
		LDA		byte_C0
		STA		byte_CE
		LDA		byte_C1
		STA		byte_CF
		LDA		byte_C2
		STA		byte_D0
		JSR		_sram_b0_s1B_player_gold_subtract
		SYSX	_display_window,$12
		RTS
		
; =============== S U B	R O U T	I N E =======================================
sub_14247F:
		MSGX	_msg_m00,$21A

; =============== S U B	R O U T	I N E =======================================
sub_142482:
		MSGX	_msg_m00_break,$21D

; =============== S U B	R O U T	I N E =======================================
sub_142486:
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_142493
		MSGX	_msg_m00,$217	; "Good afternoon, welcome to inn"
		JMP		loc_142496
loc_142493:
		MSGX	_msg_m00,$218	; "Welcode to inn"
loc_142496:
		LDX		byte_6FF
		LDA		byte_1427B1,X
		STA		byte_C6
		AND		#$1F
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		STA		_msg_number_parameter_F8+1
		STA		_msg_number_parameter_F8+2
		JSR		_sram_b0_s33_count_non_dead_party_chars
		LDA		word_4
		LDX		#byte_C0
		JSR		_mul16_to_8
		LDA		byte_C0
		STA		_msg_number_parameter_F8
		MSGX	_msg_m00,$219
		SYSX	_display_window,$68
		FARX	_bE_s1C_yes_or_no_question
		BNE		sub_142482
		JSR		sub_141FB1
		BCC		sub_14247F
		FARX	_bB_s4_apu_set_flag0
		JSR		sub_141FF1
		MSGX	_msg_m00,$21B
		JSR		sub_142504
		LDA		byte_6FF
		CMP		#$F
		BEQ		locret_1424E3
		MSGX	_msg_m00,$21C
locret_1424E3:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1424E4:
		LDA		byte_C6
		BMI		loc_142500
		LDA		_playerFacingDir
		PHA
		LDA		byte_C6
		LSR
		LSR
		LSR
		LSR
		LSR
		STA		_playerFacingDir
		STA		byte_6BC
		FARX	_bC_s4
		PLA
		STA		_playerFacingDir
loc_142500:
		FARX	_bC_s35
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142504:
		JSR		_pal_fade_out
		SYSX	_display_window,$3E
		JSR		_sram_b0_s31_get_party_chars_list
		LDX		word_4
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
loc_142515:
		DEX
		STX		byte_CE
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4+1
		BPL		loc_142531
		LDA		byte_CE
		ASL
		TAX
		LDA		_players_status+1,X
		AND		#$BF
		STA		_players_status+1,X
		JSR		_sram_b0_s4_player_HP_add
		JSR		_sram_b0_s8_player_MP_add
loc_142531:
		LDX		byte_CE
		CPX		#0
		BNE		loc_142515
		SYSX	_apu_load,BGM_SLEEP_JINGLE
		LDA		_location_type
		AND		#2
		BNE		loc_142545
		LDA		#DAYNIGHT_CYCLE_DAWN
		STA		_world_map_steps_count
loc_142545:
		JSR		_location_palette_and_rand_update
		FARX	_bE_s1B
		JSR		sub_177CFC
		JSR		_bD_s28_frame_palette_by_status_adjust
		FARX	_bC_s27
		FARX	_bC_s1A
		JSR		sub_1424E4
		JSR		_bD_sD
		FARX	_bE_s13
		FARX	_bB_s7_apu_wait
		JSR		_ppu_on_and_fade_in
		JSR		_map_music_select_and_load
		LDA		#0
		STA		byte_81
		STA		byte_80
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl5:
		LDA		_world_map_steps_count
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		BCS		loc_142580
		MSGX	_msg_m00,$200	; "At your service, my good people! How may I serve you?"
		JMP		sub_142589
loc_142580:
		MSGX	_msg_m00,$201	; "What is it that you need so late at night?"
		JMP		sub_142589

; =============== S U B	R O U T	I N E =======================================
sub_142586:
		MSGX	_msg_m00,$206	; "Welcome to the House of Healing"

; =============== S U B	R O U T	I N E =======================================
sub_142589:
		SYSX	_display_window,$17
		LDX		#9
		JSR		_bD_s10
		CMP		#1
		BCC		loc_1425AA
		BNE		loc_14259A
		JMP		loc_142629
loc_14259A:
		CMP		#2
		BNE		loc_1425A1
		JMP		loc_14268A
loc_1425A1:
		JMP		loc_142618
loc_1425A4:
		JSR		_bD_s22_se_wait_and_map_music_start
		JMP		loc_142618
loc_1425AA:
		LDA		#7
		JSR		_question_to_select_char_display_arg7	; $207 "Who is to be treated"
		BCS		loc_142618
		STA		byte_CE
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4+1
		AND		#$A0
		CMP		#$A0
		BNE		loc_142605
		JSR		_sram_b0_sC_player_LV_read
		LDA		word_4
		LSR
		LSR
		CLC
		ADC		#4
		STA		byte_C0
		STA		_msg_number_parameter_F8
		LDA		#0
		STA		byte_C1
		STA		_msg_number_parameter_F8+1
		STA		byte_C2
		STA		_msg_number_parameter_F8+2
		MSGX	_msg_m00,$209
		JSR		sub_1427A8
		BNE		loc_14260F
		JSR		sub_141FB1
		BCC		loc_142615
		JSR		sub_141FF1
		STA		byte_CE
		SYSX	_display_window,$68
		FARX	_bB_s4_apu_set_flag0
		LDA		byte_C3
		STA		byte_D2
		MSGX	_msg_m00,$20A ; "`Now I shall administer the antidote to <name>!`"
		SYSX	_apu_load,BGM_PRIEST_WORK_JINGLE
		LDA		byte_C3
		STA		byte_CE
		FARX	_b0_s3D_player_remove_poison_status
		JMP		loc_1425A4
loc_142605:
		LDA		byte_C3
		STA		byte_D2
		MSGX	_msg_m00,$208
		JMP		loc_142618
loc_14260F:
		MSGX	_msg_m00,$213
		JMP		loc_142618
loc_142615:
		MSGX	_msg_m00,$214
loc_142618:
		MSGX	_msg_m00,$215
		FARX	_bE_s1C_yes_or_no_question
		CMP		#0
		BNE		loc_142625
		JMP		sub_142586
loc_142625:
		MSGX	_msg_m00_break,$216
loc_142629:
		LDA		#$B
		JSR		_question_to_select_char_display_arg7	; $20B "Whose curse is to be removed"
		BCS		loc_142618
		STA		byte_CE
		STA		byte_D2
		FARX	_b0_s5C_player_inventory_search_for_cursed_item
		BCC		loc_142684
		LDA		word_4
		STA		byte_BD
		JSR		_sram_b0_sC_player_LV_read
		LDA		word_4
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		STA		_msg_number_parameter_F8+2
		LDA		#$1E
		LDX		#byte_C0
		JSR		_mul16_to_8
		LDA		byte_C0
		STA		_msg_number_parameter_F8
		LDA		byte_C1
		STA		_msg_number_parameter_F8+1
		MSGX	_msg_m00,$209
		JSR		sub_1427A8
		BNE		loc_14260F
		JSR		sub_141FB1
		BCC		loc_142615
		JSR		sub_141FF1
		SYSX	_display_window,$68
		FARX	_bB_s4_apu_set_flag0
		MSGX	_msg_m00,$20D ; ""`Powers above, grant us thy help! Remove this abominable curse from <name>`""
		SYSX	_apu_load,BGM_PRIEST_WORK_JINGLE
		LDA		byte_BD
		STA		byte_CF
		JSR		_sram_b0_s2A_player_inventory_item_remove
		JMP		loc_1425A4
loc_142684:
		MSGX	_msg_m00,$20C
		JMP		loc_142618
loc_14268A:
		MSGX	_msg_m00,$20E
		SYSX	_display_window,$4E
		LDX		#7
		JSR		_bD_s10
		CMP		#4
		BCC		loc_14269C
		JMP		loc_142618
loc_14269C:
		STA		byte_CE
		STA		byte_D2
		STA		byte_C3
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4+1
		BPL		loc_1426AC
		JMP		loc_142722
loc_1426AC:
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		STA		_msg_number_parameter_F8+2
		JSR		_sram_b0_sC_player_LV_read
		LDA		word_4
		STA		byte_C0
		LDX		#byte_C0
		JSR		_mul16_to_8
		JSR		sub_14203D
		CLC
		LDA		byte_C0
		ADC		#1
		STA		byte_C0
		LDA		byte_C1
		ADC		#0
		STA		byte_C1
		JSR		_argC0_mul_9
		LDA		byte_C0
		STA		_msg_number_parameter_F8
		LDA		byte_C1
		STA		_msg_number_parameter_F8+1
		MSGX	_msg_m00,$209
		JSR		sub_1427A8
		BEQ		loc_1426E9
		JMP		loc_14260F
loc_1426E9:
		JSR		sub_141FB1
		BCS		loc_1426F1
		JMP		loc_142615
loc_1426F1:
		JSR		sub_141FF1
		SYSX	_display_window,$68
		MSGX	_msg_m00,$202 ; ""`Oh, powers that reside above! I invoke thee!`<wait>""
		FARX	_bB_s4_apu_set_flag0
		MSGX	_msg_m00,$210 ; ""`I beckon the spirit of thy faithful servant, <name>, return from its wanderings to again reside here!`""
		SYSX	_apu_load,BGM_PRIEST_WORK_JINGLE
		LDA		byte_C3
		STA		byte_CE
		FARX	_b0_s3D_player_remove_death_status
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JSR		_sram_b0_s4_player_HP_add
		JSR		_sram_b0_s8_player_MP_add
		JSR		_bD_s22_se_wait_and_map_music_start
		JSR		sub_142780
		FARX	_b4_s1A_status_pal_adjust_and_update
		JMP		loc_142618
loc_142722:
		MSGX	_msg_m00,$20F
		JMP		loc_142618

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
;sub_142728:
;		JSR		_sram_b0_s31_get_party_chars_list
;		LDA		word_4
;		STA		byte_CE
;		LDA		#0
;		STA		byte_C0
;		STA		byte_C1
;		STA		byte_C2
;		STA		_msg_number_parameter_F8+2
;loc_14273A:
;		LDX		byte_CE
;		DEX
;		BMI		loc_14275C
;		STX		byte_CE
;		JSR		_sram_b0_s7_player_MMP_read
;		LDA		word_4
;		ORA		word_4+1
;		BEQ		loc_14273A
;		JSR		_sram_b0_sC_player_LV_read
;		CLC
;		LDA		byte_C0
;		ADC		word_4
;		STA		byte_C0
;		LDA		byte_C1
;		ADC		#0
;		STA		byte_C1
;		BCC		loc_14273A
;loc_14275C:
;		LDX		#byte_C0
;		LDA		#3
;		JSR		_mul16_to_8
;		LDA		byte_C0
;		STA		_msg_number_parameter_F8
;		LDA		byte_C1
;		STA		_msg_number_parameter_F8+1
;		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s10:
		PHA
		TXA
		FARX	_bE_sB
		LDX		#0
		TXA
loc_142776:
		STA		_window_draw_buf+$60,X
		INX
		CPX		#$10
		BNE		loc_142776
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142780:
		LDA		byte_80
		PHA
		LDA		byte_81
		PHA
		FARX	_bE_s10
		PLA
		STA		byte_81
		PLA
		STA		byte_80
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s11:
		JSR		_sram_b0_s31_get_party_chars_list
		LDX		word_4
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
loc_14279B:
		DEX
		STX		byte_C4
		STX		byte_CE
		JSR		_sram_b0_s8_player_MP_add
		LDX		byte_C4
		BNE		loc_14279B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1427A8:
		SYSX	_display_window,$68
		FARX	_bE_s1C_yes_or_no_question
		CMP		#0
		RTS
byte_1427B1:
		.BYTE	  2,  2,$64,$82,$8F,$6F,$87,  5,$4A,$6A,$8C,$2C,$2F,$83,$4C,$1F
		.BYTE	 $F,$25,$54,$54, $C,$81,$7F,$19,$99,$94, $F
off_1427CC:
		.WORD	byte_142859
		.WORD	byte_14288A
		.WORD	byte_142828
		.WORD	byte_14284B
		.WORD	byte_142883
		.WORD	byte_142852
		.WORD	byte_142852
		.WORD	byte_142864
		.WORD	byte_14285E
		.WORD	byte_142836
		.WORD	byte_142891
		.WORD	byte_142870
		.WORD	byte_142897
		.WORD	byte_14283D
		.WORD	byte_142844
		.WORD	byte_14289E
		.WORD	byte_14287D
		.WORD	byte_142877
		.WORD	byte_14286A
		.WORD	byte_14282F
		.WORD	byte_1428DC
		.WORD	byte_142904
		.WORD	byte_1428BA
		.WORD	byte_1428A4
		.WORD	byte_1428C6
		.WORD	byte_1428FE
		.WORD	byte_1428D0
		.WORD	byte_1428D2
		.WORD	byte_1428D6
		.WORD	byte_1428D6
		.WORD	byte_1428E4
		.WORD	byte_1428E2
		.WORD	byte_1428AE
		.WORD	byte_1428AE
		.WORD	byte_1428CB
		.WORD	byte_1428EF
		.WORD	byte_1428B4
		.WORD	byte_14290A
		.WORD	byte_1428F5
		.WORD	byte_142910
		.WORD	byte_1428C0
		.WORD	byte_142917
		.WORD	byte_1428F8
		.WORD	byte_1428EA
		.WORD	byte_1428A7
		.WORD	byte_14291B
byte_142828:
		.BYTE	  0,  1,  2,$20,$30,$22,$B8
byte_14282F:
		.BYTE	 $C,  4,  6,$22,$33,$2F,$BD
byte_142836:
		.BYTE	  6,  5, $B,$24,$27,$25,$B9
byte_14283D:
		.BYTE	  9,$1F,$17,$1E,$26,$3E,$87
byte_142844:
		.BYTE	  7,$1F,$1E,$18,$2C,$35,$B7
byte_14284B:
		.BYTE	  3, $A, $C,$21,$22,$38,$C5
byte_142852:
		.BYTE	$17,$1E,$1F,$26,$2C,$35,$BE
byte_142859:
		.BYTE	  3, $C,  4,  6,$85
byte_14285E:
		.BYTE	$2F,$24,$3D,$39,$29,$B1
byte_142864:
		.BYTE	  5, $B,$27,$43,$40,$95
byte_14286A:
		.BYTE	  5,$19,$25,$26,$39,$C6
byte_142870:
		.BYTE	  3,  4,  5,$19,$27,$2C,$C6
byte_142877:
		.BYTE	$18,$13,$27,$26,$3E,$C6
byte_14287D:
		.BYTE	$17,$1F,$2C,$35,$3A,$B1
byte_142883:
		.BYTE	  4,  6,  9,$24,$2B,$3D,$B9
byte_14288A:
		.BYTE	$15,$19,$17,$26,$2C,$3D,$C6
byte_142891:
		.BYTE	$1F,$19,$25,$27,$2B,$C6
byte_142897:
		.BYTE	  0,  1,  8, $A,$20,$23,$AB
byte_14289E:
		.BYTE	  6,$19,$35,$2E,$3E,$C6
byte_1428A4:
		.BYTE	$65,$66,$E8
byte_1428A7:
		.BYTE	$65,$66,$67,$68,$6C,$29,$C5
byte_1428AE:
		.BYTE	$65,$66,$67,$68,$6C,$C5
byte_1428B4:
		.BYTE	$65,$66,$67,$68,$6C,$A9
byte_1428BA:
		.BYTE	$65,$66,$67,$68,$6C,$F3
byte_1428C0:
		.BYTE	$65,$66,$67,$68,$6C,$D6
byte_1428C6:
		.BYTE	$65,$66,$67,$68,$C3
byte_1428CB:
		.BYTE	$65,$66,$67,$68,$EC
byte_1428D0:
		.BYTE	$65,$C5
byte_1428D2:
		.BYTE	$65,$67,$68,$C5
byte_1428D6:
		.BYTE	$65,$67,$68,$73,$74,$D6
byte_1428DC:
		.BYTE	$67,$68,$6C,$74,  7,$A7
byte_1428E2:
		.BYTE	$66,$EC
byte_1428E4:
		.BYTE	$65,$66,$67,$68,$6C,$F4
byte_1428EA:
		.BYTE	$65,$66,$67,$68,$EC
byte_1428EF:
		.BYTE	$65,$66,$67,$68,$6C,$F4
byte_1428F5:
		.BYTE	$67,$68,$D6
byte_1428F8:
		.BYTE	$65,$66,$67,$68,$6C,$F3
byte_1428FE:
		.BYTE	$65,$66,$67,$68,$6C,$A9
byte_142904:
		.BYTE	$4E,$56,$68,$73,$74,$B7
byte_14290A:
		.BYTE	$65,$66,$67,$68,$6C,$F3
byte_142910:
		.BYTE	$65,$66,$67,$68,$6C,$73,$D6
byte_142917:
		.BYTE	$65,$67,$68,$EC
byte_14291B:
		.BYTE	$65,$67,$68,$6C,$9C

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl1:
		MSGX	_msg_m00,$268	; "This is the Vault"
.vault_main_loop:
		MSGX	_msg_m00,$269	; "How may I help you?"
		SYSX	_display_window,$1F
		LDX		#$B
		JSR		_bD_s10
		CMP		#1
		BCC		loc_14293A
		BEQ		loc_142937
		JMP		.vault_exit
loc_142937:
		JMP		loc_142A86
loc_14293A:
		MSGX	_msg_m00,$26A	; "Yes, indeed. What can I keep here for you?"
		SYSX	_display_window,$20
		LDX		#$D
		JSR		_bD_s10
		CMP		#1
		BCC		loc_142951
		BEQ		loc_14294E
loc_14294B:
		JMP		.vault_return_to_main_loop
loc_14294E:
		JMP		loc_1429A3
loc_142951:
		LDX		byte_608D
		INX
		BNE		loc_14295D
		MSGX	_msg_m00,$287	; "I'm sorry. The safe is full and you can't deposit any more money"
		JMP		.vault_return_to_main_loop
loc_14295D:
		SYSX	_display_window,$68
		MSGX	_msg_m00,$26B	; "If it's 1,000 pieces of gold or more..."
		JSR		sub_142BF0
		BEQ		loc_14294B
		STA		byte_C6
		CLC
		ADC		byte_608D
		BCC		loc_14297E
		LDA		byte_608D
		EOR		#$FF
		JSR		sub_142BD2
		MSGX	_msg_m00,$288
		JMP		loc_142951
loc_14297E:
		LDA		byte_C6
		JSR		sub_142BD2
		JSR		sub_141FB1
		BCS		loc_14298E
		MSGX	_msg_m00,$26C
		JMP		loc_142951
loc_14298E:
		MSGX	_msg_m00,$26D
		JSR		_sram_b0_s1B_player_gold_subtract
		SYSX	_display_window,$68
		CLC
		LDA		byte_C6
		ADC		byte_608D
		STA		byte_608D
		JMP		.vault_return_to_main_loop
loc_1429A3:
		JSR		_bD_s1F_get_vault_items_count
		CPX		#$78
		BCC		loc_1429B0
		MSGX	_msg_m00,$286
		JMP		.vault_return_to_main_loop
loc_1429B0:
		LDA		#$6E
		JSR		_question_to_select_char_display_arg7	; $26E "Who is going to leave something"
		BCS		loc_1429C7
		STA		byte_CE
loc_1429B9:
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		BNE		loc_1429CA
		LDA		byte_C3
		STA		byte_D2
		MSGX	_msg_m00,$26F
loc_1429C7:
		JMP		.vault_return_to_main_loop
loc_1429CA:
		MSGX	_msg_m00,$28B
		LDX		#3
		JSR		_bD_s10
		SYSX	_display_window,$2D
		LDX		#$13
		JSR		_bD_s10
		CMP		#8
		BCS		loc_1429C7
		STA		byte_BD
		STA		byte_CF
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		AND		#$7F
		STA		byte_C5
		STA		byte_D2
		TAX
		JSR		_bD_s12
		JSR		sub_14203D
		LDA		byte_C0
		ORA		byte_C1
		ORA		byte_C2
		BNE		loc_142A00
		LDA		#1
		STA		byte_C0
loc_142A00:
		LDX		#2
loc_142A02:
		LDA		byte_C0,X
		STA		_msg_number_parameter_F8,X
		DEX
		BPL		loc_142A02
		MSGX	_msg_m00,$270
		SYSX	_display_window,$68
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142A1B
		MSGX	_msg_m00,$271
		JMP		loc_142A6B
loc_142A1B:
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4+1
		BPL		loc_142A41
		AND		#$7F
		TAX
		LDA		#_b0_d42_item_use_effects_list_fidx
		JSR		_sys0_byte_read_x
		AND		#8
		BEQ		loc_142A41
		SYSX	_apu_load,BGM_CURSE_JINGLE
		JSR		_bD_s22_se_wait_and_map_music_start
		LDA		byte_C5
		STA		byte_D2
		MSGX	_msg_m00,$152 ; "<tab>The <item> is stuck to the body because of the curse."
		MSGX	_msg_m00,$272 ; `Sorry, but there's no way in the world I can keep that!`"
		JMP		loc_142A6B
loc_142A41:
		MSGX	_msg_m00,$273 ; "`All right then. I'll take good care of it!`"
		LDA		byte_C5
		JSR		_vault_item_store
		JSR		_sram_b0_s2A_player_inventory_item_remove
		LDA		byte_C5
		AND		#$7F
		CMP		#$2A
		BEQ		loc_142A5C
		CMP		#$31
		BEQ		loc_142A5C
		CMP		#$32
		BNE		loc_142A6B
loc_142A5C:
		LDA		byte_80
		PHA
		LDA		byte_81
		PHA
		FARX	_bE_s10
		PLA
		STA		byte_81
		PLA
		STA		byte_80
loc_142A6B:
		MSGX	_msg_m00,$274
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142A76
		JMP		.vault_exit
loc_142A76:
		LDA		_vault_last_item
		CMP		#$7F
		BCS		loc_142A83
		MSGX	_msg_m00,$286
loc_142A80:
		JMP		.vault_return_to_main_loop
loc_142A83:
		JMP		loc_1429B9
loc_142A86:
		MSGX	_msg_m00,$275
		SYSX	_display_window,$20
		LDX		#7
		JSR		_bD_s10
		CMP		#1
		BCC		loc_142A9A
		BNE		loc_142A80
		JMP		loc_142AF1
loc_142A9A:
		LDA		byte_608D
		BNE		loc_142AA5
		MSGX	_msg_m00,$276
		JMP		.vault_return_to_main_loop
loc_142AA5:
		LDA		byte_608D
		JSR		sub_142BD2
		MSGX	_msg_m00,$277
		SYSX	_display_window,$68
		JSR		sub_142BF0
		BNE		loc_142ABC
		MSGX	_msg_m00,$271
		JMP		.vault_return_to_main_loop
loc_142ABC:
		STA		byte_C6
		SEC
		LDA		byte_608D
		SBC		byte_C6
		BCS		loc_142ACC
		MSGX	_msg_m00,$278
		JMP		loc_142AA5
loc_142ACC:
		LDA		byte_C6
		JSR		sub_142BD2
		JSR		_player_gold_add_arrC0_test_overflow
		BCS		loc_142ADC
		MSGX	_msg_m00,$289
		JMP		loc_142AA5
loc_142ADC:
		MSGX	_msg_m00,$279
		JSR		_sram_b0_s1B_player_gold_add
		SYSX	_display_window,$68
		SEC
		LDA		byte_608D
		SBC		byte_C6
		STA		byte_608D
		JMP		.vault_return_to_main_loop
loc_142AF1:
		LDA		_vault_items_list
		CMP		#$7F
		BCC		loc_142AFE
		MSGX	_msg_m00,$27A
loc_142AFB:
		JMP		.vault_return_to_main_loop
loc_142AFE:
		MSGX	_msg_m00,$27B
		FARX	_b1_s16
		LDX		#$13
		JSR		_bD_s10
		CMP		#$FF
		BEQ		loc_142AFB
		STA		byte_BD
		TAX
		LDA		_vault_items_list,X
		STA		byte_C5
		STA		byte_D2
		TAX
		JSR		_bD_s12
		JSR		sub_14203D
		LDA		byte_C0
		ORA		byte_C1
		ORA		byte_C2
		BNE		loc_142B2A
		LDA		#1
		STA		byte_C0
loc_142B2A:
		LDX		#2
loc_142B2C:
		LDA		byte_C0,X
		STA		_msg_number_parameter_F8,X
		DEX
		BPL		loc_142B2C
		MSGX	_msg_m00,$27C
		SYSX	_display_window,$68
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142B45
		MSGX	_msg_m00,$271
		JMP		loc_142BAE
loc_142B45:
		JSR		sub_141FB1
		BCS		loc_142B50
		MSGX	_msg_m00,$281
		JMP		.vault_return_to_main_loop
loc_142B50:
		LDA		#$7D	; $27D "Who is getting this?"
		JSR		_question_to_select_char_display_arg12
		BCC		loc_142B5A
		JMP		loc_142AFE
loc_142B5A:
		STA		byte_D2
		STA		byte_CE
		JSR		_sram_b0_s28_player_inventory_item_get
		LDA		word_4
		CMP		#8
		BCC		loc_142B82
		MSGX	_msg_m00,$27E
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		BNE		loc_142B74
		JMP		.vault_return_to_main_loop
loc_142B74:
		MSGX	_msg_m00,$233
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_142B50
		MSGX	_msg_m00,$271
		JMP		loc_142BAE
loc_142B82:
		JSR		sub_141FF1
		SYSX	_display_window,$68
		LDA		byte_C3
		STA		byte_CE
		JSR		_sram_b0_sE_player_STATUS_read
		BIT		word_4+1
		BMI		loc_142B99
		MSGX	_msg_m00,$234
		JMP		loc_142BA4
loc_142B99:
		BVC		loc_142BA1
		MSGX	_msg_m00,$235
		JMP		loc_142BA4
loc_142BA1:
		MSGX	_msg_m00,$282
loc_142BA4:
		LDX		byte_BD
		JSR		_vault_item_pickup
		STA		byte_CF
		JSR		_sram_b0_s29_player_inventory_item_add
loc_142BAE:
		LDA		_vault_items_list
		CMP		#$7F
		BCS		.vault_return_to_main_loop
		MSGX	_msg_m00,$283
		FARX	_bE_s1C_yes_or_no_question
		BNE		.vault_exit
		JMP		loc_142AFE
.vault_return_to_main_loop:
		MSGX	_msg_m00,$284	; "Will there be anything else?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		.vault_exit
		JMP		.vault_main_loop
.vault_exit:
		MSGX	_msg_m00,$285
		FARX	_b0_s50_players_item_buffs_refresh
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142BD2:
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		JSR		_argC0_mul_9
		JSR		_argC0_mul_9
		JSR		_argC0_mul_9
		LDX		#2
loc_142BE5:
		LDA		byte_C0,X
		STA		_msg_number_parameter_F8,X
		STA		byte_CE,X
		DEX
		BPL		loc_142BE5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142BF0:
		SYSX	_display_window,$4D
		LDX		word_4
		STX		byte_C0
		LDX		word_4+1
		STX		byte_C1
		LDX		word_6
		STX		byte_C2
		LDX		#$C
		JSR		_bD_s10
		CMP		#$FF
		BEQ		loc_142C14
		JSR		sub_14203D
		JSR		sub_14203D
		JSR		sub_14203D
		LDA		byte_C0
		RTS
loc_142C14:
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl3_shrine_of_dhama_prof_change:
		MSGX	_msg_m00,$241	; "This is srine of Dhama..."
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_142C59
		LDA		#$42
		JSR		_question_to_select_char_display_arg7	; $242 "Whose profession do you wish to change"
		BCS		loc_142C59
		STA		byte_CE
		STA		byte_D2
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4+1
		BMI		loc_142C37
		MSGX	_msg_m00,$29A
		JMP		loc_142C5C
loc_142C37:
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		BNE		loc_142C44
		MSGX	_msg_m00,$243
		JMP		loc_142C5C
loc_142C44:
		STA		byte_C6
		STA		_msg_directobject_param
		STA		byte_CF
		JSR		_sram_b0_sC_player_LV_read
		LDA		word_4
		CMP		#$14
		BCS		loc_142C60
		MSGX	_msg_m00,$244
		JMP		loc_142C5C
loc_142C59:
		MSGX	_msg_m00,$24B	; "So, You're not changing professions"
loc_142C5C:
		MSGX	_msg_m00_break,$24A	; "So be on your way."
loc_142C60:
		MSGX	_msg_m00,$245	; "Which profession <name> does want to choose"
		JSR		sub_142CBB
		LDX		#$13
		JSR		_bD_s10
		CMP		#$FF
		BEQ		loc_142C59
		STA		_msg_directobject_param
		STA		byte_CF
		CMP		byte_C6
		BNE		loc_142C7D
		MSGX	_msg_m00,$246
		JMP		loc_142C5C
loc_142C7D:
		MSGX	_msg_m00,$247
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_142C59
		MSGX	_msg_m00,$248
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_142C59
		LDA		byte_CF
		CMP		#3
		BEQ		loc_142CB2
		MSGX	_msg_m00,$249
loc_142C96:
		FARX	_b1_sE_player_class_change_stats_reset
		LDA		byte_C6
		CMP		#7
		BEQ		loc_142CAC
		LDA		byte_CF
		CMP		#3
		BNE		loc_142CAC
		LDA		#$4C
		STA		byte_C5
		JSR		sub_142104
loc_142CAC:
		JSR		sub_142780
		JMP		loc_142C5C
loc_142CB2:
		MSGX	_msg_m00,$204
		MSGX	_msg_m00,$203
		JMP		loc_142C96

; =============== S U B	R O U T	I N E =======================================
sub_142CBB:
		LDA		byte_C6
		CMP		#7
		BEQ		loc_142CD8
		LDA		#$4C
		STA		byte_CF
		FARX	_b0_s45_check_if_item_equipped
		INC		word_4
		BNE		loc_142CD8
		SYSX	_display_window,$4F
loc_142CCF:
		CMP		#$FF
		BEQ		locret_142CD7
		TAX
		LDA		byte_142CDE,X
locret_142CD7:
		RTS
loc_142CD8:
		SYSX	_display_window,$47
		JMP		loc_142CCF
byte_142CDE:
		.BYTE	  4,  2,  1,  6,  5,  3

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl0:
		MSGX	_msg_m00,$259

; =============== S U B	R O U T	I N E =======================================
sub_142CE7:
		MSGX	_msg_m00,$25A
		SYSX	_display_window,$46
		LDX		#$11
		JSR		_bD_s10
		CMP		#1
		BCC		loc_142D05
		BEQ		loc_142CFF
		CMP		#2
		BEQ		loc_142D02
		JMP		sub_142E35
loc_142CFF:
		JMP		loc_142D92
loc_142D02:
		JMP		sub_142E69
loc_142D05:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#4
		BCC		loc_142D14
		MSGX	_msg_m00,$25B
		JMP		sub_142E22
loc_142D14:
		JSR		_sram_b0_s32_get_tavern_chars_list
		LDA		word_4
		BNE		loc_142D21
		MSGX	_msg_m00,$25C
		JMP		sub_142E22
loc_142D21:
		JSR		sub_1420EE
		MSGX	_msg_m00,$25D
		LDA		#6
		STA		byte_C6
		SYSX	_display_window,$34
		CMP		#$FF
		BNE		loc_142D3A
		LDX		#$10
		JSR		_bD_s10
		JMP		sub_142E22
loc_142D3A:
		STA		byte_BD
		JSR		_sram_b0_s32_get_tavern_chars_list
		LDA		byte_BD
		CMP		word_4
		BCC		loc_142D50
		LDX		#$10
		JSR		_bD_s10
		MSGX	_msg_m00,$25E
		JMP		sub_142E22
loc_142D50:
		LDX		byte_BD
		LDA		word_4+1,X
		STA		byte_CE
		FARX	_b7_s11
		STA		byte_D2
		STA		_msg_directobject_param
		STA		byte_D4
		ASL
		ASL
		TAX
		LDA		_players_pos_list,X
		AND		#$7F
		STA		_players_pos_list,X
		LDA		_players_pos_list+1,X
		AND		#$7F
		STA		_players_pos_list+1,X
		MSGX	_msg_m00,$25F
		JSR		sub_142780
		LDA		byte_AC
		ORA		#$1F
		STA		byte_AC
		JSR		sub_142ECB
		LDA		byte_AC
		AND		#$E0
		STA		byte_AC
		FARX	_b4_s1A_status_pal_adjust_and_update
		LDX		#$10
		JSR		_bD_s10
		JMP		sub_142E22
loc_142D92:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#2
		BCS		loc_142DA1
		MSGX	_msg_m00,$260
		JMP		sub_142E35
loc_142DA1:
		JSR		sub_1420EE
		LDA		#$61
		JSR		_question_to_select_char_display_arg7	; $261 "Who will you part with"
		BCC		loc_142DAE
		JMP		sub_142E2F
loc_142DAE:
		STA		byte_D2
		MSGX	_msg_m00,$263
		FARX	_bE_s1C_yes_or_no_question
		BNE		sub_142E2F
		LDA		byte_C3
		STA		byte_CE
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		BNE		loc_142DD0
		LDA		_global_flags_array.byte2
		AND		#1
		BNE		loc_142DD0
		MSGX	_msg_m00,$264
		JMP		sub_142E22
loc_142DD0:
		JSR		_sram_b0_s33_count_non_dead_party_chars
		LDX		word_4
		DEX
		BNE		loc_142DE7
		JSR		_bD_s26_get_first_live_player_with_no_NM_status
		LDA		word_4
		CMP		byte_C3
		BNE		loc_142DE7
		MSGX	_msg_m00,$295
		JMP		sub_142E35
loc_142DE7:
		LDA		byte_C3
		STA		byte_D2
		STA		_msg_directobject_param
		PHA
		MSGX	_msg_m00,$265
		LDA		byte_C3
		BNE		loc_142DF9
		INC		byte_D2
		BNE		loc_142DFD
loc_142DF9:
		LDA		#0
		STA		byte_D2
loc_142DFD:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#3
		BCC		loc_142E0C
		MSGX	_msg_m00,$293
		JMP		loc_142E0F
loc_142E0C:
		MSGX	_msg_m00,$292
loc_142E0F:
		LDA		byte_C3
		STA		byte_CE
		FARX	_b7_s12
		PLA
		ASL
		ASL
		TAX
		STX		word_6C
		JSR		sub_142E3C
		FARX	_b4_s1A_status_pal_adjust_and_update

; =============== S U B	R O U T	I N E =======================================
sub_142E22:
		MSGX	_msg_m00,$266	; "Is there anything else?"
		FARX	_bE_s1C_yes_or_no_question
		CMP		#0
		BNE		sub_142E35
		JMP		sub_142CE7

; =============== S U B	R O U T	I N E =======================================
sub_142E2F:
		MSGX	_msg_m00,$262	; "Deary me! Did you change your mind? That's probably just as well`<wait>"
		JMP		sub_142E22

; =============== S U B	R O U T	I N E =======================================
sub_142E35:
		MSGX	_msg_m00,$267	; "Come back again!"
		FARX	_b0_s47_players_next_EXP_calc
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142E3C:
		LDX		#$C
loc_142E3E:
		LDA		_players_pos_list,X
		BPL		loc_142E49
		DEX
		DEX
		DEX
		DEX
		BNE		loc_142E3E
loc_142E49:
		LDA		#$80
		STA		_players_pos_list,X
		TXA
		PHA
		LDA		#>[_players_pos_list]
		STA		word_6C+1
		FARX	_bC_s38
		JSR		sub_142780
		PLA
		STA		word_6C
		FARX	_bC_s38
		LDA		byte_174
		ORA		#$F0
		STA		byte_174
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_142E69:
		JSR		_sram_b0_s32_get_tavern_chars_list
		LDA		word_4
		BNE		loc_142E76
		MSGX	_msg_m00,$299
		JMP		sub_142E22
loc_142E76:
		JSR		sub_1420EE
		MSGX	_msg_m00,$298
		LDA		#7
		STA		byte_C6
		SYSX	_display_window,$34
		CMP		#$FF
		BNE		loc_142E8F
		LDX		#$10
		JSR		_bD_s10
		JMP		sub_142E22
loc_142E8F:
		STA		byte_C3
		JSR		_sram_b0_s32_get_tavern_chars_list
		LDX		byte_C3
		LDA		word_4+1,X
		STA		byte_C3
		LDA		byte_630F
		PHA
		LDA		byte_C3
		STA		byte_630F
		FARX	_b7_s14
		LDA		#0
		STA		byte_CE
		SYSX	_display_window,$09
		JSR		_pause_or_skip
		SYSX	_display_window,$08
		SYSX	_display_window,$0A
		PLA
		STA		byte_630F
		FARX	_b7_s14
		JSR		_pause_or_skip
		LDX		#0
		JSR		_bD_s10
		JSR		_wrap_bE_sD_wnd3E
		JMP		sub_142E22

; =============== S U B	R O U T	I N E =======================================
sub_142ECB:
		LDA		byte_80
		PHA
		LDA		byte_81
		PHA
		LDA		#$60
		STA		byte_C6
		JSR		sub_1424E4
		PLA
		STA		byte_81
		PLA
		STA		byte_80
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl4:
		LDA		#0
		STA		byte_CE
		STA		byte_C1
		STA		byte_C2
		STA		_msg_number_parameter_F8+2
		JSR		_sram_b0_sC_player_LV_read
		LDA		word_4
		STA		byte_C0
		JSR		_argC0_mul_9
		LDA		byte_C0
		STA		_msg_number_parameter_F8
		STA		byte_6A3B
		LDA		byte_C1
		STA		_msg_number_parameter_F8+1
		STA		byte_6A3C
		MSGX	_msg_m00,$28C
		SYSX	_display_window,$68
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_142F4F
		JSR		sub_141FB1
		BCS		loc_142F1B
		MSGX	_msg_m00,$28E
		JMP		loc_142F52
loc_142F1B:
		SYSX	_display_window,$66
		CMP		#4
		BCS		loc_142F4F
		STA		byte_6A67
		STA		byte_64
		FARX	_b4_s12
		STA		byte_D2
		JSR		sub_141FF1
		SYSX	_display_window,$68
		MSGX	_msg_m00,$290
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDX		#0
		JSR		_bD_s10
		LDA		#$33
		FARX	_bC_s0_npc_anim_script_init
		LDA		#0
		STA		byte_6EB
		LDA		#$20
		STA		byte_6EF
		PLA
		PLA
		RTS
loc_142F4F:
		MSGX	_msg_m00,$28D	; "You kidding, you're not interested"
loc_142F52:
		MSGX	_msg_m00_break,$291	; "Come back again"

; =============== S U B	R O U T	I N E =======================================
_bD_sC:
		LDA		byte_6A65
		CMP		#$FE
		BNE		loc_142F60
		JMP		locret_143008
loc_142F60:
		PHA
		SYSX	_display_window_ex,$3D
		PLA
		CMP		#4
		BCC		loc_142F6C
		JMP		loc_142FED
loc_142F6C:
		STA		byte_64
		CMP		byte_6A67
		PHP
		FARX	_b4_s12
		STA		byte_D2
		PLP
		BEQ		loc_142F84
		MSGX	_msg_m00_break,$0CF	; "<name> comes out a winner. <hero> bet is lost"
loc_142F84:
		LDX		#0
loc_142F86:
		LDA		word_4,X
		PHA
		INX
		CPX		#8
		BCC		loc_142F86
		LDA		#0
		TAX
loc_142F91:
		STA		word_4,X
		INX
		CPX		#8
		BCC		loc_142F91
		STA		byte_C2
		LDA		byte_6A3B
		STA		byte_C0
		LDA		byte_6A3C
		STA		byte_C1
		LDX		byte_6A67
		LDA		byte_6AD5,X
		STA		word_4+1
		LDA		byte_6AD9,X
		TAX
		LDA		byte_143036,X
		STA		word_4
		JSR		sub_143009
		LDA		word_6
		BEQ		loc_142FC6
		INC		word_6+1
		BNE		loc_142FC6
		INC		byte_8
		BNE		loc_142FC6
		INC		byte_9
loc_142FC6:
		LDA		word_6+1
		STA		byte_C0
		STA		_msg_number_parameter_F8
		LDA		byte_8
		STA		byte_C1
		STA		_msg_number_parameter_F8+1
		LDA		byte_9
		STA		byte_C2
		STA		_msg_number_parameter_F8+2
		LDX		#7
loc_142FDD:
		PLA
		STA		word_4,X
		DEX
		BPL		loc_142FDD
		MSGX	_msg_m00,$0CE	; "<name> comes out on top. <hero> obtains <number> of gold."
		JMP		loc_143002
loc_142FED:
		MSGX	_msg_m00,$0D0	; match ended a draw, money back
		LDA		byte_6A3B
		STA		byte_C0
		LDA		byte_6A3C
		STA		byte_C1
		LDA		#0
		STA		byte_C2
loc_143002:
		JSR		_players_gold_add_from_arrC0
		SYSX	_display_window,$68
locret_143008:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143009:
		LDX		#$10
loc_14300B:
		LSR		byte_C1
		ROR		byte_C0
		BCC		loc_14302A
		LDA		word_4
		CLC
		ADC		word_6
		STA		word_6
		LDA		word_4+1
		ADC		word_6+1
		STA		word_6+1
		LDA		byte_A
		ADC		byte_8
		STA		byte_8
		LDA		byte_B
		ADC		byte_9
		STA		byte_9
loc_14302A:
		ASL		word_4
		ROL		word_4+1
		ROL		byte_A
		ROL		byte_B
		DEX
		BNE		loc_14300B
		RTS
byte_143036:
		.BYTE	  0,$1A,$34,$4D,$67,$80,$9A,$B4,$CD,$E7

; =============== S U B	R O U T	I N E =======================================
; returns status in byte_4/byte_5, gender in byte_7 and index of the hero class
; player in the formation in byte_D2
; 
_bD_sB_get_hero_and_its_gender_and_status:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_CE
		STA		byte_8
loc_1430D3:
		DEC		byte_CE
		BMI		loc_1430E0
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		BEQ		loc_1430E4
		BNE		loc_1430D3
loc_1430E0:
		LDA		#0
		STA		byte_CE
loc_1430E4:
		LDA		byte_CE
		STA		byte_D2
		JSR		_sram_b0_s2F_player_gender_read
		LDA		word_4
		STA		word_6+1
		JMP		_sram_b0_sE_player_STATUS_read

; =============== S U B	R O U T	I N E =======================================
_day_night_test:
		LDA		_world_map_steps_count
		STA		word_4
		CMP		#DAYNIGHT_CYCLE_BEGIN_NIGHT
		RTS

; =============== S U B	R O U T	I N E =======================================
_test_if_party_is_less_than_two:
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		CMP		#2
		RTS

; =============== S U B	R O U T	I N E =======================================
_give_item_to_player_msg0:
		STA		byte_CF
		FARX	_b0_s3C_get_free_inventory_slot
		BCS		_wrap_player_inventory_item_add_storeCE
		MSGX	_msg_m00,$6A6	; "But it looks like you have a plenty of items already."
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s27_give_item_to_player_msg1:
		STA		byte_CF
		FARX	_b0_s3C_get_free_inventory_slot
		BCS		_wrap_player_inventory_item_add_storeCE
		MSGX	_msg_m00,$6A7	; "But it looks like you have a plenty of items already."
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_give_item_to_player_msg2:
		STA		byte_CF
		FARX	_b0_s3C_get_free_inventory_slot
		BCS		_wrap_player_inventory_item_add_storeCE
		MSGX	_msg_m00,$6A8	; "Huh, you guys are all full already..."
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_wrap_player_inventory_item_add_storeCE:
		STA		byte_CE
		JMP		_sram_b0_s29_player_inventory_item_add

; =============== S U B	R O U T	I N E =======================================
_wrap_is_players_owns_item_storeCE:
		STA		byte_CE
		JMP		_sram_b0_s2B_is_players_owns_item

; =============== S U B	R O U T	I N E =======================================
_player_item_remove_arg4:
		LDA		word_4
		STA		byte_CE
		LDA		word_4+1
		STA		byte_CF
		JMP		_sram_b0_s2A_player_inventory_item_remove

; =============== S U B	R O U T	I N E =======================================
_get_common_npc_msg_idx:
		STA		byte_5C
		STX		byte_5D
		LDA		word_4
		SEC
		SBC		byte_5C
		STA		byte_5C
		LDA		word_4+1
		SBC		byte_5D
		STA		byte_5D
		ORA		byte_5C
		RTS

; =============== S U B	R O U T	I N E =======================================
_add_arg5C_to16:
		CLC
		ADC		byte_5C
		STA		byte_5C
		TXA
		ADC		byte_5D
		STA		byte_5D
		RTS

; =============== S U B	R O U T	I N E =======================================
_arg4_backup:
		LDY		#4
loc_14315C:
		LDA		word_4,Y
		STA		word_60+1,Y
		DEY
		BPL		loc_14315C
		RTS

; =============== S U B	R O U T	I N E =======================================
_arg4_restore:
		LDY		#4
loc_143168:
		LDA		word_60+1,Y
		STA		word_4,Y
		DEY
		BPL		loc_143168
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s16_general_speak_with_npc:
		JSR		_general_speak_with_npc
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
; very long and boring branch tree checking the different special cases to
; display special messages and finally go one of the default message handlers
;
_general_speak_with_npc:
		LDA		word_4
		ORA		word_4+1
		BNE		loc_143182
		MSGX	_msg_m00_break,$6A9	; "There is no one in that direction"
loc_143182:
		LDA		word_4+1
		BNE		loc_143195
		LDA		word_4
		CMP		#$EC
		BCC		loc_143195
		CMP		#$F2
		BCS		loc_143195
		LDA		#$AC	; _global_flags_array.byte15 mask $10
		JSR		_global_game_flag_set
loc_143195:
		LDA		_global_flags_array.byte10
		BPL		loc_1431A3
		LDA		word_6
		AND		#$20
		BEQ		loc_1431C2
		MSGX	_msg_m00_break,$668	; "Zzz... Zzz... Something... so bright... but it's a dream"
; ----------------------------------
loc_1431A3:
		LDA		_global_flags_array.byte16	; baramos is defeated
		BPL		loc_1431F7
		LDA		word_4
		CMP		#$99
		BNE		loc_1431B6					; except some particular chars
		LDA		word_4+1
		BNE		loc_1431B6
		MSGX	_msg_m00_break,$34E	; $34E "Thanks to you defeating Baramos"
loc_1431B6:
		LDA		_mapNumber
		BEQ		loc_1431C2					; and map locations
		CMP		#$41
		BCC		loc_1431F7
		CMP		#$48
		BCS		loc_1431F7
loc_1431C2:									; the rest of chars will speak different messages
		LDY		#[override_msg_list0_last-override_msg_list0]
loc_1431C4:
		LDA		override_msg_list0,Y		; find a char in list...
		CMP		word_4
		BNE		loc_1431D2
		LDA		override_msg_list0+1,Y
		CMP		word_4+1
		BEQ		loc_1431D9
loc_1431D2:
		DEY
		DEY
		DEY
		BPL		loc_1431C4
		BMI		loc_1431F7
loc_1431D9:
		LDA		override_msg_list0+2,Y		; ... and play it's patch message instead of usual one
		PHA
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		byte_D2
		STA		_msg_directobject_param
		STA		byte_D4
		PLA
		STA		byte_5C
		LDA		#0
		STA		byte_5D
		LDA		#$69						; base idx $669
		LDX		#6
		JSR		_add_arg5C_to16
		JMP		_wrap_msg_m00_arg5C
loc_1431F7:
		LDA		word_6
		AND		#$1F
		STA		word_6
		LDA		_mapNumber
		CMP		#$B
		BEQ		loc_143207
		CMP		#$78
		BNE		loc_143212
loc_143207:
		LDA		_global_flags_array.byte2
		AND		#4
		BNE		loc_143212
		MSGX	_msg_m00_break,$302	; "Zzzz Zzzz"
loc_143212:
		LDY		#0									; other special case, when you invisible
		LDA		byte_AC
		AND		#$1F
		BNE		loc_143244
		LDA		_global_flags_array.byte14
		BNE		loc_143231
		LDA		_global_flags_array.byte10
		BPL		loc_143281
		LDA		word_6
		PHA
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		PLA
		STA		word_6
		LDY		#$40
		BNE		loc_143244
loc_143231:
		LDY		#$20
		LDA		_global_flags_array.byte3
		AND		#$3F
		CMP		#$17
		BEQ		loc_143244
		CMP		#$18
		BEQ		loc_143244
		CMP		#$20
		BNE		loc_143281
loc_143244:
		TYA
		CLC
		ADC		word_6
		TAY
		LDA		override_invisible_msg_list,Y	; get the particular character message to speak with you invisible
		BEQ		loc_143281				; there are three special cases
		CMP		#1
		BNE		loc_143256
		MSGX	_msg_m00_break_ex,$6D4	; "Well, if it isn't <name>! Why are you dressed that way?"
loc_143256:
		CMP		#2
		BNE		loc_143262
		JSR		_arg4_backup
		MSGX	_msg_m00,$6D5	; "Even if you make yourself invisible, we'll know where you are"
		BCS		loc_14327E
loc_143262:
		CMP		#3
		BNE		loc_14326E
		JSR		_arg4_backup
		MSGX	_msg_m00,$6D6	; "Even if you change your form, we'll know who you are"
		BCS		loc_14327E
loc_14326E:
		STA		byte_5C			; nothing special is left, so display one of the messages from list
		LDA		#0
		STA		byte_5D
		LDA		#$D3	; $6D3 base message
		LDX		#6
		JSR		_add_arg5C_to16
		JMP		_wrap_msg_m00_arg5C
; ----------------------------------
loc_14327E:						; special override when you becomes a king
		JSR		_arg4_restore
loc_143281:
		BIT		_global_flags_array.byte2
		BVC		loc_1432A7
		LDY		#[override_msg_list1_last-override_msg_list1]
loc_143288:
		LDA		word_4
		CMP		override_msg_list1,Y
		BNE		loc_1432A2
		LDA		word_4+1
		CMP		override_msg_list1+1,Y
		BNE		loc_1432A2
		LDA		override_msg_list1+2,Y
		JMP		_wrap_msg_m00_arg3
loc_1432A2:
		DEY
		DEY
		DEY
		BPL		loc_143288
; ----------------------------------
loc_1432A7:
		LDA		word_4
		CMP		#$8D
		BNE		loc_1432BC
		LDA		word_4+1
		CMP		#2
		BNE		loc_1432BC
		LDA		_global_flags_array.byte5
		BMI		loc_1432BC
		MSGX	_msg_m00_break,$459
; ----------------------------------
; finally the regular handlers
loc_1432BC:
		LDY		#[_common_npc_idx_delta_table_last-_common_npc_idx_delta_table]
loc_1432BE:
		LDA		_common_npc_idx_delta_table,Y		; calc the main npc handler index
		LDX		_common_npc_idx_delta_table+1,Y
		JSR		_get_common_npc_msg_idx				; and the message index
		BCS		loc_1432D0
		DEY
		DEY
		BPL		loc_1432BE
		MSGX	_msg_m00_break,$6A9	; "There's no one in that direction."
loc_1432D0:
		LDA		_npc_base_hndl_lib,Y
		STA		word_5E
		LDA		_npc_base_hndl_lib+1,Y
		STA		word_5E+1
		JMP		(word_5E)

; every single character in this game has its own predetermined message if
; you speak with it invisible lol
;
override_invisible_msg_list:
		.BYTE	  4,  5,  7,  8,  9, $A, $F, $B,  6, $E, $A, $C,  0, $D,$13,$14
		.BYTE	$16,$15,  0,  0,$12,  0,  0,$10,  0, $C,  9,  2,  0,  0,$11,  0
		.BYTE	$17,$18,$1A,$1B,$1C,$1D,$22,$1E,$19,$21,$1D,$1F,  0,$20,$25,$26
		.BYTE	$28,$27,  0,  0,$24,  0,  0,$23,  0,$1F,$1C,  3,  0,  0,  1,  0
		.BYTE	  0,$29,$2A,$2B,$2C,$2D,  0,$2E,$2F,  0,$30,$31,  0,$32,$33,$34
		.BYTE	$35,$36,$2C,  0,$37,  0,  0,  0,  0,$38,$3F,$39,  0,  0,  0,  0

; list of npc and its corresponding messages in case you defeated baramos,
; they are all replacing the normal messages before you do it
; byte+0,+1 - npc parameters
; byte+2 - message offset with base $669, only 0-$B and $11-$18 are used here
;
override_msg_list0:
		.BYTE	$1C,  2,  0
		.BYTE	$27,  2,  1
		.BYTE	$28,  2,  2
		.BYTE	$29,  2,  3
		.BYTE	$2A,  2,  4
		.BYTE	$2B,  2,  0
		.BYTE	$2C,  2,  5
		.BYTE	$53,  0,  5
		.BYTE	$2D,  2,  6
		.BYTE	$69,  1,  7
		.BYTE	$2E,  2,  8
		.BYTE	$2F,  2,  2
		.BYTE	$30,  2,  6
		.BYTE	$56,  0,  5
		.BYTE	$31,  2,  9
		.BYTE	$32,  2,  6
		.BYTE	$33,  2,  0
		.BYTE	$34,  2, $A
		.BYTE	$36,  2,  9
		.BYTE	$37,  2,  9
		.BYTE	$38,  2,  5
		.BYTE	$39,  2,  3
		.BYTE	$3A,  2,  0
		.BYTE	$3B,  2, $B
		.BYTE	$3C,  2,  2
		.BYTE	$3D,  2, $B
		.BYTE	  2,  3,$11
		.BYTE	$F8,  2,$12
		.BYTE	  3,  3,$13
		.BYTE	  4,  3,$14
		.BYTE	$13,  3,$15
		.BYTE	$DA,  3,$16
		.BYTE	$1C,  3,$17
override_msg_list0_last:		
		.BYTE	$DC,  3,$18
; the same for override messages when you are a King
;
override_msg_list1:
		.BYTE	  5,  0,$EB
		.BYTE	$A5,  1,$EB
		.BYTE	$25,  1,$EC
		.BYTE	$26,  1,$ED
		.BYTE	$27,  1,$EE
		.BYTE	$28,  1,$EF
		.BYTE	$29,  1,$F0
override_msg_list1_last:
		.BYTE	$2A,  1,$DB

_common_npc_idx_delta_table:
		.WORD	$001
		.WORD	$002
		.WORD	$003
		.WORD	$004
		.WORD	$005
		.WORD	$006
		.WORD	$00A	; 10
		.WORD	$028	; 40
		.WORD	$032	; 50
		.WORD	$03C	; 60
		.WORD	$050	; 80
		.WORD	$168	; 
		.WORD	$1E0
		.WORD	$1EA
		.WORD	$1FE
		.WORD	$21C
		.WORD	$226
_common_npc_idx_delta_table_last:
		.WORD	$3C0	; 960

_npc_base_hndl_lib:
		.WORD	_npc_base_nhdl0
		.WORD	_npc_base_nhdl1
		.WORD	_npc_base_nhdl2_b6_s16_tavern_character_registration
		.WORD	_npc_base_nhdl3_shrine_of_dhama_prof_change
		.WORD	_npc_base_nhdl4
		.WORD	_npc_base_nhdl5
		.WORD	_npc_base_nhdl6
		.WORD	_npc_base_nhdl7
		.WORD	_npc_base_nhdl8
		.WORD	_npc_base_nhdl9
		.WORD	_wrap_msg_m00_b300_arg5C	; just display a message
		.WORD	_npc_base_nhdlB_ext_call0
		.WORD	_npc_base_nhdlC
		.WORD	_npc_base_nhdlD
		.WORD	_npc_base_nhdlE
		.WORD	_npc_base_nhdlF
		.WORD	_npc_base_nhdl10
		.WORD	_npc_base_nhdl11_ext_call1

; =============== S U B	R O U T	I N E =======================================
; search and exec for first half (approximately) of npc handles
;
_npc_base_nhdlB_ext_call0:
		LDA		#0
		BEQ		_npc_ext_hndl_call

; =============== S U B	R O U T	I N E =======================================
; search and exec for second half of npc handlers
;
_npc_base_nhdl11_ext_call1:
		LDA		#$4D

; =============== S U B	R O U T	I N E =======================================
; calculates pointer of the NPC handler by summing the sizes of the sequentially
; stored npc handlers in memory, sizes are in u8[] table.
; dunno why they need to split the indexes of the handlers to two lists, maybe
; we can get rid of it and still be able to address up to 256 handllers (currently
; only 127 used)
;
_npc_ext_hndl_call:
		CLC
		ADC		byte_5C					; index of npc handler
		TAX
		ASL								; look like leftover from dev stage, when offsets were 16-bit
		TAY								; investigate and get rid of it if not needed
		LDA		#<[_npc_hndl0]			; load base offset for the npc handlers (first handler)
		STA		word_5E
		LDA		#>[_npc_hndl0]
		STA		word_5E+1
loc_143419:
		LDA		_npc_hndl_size_list,X	; summing
		CLC
		ADC		word_5E
		STA		word_5E
		BCC		loc_143425
		INC		word_5E+1
loc_143425:
		DEX								; from top the the very first one
		BPL		loc_143419
		JMP		(word_5E)				; just to resulting ptr

_npc_hndl_size_list:
		.BYTE	  _npc_hndl0-_npc_hndl0
		.BYTE	  _npc_hndl1_hero_mother-_npc_hndl0
		.BYTE	  _npc_hndl2-_npc_hndl1_hero_mother
		.BYTE	  _npc_hndl3-_npc_hndl2
		.BYTE	  _npc_hndl4-_npc_hndl3
		.BYTE	  _npc_hndl5-_npc_hndl4
		.BYTE	  _npc_hndl6-_npc_hndl5
		.BYTE	  _npc_hndl7-_npc_hndl6
		.BYTE	  _npc_hndl8-_npc_hndl7
		.BYTE	  _npc_hndl9-_npc_hndl8
		.BYTE	  _npc_hndlA-_npc_hndl9
		.BYTE	  _npc_hndlB-_npc_hndlA
		.BYTE	  _npc_hndlC-_npc_hndlB
		.BYTE	  _npc_hndlD-_npc_hndlC
		.BYTE	  _npc_hndlE-_npc_hndlD
		.BYTE	  _npc_hndlF-_npc_hndlE
		.BYTE	  _npc_hndl10-_npc_hndlF
		.BYTE	  _npc_hndl11-_npc_hndl10
		.BYTE	  _npc_hndl12-_npc_hndl11
		.BYTE	  _npc_hndl13-_npc_hndl12
		.BYTE	  _npc_hndl14-_npc_hndl13
		.BYTE	  _npc_hndl15-_npc_hndl14
		.BYTE	  _npc_hndl16_elf_village_queen-_npc_hndl15
		.BYTE	  _npc_hndl17_elf_village_old_father-_npc_hndl16_elf_village_queen
		.BYTE	  _npc_hndl18_baharata_granddad-_npc_hndl17_elf_village_old_father
		.BYTE	  _npc_hndl19_baharata_pepper_shop-_npc_hndl18_baharata_granddad
		.BYTE	  _npc_hndl1A-_npc_hndl19_baharata_pepper_shop
		.BYTE	  _npc_hndl1B-_npc_hndl1A
		.BYTE	  _npc_hndl1C-_npc_hndl1B
		.BYTE	  _npc_hndl1D-_npc_hndl1C
		.BYTE	  _npc_hndl1E-_npc_hndl1D
		.BYTE	  _npc_hndl1F-_npc_hndl1E
		.BYTE	  _npc_hndl20-_npc_hndl1F
		.BYTE	  _npc_hndl21-_npc_hndl20
		.BYTE	  _npc_hndl22_greenland_man-_npc_hndl21
		.BYTE	  _npc_hndl23-_npc_hndl22_greenland_man
		.BYTE	  _npc_hndl24-_npc_hndl23
		.BYTE	  _npc_hndl25-_npc_hndl24
		.BYTE	  _npc_hndl26-_npc_hndl25
		.BYTE	  _npc_hndl27-_npc_hndl26
		.BYTE	  _npc_hndl28-_npc_hndl27
		.BYTE	  _npc_hndl29_baramos-_npc_hndl28
		.BYTE	  _npc_hndl2A-_npc_hndl29_baramos
		.BYTE	  _npc_hndl2B_meteorite_armband_guard-_npc_hndl2A
		.BYTE	  _npc_hndl2C-_npc_hndl2B_meteorite_armband_guard
		.BYTE	  _npc_hndl2D-_npc_hndl2C
		.BYTE	  _npc_hndl2E_wounded_himiko-_npc_hndl2D
		.BYTE	  _npc_hndl2F-_npc_hndl2E_wounded_himiko
		.BYTE	  _npc_hndl30-_npc_hndl2F
		.BYTE	  _bD_s20_npc_hndl31-_npc_hndl30
		.BYTE	  _bD_s20_npc_hndl32-_bD_s20_npc_hndl31
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl32
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _bD_s20_npc_hndl33-_bD_s20_npc_hndl33
		.BYTE	  _npc_hndl3E-_bD_s20_npc_hndl33
		.BYTE	  _npc_hndl3F-_npc_hndl3E
		.BYTE	  _npc_hndl40-_npc_hndl3F
		.BYTE	  _npc_hndl41-_npc_hndl40
		.BYTE	  _npc_hndl42_king_of_romaly_in_castle-_npc_hndl41
		.BYTE	  _npc_hndl43_former_king_of_romaly-_npc_hndl42_king_of_romaly_in_castle
		.BYTE	  _npc_hndl44-_npc_hndl43_former_king_of_romaly
		.BYTE	  _npc_hndl45-_npc_hndl44
		.BYTE	  _npc_hndl46-_npc_hndl45
		.BYTE	  _npc_hndl47_regular_king_info_and_save-_npc_hndl46
		.BYTE	  _npc_hndl47_regular_king_info_and_save-_npc_hndl47_regular_king_info_and_save
		.BYTE	  _npc_hndl47_regular_king_info_and_save-_npc_hndl47_regular_king_info_and_save
		.BYTE	  _npc_hndl47_regular_king_info_and_save-_npc_hndl47_regular_king_info_and_save
		.BYTE	  _npc_hndl47_regular_king_info_and_save-_npc_hndl47_regular_king_info_and_save
		.BYTE	  _npc_hndl47_regular_king_info_and_save-_npc_hndl47_regular_king_info_and_save
		.BYTE	  _npc_hndl4D-_npc_hndl47_regular_king_info_and_save
		.BYTE	  _npc_hndl4E-_npc_hndl4D
		.BYTE	  _npc_hndl4F-_npc_hndl4E
		.BYTE	  _npc_hndl50-_npc_hndl4F
		.BYTE	  _npc_hndl51-_npc_hndl50
		.BYTE	  _npc_hndl52-_npc_hndl51
		.BYTE	  _npc_hndl53-_npc_hndl52
		.BYTE	  _npc_hndl54-_npc_hndl53
		.BYTE	  _npc_hndl55-_npc_hndl54
		.BYTE	  _npc_hndl56-_npc_hndl55
		.BYTE	  _npc_hndl57-_npc_hndl56
		.BYTE	  _npc_hndl58-_npc_hndl57
		.BYTE	  _npc_hndl59-_npc_hndl58
		.BYTE	  _npc_hndl5A-_npc_hndl59
		.BYTE	  _npc_hndl5B-_npc_hndl5A
		.BYTE	  _npc_hndl5C_portoga_king-_npc_hndl5B
		.BYTE	  _npc_hndl5D-_npc_hndl5C_portoga_king
		.BYTE	  _npc_hndl5E-_npc_hndl5D
		.BYTE	  _npc_hndl5F-_npc_hndl5E
		.BYTE	  _npc_hndl60-_npc_hndl5F
		.BYTE	  _npc_hndl61-_npc_hndl60
		.BYTE	  _npc_hndl62-_npc_hndl61
		.BYTE	  _npc_hndl63-_npc_hndl62
		.BYTE	  _npc_hndl64-_npc_hndl63
		.BYTE	  _npc_hndl65-_npc_hndl64
		.BYTE	  _npc_hndl66-_npc_hndl65
		.BYTE	  _npc_hndl67-_npc_hndl66
		.BYTE	  _npc_hndl68-_npc_hndl67
		.BYTE	  _npc_hndl69-_npc_hndl68
		.BYTE	  _npc_hndl6A-_npc_hndl69
		.BYTE	  _npc_hndl6B-_npc_hndl6A
		.BYTE	  _npc_hndl6C-_npc_hndl6B
		.BYTE	  _npc_hndl6D-_npc_hndl6C
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D
		.BYTE	  _npc_hndl6D-_npc_hndl6D

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl6:
		LDA		#0
		BEQ		sub_1434B2

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdlC:
		LDA		#$15

; =============== S U B	R O U T	I N E =======================================
sub_1434B2:
		CLC
		ADC		byte_5C
		STA		byte_6FF
		JMP		sub_142486

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl7:
		LDA		#0
		BEQ		sub_1434C1

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdlD:
		LDA		#2

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_1434C1:
		CLC
		ADC		byte_5C

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_1434C4:
		STA		byte_6FF
		JMP		sub_142135

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl8:
		LDA		#$14
		BNE		sub_1434D0

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdlE:
		LDA		#$17

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_1434D0:
		CLC
		ADC		byte_5C

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_1434D3:
		STA		byte_6FF
		JMP		loc_1421F5

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl10:
		LDA		#$F7
		LDX		#3
		JSR		_add_arg5C_to16
		JMP		_wrap_msg_m00_arg5C

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdl9:
		LDA		#$8E
		LDX		#5
		JSR		_add_arg5C_to16
		JMP		sub_1434F4

; =============== S U B	R O U T	I N E =======================================
_npc_base_nhdlF:
		LDA		#$98
		LDX		#5
		JSR		_add_arg5C_to16

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
sub_1434F4:
		JSR		_wrap_msg_m00_arg5C
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143503
		LDA		#$D
		LDX		#3
		JSR		_add_arg5C_to16
		JMP		_wrap_msg_m00_arg5C
loc_143503:
		LDA		#$1A
		LDX		#3
		JSR		_add_arg5C_to16

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
_wrap_msg_m00_arg5C:
		LDA		byte_5C
		LDX		byte_5D
		FARX	_bE_s4_msg_m00
		RTS

; =============== S U B	R O U T	I N E =======================================
; get's the full 16-bit index of the message instead of 8-bit and increase
; it by $300, don't know why they did this in such way, since actually uses
; 16-bit indexes here, but seems it's the last function we actually need in
; that form, but which we can alter to show more convinient indexes
;
_wrap_msg_m00_b300_arg5C:
		LDX		byte_5D
		LDA		byte_5C
		INX
		INX
		INX
		FARX	_bE_s4_msg_m00
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl0:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		word_4
		AND		word_4+1
		BPL		loc_14352E
		MSGX	_msg_m00_break,$5B5	; "Won't your mommy be worried if you don't go home?!"
loc_14352E:
		MSGX	_msg_m00_break,$5B6	; "Oh, what has become of my <name>!"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1_hero_mother:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		word_4
		AND		word_4+1
		BMI		loc_143541
		LDA		byte_D2
		STA		_msg_directobject_param
		MSGX	_msg_m00_break,$5BF	 ; "Oh, mercy! My dear sweet <name>!"
loc_143541:
		LDA		_global_flags_array.byte2
		BPL		loc_143559
		MSGX	_msg_m00,$5BB	; "What wrong, <name>? Is the life of adventure too tough?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143553
		MSGX	_msg_m00,$5BC	; "As your mother, I'd like you to stay with me always, <name>"
		BCS		loc_143556
loc_143553:
		MSGX	_msg_m00,$5BE	; "That's right! The blood of the great Ortega runs through your veins!"
loc_143556:
		MSGX	_msg_m00_break,$5BD	; "Come on then! It's time to go! Like your fine brave father!"
loc_143559:
		JSR		_day_night_test
		BCS		loc_143563
		MSGX	_msg_m00,$5B7	; "Welcome back, <name> my dear"
		BCS		loc_143566
loc_143563:
		MSGX	_msg_m00,$5BA	; "Oh! You're back late. I'm glad you're safe and sound"
loc_143566:
		JSR		_test_if_party_is_less_than_two
		BCC		loc_14356E
		MSGX	_msg_m00,$5B8	; "Your friend<s> should come in and rest, too"
loc_14356E:
		LDX		#$3C
		JSR		_sleep_X_sync
		LDA		#$FF
		STA		byte_C6
		FARX	_b6_s1D_hero_rest_at_home_anim
		JSR		_wrap_bE_sD_wnd3E
		LDA		#$17	; _global_flags_array.byte1 mask $80 "_f_WarpBlock"
		JSR		_global_game_flag_set
		MSGX	_msg_m00_break_ex,$5B9	; "Good morning! Time to get up and go, <name>"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2:
		LDA		_global_flags_array.byte1
		AND		#2
		BNE		loc_1435A6
		LDA		_global_flags_array.byteA
		AND		#$20
		BNE		loc_1435A6
		BCS		loc_1435A6
		MSGX	_msg_m00,$5C9
		LDA		#ITEM_MAGIC_BALL
		JSR		_give_item_to_player_msg2
		BCC		locret_1435A5
		LDA		#$55	; _global_flags_array.byteA mask $20
		JSR		_global_game_flag_set
locret_1435A5:
		RTS
loc_1435A6:
		MSGX	_msg_m00_break,$5CA

; =============== S U B	R O U T	I N E =======================================
; an elder wanted to build a town and need a merchant
;
_npc_hndl3:
		LDA		_global_flags_array.byte18	; test if merchant already working
		LSR
		BCC		loc_1435B3
		MSGX	_msg_m00_break,$313	; "For being so kind, I will give you a hint"
loc_1435B3:
		MSGX	_msg_m00,$5CC	; "I think I'll build a town here"
		JSR		_sram_b0_s33_count_non_dead_party_chars
		LDA		word_4
		CMP		#2
		BCC		loc_1435E2
		JSR		_test_if_party_is_less_than_two
		BCC		loc_1435E2
		LDA		#0
		STA		byte_CE
loc_1435C8:
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4
		AND		word_4+1
		BPL		loc_1435DA
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		CMP		#5
		BEQ		loc_1435E5
loc_1435DA:
		INC		byte_CE
		LDA		byte_CE
		CMP		#4
		BNE		loc_1435C8
loc_1435E2:
		MSGX	_msg_m00_break,$5CD	; "I'm not particular. Even if someone's level is low"
loc_1435E5:
		LDA		byte_CE
		STA		byte_D2
		MSGX	_msg_m00,$5CE	; "What do you say, <name>? Will you accept the job?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143628
		MSGX	_msg_m00,$5D0	; "Really? <name> will give up the journey and settle down in this town?..."
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143628
		MSGX	_msg_m00,$5D1	; "Oh, I'm grateful. From this day forward <name> and I shall start to build..."
		LDA		byte_D2
		STA		_msg_directobject_param
		STA		byte_CE
		JSR		_sram_b0_sF_unassigned_formation_char_name_read
		LDX		#7
loc_143607:
		LDA		word_4,X
		STA		_merch_town_name_high_chars-4,X
		DEX
		CPX		#4
		BCS		loc_143607
loc_143611:
		LDA		word_4,X
		STA		_merch_town_name_low_chars,X
		DEX
		BPL		loc_143611
		LDA		#$C0	; _global_flags_array.byte18 mask $01
		JSR		_global_game_flag_set
		MSGX	_msg_m00,$5D2	; "<name>: Well, I'm going to stay here" and send all items to Vault
		JSR		_player_items_flush_to_vault
		FARX	_b6_s17_newtown_start_build_town_anim
		RTS
loc_143628:
		MSGX	_msg_m00_break,$5CF	; "I see. That's too bad"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4:
		MSGX	_msg_m00_break_ex,$5D3

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break_ex,$5D4

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5D7

; =============== S U B	R O U T	I N E =======================================
_npc_hndl7:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5DE

; =============== S U B	R O U T	I N E =======================================
_npc_hndl8:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5DF

; =============== S U B	R O U T	I N E =======================================
_npc_hndl9:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5E0

; =============== S U B	R O U T	I N E =======================================
_npc_hndlA:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_ex,$5E1
		LDA		_q_OrbsCollected
		AND		#4
		BNE		loc_14365F
		MSGX	_msg_m00,$5E2
loc_14365F:
		MSGX	_msg_m00_break,$5E3

; =============== S U B	R O U T	I N E =======================================
_npc_hndlB:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5E4

; =============== S U B	R O U T	I N E =======================================
_npc_hndlC:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00,$5E7
		MSGX	_msg_m00_break,$695

; =============== S U B	R O U T	I N E =======================================
_npc_hndlD:
		MSGX	_msg_m00,$5F4
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#5
		FARX	_b0_s1_battle_typeA_launch
		LDA		#$80
		STA		_npcs_pos_list+4
		STA		_npcs_pos_list+7
		JSR		sub_174CBD
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndlE:
		LDA		#0
		STA		byte_CE
loc_14368E:
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4
		AND		word_4+1
		BMI		loc_14369F
		INC		byte_CE
		LDA		byte_CE
		CMP		#3
		BNE		loc_14368E
loc_14369F:
		JSR		_sram_b0_s2C_player_CLASS_read
		BEQ		loc_1436AE
		JSR		_sram_b0_s2F_player_gender_read
		LDA		word_4
		BEQ		loc_1436AE
		MSGX	_msg_m00_break,$6AB
loc_1436AE:
		LDA		_npcs_pos_list+$34
		CMP		#7
		BNE		loc_1436B8
		MSGX	_msg_m00_break,$69A
loc_1436B8:
		MSGX	_msg_m00,$696
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1436C3
		MSGX	_msg_m00_break,$697
loc_1436C3:
		MSGX	_msg_m00,$698
		FARX	_bC_s30
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndlF:
		LDA		_global_flags_array.byte2
		AND		#4
		BNE		loc_1436D4
		MSGX	_msg_m00_break,$5F5
loc_1436D4:
		MSGX	_msg_m00_break,$5F6

; =============== S U B	R O U T	I N E =======================================
_npc_hndl10:
		MSGX	_msg_m00,$5F7
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_1436E2
loc_1436DF:
		MSGX	_msg_m00_break,$5F8
loc_1436E2:
		MSGX	_msg_m00,$5F9
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1436DF
		MSGX	_msg_m00_break,$5FA

; =============== S U B	R O U T	I N E =======================================
_npc_hndl11:
		MSGX	_msg_m00,$5FB
		FARX	_bC_s39
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl12:
		MSGX	_msg_m00,$5FC
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_CE
loc_1436FE:
		DEC		byte_CE
		BMI		loc_143711
		JSR		_sram_b0_s2C_player_CLASS_read
		LDA		word_4
		BEQ		locret_143710
		JSR		_sram_b0_s2F_player_gender_read
		LDA		word_4
		BNE		loc_1436FE
locret_143710:
		RTS
loc_143711:
		MSGX	_msg_m00_break,$5FD

; =============== S U B	R O U T	I N E =======================================
_npc_hndl13:
		JSR		_elf_village_human_test
		BNE		loc_14371E
		LDA		#$15
		JMP		sub_1434D3
loc_14371E:
		MSGX	_msg_m00_break,$602	; "I cannot sell anything to a human being"

; =============== S U B	R O U T	I N E =======================================
_elf_village_human_test:
		LDA		_global_flags_array.byte14	; staff of change timer
		BEQ		loc_14372B
		LDA		_global_flags_array.byte3	; if it counting and the index of char is $1E
		AND		#$3F
loc_14372B:
		CMP		#$1E
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl14:
		JSR		_elf_village_human_test
		BEQ		loc_143736
		MSGX	_msg_m00_break,$603	; "Ah! A human!"
loc_143736:
		MSGX	_msg_m00_break,$604	; "The dwarf is my friend!"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl15:
		MSGX	_msg_m00,$605
		JSR		_elf_village_human_test
		BEQ		locret_143744
		MSGX	_msg_m00_break,$606
locret_143744:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl16_elf_village_queen:
		JSR		_check_if_sleeping_quest_is_over
		BCS		.dream_ruby_quest_is_over	; if we have wakeup powder or already used it, then generic message
		BEQ		.dream_ruby_quest_check		; if we haven't wakeup power, non-zero will be only if we used it
.dream_ruby_quest_is_over:					; so in both cases we have the same message
		MSGX	_msg_m00_break,$60A	; "That doesn't mean I like humans now. Go now!"
.dream_ruby_quest_check:
		LDA		#ITEM_DREAM_RUBY
		JSR		_wrap_is_players_owns_item_storeCE
		BCS		.dream_ruby_obtained
.begin_the_dream_ruby_quest:
		MSGX	_msg_m00,$607	; "Long ago my daughter, Anne, fell in love with a human"
		LDA		#$21	; _global_flags_array.byte4 mask $02
		JMP		_global_game_flag_set
.dream_ruby_obtained:
		LDA		_global_flags_array.byte4
		AND		#2
		BNE		.return_dream_ruby
		JSR		_arg4_backup					; got here if we already got the Dream Ruby, but hasn't speak with Elf yet
		JSR		.begin_the_dream_ruby_quest		; first speak the main line, then go directly to the next scenario part
		MSGX	_msg_m00,$608	; "Please wait"
		JSR		_arg4_restore
.return_dream_ruby:
		JSR		_player_item_remove_arg4		; remove the dream ruby
		LDA		#ITEM_WAKE_UP_POWDER			; gives the WakeUp powder
		STA		byte_CF
		JSR		_sram_b0_s29_player_inventory_item_add
		MSGX	_msg_m00_break,$609	; "Is that which you carry, the Dream Ruby, by any chance?"

; =============== S U B	R O U T	I N E =======================================
_check_if_sleeping_quest_is_over:
		LDA		#ITEM_WAKE_UP_POWDER
		STA		byte_CE
		FARX	_b0_s4D_is_anybody_owns_item	; get the wakeup powder posession flag
		LDA		_global_flags_array.byte2
		AND		#4
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl17_elf_village_old_father:
		JSR		_check_if_sleeping_quest_is_over
		BCS		loc_143793
		BEQ		loc_143796
loc_143793:
		MSGX	_msg_m00_break,$60C	; "This can't be! My son? Dead?!"
loc_143796:
		MSGX	_msg_m00_break,$60B	; "That the village was put to sleep is my son's fault"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl18_baharata_granddad:
		LDA		_global_flags_array.byte4
		AND		#4
		BNE		loc_1437B1
		LDA		#$22	; _global_flags_array.byte4 mask $04
		JSR		_global_game_flag_set
		MSGX	_msg_m00,$612	; "Hear ye, wayfarers all. My dear granddaughter, Tania was kidnapped by vile folk"
		MSGX	_msg_m00,$6CF	; "Galen: `I'll go!`"
		LDA		#1
		FARX	_bC_s0_npc_anim_script_init
		RTS
loc_1437B1:
		MSGX	_msg_m00_break,$613	; "If for some reason Galen, too, should be captured.."

; =============== S U B	R O U T	I N E =======================================
; appears only after you save Tania and Galen
;
_npc_hndl19_baharata_pepper_shop:
		LDA		_global_flags_array.byteA
		BMI		.pepper_quest_is_not_copleted
		MSGX	_msg_m00,$614	; "Come in! Welcome! This is a pepper store"
		FARX	_bE_s1C_yes_or_no_question
		BNE		.pepper_quest_is_not_copleted
		MSGX	_msg_m00,$615	; "Here you are! It's on the house"
		LDA		#ITEM_BLACK_PEPPER
		JSR		_bD_s27_give_item_to_player_msg1
		BCC		locret_1437D0
		LDA		#$57	; _global_flags_array.byteA mask $80
		JSR		_global_game_flag_set
locret_1437D0:
		RTS
.pepper_quest_is_not_copleted:
		MSGX	_msg_m00_break,$616	; "Take care. They say the Shrine of Dhama is deep in the mountains of the north"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1A:
		MSGX	_msg_m00,$61A

; =============== S U B	R O U T	I N E =======================================
sub_1437D7:
		MSGX	_msg_m00_break,$618

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1B:
		MSGX	_msg_m00,$61B
		BCS		sub_1437D7

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1C:
		MSGX	_msg_m00,$61C
		LDA		#$6D
		JSR		_wrap_is_players_owns_item_storeCE
		BCC		loc_1437EA
		RTS
loc_1437EA:
		MSGX	_msg_m00,$61D
		LDA		#$6D
		JMP		_give_item_to_player_msg0

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1D:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		word_6+1
		BNE		loc_1437FD
		LDA		#$14
		BNE		loc_1437FF
loc_1437FD:
		LDA		#$2C
loc_1437FF:
		STA		byte_6AD1
		LDA		#$FF
		STA		byte_6AD2
		MSGX	_msg_m00_break,$61E

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1E:
		LDA		_q_OrbsCollected
		AND		#$20
		BEQ		loc_143814
		MSGX	_msg_m00_break,$6D1	; "Place the Orb on the altar of Liamland in the distant south"
loc_143814:
		MSGX	_msg_m00,$620	; "I have waited long for this day to come"
		LDA		#ITEM_GREEN_ORB
		JSR		_bD_s27_give_item_to_player_msg1
		BCC		locret_143826
		LDA		#$CD	; _q_OrbsCollected mask $20
		JSR		_global_game_flag_set
		FARX	_bC_s23_test_orbs_collected_count
locret_143826:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl1F:
		LDA		_players_pos_list+1
		CMP		#3
		BNE		loc_143832
		MSGX	_msg_m00_break_ex,$626
loc_143832:
		JSR		sub_143847
		MSGX	_msg_m00,$621
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_143840
		MSGX	_msg_m00_break,$622
loc_143840:
		MSGX	_msg_m00,$623
		FARX	_bC_s28
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143847:
		JSR		_bD_s26_get_first_live_player_with_no_NM_status
		LDA		word_4
		STA		byte_D2
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl20:
		MSGX	_msg_m00_break_ex,$62E

; =============== S U B	R O U T	I N E =======================================
_npc_hndl21:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		byte_D2
		STA		_msg_directobject_param
		MSGX	_msg_m00_break,$62F

; =============== S U B	R O U T	I N E =======================================
; excgange the staff of change to the sailor's tight bone
_npc_hndl22_greenland_man:
		LDA		_global_flags_array.byte4
		AND		#8
		BEQ		loc_14386C
		LDA		_global_flags_array.byte2
		BMI		loc_1438B6
		MSGX	_msg_m00_break,$638	; "It's me! It's me! Heh, heh, heh!"
loc_14386C:
		LDA		#ITEM_STAFF_OF_CHANGE
		JSR		_wrap_is_players_owns_item_storeCE
		BCS		.has_staff_of_change
		MSGX	_msg_m00,$631	; "It's been many years since I've met another person"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_14387E
		MSGX	_msg_m00_break,$632	; "Really!? Is that true!? Well, that's what I want. Ha, ha, ha"
loc_14387E:
		MSGX	_msg_m00_break,$633	; "With that staff you can change your shape into anything you like."
.has_staff_of_change:
		JSR		_arg4_backup
		MSGX	_msg_m00,$634	; "Ah! That's the Staff of Change! I've been wanting that too"
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_14388F
		MSGX	_msg_m00_break,$637	; "Oh, not interested, huh? I thought as much"
loc_14388F:
		MSGX	_msg_m00,$635	; "Really! Are you serious? Ask and ye shall receive, they say!"
		JSR		_arg4_restore
		JSR		_player_item_remove_arg4
		LDA		#ITEM_SAILORS_THIGH_BONE
		STA		byte_CF
		JSR		_sram_b0_s29_player_inventory_item_add
		LDA		#$17	; _global_flags_array.byte2 mask $80 "_f_WarpBlock"
		JSR		_global_game_flag_set
		LDA		#$23	; _global_flags_array.byte4 mask $08
		JSR		_global_game_flag_set
		LDA		#$40
		STA		_ghostShipWorldX
		LDA		#$6C
		STA		_ghostShipWorldY
		LDA		#$B6	; _global_flags_array.byte16 mask $40
		JSR		_global_game_flag_set
loc_1438B6:
		MSGX	_msg_m00_break,$636	; "Oh, thanks! Heh, heh, heh!"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl23:
		LDA		byte_8
		BNE		loc_1438C1
		MSGX	_msg_m00_break,$363
loc_1438C1:
		MSGX	_msg_m00_break,$63C

; =============== S U B	R O U T	I N E =======================================
_npc_hndl24:
		MSGX	_msg_m00,$63F
		JSR		_day_night_test
		BCC		loc_1438D7
		LDA		_npcs_pos_list
		CMP		#$F
		BNE		locret_1438E3
		LDA		#$34
		BNE		loc_1438E0
loc_1438D7:
		LDA		_npcs_pos_list
		CMP		#$F
		BNE		locret_1438E3
		LDA		#$12
loc_1438E0:
		FARX	_bC_s0_npc_anim_script_init
locret_1438E3:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl25:
		LDA		_q_OrbsCollected
		LSR
		BCC		loc_1438ED
		MSGX	_msg_m00_break,$641	; "You can surely defeat the Archfiend!"
loc_1438ED:
		MSGX	_msg_m00,$640	; "I'm amazed you've made it this far!"
		MSGX	_msg_m00,$641	; "You can surely defeat the Archfiend!"
		MSGX	_msg_m00,$642	; "Here! Take with you this Silver Orb!"
		LDA		#ITEM_SILVER_ORB
		JSR		_give_item_to_player_msg2
		BCC		locret_143905
		LDA		#$C8	; _q_OrbsCollected mask $01
		JSR		_global_game_flag_set
		FARX	_bC_s23_test_orbs_collected_count
locret_143905:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl26:
		MSGX	_msg_m00,$644
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143911
		MSGX	_msg_m00_break,$645
loc_143911:
		MSGX	_msg_m00_break,$305

; =============== S U B	R O U T	I N E =======================================
_npc_hndl27:
		MSGX	_msg_m00,$646	; "You stand before the Dragon Queen..."
		LDA		#ITEM_SPHERE_OF_LIGHT
		JSR		_bD_s27_give_item_to_player_msg1
		BCC		locret_14392A
		MSGX	_msg_m00,$647	; "I hope, with this Sphere of Light, that thou canst hasten..."
		FARX	_b6_s19_dragon_queen_to_egg_transition_anim
		LDA		#$AE	; _global_flags_array.byte15 mask $40
		JSR		_global_game_flag_set
locret_14392A:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl28:
		BIT		_global_flags_array.byte4
		BVC		loc_143934
		MSGX	_msg_m00_break,$3D4
loc_143934:
		LDA		_q_OrbsPlaced
		AND		#$3F
		CMP		#$3F
		BNE		loc_14394D
		MSGX	_msg_m00,$3D3
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		FARX	_bC_s20_warp_bE_sB_arg0
		FARX	_bC_s33
		PLA
		PLA
locret_14394C:
		RTS
loc_14394D:
		MSGX	_msg_m00,$649	; "We are we are protecting the egg..."
		LDA		_q_OrbsPlaced
		AND		#$3F
		BEQ		locret_14394C
		MSGX	_msg_m00,$64A	; "You have already placed the.."
		LDA		_q_OrbsPlaced
		AND		#$3F		; mask 6 bits
		STA		byte_5C
		LDA		#$4B		; base msg $64B - silver, yellow, purple, blue, green, red ... orb
		STA		byte_5D
		LDA		#6
		STA		word_5E
loc_143969:
		LSR		byte_5C		; shift bit
		BCS		loc_143971	; if 1 - display message
		BEQ		loc_143980	; if no bits left - default message
		BNE		loc_143978	; find first non zero bit
loc_143971:
		LDA		byte_5D
		LDX		word_5E
		FARX	_bE_s4_msg_m00
loc_143978:
		INC		byte_5D
		BNE		loc_143969
		INC		word_5E
		BNE		loc_143969
loc_143980:
		MSGX	_msg_m00_break,$651

; =============== S U B	R O U T	I N E =======================================
_npc_hndl29_baramos:
		MSGX	_msg_m00_ex,$652	; "So thou hast finally made it here, eh <name>?"
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$11
		FARX	_b0_s1_battle_typeA_launch
		LDA		#$B7	; _global_flags_array.byte16 mask $80
		JSR		_global_game_flag_set
		LDA		#$80
		STA		_npcs_pos_list
		JSR		sub_174CBD
		LDX		#$FF
		STX		byte_9E
		STX		byte_2D
		INX
		STX		_players_returnable_locations+1		; disable all returnable locations
		STX		_players_returnable_locations+4
		STX		_players_returnable_locations+7
		STX		_players_returnable_locations+$A
		INX
		STX		_players_returnable_locations		; except the first one
		STX		_players_returnable_locations+3
		STX		_players_returnable_locations+6
		STX		_players_returnable_locations+9
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2A:
		JMP		_npc_hndl6C

; =============== S U B	R O U T	I N E =======================================
; it seems there are no difference what answer you choose to meteorite armband
; guard, he will disapper in any case and you already got your item before this
; conversation.
;
_npc_hndl2B_meteorite_armband_guard:
		MSGX	_msg_m00,$5FE	; "Are you the ones who have disturbed my slumber?"
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_1439D1
loc_1439CA:
		MSGX	_msg_m00,$5FF	; "Oh, not you, huh? Sorry. My mistake"
loc_1439CD:
		FARX	_b6_s18_guard_of_meteorite_armband_show_hide	; hide it, if it already enabled
		RTS
loc_1439D1:
		MSGX	_msg_m00,$600	; "Well, are you also the person who took the contents of the treasure chest?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_1439CA
		MSGX	_msg_m00,$601	; "You're an honest person, aren't you. All right then. There is nothing more I need"
		BCS		loc_1439CD	; unconditional jump

; =============== S U B	R O U T	I N E =======================================
; King of Aliahan when Baramos is defeated
_npc_hndl2C:
		LDA		_global_flags_array.byte16
		AND		#$10
		BNE		loc_143A01
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		byte_D2
		STA		_msg_directobject_param
		MSGX	_msg_m00,$677	; "Oh, <name>! You did well in defeating the Archfiend Baramos"
		FARX	_b6_s1B_interrupted_baramos_defeat_celebration_anim
		JSR		_wrap_bE_sD_wnd3E
		MSGX	_msg_m00,$678	; "...from out of nowhere, an unearthly voice is heard..."
		FARX	_b6_s1B_reinit_after_zoma_voice
		LDA		#$B4	; _global_flags_array.byte16 mask $10
		JMP		_global_game_flag_set
loc_143A01:
		MSGX	_msg_m00_break,$679	; "What is the meaning of this? Just when we thought peace had come to our world"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2D:
		LDA		_global_flags_array.byteA
		AND		#$10
		BEQ		loc_143A0E
		MSGX	_msg_m00_break,$70D
loc_143A0E:
		MSGX	_msg_m00,$63E	; gives the sword of illusion
		MSGX	_msg_m00,$70D	; explain how to use it
		LDA		#ITEM_SWORD_OF_ILLUSION
		JSR		_bD_s27_give_item_to_player_msg1
		BCC		locret_143A20
		LDA		#$54	; _global_flags_array.byteA or $10
		JSR		_global_game_flag_set
locret_143A20:
		RTS

; =============== S U B	R O U T	I N E =======================================
; after battle with Orochi in Jipang Cave
;
_npc_hndl2E_wounded_himiko:
		MSGX	_msg_m00,$70E	; "You are the only ones who have seen my true form"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143A2C
		MSGX	_msg_m00_break,$70F	; "Ho, ho! Good for you!"
loc_143A2C:
		MSGX	_msg_m00,$710	; "Heh, heh, heh. I see. Now you'll never get out alive. I'll see how you taste on a skewer!"
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#1
		FARX	_b0_s1_battle_typeA_launch
		LDA		#$27	; _global_flags_array.byte4 mask $80
		JSR		_global_game_flag_set
		JSR		sub_177CFC
		LDA		#$F
		STA		byte_7522
		JSR		sub_174CBD
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl2F:
		MSGX	_msg_m00_break,$187

; =============== S U B	R O U T	I N E =======================================
_npc_hndl30:
		MSGX	_msg_m00_break,$50D

; =============== S U B	R O U T	I N E =======================================
_bD_s20_npc_hndl31:
		JSR		sub_143847
		MSGX	_msg_m00,$627
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_143A64
		MSGX	_msg_m00,$628
		FARX	_bE_s33
		RTS
loc_143A64:
		FARX	_bC_s28
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s20_npc_hndl32:
		LDA		_global_flags_array.byte1
		AND		#$20
		BNE		loc_143A75
		MSGX	_msg_m00_break,$711
loc_143A75:
		MSGX	_msg_m00_break,$1A5

; =============== S U B	R O U T	I N E =======================================
_bD_s20_npc_hndl33:
		MSGX	_msg_m00,$683
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143AA0
		LDA		#5
		STA		byte_C0
		LDA		#0
		STA		byte_C1
		STA		byte_C2
		JSR		sub_141FB1
		BCC		loc_143AA0
		JSR		sub_141FF1
		LDA		byte_6A6D
		STA		byte_64
		FARX	_b4_s12
		STA		byte_D2
		MSGX	_msg_m00_break,$684
loc_143AA0:
		MSGX	_msg_m00_break,$685

; =============== S U B	R O U T	I N E =======================================
_npc_hndl3E:
		MSGX	_msg_m00_break_ex,$686

; =============== S U B	R O U T	I N E =======================================
_npc_hndl3F:
		MSGX	_msg_m00_break_ex,$687

; =============== S U B	R O U T	I N E =======================================
_npc_hndl40:
		MSGX	_msg_m00,$688
		LDA		_global_flags_array.byte2
		AND		#4
		BNE		loc_143AB6
		RTS
loc_143AB6:
		MSGX	_msg_m00_break,$689

; =============== S U B	R O U T	I N E =======================================
_npc_hndl41:
		MSGX	_msg_m00_break_ex,$68A

; =============== S U B	R O U T	I N E =======================================
; regular king or Romaly, may save your progress or turn to the King if you
; take him his golden crown
;
_npc_hndl42_king_of_romaly_in_castle:
		LDA		#ITEM_GOLDEN_CROWN
		JSR		_wrap_is_players_owns_item_storeCE
		BCS		loc_143AC9
		LDY		#$8E
		JMP		_npc_hndl47_regular_king_info_and_save
loc_143AC9:
		JSR		_player_item_remove_arg4
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		word_4
		AND		word_4+1
		BMI		loc_143ADA
		JSR		_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
loc_143ADA:
		MSGX	_msg_m00,$68B	; "Oh! You have returned the Golden Crown. How splendid!"
.ask_to_be_a_king_first_time:
		MSGX	_msg_m00,$68C	; "What say ye? Wilt thou not rule this land in my place?"
		FARX	_bE_s1C_yes_or_no_question
		BEQ		_turn_to_a_king_of_romaly
		MSGX	_msg_m00,$68D	; "Speak ye not thusly. Accept instead, if for the sake of experience alone"
		BCS		.ask_to_be_a_king_first_time	; loop here until you agree
_turn_to_a_king_of_romaly:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		word_4
		AND		word_4+1
		BMI		loc_143AF8
		JSR		_bD_s26_get_first_live_player_with_no_NM_status
		STA		byte_D2
loc_143AF8:
		MSGX	_msg_m00,$68E	; "It is done! Henceforth <name> shall rule as king of this castle!"
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$2A	; _global_flags_array.byte5 mask $04
		JSR		_global_game_flag_set			; this flag is never removed, just to flag it done once at least
		FARX	_bC_s19_turn_king_of_romaly_on_off	; this toggles the king on or off every time it's called
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
; toggles to the hero back
;
_npc_hndl43_former_king_of_romaly:
		MSGX	_msg_m00,$68F	; "Ho, ho, ho! It is I. The former king"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143B14
loc_143B11:
		MSGX	_msg_m00_break,$690	; "Well, until we meet again! Ho, ho, ho!"
loc_143B14:
		MSGX	_msg_m00,$691	; "What's this? You tire already of being king?"
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_143B21
		MSGX	_msg_m00,$692	; "Whew! That's a relief!"
		BCS		loc_143B11
loc_143B21:
		MSGX	_msg_m00_ex,$693	; "I see. I shall not make ye continue in something ye dislike"
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		FARX	_bC_s19_turn_king_of_romaly_on_off
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl44:
		MSGX	_msg_m00,$682
		MSGX	_msg_m00_break,$585

; =============== S U B	R O U T	I N E =======================================
_npc_hndl45:
		LDA		_global_flags_array.byte15
		LSR
		BCS		loc_143B3E
		MSGX	_msg_m00_break,$6CD
loc_143B3E:
		MSGX	_msg_m00_break,$6CE

; =============== S U B	R O U T	I N E =======================================
_npc_hndl46:
		LDA		_global_flags_array.byte16
		BPL		loc_143B4E
		AND		#$10
		BNE		_npc_hndl47_regular_king_info_and_save
		MSGX	_msg_m00_break,$50C
loc_143B4E:
		LDA		_global_flags_array.byte2
		BPL		_npc_hndl47_regular_king_info_and_save
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		MSGX	_msg_m00_break,$189

; =============== S U B	R O U T	I N E =======================================
_npc_hndl47_regular_king_info_and_save:
		TYA
		LSR
		SEC
		SBC		#$46
		STA		byte_5C
		LDA		_global_flags_array.byteE
		AND		#$F8
		ORA		byte_5C
		STA		_global_flags_array.byteE
		JSR		sub_143E48
		LDA		#0
		JSR		_special_king_message_select_gendered
		JSR		sub_143E67
		LDA		#2
		JSR		_special_king_message_select
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143B96
loc_143B80:
		FARX	_b7_sD_save_data
		LDA		_global_flags_array.byteE
		AND		#7
		CMP		#3
		BEQ		loc_143B93
		MSGX	_msg_m00,$506
		JMP		loc_143B96
loc_143B93:
		MSGX	_msg_m00,$6A3
loc_143B96:
		LDA		#3
		JSR		_special_king_message_select
		FARX	_bE_s1C_yes_or_no_question
		BEQ		loc_143BCB
		LDA		#5
		JSR		_special_king_message_select
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		FARX	_bB_s4_apu_set_flag0
		JSR		_pal_fade_out
		JSR		_ppu_screen_clear
		JSR		_wrap_bE_sD_wnd3E
		JSR		_pal_fade_in
		LDA		#0
		STA		byte_6A3E
		MSGX	_msg_m00,$50E
		LDA		_cur_chr0_bank_prg_hi
		AND		#$EF
		STA		_cur_chr0_bank_prg_hi
		LDA		_mmc_cur_prg_bank				; disables the SRAM and go to the infinite loop.
		ORA		#$10							; in the jap version perfornig only once.
		JSR		_mmc1_prg						; here is for some reason it constantly disables SRAM
loc_143BC0:
		JMP		loc_143BC0
loc_143BCB:
		LDA		#4
		JMP		_special_king_message_select_gendered

; =============== S U B	R O U T	I N E =======================================
; a man by the left hand of Aliahan king in the king's hall
;
_npc_hndl4D:
		JSR		_test_if_party_is_less_than_two
		BCS		loc_143BD8
		MSGX	_msg_m00_break,$5C0	; "A solo journey is too dangerous.."
loc_143BD8:
		LDA		#$39
		STA		byte_CE
		JSR		_bD_s26_get_first_live_player_with_no_NM_status
		BCS		loc_143BF9
		LDA		#$58
		JSR		_wrap_is_players_owns_item_storeCE
		BCS		loc_143BF9
		LDA		#$59
		JSR		_wrap_is_players_owns_item_storeCE
		BCS		loc_143BF9
		LDA		#$5A
		JSR		_wrap_is_players_owns_item_storeCE
		BCS		loc_143BF9
		MSGX	_msg_m00_break,$5C1	; "First, find a key..."
loc_143BF9:
		MSGX	_msg_m00_break,$5C2	; "A young hero from Aliahan..."

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4E:
		LDA		byte_8
		BEQ		loc_143C03
		MSGX	_msg_m00_break,$5C3
loc_143C03:
		MSGX	_msg_m00_break,$5C4

; =============== S U B	R O U T	I N E =======================================
_npc_hndl4F:
		LDA		_global_flags_array.byte2
		BMI		loc_143C0E
		MSGX	_msg_m00_break,$5C5
loc_143C0E:
		MSGX	_msg_m00_break,$5C6

; =============== S U B	R O U T	I N E =======================================
_npc_hndl50:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		word_6+1
		BEQ		loc_143C1B
		MSGX	_msg_m00_break,$5C7
loc_143C1B:
		MSGX	_msg_m00_break,$5C8

; =============== S U B	R O U T	I N E =======================================
_npc_hndl51:
		LDA		byte_8
		BEQ		loc_143C27
		LDA		#$19
		JMP		sub_1434D3
loc_143C27:
		MSGX	_msg_m00_break,$5CB

; =============== S U B	R O U T	I N E =======================================
_npc_hndl52:
		LDA		byte_8
		BEQ		loc_143C33
		LDA		#$1A
		JMP		sub_1434D3
loc_143C33:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break_ex,$5D5

; =============== S U B	R O U T	I N E =======================================
_npc_hndl53:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break_ex,$5D6

; =============== S U B	R O U T	I N E =======================================
_npc_hndl54:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00,$5D8
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$694

; =============== S U B	R O U T	I N E =======================================
_npc_hndl55:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5D9

; =============== S U B	R O U T	I N E =======================================
_npc_hndl56:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5DA

; =============== S U B	R O U T	I N E =======================================
_npc_hndl57:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5DB

; =============== S U B	R O U T	I N E =======================================
_npc_hndl58:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5E5

; =============== S U B	R O U T	I N E =======================================
_npc_hndl59:
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00_break,$5E6

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5A:
		LDA		#7
		JMP		sub_1434C4

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5B:
		LDA		#$1E
		JMP		sub_1434D3

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5C_portoga_king:
		LDA		_global_flags_array.byte3
		BPL		loc_143C7D
		MSGX	_msg_m00_break,$611	; "It is indeed good, this pepper. I verily must have partaken in excess, for I am sleepy"
loc_143C7D:
		LDA		#ITEM_BLACK_PEPPER
		JSR		_wrap_is_players_owns_item_storeCE
		BCC		.no_black_pepper_in_posession		; this may mean you don't get it...
		JSR		_player_item_remove_arg4
		LDA		_global_flags_array.byte3
		ORA		#$C0
		STA		_global_flags_array.byte3
		LDA		#3
		STA		byte_2D
		LDA		#8
		STA		byte_2E
		MSGX	_msg_m00_break_ex,$610	; "I hail thee, <name>. Thou hast done well and returned with black pepper"
.no_black_pepper_in_posession:
		LDA		_global_flags_array.byteA
		AND		#$40
		BEQ		.get_royal_scroll							; or already give it to the king
		MSGX	_msg_m00_break,$60F	; "What's the matter? I shalt await thy return with black pepper"
.get_royal_scroll:
		MSGX	_msg_m00,$60D	; "It is said that in a country in the far east, black pepper may be had in plenty"
		LDA		#ITEM_ROYAL_SCROLL
		JSR		_give_item_to_player_msg2
		BCS		loc_143CB0
		RTS
loc_143CB0:
		LDA		#$56	; _global_flags_array.byteA mask $40
		JSR		_global_game_flag_set
		MSGX	_msg_m00_break_ex,$60E	; "<name> takes the scroll from the king. `Then, be off with you!"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5D:
		MSGX	_msg_m00,$617	; "Hey, Papagatero is that you?"

; =============== S U B	R O U T	I N E =======================================
sub_143CBC:
		MSGX	_msg_m00_break,$618	; "What? You're not him? Well, you sure look like him."

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5E:
		MSGX	_msg_m00,$619	; "It's Papagatero, welcome!"
		BCS		sub_143CBC

; =============== S U B	R O U T	I N E =======================================
_npc_hndl5F:
		MSGX	_msg_m00,$362
		LDA		_q_OrbsCollected
		AND		#$20
		BNE		loc_143CD2
		MSGX	_msg_m00_break,$61F
loc_143CD2:
		MSGX	_msg_m00_break,$6D2

; =============== S U B	R O U T	I N E =======================================
_npc_hndl60:
		MSGX	_msg_m00_break_ex,$62D

; =============== S U B	R O U T	I N E =======================================
_npc_hndl61:
		MSGX	_msg_m00_break_ex,$630

; =============== S U B	R O U T	I N E =======================================
_npc_hndl62:
		MSGX	_msg_m00,$639
		FARX	_bE_s1C_yes_or_no_question
		MSGX	_msg_m00_break,$63A

; =============== S U B	R O U T	I N E =======================================
_npc_hndl63:
		LDA		byte_8
		BNE		loc_143CED
		MSGX	_msg_m00_break,$63B
loc_143CED:
		LDA		#$D
		JMP		sub_1434C4

; =============== S U B	R O U T	I N E =======================================
_npc_hndl64:
		MSGX	_msg_m00,$643
		FARX	_bC_s2E_sleep_X_sync_50_wait_50_or_skip
		LDA		#$D
		FARX	_b0_s1_battle_typeA_launch
		LDA		#$80
		STA		_npcs_pos_list+4
		STA		_npcs_pos_list+7
		JSR		sub_174CBD
		PLA
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl65:
		MSGX	_msg_m00,$655
		FARX	_b2_s7_screen_spell_blink
		JSR		_sram_b0_s31_get_party_chars_list
		LDX		word_4
		DEX
		STX		byte_CE
loc_143D19:
		JSR		_sram_b0_sE_player_STATUS_read
		LDA		word_4
		AND		word_4+1
		BPL		loc_143D2B
		LDA		#$FF
		STA		byte_CF
		STA		byte_D0
		JSR		_sram_b0_s8_player_MP_add
loc_143D2B:
		DEC		byte_CE
		BPL		loc_143D19
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl66:
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		LDA		byte_D2
		STA		_msg_directobject_param
		STA		byte_D4
		MSGX	_msg_m00_break,$656

; =============== S U B	R O U T	I N E =======================================
_npc_hndl67:
		MSGX	_msg_m00,$657	; "This is a Shrine of Honor"
		LDA		_global_flags_array.byteA
		AND		#8
		BEQ		loc_143D49
		MSGX	_msg_m00_break,$6D0	; "Your business is finished here! Be on your way!"
loc_143D49:
		LDA		#ITEM_SACRED_AMULET
		JSR		_wrap_is_players_owns_item_storeCE		; first you must have a sacred amulet
		BCS		loc_143D53
		MSGX	_msg_m00_break,$65A	; "If thou were a hero true, the Sacred Amulet thou wouldst carry, therefore, as proof"
loc_143D53:
		LDA		#ITEM_STAFF_OF_RAIN
		JSR		_wrap_is_players_owns_item_storeCE		; check for staff of rain and stone of sunlight
		BCC		.not_fulfill_rainbow_drop_quest
		LDA		#ITEM_STONES_OF_SUNLIGHT
		JSR		_wrap_is_players_owns_item_storeCE
		BCC		.not_fulfill_rainbow_drop_quest
		JSR		_player_item_remove_arg4				; remove stone of sunlight and staff of rain
		LDA		#ITEM_STAFF_OF_RAIN
		JSR		_wrap_is_players_owns_item_storeCE
		JSR		_player_item_remove_arg4
		MSGX	_msg_m00,$658	; "Welcome! Welcome! Now it is the time that sunshine and rain do meet"
		LDA		#ITEM_RAINBOW_DROP
		JSR		_give_item_to_player_msg0				; obtain a rainbow drop
		BCC		locret_143D7B
		LDA		#$53	; _global_flags_array.byteA mask $08
		JSR		_global_game_flag_set
locret_143D7B:
		RTS
.not_fulfill_rainbow_drop_quest:
		MSGX	_msg_m00_break,$659	; "When sunshine and rain do meet, a Rainbow Bridge is made"

; =============== S U B	R O U T	I N E =======================================
_npc_hndl68:
		LDA		_global_flags_array.byteA
		AND		#4
		BEQ		loc_143D89
		MSGX	_msg_m00_break,$6D3	; "Please save this world for Rubiss's sake too"
loc_143D89:
		MSGX	_msg_m00,$65B	; "I'm the fairy spirit that once served Rubiss"
		LDA		#ITEM_STAFF_OF_RAIN
		JSR		_bD_s27_give_item_to_player_msg1
		BCC		locret_143D98
		LDA		#$52	; _global_flags_array.byteA mask $04
		JSR		_global_game_flag_set
locret_143D98:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl69:
		LDA		#$59
		JSR		_wrap_is_players_owns_item_storeCE
		BCC		loc_143DA3
		MSGX	_msg_m00_break,$65C
loc_143DA3:
		MSGX	_msg_m00_break,$65D

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6A:
		MSGX	_msg_m00,$65E
		LDA		#$72
		JSR		_wrap_is_players_owns_item_storeCE
		BCC		loc_143DB1
		RTS
loc_143DB1:
		MSGX	_msg_m00_break,$65F

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6B:
		LDA		_global_flags_array.byte1
		AND		#2
		BNE		loc_143DBE
		MSGX	_msg_m00_break,$660
loc_143DBE:
		MSGX	_msg_m00_break,$661

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6C:
		LDA		_global_flags_array.byteA
		AND		#2
		BEQ		loc_143DD7
		MSGX	_msg_m00_ex,$665	; "Welcome <name>. Did the key come in handy?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143DD4
		MSGX	_msg_m00_break,$666	; "See! My dreams often do come true!"
loc_143DD4:
		MSGX	_msg_m00_break,$667	; "Even my dreams sometimes don't come true.."
loc_143DD7:
		MSGX	_msg_m00_ex,$662	; "So, you have come, <name>! I dreamed that I gave you this key"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143DF0
		LDA		#ITEM_THIEFS_KEY
		JSR		_give_item_to_player_msg2
		BCC		locret_143DF3
		LDA		#$51	; _global_flags_array.byteA mode $02
		JSR		_global_game_flag_set
		MSGX	_msg_m00_break_ex,$663	; "Well then, be off with you <name>! I'll go back to my dreaming"
loc_143DF0:
		MSGX	_msg_m00_break,$664	; "I see. Even my dreams sometimes don't come true.."
locret_143DF3:
		RTS

; =============== S U B	R O U T	I N E =======================================
_npc_hndl6D:
		MSGX	_msg_m00,$63D
		FARX	_bE_s1C_yes_or_no_question
		MSGX	_msg_m00_break,$63A

; =============== S U B	R O U T	I N E =======================================
_bD_s24:
		LDA		_global_flags_array.byteE
		AND		#7
		JSR		sub_143E48
		LDA		#6
		JSR		_special_king_message_select_gendered
		JSR		sub_143E67
		LDA		#4
		JSR		_special_king_message_select_gendered
		FARX	_b0_s50_players_item_buffs_refresh
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_bD_s23:
		LDA		_global_flags_array.byteE
		AND		#7
		JSR		sub_143E48
		LDA		#7
		JSR		_special_king_message_select_gendered
		LDA		#8
		JSR		_special_king_message_select_gendered
		JSR		sub_143E67
		LDA		#2
		JSR		_special_king_message_select_gendered
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143E3F
		JSR		loc_143B80
		JMP		loc_143E44
loc_143E3F:
		LDA		#9
		JSR		_special_king_message_select
loc_143E44:
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143E48:
		STA		byte_5C
		LDA		#0
		STA		byte_5D
		LDX		#byte_5C
		LDA		#$A
		JSR		_mul16_to_8
		LDA		#<[byte_143F25]
		LDX		#>[byte_143F25]
		JSR		_add_arg5C_to16
		LDA		byte_5C
		STA		byte_66
		LDA		byte_5D
		STA		byte_67
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_143E67:
		FARX	_b0_s47_players_next_EXP_calc
		JSR		_sram_b0_s31_get_party_chars_list
		LDA		word_4
		STA		byte_64
		LDA		#0
		STA		byte_D2
loc_143E75:
		LDA		byte_D2
		STA		byte_CE
		JSR		_sram_b0_sC_player_LV_read
		LDA		word_4
		CMP		#$63
		BNE		loc_143E88
		MSGX	_msg_m00,$654	; "<name> is now strong enough!"
		JMP		loc_143EAF
loc_143E88:
		LDA		byte_D2
		ASL
		ADC		byte_D2
		TAY
		SEC
		LDA		_players_next_EXP,Y
		SBC		_players_EXP,Y
		STA		_msg_number_parameter_F8
		LDA		_players_next_EXP+1,Y
		SBC		_players_EXP+1,Y
		STA		_msg_number_parameter_F8+1
		LDA		_players_next_EXP+2,Y
		SBC		_players_EXP+2,Y
		STA		_msg_number_parameter_F8+2
		LDA		#1
		JSR		_special_king_message_select
loc_143EAF:
		INC		byte_D2
		LDA		byte_64
		CMP		byte_D2
		BNE		loc_143E75
		RTS

; =============== S U B	R O U T	I N E =======================================
; select and display one of the king messages according to selected character gender
;
_special_king_message_select_gendered:
		PHA
		JSR		_bD_sB_get_hero_and_its_gender_and_status
		PLA

;; FALLTHROUGH ;;

; =============== S U B	R O U T	I N E =======================================
; elect and display one of the king messages
;
_special_king_message_select:
		TAY
		LDA		(byte_66),Y
		BNE		loc_143ECC
;----------------------------------
; king of Aliahan after beating Baramos and Zoma appears
		LDA		_global_flags_array.byte16
		AND		#$10
		BEQ		loc_143ECC
		MSGX	_msg_m00_break,$675	; "The king seems to have lost all his power"
;----------------------------------
loc_143ECC:
		CMP		#$A
		BNE		loc_143EDF
;----------------------------------
; king of romaly special messages 1
		LDA		_global_flags_array.byte5
		AND		#4
		BNE		loc_143EDB
		LDA		#$A	; $6B6 "I welcome you! We've heard tell of the brave hero, Ortega"
		BNE		.msg6AC_base_display
loc_143EDB:
		LDA		#$C	; $6B8 "I would have offered you my kingdom... Alas.."
		BNE		.msg6AC_base_display	; unconditional
;----------------------------------
loc_143EDF:
		CMP		#$B
		BNE		loc_143EFD
;----------------------------------
; king of romaly special messages 2
		LDA		_global_flags_array.byte5
		AND		#4
		BNE		loc_143EEE
		LDA		#$B	; $6B7 "Well now, I have something to ask of you. Someone named Kandar has stolen the Golden Crown"
		BNE		.msg6AC_base_display
loc_143EEE:
		MSGX	_msg_m00,$6B9	; "By the way, what dost thou say? Do ye want to take my place again?"
		FARX	_bE_s1C_yes_or_no_question
		BNE		loc_143EF9
		JMP		_turn_to_a_king_of_romaly
loc_143EF9:
		LDA		#$E	; $6BA "Oh, I see... Well, be on your way then!"
		BNE		.msg6AC_base_display	; unconditional
;----------------------------------
loc_143EFD:
		CMP		#$1E
		BNE		.msg6AC_base_display
;----------------------------------
; king of Tantegel special messages
		LDA		_global_flags_array.byte5
		AND		#8
		BNE		loc_143F11
		LDA		#$2B	; _global_flags_array.byte5 mask $08
		JSR		_global_game_flag_set
		LDA		#$1E	; $6CA "Yes? You're here from the upper world to defeat the Archfiend? Welcome, I am the king of this country"
		BNE		.msg6AC_base_display	; unconditional
loc_143F11:
		LDA		#$1F	; $6CB "<name>! I am glad to see you're back safely!"
		
;; FALTHROUGH ;;

;----------------------------------
; common display backend
.msg6AC_base_display:
		STA		byte_5C
		LDA		#0
		STA		byte_5D
		LDA		#$AC	; base msg $6AC
		LDX		#6
		JSR		_add_arg5C_to16
		JMP		_wrap_msg_m00_arg5C

byte_143F25:
		.BYTE	  0,  1,  2,  3,  4,  5,  6,  7,  8,  9
		.BYTE	 $A,  1,  2,  3, $B,  5,  6,  7,  8,  4
		.BYTE	 $F,  1,  2,  3,  4,  5,  6,$10,  8,  4
		.BYTE	$11,$12,$13,$14,$15,$16,$17,$18,$19,$15
		.BYTE	$1A,  1,  2,  3,  4,  5,  6,  7,  8,  4
		.BYTE	$1B,  1,  2,  3,$1C,  5,  6,$1D,  8,  4
		.BYTE	$1E,  1,  2,  3,  4,  5,  6,$20,  8,  4

; =============== S U B	R O U T	I N E =======================================
_bD_s21:
		MSGX	_msg_m00,$5DC	; "Heading back? Well I'll take the toll fee then"
		FARX	_bE_s1C_yes_or_no_question
		JSR		_get_merch_town_char_name
		MSGX	_msg_m00,$5DD
		FARX	_bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_merch_town_char_name:
		LDX		#0
loc_143F7D:
		LDA		_merch_town_name_low_chars,X
		BEQ		loc_143F98
		STA		byte_6AD1,X
		INX
		CPX		#4
		BNE		loc_143F7D
loc_143F8A:
		LDA		_merch_town_name_high_chars-4,X	; at this point X = 4, so we at _merch_town_name_high_chars actually
		BEQ		loc_143F98
		STA		byte_6AD1,X
		INX
		CPX		#8
		BCC		loc_143F8A
		RTS
loc_143F98:
		LDA		#$FF
		STA		byte_6AD1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
; this is a common for many games function to set the 1-bit flags in flags
; array, flag referenced as continuous number of bit in this array, so it will
; calc where the byte with this bit is, then mask bit itself. this function
; used only in this bank, only for setting, the rest of code used direct access
; and test to the rest of flags
; need to unuficate all this stuff and assign an unique names to all flags
; so we can use similar functions all around the source
;
_global_game_flag_set:
		STY		_backup_y
		STX		_backup_x
		PHA
		AND		#7
		TAY
		PLA
		LSR
		LSR
		LSR
		TAX
		LDA		_bitmasks,Y
		ORA		_global_flags_array,X
		STA		_global_flags_array,X
		LDX		_backup_x
		LDY		_backup_y
		RTS
_bitmasks:
		.BYTE	  1,  2,  4,  8,$10,$20,$40,$80

		ECHO "bank 0D free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB