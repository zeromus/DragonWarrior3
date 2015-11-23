
		ORG	END_OF_SHARED_ORG

; =============== S U B	R O U T	I N E =======================================
; PRG 0F SYSTEM	ROUTINES ONLY STARTS HERE
sub_176C99:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		sub_176CB4
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_176CA4:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		sub_176D3A
		STA		word_7C
		PLA
		JSR		_mmc1_prg_set
		LDA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176CB4:
		LDA		#5
		JSR		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_176CB9:
		STX		byte_74
		STX		word_4A+1
		STY		byte_77
		JSR		sub_176F1C
		LDA		_location_type
		BEQ		loc_176CCD
		CMP		#2
		BEQ		loc_176CE3
		JMP		sub_176F3E
loc_176CCD:
		CPX		#4
		BCC		loc_176CFA
		CPX		#$FC
		BCS		loc_176CFA
		CPY		#4
		BCC		loc_176CFA
		CPY		#$FC
		BCS		loc_176CFA
		JSR		_get_world_map_data_ptr
		JMP		sub_176DC9
loc_176CE3:
		CPX		#3
		BCC		loc_176CFD
		CPX		#$8D
		BCS		loc_176CFD
		CPY		#3
		BCC		loc_176CFD
		CPY		#$83
		BCS		loc_176CFD
		JSR		_get_world_map_data_ptr
		JSR		sub_176DC9
		RTS
loc_176CFA:
		LDA		#0
		RTS
loc_176CFD:
		DEX
		JSR		sub_17701E
		STA		byte_7B
		INX
		JSR		sub_17701E
		STA		word_7C
		INX
		JSR		sub_17701E
		STA		word_7C+1
		LDA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176D12:
		STX		byte_74
		STY		byte_77
		LDA		#2
		STA		byte_7A
		CPX		#3
		BCC		loc_176D34
		CPX		#$8D
		BCS		loc_176D34
		CPY		#3
		BCC		loc_176D34
		CPY		#$83
		BCS		loc_176D34
		JSR		_get_world_map_data_ptr
		JSR		sub_176E01
		TYA
		STA		word_7C
		RTS
loc_176D34:
		JSR		sub_17701E
		STA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176D3A:
		LDA		#5
		JSR		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_176D3F:
		JSR		sub_176F1C
		LDA		_location_type
		CMP		#2
		BEQ		sub_176D12
		STX		byte_74
		STX		word_4A+1
		STY		byte_77
		LDA		#2
		STA		byte_7A
		CPX		#4
		BCC		loc_176CFA
		CPX		#$FC
		BCS		loc_176CFA
		CPY		#4
		BCC		loc_176CFA
		CPY		#$FC
		BCS		loc_176CFA
		TXA
		PHA
		LDA		#$FF
		STA		byte_4C
		JSR		_get_world_map_data_ptr
		JSR		sub_176E01
		PLA
		STA		word_4A+1
		LDA		byte_78
		ORA		byte_79
		ORA		byte_7A
		LDX		#1
		JSR		sub_176F0B
		RTS

; =============== S U B	R O U T	I N E =======================================
_get_world_map_data_ptr:
		LDA		_location_type
		AND		#2
		BNE		loc_176D9E
		TYA
		ASL
		TAX
		BCS		loc_176D93
		LDA		_b5_d0_world_map_data,X
		STA		word_6C
		LDA		_b5_d0_world_map_data+1,X
		STA		word_6C+1
		RTS
loc_176D93:
		LDA		_b5_d1_world_map_data,X
		STA		word_6C
		LDA		_b5_d1_world_map_data+1,X
		STA		word_6C+1
		RTS
loc_176D9E:
		TYA
		ASL
		TAX
;		BCS		loc_176DAE
		LDA		_b5_d2_world_map_data,X
		STA		word_6C
		LDA		_b5_d2_world_map_data+1,X
		STA		word_6C+1
		RTS
;loc_176DAE:
;		LDA		_b5_d2_world_map_data,X	; un case of extra indexes, dummy, never used here
;		STA		word_6C
;		LDA		_b5_d2_world_map_data+1,X
;		STA		word_6C+1
;		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176DB9:
		LDA		_location_type
		AND		#2
		BEQ		loc_176DC4
		LDA		#$9D
		STA		byte_75
		RTS
loc_176DC4:
		STA		byte_75
		DEC		byte_75
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176DC9:
		LDY		#0
		STY		byte_75
		LDA		word_6C
		STA		byte_642
		LDA		word_6C+1
		STA		byte_643
		DEC		byte_74
		LDY		#0
		LDX		byte_74
		BPL		loc_176E19
		INC		byte_74
		INC		byte_74
loc_176DE3:
		JSR		sub_176DB9
		LDY		byte_77
		INY
		JSR		_get_world_map_data_ptr
		SEC
		LDA		word_6C
		SBC		byte_642
		TAY
		DEY
		LDA		byte_643
		STA		word_6C+1
		LDA		byte_642
		STA		word_6C
		JMP		sub_176E6A

; =============== S U B	R O U T	I N E =======================================
sub_176E01:
		DEC		word_4A+1
		LDY		#0
		STY		byte_75
		LDA		word_6C
		STA		byte_642
		LDA		word_6C+1
		STA		byte_643
		LDY		#0
		LDX		byte_74
		BPL		loc_176E19
		BMI		loc_176DE3
loc_176E19:
		LDA		(word_6C),Y
		STA		byte_79
		AND		#$E0
		CMP		#$E0
		BEQ		loc_176E3B
		LDA		byte_79
		AND		#$1F
loc_176E27:
		CLC
		ADC		#1
		STA		byte_78
		CLC
		ADC		byte_75
		STA		byte_75
loc_176E31:
		CMP		byte_74
		BEQ		loc_176E37
		BCS		loc_176E48
loc_176E37:
		INY
		JMP		loc_176E19
loc_176E3B:
		LDA		byte_79
		AND		#$1F
		CMP		#8
		BCC		loc_176E27
		LDA		#0
		JMP		loc_176E27
loc_176E48:
		LDX		byte_7A
		LDA		byte_79
		STA		byte_7B,X
		INX
		STX		byte_7A
		CPX		#3
		BEQ		loc_176E5C
		INC		byte_74
		LDA		byte_75
		JMP		loc_176E31
loc_176E5C:
		JSR		sub_176ED7
		JSR		sub_176EE3
		JSR		sub_176EDD
		LDY		word_7C+1
		JMP		sub_176F29

; =============== S U B	R O U T	I N E =======================================
sub_176E6A:
		LDA		(word_6C),Y
		STA		byte_79
		AND		#$E0
		CMP		#$E0
		BEQ		loc_176E8E
		LDA		byte_79
		AND		#$1F
loc_176E78:
		CLC
		ADC		#1
		STA		byte_78
		LDA		byte_75
		SEC
		SBC		byte_78
		STA		byte_75
loc_176E84:
		CMP		byte_74
		BEQ		loc_176E8A
		BCC		loc_176E9B
loc_176E8A:
		DEY
		JMP		sub_176E6A
loc_176E8E:
		LDA		byte_79
		AND		#$1F
		CMP		#8
		BCC		loc_176E78
		LDA		#0
		JMP		loc_176E78
loc_176E9B:
		LDX		byte_7A
		LDA		byte_79
		STA		byte_7B,X
		INX
		STX		byte_7A
		CPX		#3
		BEQ		loc_176EAF
		DEC		byte_74
		LDA		byte_75
		JMP		loc_176E84
loc_176EAF:
		JSR		sub_176EC3
		JSR		sub_176ECF
		JSR		sub_176EC9
		LDX		byte_7B
		LDY		word_7C+1
		STX		word_7C+1
		STY		byte_7B
		JMP		sub_176F29

; =============== S U B	R O U T	I N E =======================================
sub_176EC3:
		INC		word_4A+1
		LDX		#0
		BEQ		sub_176EE9

; =============== S U B	R O U T	I N E =======================================
sub_176EC9:
		INC		word_4A+1
		LDX		#1
		BNE		sub_176EE9

; =============== S U B	R O U T	I N E =======================================
sub_176ECF:
		DEC		word_4A+1
		DEC		word_4A+1
		LDX		#2
		BNE		sub_176EE9

; =============== S U B	R O U T	I N E =======================================
sub_176ED7:
		DEC		word_4A+1
		LDX		#0
		BEQ		sub_176EE9

; =============== S U B	R O U T	I N E =======================================
sub_176EDD:
		DEC		word_4A+1
		LDX		#1
		BNE		sub_176EE9

; =============== S U B	R O U T	I N E =======================================
sub_176EE3:
		INC		word_4A+1
		INC		word_4A+1
		LDX		#2

; =============== S U B	R O U T	I N E =======================================
sub_176EE9:
		LDA		byte_7B,X
		AND		#$E0
		CMP		#$E0
		BEQ		loc_176EF9
		CLC
		ROL
		ROL
		ROL
		ROL
		JMP		loc_176F03
loc_176EF9:
		LDA		byte_7B,X
		AND		#$1F
		CMP		#8
		BCS		loc_176F03
		LDA		#7
loc_176F03:
		STA		byte_78,X
		PHA
		LDA		byte_4C
		BNE		sub_176F1A
		PLA

; =============== S U B	R O U T	I N E =======================================
sub_176F0B:
		JSR		sub_176FDF
		JSR		sub_17707A
		JSR		sub_1770A0
		JSR		sub_1770D0
		STA		byte_7B,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176F1A:
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176F1C:
		LDA		#0
		STA		byte_7A
		STA		byte_7B
		STA		word_7C
		STA		word_7C+1
		STA		byte_4C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176F29:
		LDX		byte_643
		STX		word_6C+1
		LDX		byte_642
		STX		word_6C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176F34:
		STX		byte_74
		STY		byte_77
		JSR		sub_176F56
		STA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176F3E:
		DEC		byte_74
		JSR		sub_176F56
		STA		byte_7B
		INC		byte_74
		JSR		sub_176F56
		STA		word_7C
		INC		byte_74
		JSR		sub_176F56
		STA		word_7C+1
		LDA		word_7C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176F56:
		DEC		_mapWidth
		LDA		_mapWidth
		INC		_mapWidth
		CMP		byte_74
		BCC		loc_176F6D
		DEC		_mapHeight
		LDA		_mapHeight
		INC		_mapHeight
		CMP		byte_77
		BCC		loc_176F6D
		JMP		sub_176FB2
loc_176F6D:
		LDA		byte_9A
		CMP		#9
		BCS		loc_176F9F
		LDA		byte_8A
		CMP		#$19
		BEQ		loc_176F8A
		LDA		_mapNumber
		CMP		#$A
		BNE		loc_176F9F
		LDA		byte_77
		CMP		#$15
		BCC		loc_176F9F
		BMI		loc_176F9F
		LDA		#$1C
		RTS
loc_176F8A:
		LDA		byte_74
		AND		#7
		TAX
		LDA		byte_77
		AND		#7
		TAY
		LDA		byte_176FA2,X
		AND		byte_176FAA,Y
		BNE		loc_176F9F
		LDA		#$1A
		RTS
loc_176F9F:
		LDA		byte_8A
		RTS
byte_176FA2:
		.BYTE	  1,  2,  4,  8,$10,$20,$40,$80
byte_176FAA:
		.BYTE	$44,$EE,$EE,$44,$11,$BB,$BB,$11

; =============== S U B	R O U T	I N E =======================================
sub_176FB2:
		LDA		#0
		STA		byte_25
		LDA		_mapWidth
		STA		byte_24
		LDX		#byte_24
		LDY		byte_77
		INY
		TYA
		JSR		_mul16_to_8
		LDX		#byte_24
		LDA		_mapWidth
		JSR		_add8_to_neg16
		LDA		byte_74
		LDX		#byte_24
		JSR		_add8_to_16
		LDY		#byte_74
		LDA		#0
		LDX		#byte_24
		JSR		_add16_to_16
		LDY		#0
		LDA		(byte_24),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_176FDF:
		CMP		#1
		BNE		loc_176FFA
		PHA
		LDA		_location_type
		AND		#2
		BNE		loc_176FF8
		LDA		byte_77
		CMP		#$64
		BCC		loc_176FF4
		CMP		#$E6
		BCC		loc_176FF8
loc_176FF4:
		PLA
		LDA		#$1E
		RTS
loc_176FF8:
		PLA
locret_176FF9:
		RTS
loc_176FFA:
		PHA
		LDA		_location_type
		AND		#2
		BEQ		loc_176FF8
		LDA		byte_60B6
		BPL		loc_176FF8
		LDA		byte_77
		CMP		#$3A
		BNE		loc_176FF8
		PLA
		BNE		locret_176FF9
		PHA
		LDA		byte_74
		CMP		#$52
		BCC		loc_176FF8
		CMP		#$55
		BCS		loc_176FF8
		PLA
		LDA		#$1B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17701E:
		CPX		#$9D
		BEQ		loc_177026
		BCS		loc_177037
		BCC		loc_17703A
loc_177026:
		LDA		#$31
		CPY		#0
		BEQ		locret_177036
		LDA		#$36
		CPY		#$85
		BEQ		locret_177036
		BCS		loc_177037
		LDA		#$33
locret_177036:
		RTS
loc_177037:
		LDA		#$1D
		RTS
loc_17703A:
		CPY		#$85
		BEQ		loc_177042
		BCS		loc_177037
		BCC		loc_177051
loc_177042:
		LDA		#$34
		CPX		#0
		BEQ		locret_177050
		LDA		#$36
		CPX		#$9D
		BEQ		locret_177050
		LDA		#$35
locret_177050:
		RTS
loc_177051:
		CPX		#0
		BNE		loc_177064
		LDA		#$2F
		CPY		#0
		BEQ		locret_177063
		LDA		#$34
		CPY		#$85
		BEQ		locret_177063
		LDA		#$32
locret_177063:
		RTS
loc_177064:
		CPY		#0
		BNE		loc_177077
		LDA		#$2F
		CPX		#0
		BEQ		locret_177076
		LDA		#$31
		CPX		#$9D
		BEQ		locret_177076
		LDA		#$30
locret_177076:
		RTS
loc_177077:
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17707A:
		PHA
		LDA		byte_60B6
		AND		#8
		BNE		loc_177084
loc_177082:
		PLA
locret_177083:
		RTS
loc_177084:
		PLA
		BNE		locret_177083
		PHA
		LDA		word_4A+1
		CMP		#$46
		BCC		loc_177082
		CMP		#$49
		BCS		loc_177082
		LDA		byte_77
		CMP		#$91
		BCC		loc_177082
		CMP		#$95
		BCS		loc_177082
		PLA
loc_17709D:
		LDA		#1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1770A0:
		PHA
		LDA		byte_60B6
		AND		#4
		BNE		loc_1770AA
		PLA
		RTS
loc_1770AA:
		PLA
		CMP		#$17
		BEQ		loc_1770B0
		RTS
loc_1770B0:
		LDA		byte_77
		CMP		#$39
		BEQ		loc_1770CA
		CMP		#$3B
		BEQ		loc_1770CD
		CMP		#$3A
		BNE		loc_1770C7
		LDA		word_4A+1
		CMP		#$A2
		BNE		loc_1770CA
		LDA		#$15
		RTS
loc_1770C7:
		LDA		#$17
		RTS
loc_1770CA:
		LDA		#6
		RTS
loc_1770CD:
		LDA		#0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1770D0:
		PHA
		LDA		byte_60C5
		BMI		loc_1770D8
		PLA
		RTS
loc_1770D8:
		PLA
		CMP		#8
		BEQ		loc_17709D
		CMP		#9
		BEQ		loc_17709D
		CMP		#$C
		BEQ		loc_17709D
		CMP		#$D
		BEQ		loc_17709D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1770EA:
		LDA		byte_90
		LDX		#0
		AND		#$F
		CMP		#1
		BEQ		loc_1770FA
		LDX		#8
		CMP		#2
		BNE		locret_177112
loc_1770FA:
		STX		word_72
		LDA		#1
		STA		word_72+1
		LDA		byte_AC
		AND		#$1F
		BEQ		loc_177109
		JMP		sub_177295
loc_177109:
		JSR		sub_177113
		JSR		sub_177113
		JMP		sub_177295
locret_177112:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177113:
		JMP		loc_1771A4

; =============== S U B	R O U T	I N E =======================================
sub_177116:
		LDA		_location_type
		AND		#1
		BEQ		sub_1770EA
		LDA		byte_90
		AND		#$F
		BEQ		locret_177112
		CMP		#$F
		BEQ		locret_177112
		SEC
		SBC		#1
		ASL
		ASL
		ASL
		STA		word_72
		LDA		#1
		STA		word_72+1
		JSR		loc_177135
loc_177135:
		LDA		byte_176
		BEQ		loc_17714D
		LDX		#0
loc_17713C:
		LDA		byte_177,X
		BEQ		loc_177148
		CMP		word_72
		BNE		loc_177148
		JMP		sub_177204
loc_177148:
		INX
		CPX		#4
		BNE		loc_17713C
loc_17714D:
		LDY		#2
		LDA		(word_72),Y
		CMP		#$FF
		BNE		loc_177159
		RTS
loc_177156:
		JMP		sub_1771F8
loc_177159:
		LDY		#0
		LDA		(word_72),Y
		TAX
		STX		byte_80
		INY
		LDA		(word_72),Y
		TAY
		STY		byte_81
		LDA		byte_90
		AND		#$F
		CMP		#1
		BEQ		loc_17718A
		CMP		#2
		BEQ		loc_17718A
		LDA		_mapNumber
		CMP		#$B
		BEQ		loc_17717C
		CMP		#$78
		BNE		loc_177183
loc_17717C:
		LDA		byte_60B7
		AND		#4
		BEQ		loc_177156
loc_177183:
		JSR		sub_1777C2
		BCC		loc_177156
		BCS		loc_1771C5
loc_17718A:
		LDA		byte_AC
		AND		#$1F
		BNE		sub_1771F8
		LDA		byte_2C
		BEQ		loc_1771A4
		LDA		_blockPlayerInputDuringMap
		BNE		loc_1771A4
		LDA		word_72
		CMP		#4
		BNE		sub_1771F8
		LDA		#$10
		STA		word_72
		BNE		loc_1771C5
loc_1771A4:
		LDA		word_72
		LSR
		TAX
		LDA		_players_status,X
		BPL		sub_1771F8
		LDA		_players_status+1,X
		AND		#$40
		BEQ		loc_1771C5
		LDA		byte_645
		PHA
		LDA		#0
		STA		byte_645
		JSR		sub_1771F5
		PLA
		STA		byte_645
		RTS
loc_1771C5:
		LDA		word_72
		CMP		#$10
		BCC		sub_1771F5
		LDX		byte_80
		LDY		byte_81
		JSR		sub_176F34
		AND		#$E0
		CMP		byte_8C
		BNE		sub_1771F8
		LDA		byte_8E
		BPL		sub_1771F5
		LDA		byte_80
		SEC
		SBC		_playerMapX
		CLC
		ADC		#8
		STA		word_4
		LDA		byte_81
		SEC
		SBC		_playerMapY
		CLC
		ADC		#7
		STA		word_4+1
		FARX	_bE_s9
		BCS		sub_1771F8

; =============== S U B	R O U T	I N E =======================================
sub_1771F5:
		JSR		sub_177259

; =============== S U B	R O U T	I N E =======================================
sub_1771F8:
		LDA		word_72
		CLC
		ADC		#4
		STA		word_72
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177200:
		PLA
		JMP		sub_1771F8

; =============== S U B	R O U T	I N E =======================================
sub_177204:
		TXA
		PHA
		LDY		#0
		LDA		(word_72),Y
		TAX
		STX		byte_80
		INY
		LDA		(word_72),Y
		TAY
		STY		byte_81
		JSR		sub_1777C2
		BCC		sub_177200
		LDY		#2
		LDA		(word_72),Y
		AND		#$F
		JSR		sub_1778D7
		LDY		#3
		LDA		(word_72),Y
		JSR		sub_177909
		PLA
		ASL
		ASL
		ASL
		ASL
		TAX
		LDA		byte_74
		STA		byte_181,X
		LDA		byte_75
		STA		byte_182,X
		LDA		byte_76
		STA		byte_185,X
		LDA		byte_77
		STA		byte_186,X
		LDA		byte_78
		STA		byte_189,X
		LDA		byte_79
		STA		byte_18A,X
		LDA		byte_7A
		STA		byte_18D,X
		LDA		byte_7B
		STA		byte_18E,X
		JMP		sub_1771F8

; =============== S U B	R O U T	I N E =======================================
sub_177259:
		LDY		#2
		LDA		(word_72),Y
		AND		#$F
		JSR		sub_1778D7
		LDY		#3
		LDA		(word_72),Y
		PHA
		LDY		_npc_anim_script_idx
		CPY		#7
		BCC		loc_177274
		CPY		#$A
		BCS		loc_177274
		LDA		#2
loc_177274:
		JSR		sub_177909
		PLA
		AND		#$3C
		TAY
		BNE		loc_177282
		LDA		word_72
		BEQ		loc_177282
		RTS
loc_177282:
		JSR		sub_177385
		JMP		sub_17732F

; =============== S U B	R O U T	I N E =======================================
sub_177289:
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BCC		locret_177294
		INC		word_6C+1
locret_177294:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177295:
		LDA		byte_2C
		CMP		#1
		BEQ		loc_1772A8
		LDX		byte_2D
		STX		byte_80
		LDY		byte_2E
		STY		byte_81
		JSR		sub_1777B7
		BCC		loc_1772C3
loc_1772A8:
		LDA		byte_2A
		STA		byte_80
		LDA		byte_2B
		STA		byte_81
		LDA		#4
		JSR		sub_1778D7
		LDA		byte_6BA
		JSR		sub_177909
		JSR		sub_177385
		LDY		#$10
		JSR		sub_17732F
loc_1772C3:
		JSR		sub_1772F4
		JSR		sub_1772CC
		JSR		sub_177305

; =============== S U B	R O U T	I N E =======================================
sub_1772CC:
		LDA		_location_type
		AND		#2
		BNE		locret_1772F3
		LDA		byte_2C
		BNE		loc_1772DF
		STX		byte_80
		STY		byte_81
		JSR		sub_1777B7
		BCC		locret_1772F3
loc_1772DF:
		LDA		word_3C
		JSR		sub_1778D7
		LDA		word_3E
		AND		#3
		JSR		sub_177909
		JSR		sub_177385
		LDY		word_3C+1
		JSR		sub_17732F
locret_1772F3:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1772F4:
		LDX		byte_9B
		LDY		byte_9C
		LDA		#4
		STA		word_3C
		LDA		#$14
		STA		word_3C+1
		LDA		byte_9D
		STA		word_3E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177305:
		LDA		#5
		STA		word_3C
		LDX		#$18
		LDA		byte_2C
		CMP		#2
		BNE		loc_177313
		LDX		#0
loc_177313:
		STX		word_3C+1
		LDX		byte_9E
		LDY		byte_9F
		LDA		byte_A0
		STA		word_3E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17731E:
		LDX		#4
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JSR		sub_174204
		INY
		JMP		sub_174204

; =============== S U B	R O U T	I N E =======================================
sub_17732F:
		LDX		#4
		JSR		sub_1741F9
		LDY		_tmp21
		LDA		_spr_ram+4,Y
		AND		_spr_ram+7,Y
		CMP		#$F8
		BEQ		loc_17734A
		LDA		byte_9
		STA		_spr_ram+5,Y
		LDA		byte_A
		STA		_spr_ram+6,Y
loc_17734A:
		LDA		_spr_ram+8,Y
		AND		_spr_ram+$B,Y
		CMP		#$F8
		BEQ		loc_17735E
		LDA		byte_D
		STA		_spr_ram+9,Y
		LDA		byte_E
		STA		_spr_ram+$A,Y
loc_17735E:
		LDA		_spr_ram+$C,Y
		AND		_spr_ram+$F,Y
		CMP		#$F8
		BEQ		locret_177372
		LDA		byte_11
		STA		_spr_ram+$D,Y
		LDA		_tmp12
		STA		_spr_ram+$E,Y
locret_177372:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177373:
		LDA		byte_8
		STA		byte_C
		STA		byte_10
		LDA		word_6+1
		STA		byte_F
		LDA		byte_B
		STA		_tmp12+1
		LDA		word_4
		STA		byte_8

; =============== S U B	R O U T	I N E =======================================
sub_177385:
		LDA		byte_74
		STA		word_4+1
		LDA		byte_75
		STA		word_6
		LDA		byte_76
		STA		byte_9
		LDA		byte_77
		STA		byte_A
		LDA		byte_78
		STA		byte_D
		LDA		byte_79
		STA		byte_E
		LDA		byte_7A
		STA		byte_11
		LDA		byte_7B
		STA		_tmp12
locret_1773A5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1773A6:
		JSR		sub_1773CE
		LDA		_location_type
		AND		#2
		BNE		locret_1773A5
		JSR		sub_1772F4
		JSR		sub_1773B8
		JSR		sub_177305

; =============== S U B	R O U T	I N E =======================================
sub_1773B8:
		STX		byte_80
		STY		byte_81
		LDA		byte_9D
		AND		#3
		STA		byte_78
		LDA		word_3C
		STA		byte_79
		LDA		word_3C+1
		STA		byte_6BB
		JMP		sub_1773E4

; =============== S U B	R O U T	I N E =======================================
sub_1773CE:
		LDX		byte_2D
		STX		byte_80
		LDY		byte_2E
		STY		byte_81
		LDA		byte_6BA
		STA		byte_78
		LDA		#4
		STA		byte_79
		LDA		#$10
		STA		byte_6BB

; =============== S U B	R O U T	I N E =======================================
sub_1773E4:
		JSR		sub_177832
		BCC		locret_17740C

; =============== S U B	R O U T	I N E =======================================
sub_1773E9:
		LDA		byte_79
		JSR		sub_1778D7
		LDA		byte_78
		JSR		sub_177909
		LDA		byte_644
		BEQ		loc_17740D
		CMP		#1
		BEQ		loc_17745E
		CMP		#2
		BEQ		loc_177410
		LDA		_heroTileMovePixelsRemain
		AND		#7
		BNE		locret_17740C
		LDA		_heroTileMovePixelsRemain
		CMP		#$10
		BNE		loc_177413
locret_17740C:
		RTS
loc_17740D:
		JMP		loc_177484
loc_177410:
		JMP		loc_1774E0
loc_177413:
		JSR		sub_17787B
		LDA		#0
		STA		word_6+1
		STA		byte_B
		JSR		sub_17775E
		LDX		#2
		LDY		byte_6BB
		INY
		LDA		_heroTileMovePixelsRemain
		BNE		loc_17742E
		LDX		#0
		LDY		byte_6BB
loc_17742E:
		LDA		byte_74,X
		STA		word_4+1
		LDA		byte_75,X
		STA		word_6
		LDA		byte_78,X
		STA		byte_9
		LDA		byte_79,X
		STA		byte_A
		LDX		#4
		JSR		sub_174204
		LDA		_tmp21
		CLC
		ADC		#8
		TAY
		LDA		byte_8
		STA		_spr_ram,Y
		LDA		byte_9
		STA		_spr_ram+1,Y
		LDA		byte_A
		STA		_spr_ram+2,Y
		LDA		byte_B
		STA		_spr_ram+3,Y
locret_17745D:
		RTS
loc_17745E:
		LDA		_heroTileMovePixelsRemain
		AND		#7
		BEQ		locret_17745D
		JSR		sub_17787B
		LDA		#$FF
		STA		word_6+1
		STA		byte_B
		JSR		sub_17775E
		LDX		#0
		LDY		byte_6BB
		LDA		_heroTileMovePixelsRemain
		CMP		#$F
		BEQ		loc_17742E
		LDX		#2
		LDY		byte_6BB
		INY
		JMP		loc_17742E
loc_177484:
		LDA		_heroTileMovePixelsRemain
		AND		#7
		BNE		locret_17745D
		JSR		sub_1778B5
		LDX		#$F7
		LDA		_location_type
		AND		#1
		BEQ		loc_177497
		LDX		#$F3
loc_177497:
		STX		word_4
		STX		byte_8
		JSR		sub_17775E
		LDX		#4
		LDY		byte_6BB
		INY
		INY
		LDA		_heroTileMovePixelsRemain
		CMP		#$10
		BEQ		loc_1774B0
		LDX		#0
		LDY		byte_6BB
loc_1774B0:
		LDA		byte_74,X
		STA		word_4+1
		LDA		byte_75,X
		STA		word_6
		LDA		byte_76,X
		STA		byte_9
		LDA		byte_77,X
		STA		byte_A
		LDX		#4
		JSR		sub_174204
		LDA		_tmp21
		CLC
		ADC		#4
		TAY
		LDA		byte_8
		STA		_spr_ram,Y
		LDA		byte_9
		STA		_spr_ram+1,Y
		LDA		byte_A
		STA		_spr_ram+2,Y
		LDA		byte_B
		STA		_spr_ram+3,Y
locret_1774DF:
		RTS
loc_1774E0:
		LDA		_heroTileMovePixelsRemain
		AND		#7
		BNE		locret_1774DF
		JSR		sub_1778B5
		LDX		#$EF
		LDA		_location_type
		AND		#1
		BEQ		loc_1774F3
		LDX		#$EB
loc_1774F3:
		STX		word_4
		STX		byte_8
		JSR		sub_17775E
		LDX		#0
		LDY		byte_6BB
		LDA		_heroTileMovePixelsRemain
		CMP		#$10
		BEQ		loc_1774B0
		LDX		#4
		LDY		byte_6BB
		INY
		INY
		JMP		loc_1774B0
off_17750F:
		.WORD	sub_177570
		.WORD	sub_1775C4
		.WORD	sub_1775A3
		.WORD	sub_1775F6

; =============== S U B	R O U T	I N E =======================================
sub_177517:
		LDA		#$FF
		STA		_spr_force_shuffle_mode
		LDA		#<[_npcs_pos_list]
		STA		word_6C
		LDA		#>[_npcs_pos_list]
		STA		word_6C+1
		LDA		byte_644
		ASL
		TAX
		LDA		off_17750F,X
		STA		word_6E
		LDA		off_17750F+1,X
		STA		word_6E+1
		LDA		_playerMapX
		SEC
		SBC		#8
		STA		byte_639
		BCS		loc_17753E
		LDA		#0
loc_17753E:
		STA		byte_63A
		LDA		_playerMapX
		CLC
		ADC		#7
		STA		byte_63B
		LDA		_playerMapY
		SEC
		SBC		#7
		STA		byte_638
		BCS		loc_177555
		LDA		#0
loc_177555:
		STA		byte_63C
		LDA		_playerMapY
		CLC
		ADC		#7
		STA		byte_63D
loc_177560:
		LDY		#0
		LDA		(word_6C),Y
		CMP		#$FF
		BNE		loc_17756D
		LDA		#0
		STA		_spr_force_shuffle_mode
		RTS
loc_17756D:
		JMP		(word_6E)

; =============== S U B	R O U T	I N E =======================================
sub_177570:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$40
		BEQ		loc_177581
		LDA		(word_6C),Y
		AND		#3
		BNE		loc_177581
		JMP		sub_177613
loc_177581:
		LDY		#1
		LDA		(word_6C),Y
		STA		byte_81
		CMP		byte_638
		BEQ		loc_17758F
		JMP		sub_177613
loc_17758F:
		DEY
		LDA		(word_6C),Y
		STA		byte_80
		CMP		byte_63A
		BCC		sub_177613
		CMP		byte_63B
		BEQ		sub_177619
		BCS		sub_177613
		JMP		sub_177619

; =============== S U B	R O U T	I N E =======================================
sub_1775A3:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$40
		BEQ		loc_1775B6
		LDA		(word_6C),Y
		AND		#3
		CMP		#2
		BNE		loc_1775B6
		JMP		sub_177613
loc_1775B6:
		LDY		#1
		LDA		(word_6C),Y
		STA		byte_81
		CMP		byte_63D
		BNE		sub_177613
		JMP		loc_17758F

; =============== S U B	R O U T	I N E =======================================
sub_1775C4:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$40
		BEQ		loc_1775D7
		LDA		(word_6C),Y
		AND		#3
		CMP		#1
		BNE		loc_1775D7
		JMP		sub_177613
loc_1775D7:
		LDY		#0
		LDA		(word_6C),Y
		STA		byte_80
		CMP		byte_63B
		BNE		sub_177613
loc_1775E2:
		INY
		LDA		(word_6C),Y
		STA		byte_81
		CMP		byte_63C
		BCC		sub_177613
		CMP		byte_63D
		BEQ		sub_177619
		BCS		sub_177613
		JMP		sub_177619

; =============== S U B	R O U T	I N E =======================================
sub_1775F6:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$40
		BEQ		loc_177608
		LDA		(word_6C),Y
		AND		#3
		CMP		#3
		BNE		loc_177608
		BEQ		sub_177613
loc_177608:
		LDY		#0
		LDA		(word_6C),Y
		STA		byte_80
		CMP		byte_639
		BEQ		loc_1775E2

; =============== S U B	R O U T	I N E =======================================
sub_177613:
		JSR		sub_177289
		JMP		loc_177560

; =============== S U B	R O U T	I N E =======================================
sub_177619:
		LDX		byte_80
		LDY		byte_81
		JSR		sub_176F34
		AND		#$E0
		CMP		byte_8C
		BNE		sub_177613
		LDY		#2
		LDA		(word_6C),Y
		AND		#$F
		STA		byte_79
		INY
		LDA		(word_6C),Y
		PHA
		AND		#$83
		STA		byte_78
		PLA
		AND		#$3C
		STA		byte_6BB
		LDA		_heroTileMovePixelsRemain
		CMP		#9
		BCS		loc_17764D
		CMP		#8
		BNE		loc_177650
		LDA		byte_644
		CMP		#3
		BNE		loc_177650
loc_17764D:
		JSR		sub_177668
loc_177650:
		LDY		#3
		LDA		(word_6C),Y
		AND		#$C3
		ORA		byte_6BB
		STA		(word_6C),Y
		LDA		byte_6BB
		FARX	_b5_s4
		JSR		sub_1773E9
		JMP		sub_177613
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177668:
		LDA		word_4
		PHA
		LDA		word_4+1
		PHA
		LDA		word_6
		PHA
		LDA		word_6+1
		PHA
		JSR		sub_177684
		PLA
		STA		word_6+1
		PLA
		STA		word_6
		PLA
		STA		word_4+1
		PLA
		STA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177684:
		LDA		byte_175
		STA		word_4
		LDA		byte_174
		STA		word_4+1
		LDX		#0
loc_177690:
		ASL		word_4
		ROL		word_4+1
		BCC		loc_17769D
		INX
		CPX		#$10
		BEQ		loc_1776A4
		BNE		loc_177690
loc_17769D:
		TXA
		ASL
		ASL
		STA		byte_6BB
		RTS
loc_1776A4:
		LDA		#1
		STA		word_4+1
		LDA		#$10
		STA		word_4
loc_1776AC:
		LDY		#3
		LDA		(word_4),Y
		TAX
		AND		#$40
		BEQ		loc_1776BF
loc_1776B5:
		LDA		word_4
		CLC
		ADC		#4
		STA		word_4
		JMP		loc_1776AC
loc_1776BF:
		TXA
		CMP		#$FF
		BEQ		loc_17772A
		LDA		word_4
		CMP		word_6C
		BEQ		loc_1776B5
		LDY		#0
loc_1776CC:
		CMP		byte_177,Y
		BEQ		loc_1776B5
		INY
		CPY		#4
		BNE		loc_1776CC
		LDA		_playerMapX
		SEC
		SBC		#8
		LDY		#0
		CMP		(word_4),Y
		BEQ		loc_1776B5
		CLC
		ADC		#$F
		CMP		(word_4),Y
		BEQ		loc_1776B5
		LDA		_playerMapY
		SEC
		SBC		#7
		INY
		CMP		(word_4),Y
		BEQ		loc_1776B5
		CLC
		ADC		#$E
		CMP		(word_4),Y
		BEQ		loc_1776B5
		TXA
		AND		#$3C
		TAX
		BEQ		loc_1776B5
		LDY		#0
loc_177701:
		LDA		byte_177,Y
		BNE		loc_17770D
loc_177706:
		INY
		CPY		#4
		BNE		loc_177701
		BEQ		loc_177715
loc_17770D:
		TXA
		CMP		byte_17B,Y
		BEQ		loc_1776B5
		BNE		loc_177706
loc_177715:
		TXA
		STA		byte_6BB
		INC		byte_176
		LDX		#0
loc_17771E:
		LDA		byte_177,X
		BEQ		loc_177730
		INX
		CPX		#4
		BEQ		loc_17772A
		BNE		loc_17771E
loc_17772A:
		LDA		#$10
		STA		byte_6BB
		RTS
loc_177730:
		LDA		byte_6BB
		TAY
		STA		byte_17B,X
		TXA
		ASL
		ASL
		ASL
		ASL
		PHA
		LDA		word_4
		STA		byte_177,X
		LDX		#4
		JSR		sub_1741FD
		LDY		_tmp21
		PLA
		TAX
loc_17774B:
		LDA		_spr_ram,Y
		STA		byte_180,X
		LDA		#$F8
		STA		_spr_ram,Y
		INY
		INX
		TXA
		AND		#$F
		BNE		loc_17774B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17775E:
		LDA		_location_type
		AND		#1
		BEQ		locret_17776D
		LDY		#3
		LDA		(word_6C),Y
		TAX
		AND		#$40
		BNE		loc_17776E
locret_17776D:
		RTS
loc_17776E:
		TXA
		AND		#3
		BEQ		loc_177799
		CMP		#1
		BEQ		loc_17778A
		CMP		#2
		BEQ		loc_1777A8
		LDA		word_6+1
		CLC
		ADC		_heroTileMovePixelsRemain
		STA		word_6+1
		LDA		byte_B
		CLC
		ADC		_heroTileMovePixelsRemain
		STA		byte_B
		RTS
loc_17778A:
		LDA		word_6+1
		SEC
		SBC		_heroTileMovePixelsRemain
		STA		word_6+1
		LDA		byte_B
		SEC
		SBC		_heroTileMovePixelsRemain
		STA		byte_B
		RTS
loc_177799:
		LDA		word_4
		CLC
		ADC		_heroTileMovePixelsRemain
		STA		word_4
		LDA		byte_8
		CLC
		ADC		_heroTileMovePixelsRemain
		STA		byte_8
		RTS
loc_1777A8:
		LDA		word_4
		SEC
		SBC		_heroTileMovePixelsRemain
		STA		word_4
		LDA		byte_8
		SEC
		SBC		_heroTileMovePixelsRemain
		STA		byte_8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1777B7:
		LDA		byte_2A
		STA		word_6
		LDA		byte_2B
		STA		word_6+1
		JMP		sub_1777E0

; =============== S U B	R O U T	I N E =======================================
sub_1777C2:
		LDA		_playerMapX
		STA		word_6
		LDA		_playerMapY
		STA		word_6+1
		JMP		sub_1777E0

; =============== S U B	R O U T	I N E =======================================
sub_1777CD:
		LDA		_playerMapX
		STA		word_6
		LDA		_playerMapY
		STA		word_6+1
		LDA		#6
		STA		byte_8
		LDA		#5
		STA		byte_9
		JMP		loc_1777E8

; =============== S U B	R O U T	I N E =======================================
sub_1777E0:
		LDA		#8
		STA		byte_8
		LDA		#7
		STA		byte_9
loc_1777E8:
		STX		word_4
		STY		word_4+1
		LDA		word_6
		SEC
		SBC		byte_8
		BCS		loc_1777F5
		LDA		#0
loc_1777F5:
		CMP		word_4
		BEQ		loc_1777FD
		BCC		loc_1777FD
		CLC
locret_1777FC:
		RTS
loc_1777FD:
		LDA		word_6
		CLC
		ADC		byte_9
		BCC		loc_177806
		LDA		#$FF
loc_177806:
		CMP		word_4
		BCC		locret_1777FC
		LDA		word_6+1
		SEC
		SBC		byte_9
		BCS		loc_177813
		LDA		#0
loc_177813:
		CMP		word_4+1
		BEQ		loc_17781B
		BCC		loc_17781B
		CLC
		RTS
loc_17781B:
		LDA		word_6+1
		CLC
		ADC		byte_9
		BCC		loc_177824
		LDA		#$FF
loc_177824:
		CMP		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
sub_177827:
		LDA		_playerMapX
		STA		word_6
		LDA		_playerMapY
		STA		word_6+1
		JMP		loc_17783A

; =============== S U B	R O U T	I N E =======================================
sub_177832:
		LDA		byte_2A
		STA		word_6
		LDA		byte_2B
		STA		word_6+1
loc_17783A:
		STX		word_4
		STY		word_4+1
		LDA		byte_644
		BEQ		loc_177856
		CMP		#1
		BEQ		loc_177861
		CMP		#3
		BEQ		loc_17786C
		LDA		word_6+1
		CLC
		ADC		#7
		CMP		word_4+1
		BEQ		loc_177877
		CLC
		RTS
loc_177856:
		LDA		word_6+1
		SEC
		SBC		#7
		CMP		word_4+1
		BEQ		loc_177877
		CLC
		RTS
loc_177861:
		LDA		word_6
		CLC
		ADC		#7
		CMP		word_4
		BEQ		loc_177877
		CLC
		RTS
loc_17786C:
		LDA		word_6
		SEC
		SBC		#8
		CMP		word_4
		BEQ		loc_177877
		CLC
		RTS
loc_177877:
		JSR		sub_1777E0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_17787B:
		LDA		_location_type
		AND		#1
		BEQ		loc_177889
		LDA		byte_81
		SEC
		SBC		_playerMapY
		JMP		loc_17788E
loc_177889:
		LDA		byte_81
		SEC
		SBC		byte_2B
loc_17788E:
		CLC
		ADC		#7
		ASL
		ASL
		ASL
		ASL
		STA		word_4
		DEC		word_4
		CLC
		ADC		#8
		STA		byte_8
		DEC		byte_8
		LDA		_location_type
		AND		#1
		BEQ		locret_1778B4
		LDA		word_4
		SEC
		SBC		#4
		STA		word_4
		LDA		byte_8
		SEC
		SBC		#4
		STA		byte_8
locret_1778B4:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1778B5:
		LDA		_location_type
		AND		#1
		BEQ		loc_1778C3
		LDA		byte_80
		SEC
		SBC		_playerMapX
		JMP		loc_1778C8
loc_1778C3:
		LDA		byte_80
		SEC
		SBC		byte_2A
loc_1778C8:
		CLC
		ADC		#8
		ASL
		ASL
		ASL
		ASL
		STA		word_6+1
		CLC
		ADC		#8
		STA		byte_B
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1778D7:
		TAX
		LDA		word_4+1
		PHA
		LDA		#0
		STA		word_4+1
		LDA		#<[byte_6E00]
		STA		word_7C
		LDA		#>[byte_6E00]
		STA		word_7C+1
		TXA
		ASL
		ROL		word_4+1
		ASL
		ROL		word_4+1
		ASL
		ROL		word_4+1
		ASL
		ROL		word_4+1
		ASL
		ROL		word_4+1
		ASL
		ROL		word_4+1
		CLC
		ADC		word_7C
		STA		word_7C
		LDA		word_4+1
		ADC		word_7C+1
		STA		word_7C+1
		PLA
		STA		word_4+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177909:
		AND		#3
		ASL
		ASL
		ASL
		ASL
		TAY
		LDA		byte_645
		BPL		loc_17791A
		TYA
		CLC
		ADC		#8
		TAY
loc_17791A:
		LDX		#0
loc_17791C:
		LDA		(word_7C),Y
		STA		byte_74,X
		INX
		INY
		CPX		#8
		BNE		loc_17791C
		RTS

; =============== S U B	R O U T	I N E =======================================
; function not fit into	bank E so moved	to bank	F
_bE_sA:
		LDA		byte_9A
		LDX		#6
		CMP		#$C
		BCC		loc_177930
		INX
loc_177930:
		TXA
		JSR		_mmc1_prg_set
		JSR		sub_177960
		JSR		sub_177981
		JSR		sub_177CFC
		FARX	_bE_s2E
		FARX	_bE_s2F
		FARX	_bE_s30
		FARX	_bE_s16
		FARX	_b0_s49
		LDX		#0
		LDA		#$80
loc_177950:
		STA		_players_pos_list,X
		INX
		CPX		#$10
		BNE		loc_177950
		FARX	_bC_s27
		LDA		#0
		STA		byte_8E
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177960:
		JSR		sub_177994
		JSR		sub_1779A8

; =============== S U B	R O U T	I N E =======================================
sub_177966:
		JSR		sub_1779E7
loc_177969:
		CMP		#0
		BEQ		loc_177978
		CMP		#1
		BEQ		loc_17797B
		CMP		#2
		BEQ		loc_17797E
		JMP		sub_177B44
loc_177978:
		JMP		sub_177A2C
loc_17797B:
		JMP		sub_177A5B
loc_17797E:
		JMP		sub_177B4D

; =============== S U B	R O U T	I N E =======================================
sub_177981:
		LDA		#$FF
		STA		byte_75
		LDA		#2
		JSR		sub_1779ED
		CMP		#0
		BEQ		locret_177993
		STA		byte_8D
		JSR		sub_177966
locret_177993:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177994:
		CLC
		LDA		#3
		ADC		word_6C
		STA		word_6C
		BCC		loc_17799F
		INC		word_6C+1
loc_17799F:
		LDA		#0
		STA		byte_74
		STA		byte_75
		STA		word_7C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1779A8:
		JSR		sub_1779CD
		PHA
		LDA		#<[byte_7400]
		STA		word_72
		LDA		#>[byte_7400]
		STA		word_72+1
		PLA
		LDY		_mapHeight
		STY		word_4
		LDY		#0
loc_1779BB:
		LDX		_mapWidth
loc_1779BD:
		STA		(word_72),Y
		INC		word_72
		BNE		loc_1779C5
		INC		word_72+1
loc_1779C5:
		DEX
		BNE		loc_1779BD
		DEC		word_4
		BNE		loc_1779BB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1779CD:
		LDA		byte_8D
		JMP		sub_1779ED

; =============== S U B	R O U T	I N E =======================================
sub_1779D2:
		JSR		sub_1779EB
		LDA		#0
		LDY		#byte_74
		LDX		#word_4
		JSR		_add16_to_16
		LDA		word_4
		STA		byte_C
		LDA		word_4+1
		STA		byte_D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1779E7:
		LDA		#2
		BNE		sub_1779ED

; =============== S U B	R O U T	I N E =======================================
sub_1779EB:
		LDA		byte_77

; =============== S U B	R O U T	I N E =======================================
sub_1779ED:
		TAX
		LDA		#0
		STA		word_4
		STA		word_4+1
loc_1779F4:
		JSR		sub_177A01
		ROL		word_4
		ROL		word_4+1
		DEX
		BNE		loc_1779F4
		LDA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177A01:
		LDA		#$80
		LDY		byte_74
loc_177A05:
		BEQ		loc_177A0C
		LSR
		DEY
		JMP		loc_177A05
loc_177A0C:
		LDY		#0
		AND		(word_6C),Y
		STA		_tmp12+1
		INC		byte_74
		LDA		byte_74
		CMP		#8
		BCC		loc_177A24
		LDA		#0
		STA		byte_74
		INC		word_6C
		BNE		loc_177A24
		INC		word_6C+1
loc_177A24:
		LDA		_tmp12+1
		BEQ		loc_177A2A
		SEC
		RTS
loc_177A2A:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177A2C:
		LDA		#0
		STA		byte_76
		JSR		sub_1779CD
		STA		byte_79
		JSR		sub_1779E7
		CMP		#0
		BNE		loc_177A58
		JSR		sub_177A01
		BCC		loc_177A42
		RTS
loc_177A42:
		LDA		#$FF
		STA		byte_76
		JSR		sub_1779CD
		STA		byte_7A
		JSR		sub_1779CD
		STA		byte_7B
		JSR		sub_1779CD
		STA		word_7C
		JMP		sub_177966
loc_177A58:
		JMP		loc_177969

; =============== S U B	R O U T	I N E =======================================
sub_177A5B:
		JSR		sub_1779EB
		LDA		word_4
		STA		byte_B
		LDA		word_4+1
		STA		byte_C
		LDA		_mapWidth
		LDX		#word_4
		JSR		_div16_to_8
		STA		word_6+1
		LDA		word_4
		STA		byte_8
		JSR		sub_1779EB
		LDA		_mapWidth
		LDX		#word_4
		JSR		_div16_to_8
		STA		byte_9
		LDA		word_4
		STA		byte_A
		LDA		#0
		LDY		#byte_74
		LDX		#byte_B
		JSR		_add16_to_16
		LDA		byte_A
		SEC
		SBC		byte_8
		STA		byte_8
		LDA		byte_9
		SEC
		SBC		word_6+1
		STA		word_6+1
		LDA		byte_76
		BEQ		loc_177AA2
		LSR		word_6+1
		LSR		byte_8
loc_177AA2:
		INC		word_6+1
		INC		byte_8
loc_177AA6:
		LDA		byte_79
		LDX		word_6+1
loc_177AAA:
		LDY		#0
		PHA
		LDA		byte_75
		BEQ		loc_177AC6
		LDA		(byte_B),Y
		AND		#$1F
		STA		(byte_B),Y
		PLA
		PHA
		ASL
		ASL
		ASL
		ASL
		ASL
		ORA		(byte_B),Y
		STA		(byte_B),Y
		PLA
		JMP		loc_177B0A
loc_177AC6:
		LDA		byte_76
		BEQ		loc_177B07
		PLA
		LDA		byte_79
		STA		(byte_B),Y
		JSR		sub_177B25
		LDA		byte_B
		PHA
		LDA		byte_C
		PHA
		LDA		byte_7A
		STA		(byte_B),Y
		JSR		sub_177B38
		LDA		word_7C
		STA		(byte_B),Y
		JSR		sub_177B2C
		LDA		byte_7B
		STA		(byte_B),Y
		PLA
		STA		byte_C
		PLA
		STA		byte_B
		JSR		sub_177B25
		DEX
		BNE		loc_177AAA
		LDA		_mapWidth
		SEC
		SBC		word_6+1
		SEC
		SBC		word_6+1
		JSR		sub_177B3A
		JSR		sub_177B38
		JMP		loc_177B1E
loc_177B07:
		PLA
		STA		(byte_B),Y
loc_177B0A:
		JSR		sub_177B25
		DEX
		BNE		loc_177AAA
		LDA		_mapWidth
		SEC
		SBC		word_6+1
		CLC
		ADC		byte_B
		STA		byte_B
		BCC		loc_177B1E
		INC		byte_C
loc_177B1E:
		DEC		byte_8
		BNE		loc_177AA6
		JMP		sub_177966

; =============== S U B	R O U T	I N E =======================================
sub_177B25:
		INC		byte_B
		BNE		locret_177B2B
		INC		byte_C
locret_177B2B:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177B2C:
		LDA		byte_B
		SEC
		SBC		#1
		STA		byte_B
		BCS		locret_177B37
		DEC		byte_C
locret_177B37:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177B38:
		LDA		_mapWidth

; =============== S U B	R O U T	I N E =======================================
sub_177B3A:
		CLC
		ADC		byte_B
		STA		byte_B
		BCC		locret_177B43
		INC		byte_C
locret_177B43:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177B44:
		JSR		sub_1779D2
		JSR		sub_177C27
		JMP		sub_177966

; =============== S U B	R O U T	I N E =======================================
sub_177B4D:
		JSR		sub_1779D2
		JSR		sub_177C27
		JSR		sub_177C1F

; =============== S U B	R O U T	I N E =======================================
sub_177B56:
		JSR		sub_177A01
		BCS		loc_177B5E
		JMP		loc_177BBA
loc_177B5E:
		LDA		#2
		JSR		sub_1779ED
		CMP		#0
		BEQ		loc_177BA2
		CMP		#1
		BEQ		loc_177BAE
		CMP		#2
		BEQ		loc_177B94
		JSR		sub_177A01
		BCS		loc_177B76
		BCC		sub_177B4D
loc_177B76:
		LDX		word_7C+1
		BEQ		loc_177B91
		DEX
		LDA		byte_647,X
		STA		byte_78
		DEX
		LDA		byte_647,X
		STA		byte_D
		DEX
		LDA		byte_647,X
		STA		byte_C
		STX		word_7C+1
		JMP		sub_177B56
loc_177B91:
		JMP		sub_177966
loc_177B94:
		JSR		sub_177A01
		BCC		loc_177B9F
		JSR		sub_177C99
		JMP		loc_177BAE
loc_177B9F:
		JSR		sub_177C99
loc_177BA2:
		LDA		byte_78
		CLC
		ADC		#1
		AND		#3
		STA		byte_78
		JMP		loc_177BBA
loc_177BAE:
		LDA		byte_78
		SEC
		SBC		#1
		AND		#3
		STA		byte_78
		JMP		loc_177BBA
loc_177BBA:
		JSR		sub_177BC3
		JSR		sub_177C62
		JMP		sub_177B56

; =============== S U B	R O U T	I N E =======================================
sub_177BC3:
		LDX		byte_78
		BEQ		loc_177BCF
		DEX
		BEQ		loc_177BD9
		DEX
		BEQ		loc_177BE2
		BNE		loc_177BEB
loc_177BCF:
		JSR		sub_177BF4
		LDA		byte_76
		BEQ		locret_177BD8
		BNE		sub_177BF4
locret_177BD8:
		RTS
loc_177BD9:
		JSR		sub_177C00
		LDA		byte_76
		BEQ		locret_177BD8
		BNE		sub_177C00
loc_177BE2:
		JSR		sub_177C07
		LDA		byte_76
		BEQ		locret_177BD8
		BNE		sub_177C07
loc_177BEB:
		JSR		sub_177C13
		LDA		byte_76
		BEQ		locret_177BD8
		BNE		sub_177C13

; =============== S U B	R O U T	I N E =======================================
sub_177BF4:
		LDA		byte_C
		SEC
		SBC		_mapWidth
		STA		byte_C
		BCS		locret_177BFF
		DEC		byte_D
locret_177BFF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C00:
		INC		byte_C
		BNE		locret_177BFF
		INC		byte_D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C07:
		LDA		byte_C
		CLC
		ADC		_mapWidth
		STA		byte_C
		BCC		locret_177BFF
		INC		byte_D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C13:
		LDA		byte_C
		SEC
		SBC		#1
		STA		byte_C
		BCS		locret_177BFF
		DEC		byte_D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C1F:
		LDA		#2
		JSR		sub_1779ED
		STA		byte_78
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C27:
		LDA		byte_79
		LDY		#0
		JSR		sub_177C46
		LDA		byte_76
		BEQ		locret_177C45
		INY
		LDA		byte_7A
		JSR		sub_177C46
		LDY		_mapWidth
		LDA		byte_7B
		JSR		sub_177C46
		INY
		LDA		word_7C
		JMP		sub_177C46
locret_177C45:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C46:
		PHA
		LDA		byte_75
		BEQ		loc_177C5E
		LDA		(word_4),Y
		AND		#$1F
		STA		(word_4),Y
		PLA
		PHA
		ASL
		ASL
		ASL
		ASL
		ASL
		ORA		(word_4),Y
		STA		(word_4),Y
		PLA
		RTS
loc_177C5E:
		PLA
		STA		(word_4),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C62:
		LDA		byte_79
		LDY		#0
		JSR		sub_177C7D
		LDA		byte_76
		BEQ		locret_177C45
		INY
		LDA		byte_7A
		JSR		sub_177C7D
		LDY		_mapWidth
		LDA		byte_7B
		JSR		sub_177C7D
		INY
		LDA		word_7C

; =============== S U B	R O U T	I N E =======================================
sub_177C7D:
		PHA
		LDA		byte_75
		BEQ		loc_177C95
		LDA		(byte_C),Y
		AND		#$1F
		STA		(byte_C),Y
		PLA
		PHA
		ASL
		ASL
		ASL
		ASL
		ASL
		ORA		(byte_C),Y
		STA		(byte_C),Y
		PLA
		RTS
loc_177C95:
		PLA
		STA		(byte_C),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177C99:
		LDX		word_7C+1
		LDA		byte_C
		STA		byte_647,X
		INX
		LDA		byte_D
		STA		byte_647,X
		INX
		LDA		byte_78
		STA		byte_647,X
		INX
		STX		word_7C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177CB0:
		LDA		_mapWidth
		CLC
		ADC		word_6C
		STA		word_6C
		BCC		locret_177CBB
		INC		word_6C+1
locret_177CBB:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177CBC:
		LDA		word_6C
		SEC
		SBC		_mapWidth
		STA		word_6C
		BCS		locret_177CBB
		DEC		word_6C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177CC8:
		PHA
		JSR		sub_177CD6
		AND		#$E0
		STA		(word_6),Y
		PLA
		ORA		(word_6),Y
		STA		(word_6),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177CD6:
		TXA
		PHA
		LDA		_mapWidth
		STA		word_6
		LDA		#0
		STA		word_6+1
		TYA
		LDX		#word_6
		JSR		_mul16_to_8
		LDA		#0
		LDY		#byte_74
		LDX		#word_6
		JSR		_add16_to_16
		PLA
		LDY		#0
		LDX		#word_6
		JSR		_add16_to_16
		LDY		#0
		LDA		(word_6),Y
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177CFC:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		sub_177E1D
		JSR		sub_177D53
		PLA
		JMP		_mmc1_prg_set

; =============== S U B	R O U T	I N E =======================================
sub_177D0A:
		LDA		byte_6AC2
		CMP		#$FF
		BEQ		locret_177D52
		JSR		_ppu_disable
		JSR		sub_176285
		LDX		#4
loc_177D19:
		LDA		byte_6ABE,X
		BPL		loc_177D3E
		CMP		#$FF
		BEQ		locret_177D52
		AND		#$7F
		LSR
		LSR
		LDY		_mapNumber
		CPY		#$CB
		BNE		loc_177D3A
		CMP		#4
		BEQ		loc_177D38
		CMP		#1
		BNE		loc_177D3A
		LDA		#$26
		BNE		loc_177D3A
loc_177D38:
		LDA		#$25
loc_177D3A:
		ORA		#$80
		BNE		loc_177D43
loc_177D3E:
		LSR
		LSR
		JSR		sub_177EB1
loc_177D43:
		STX		byte_6ABE
		INC		byte_6ABE
		JSR		sub_176299
		LDX		byte_6ABE
		JMP		loc_177D19
locret_177D52:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177D53:
		LDX		#$10
		LDA		#1
		STA		word_3C
		LDA		_world_map_steps_count
		CMP		#$78
		BCS		loc_177D62
		ASL		word_3C
loc_177D62:
		ASL		word_3C
		ASL		word_3C
		ASL		word_3C
loc_177D68:
		LDY		#0
		LDA		(word_6C),Y
		BEQ		sub_177D0A
		AND		word_3C
		BEQ		loc_177D83
		CMP		#$10
		BEQ		loc_177D89
		LDA		(word_6C),Y
		AND		#$10
		BEQ		loc_177D89
		JMP		loc_177DA8
loc_177D7F:
		INX
		INX
		INX
		INX
loc_177D83:
		JSR		sub_177E87
		JMP		loc_177D68
loc_177D89:
		INY
		LDA		(word_6C),Y
		STA		word_4
		LDY		#3
		LDA		(word_6C),Y
		STA		word_4+1
		STA		word_6+1
		INY
		LDA		(word_6C),Y
		STA		word_6
		LDA		word_3C
		AND		#$10
		BNE		loc_177DCF
		LDA		word_6
		STA		word_6+1
		JMP		loc_177DCF
loc_177DA8:
		LDA		(word_6C),Y
		PHA
		LDY		#4
		LDA		(word_6C),Y
		STA		word_6+1
		PLA
		PHA
		AND		#1
		TAY
		LDA		byte_177EA3,Y
		TAY
		LDA		(word_6C),Y
		STA		word_4
		PLA
		AND		#7
		TAY
		LDA		byte_177EA5,Y
		TAY
		LDA		(word_6C),Y
		STA		word_4+1
		INY
		LDA		(word_6C),Y
		STA		word_6
loc_177DCF:
		LDA		word_4
		STA		word_3E+1
		AND		#3
		STA		word_3E
		LDA		word_6
		AND		#$7F
		STA		_players_pos_list+1,X
		LDA		word_4+1
		AND		#$7F
		STA		_players_pos_list,X
		LDA		word_6+1
		AND		#$80
		ORA		word_3E
		STA		_players_pos_list+3,X
		LDY		#4
loc_177DF0:
		LDA		word_4
		AND		#$FC
		CMP		byte_6ABE,Y
		BEQ		loc_177E08
		LDA		byte_6ABE,Y
		CMP		#$FF
		BEQ		loc_177E0F
		INY
		CPY		#$10
		BNE		loc_177DF0
loc_177E05:
		JMP		loc_177E05
loc_177E08:
		TYA
		STA		_players_pos_list+2,X
		JMP		loc_177D7F
loc_177E0F:
		LDA		word_4
		AND		#$FC
		STA		byte_6ABE,Y
		TYA
		STA		_players_pos_list+2,X
		JMP		loc_177D7F

; =============== S U B	R O U T	I N E =======================================
sub_177E1D:
		JSR		sub_177E23
		JMP		sub_177E5E

; =============== S U B	R O U T	I N E =======================================
sub_177E23:
		LDA		#9
		JSR		_mmc1_prg_set
		JSR		sub_E3C80
		LDA		#$D
		JSR		_mmc1_prg_set
		LDA		#<[_bD_d1]
		STA		word_6C
		LDA		#>[_bD_d1]
		STA		word_6C+1
		LDA		_mapNumber
		BEQ		locret_177E5D
		LDA		word_3E
loc_177E44:
		JSR		sub_177E87
		LDY		#0
		LDA		(word_6C),Y
		BNE		loc_177E44
loc_177E4D:
		INC		word_6C
		BNE		loc_177E53
		INC		word_6C+1
loc_177E53:
		DEC		word_3E
		BEQ		locret_177E5D
		LDA		(word_6C),Y
		BEQ		loc_177E4D
		BNE		loc_177E44
locret_177E5D:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177E5E:
		LDA		#$FF
		LDX		#4
loc_177E62:
		STA		byte_6ABE,X
		INX
		CPX		#$10
		BNE		loc_177E62
		LDX		#byte_10
		LDA		#$FF
loc_177E6E:
		STA		$100,X
		INX
		CPX		#$74
		BNE		loc_177E6E
		LDA		#$F0
		STA		$100,X
		LDA		#0
		STA		$101,X
		STA		$102,X
		STA		$103,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177E87:
		LDY		#0
		LDA		(word_6C),Y
		AND		#7
		TAY
		LDA		byte_177E9B,Y
		CLC
		ADC		word_6C
		STA		word_6C
		BCC		locret_177E9A
		INC		word_6C+1
locret_177E9A:
		RTS
byte_177E9B:
		.BYTE	  5,  6,  6,  7,  7,  8,  8,  9
byte_177EA3:
		.BYTE	  1,  5
byte_177EA5:
		.BYTE	  3,  3,  3,  3,  5,  6,  6,  7
byte_177EAD:
		.BYTE	  2,  2,  5,  6

; =============== S U B	R O U T	I N E =======================================
sub_177EB1:
		LDY		_mapNumber
		CMP		#4
		BEQ		loc_177ED1
		CMP		#8
		BEQ		loc_177ED8
		CMP		#$1F
		BEQ		loc_177EF2
		CMP		#$1C
		BNE		locret_177ED0
		CPY		#$CF
		BEQ		loc_177ECB
		CPY		#6
		BNE		loc_177ECE
loc_177ECB:
		LDA		#$24
		RTS
loc_177ECE:
		LDA		#$1C
locret_177ED0:
		RTS
loc_177ED1:
		CPY		#$CB
		BNE		locret_177ED0
		LDA		#$25
		RTS
loc_177ED8:
		CPY		#$8D
		BNE		loc_177EEF
		LDA		byte_60B9
		AND		#8
		BEQ		loc_177EEF
		STX		byte_6ABE
		JSR		_rand
		AND		#$F
		LDX		byte_6ABE
		RTS
loc_177EEF:
		LDA		#8
		RTS
loc_177EF2:
		CPY		#$25
		BEQ		loc_177EF9
		LDA		#$23
		RTS
loc_177EF9:
		LDA		#$1F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_177EFC:
		LDA		_mmc_cur_prg_bank
		PHA
		JSR		sub_177E23
		LDA		#$10
		STA		word_4+1
		LDA		_world_map_steps_count
		CMP		#$78
		BCC		loc_177F10
		LSR		word_4+1
loc_177F10:
		INC		word_4
loc_177F12:
		LDY		#0
		LDA		(word_6C),Y
		AND		word_4+1
		BEQ		loc_177F1E
		DEC		word_4
		BEQ		loc_177F24
loc_177F1E:
		JSR		sub_177E87
		JMP		loc_177F12
loc_177F24:
		LDY		#0
		LDA		(word_6C),Y
		AND		#$C0
		CLC
		ROL
		ROL
		ROL
		STA		word_4+1
		INY
		INY
		LDA		_world_map_steps_count
		CMP		#$78
		BCC		loc_177F61
		LDY		#0
		LDA		(word_6C),Y
		LDY		#2
		AND		#2
		BEQ		loc_177F61
		LDY		#0
		LDA		(word_6C),Y
		AND		#$20
		LSR
		LSR
		LSR
		LSR
		LSR
		STA		word_4+1
		LDA		(word_6C),Y
		AND		#3
		TAX
		LDA		byte_177EAD,X
		PHA
		LDA		(word_6C),Y
		AND		#1
		BEQ		loc_177F5F		; redundant code
loc_177F5F:
		PLA
		TAY
loc_177F61:
		LDA		(word_6C),Y
		STA		word_4
		LDY		#1
		LDA		_world_map_steps_count
		CMP		#$78
		BCC		loc_177F78
		LDY		#0
		LDA		(word_6C),Y
		AND		#1
		TAX
		LDY		byte_177EA3,X
loc_177F78:
		LDA		(word_6C),Y
		AND		#$FC
		LSR
		LSR
		STA		word_6
		PLA
		JMP		_mmc1_prg_set
_unused_2:
		.BYTE	$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
_debug_flags:
		.BYTE	$FF
