
		ORG $8000

		.WORD _bC_s0
		.WORD _bC_s1
		.WORD _bC_s2
		.WORD _bC_s3
		.WORD _bC_s4
		.WORD _bC_s5
		.WORD _bC_s6
		.WORD 0
		.WORD 0
		.WORD _bC_s9
		.WORD _bC_sA
		.WORD _bC_sB
		.WORD _bC_sC
		.WORD _bC_sD
		.WORD _bC_sE
		.WORD _bC_sF
		.WORD _bC_s10
		.WORD _bC_s11
		.WORD _bC_s12_vblank_count_50
		.WORD _bC_s13
		.WORD _bC_s14
		.WORD _bC_s15
		.WORD _bC_s16
		.WORD _bC_s17
		.WORD _bC_s18
		.WORD _bC_s19
		.WORD _bC_s1A
		.WORD _bC_s1B
		.WORD _bC_s1C
		.WORD _bC_s1D
		.WORD _bC_s1E
		.WORD _bC_s1F
		.WORD _bC_s20
		.WORD _bC_s21
		.WORD _bC_s22
		.WORD _bC_s23
		.WORD _bC_s24
		.WORD _bC_s25
		.WORD _bC_s26
		.WORD _bC_s27
		.WORD _bC_s28
		.WORD _bC_s29
		.WORD _bC_s2A
		.WORD _bC_s2B
		.WORD _bC_s2C
		.WORD _bC_s2D
		.WORD _bC_s2E_vblank_count_50_wait_50_or_skip
		.WORD _bC_s2F
		.WORD _bC_s30
		.WORD _bC_s31
		.WORD _bC_s32
		.WORD _bC_s33
		.WORD _bC_s34
		.WORD _bC_s35
		.WORD _bC_s36
		.WORD _bC_s37
		.WORD _bC_s38
		.WORD _bC_s39
		.WORD _bC_s3A
		.WORD _bC_s3B

; =============== S U B	R O U T	I N E =======================================
_bC_s1:
		LDA		byte_6E1
		BEQ		locret_128081
		CMP		#$40
		BCC		loc_128082
locret_128081:
		RTS
loc_128082:
		CMP		#2
		BNE		loc_128089
		JSR		_vblank
loc_128089:
		LDA		byte_90
		AND		#$F
		BNE		locret_128081
		LDA		byte_6E3
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
		LDA		byte_6E2
		AND		#8
		BEQ		loc_1280CA
		JSR		sub_128375
		LDY		#3
		LDA		(word_6C),Y
		ORA		#$80
		STA		(word_6C),Y
loc_1280CA:
		LDA		byte_6E2
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
		LDA		byte_6E2
		AND		#4
		BNE		loc_1280F5
		LDY		#0
		LDA		#$80
		STA		(word_6C),Y
		INY
		STA		(word_6C),Y
loc_1280F5:
		DEC		byte_6E3
		BEQ		loc_1280FB
		RTS
loc_1280FB:
		LDA		byte_6E2
		AND		#2
		BEQ		loc_128119
		INC		byte_6E1
		LDA		byte_6E1
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
		LDA		byte_6E1
		CMP		#$1F
		BNE		loc_128154
		JSR		sub_174CCF
		BRK
		.BYTE $71, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_128139
		BRK
		.BYTE $72, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$20
		JSR		_bC_s0
		JMP		loc_12814E
loc_128139:
		BRK
		.BYTE $73, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$21
		JSR		_bC_s0
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
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		byte_60BA
		ORA		#$40
		STA		byte_60BA
		LDA		#$80
		STA		byte_110
		STA		byte_114
		STA		byte_118
		STA		byte_11C
		BNE		loc_1281BE
loc_128175:
		LDA		byte_6E1
		CMP		#$23
		BNE		loc_128185
		JSR		sub_174CCF
		BRK
		.BYTE $75, $77		; _msg_m00_arg1
		JSR		sub_174D4F
loc_128185:
		LDA		byte_6E1
		CMP		#$2C
		BNE		loc_12819A
		LDA		#$C0
		STA		byte_60C6
		JSR		sub_174CCF
		BRK
		.BYTE $86, $77		; _msg_m00_arg1
		JSR		sub_174D4F
loc_12819A:
		LDA		byte_6E1
		CMP		#$31
		BNE		loc_1281C4
		JSR		sub_174CCF
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		LDA		byte_D2
		STA		byte_D3
		BRK
		.BYTE $81, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$F
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_12B91A
		LDA		#1
		STA		byte_60C5
loc_1281BE:
		JSR		sub_174CBD
		PLA
		PLA
		PLA
loc_1281C4:
		LDA		byte_6E1
		CMP		#$32
		BNE		loc_1281D3
		LDA		byte_60CC
		ORA		#$40
		STA		byte_60CC
loc_1281D3:
		LDA		byte_6E1
		CMP		#2
		BNE		loc_1281E4
		LDA		#0
		STA		byte_6E1
		LDY		#$F6
		JMP		_syscall0_unsafe
loc_1281E4:
		CMP		#$33
		BNE		loc_1281F4
		BRK
		.BYTE $4D, $17		; ofs 0x000080a4, -> dst _b0_s52
		BRK
		.BYTE $4C, $17		; ofs 0x000080a2, -> dst _b0_s51
		JSR		sub_174CBD
		PLA
		PLA
		PLA
loc_1281F4:
		LDA		#0
		STA		byte_6E1
		RTS
loc_1281FA:
		CMP		#$D
		BNE		loc_12820F
		JSR		sub_174CCF
		BRK
		.BYTE $6C, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$D
		JSR		_bC_s0
		JMP		loc_128275
loc_12820F:
		CMP		#$18
		BNE		loc_12821D
loc_128213:
		PHA
		JSR		sub_174CCF
		BRK
		.BYTE $3E, $17		; ofs 0x00140042, -> dst _bD_s21
		PLA
		BNE		loc_12825F
loc_12821D:
		CMP		#$38
		BEQ		loc_128213
		CMP		#$25
		BNE		loc_128233
		JSR		sub_174CCF
		BRK
		.BYTE $76, $77		; _msg_m00_arg1
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$25
loc_128233:
		CMP		#$26
		BNE		loc_128242
		JSR		sub_174CCF
		BRK
		.BYTE $77, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$26
loc_128242:
		CMP		#$27
		BNE		loc_128251
		JSR		sub_174CCF
		BRK
		.BYTE $78, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$27
loc_128251:
		CMP		#$2C
		BNE		loc_12825F
		JSR		_bC_s0
		LDA		#$14
		STA		byte_6EF
		BNE		loc_128275
loc_12825F:
		JSR		_bC_s0
		LDA		byte_6E1
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
		JSR		sub_174CCF
		BRK
		.BYTE $6E, $77		; _msg_m00_arg1
		JMP		loc_128296
loc_12828A:
		PHA
		LDA		#0
		STA		byte_74C0
		JSR		sub_174CCF
		BRK
		.BYTE $6F, $77		; _msg_m00_arg1
loc_128296:
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$95
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		PLA
		SEC
		SBC		#8
		BNE		loc_1282B5
loc_1282A7:
		PHA
		JSR		sub_174CCF
		BRK
		.BYTE $6D, $77		; _msg_m00_arg1
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
		LDA		byte_6E1
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
		LDA		byte_6E1
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
		JSR		sub_176F34
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
		LDA		byte_6E1
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
		BRK
		.BYTE $58, $17		; ofs 0x00140014, -> dst _bD_sA
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
		LDA		byte_6E4,X
		STA		word_6C
		LDA		#1
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
		BRK
		.BYTE $99, 7		; ofs 0x00080006, -> dst _b5_s3
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
		LDA		#$95
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDX		#$1C
loc_1283CA:
		TXA
		LSR
		LSR
		STA		word_3C+1
		JSR		sub_12841D
		DEX
		BNE		loc_1283CA
		LDA		byte_6E1
		CMP		#$A
		BNE		locret_1283C2
		LDA		#$27
		STA		byte_7C71
		STA		byte_7CD1
		LDA		byte_30
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
		JSR		sub_1742BA
		LDX		#$F
		JSR		_vblank_count
		JSR		sub_174CCF
		BRK
		.BYTE $A5, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		byte_60B6
		ORA		#$20
		STA		byte_60B6
		LDA		#$A
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12841D:
		LDA		byte_6D1
		SEC
		SBC		word_3C+1
		STA		byte_6D1
		JSR		_vblank
		LDA		byte_6D1
		CLC
		ADC		word_3C+1
		STA		byte_6D1
		JMP		_vblank
byte_128435:
		.BYTE $14,$12,$10, $E, $C 

; =============== S U B	R O U T	I N E =======================================
_bC_s0:
		STA		byte_6E1
		ASL
		TAX
		DEX
		DEX
		LDA		off_12849C,X
		STA		word_6C
		LDA		off_12849C+1,X
		STA		word_6C+1
		LDY		#0
		LDA		(word_6C),Y
		STA		byte_6E2
		INY
		LDA		(word_6C),Y
		STA		byte_6E3
		LDX		#0
loc_12845A:
		INY
		LDA		(word_6C),Y
		STA		byte_6E4,X
		INX
		CPX		byte_6E3
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
		LDA		byte_6E1
		CMP		#$2B
		BNE		locret_12849B
		LDX		#$11
		LDA		byte_31
		CMP		#8
		BNE		loc_128498
		INX
loc_128498:
		STX		byte_6EF
locret_12849B:
		RTS
off_12849C:
		.WORD byte_128510
		.WORD byte_12851C
		.WORD byte_128534
		.WORD byte_128534
		.WORD byte_12853C
		.WORD byte_128548
		.WORD byte_12854D
		.WORD byte_128556
		.WORD byte_12855F
		.WORD byte_128568
		.WORD byte_12856E
		.WORD byte_12857A
		.WORD byte_128582
		.WORD byte_128592
		.WORD byte_128598
		.WORD byte_12859E
		.WORD byte_1285A3
		.WORD byte_1285A8
		.WORD byte_1285B2
		.WORD byte_1285B9
		.WORD byte_1285BF
		.WORD byte_1285C5
		.WORD byte_1285CF
		.WORD byte_1285D5
		.WORD byte_1285DB
		.WORD byte_1285E1
		.WORD byte_1285E8
		.WORD byte_1285EE
		.WORD byte_1285F4
		.WORD byte_1285F9
		.WORD byte_1285FF
		.WORD byte_128609
		.WORD byte_128612
		.WORD byte_12861C
		.WORD byte_128628
		.WORD byte_12862D
		.WORD byte_128635
		.WORD byte_12864B
		.WORD byte_128653
		.WORD byte_12865B
		.WORD byte_128666
		.WORD byte_12866D
		.WORD byte_128672
		.WORD byte_128678
		.WORD byte_128684
		.WORD byte_12868A
		.WORD byte_128693
		.WORD byte_1286A8
		.WORD byte_1286A8
		.WORD byte_1286D6
		.WORD byte_1286DB
		.WORD byte_1286E0
		.WORD byte_1286EA
		.WORD byte_1286F0
		.WORD byte_1286F6
		.WORD byte_1286FC
		.WORD byte_128702
		.WORD byte_128708
byte_128510:
		.BYTE $58,  1,$28,$C2,	2,$41,	5,$C1,	6,$4F,$46,$FF
byte_12851C:
		.BYTE $CC,  4,	4,  8, $C,$10,$C1,  1,$23,$FF,	1,$41,	1,$22,$FF,  2
		.BYTE $C2,  1,$FF,$41,	1,$E1,$A2,$FF
byte_128534:
		.BYTE $CA,  1,$10,$42,	1,$44,$81,$FF 
byte_12853C:
		.BYTE $5E,  1,$10,$41,$81,$41,$81,$41,$82,$41,$83,$FF
byte_128548:
		.BYTE $48,  1,$10,$88,$FF 
byte_12854D:
		.BYTE $CA,  1,$10,  1,$21,  1,$21,$82,$FF 
byte_128556:
		.BYTE $CA,  1,$10,  1,$21,  1,$21,$82,$FF 
byte_12855F:
		.BYTE $CA,  1,$10,  1,$21,  1,$21,$82,$FF 
byte_128568:
		.BYTE $C8,  1,$10,$41,$E1,$FF 
byte_12856E:
		.BYTE $D8,  1,$2C,$41,$81,$C2,	4,$45,$86,$C8, $A,$FF
byte_12857A:
		.BYTE $C2,  2,$3C,$40,$81,$FF,$81,$FF 
byte_128582:
		.BYTE $E2,  2,$3C,$40,$A1,$87,$E4,$C9,$24,$12,$FF,$A1,$89,$CD,$14,$FF
byte_128592:
		.BYTE $E2,  1,$18,  2,$62,$FF 
byte_128598:
		.BYTE $E2,  1,$18,$89,$A1,$FF 
byte_12859E:
		.BYTE $E2,  1,$18,$28,$FF 
byte_1285A3:
		.BYTE $E8,  1,$18,  7,$FF 
byte_1285A8:
		.BYTE $CC,  2,$14,$10,$C1,$A1,$FF,$41,$A1,$FF 
byte_1285B2:
		.BYTE $4C,  1,$10,$81,$42,$21,$FF 
byte_1285B9:
		.BYTE $CC,  1,$14,$41,$A1,$FF 
byte_1285BF:
		.BYTE $CC,  1,$14,$C1,$A1,$FF 
byte_1285C5:
		.BYTE $CC,  2,$28,$20,$41,$21,$FF,$C1,$21,$FF 
byte_1285CF:
		.BYTE $CE,  1,$18,$81,$61,$FF 
byte_1285D5:
		.BYTE $CC,  1,$18,  1,$A1,$FF 
byte_1285DB:
		.BYTE $5E,  1,$10,$21,	1,$FF 
byte_1285E1:
		.BYTE $4C,  1,$10,  7,$41,$E1,$FF 
byte_1285E8:
		.BYTE $CC,  1,$44,$C6,	2,$FF 
byte_1285EE:
		.BYTE $D8,  1,$44,  1,$41,$FF 
byte_1285F4:
		.BYTE $DE,  1,$10,$C2,$FF 
byte_1285F9:
		.BYTE $CC,  1,$10,$C3,$81,$FF 
byte_1285FF:
		.BYTE $CC,  2,$10,$14,$41,$21,$FF,$C1,$21,$FF 
byte_128609:
		.BYTE $CC,  2,$18,$1C,	3,$21,$FF,  4,$FF 
byte_128612:
		.BYTE $FE,  2,$10,$14,	5,$82,$FF,  5,$82,$FF 
byte_12861C:
		.BYTE $CC,  2,$10,$14,$83,$C1,$61,$FF,$83,$41,$E1,$FF
byte_128628:
		.BYTE $CC,  1,$28,$43,$FF 
byte_12862D:
		.BYTE $CE,  2,$28,$24,$41,$FF,$C1,$FF 
byte_128635:
		.BYTE $CE,  2,$28,$24,	1,$43,$81,$C1,	1,$41,$81,$E1,$FF,$C2,$81,$C1
		.BYTE	1,$41,$81,$C1,$62,$FF
byte_12864B:
		.BYTE $CE,  2,$28,$24,$A1,$FF,$A1,$FF 
byte_128653:
		.BYTE $4C,  2,$28,$24, $B,$FF, $B,$FF 
byte_12865B:
		.BYTE $58,  3,$20,$2C,$30,  2,$FF,  2,$FF,  2,$FF 
byte_128666:
		.BYTE $CC,  1,$10,$C3,$83,$47,$FF 
byte_12866D:
		.BYTE $D8,  1,$10,$41,$FF 
byte_128672:
		.BYTE $EA,  1,$10,$41,$61,$FF 
byte_128678:
		.BYTE $EC,  1,$20,$61,$C1,  6,$42,  3,$4A,  7,$E1,$FF
byte_128684:
		.BYTE $CC,  1,$10,$82,$C1,$FF 
byte_12868A:
		.BYTE $D8,  2,$14,$10,$85,$41,$FF,$84,$FF 
byte_128693:
		.BYTE $58,  4,$10,$14,$18,$1C,$81,$47,$FF,$62,$46,$FF,$21,  1,$61,$45
		.BYTE $FF,  1,$61,$46,$FF
byte_1286A8:
		.BYTE $CC,  4,$38,$3C,$40,$44,$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
		.BYTE $81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF,$81,$A1,$81,$A1,$81,$A1
		.BYTE $81,$A1,$81,$FF,$81,$A1,$81,$A1,$81,$A1,$81,$A1,$81,$FF
byte_1286D6:
		.BYTE $EC,  1,$10,$B3,$FF 
byte_1286DB:
		.BYTE $E4,  1,$10,$A5,$FF 
byte_1286E0:
		.BYTE $CC,  2,$14,$10,$C1,$A1,$FF,$41,$A1,$FF 
byte_1286EA:
		.BYTE $CC,  1,$14,$41,$A1,$FF 
byte_1286F0:
		.BYTE $CC,  1,$14,$C1,$A1,$FF 
byte_1286F6:
		.BYTE $CE,  1,$18,$81,$61,$FF 
byte_1286FC:
		.BYTE $CC,  1,$18,  1,$A1,$FF 
byte_128702:
		.BYTE $5E,  1,$10,$21,	1,$FF 
byte_128708:
		.BYTE $4C,  1,$10,  7,$41,$E1,$FF 

; =============== S U B	R O U T	I N E =======================================
_bC_sA:
		PHA
		JSR		sub_1742CF
		PLA
		JSR		sub_12871A
		JMP		sub_12874C

; =============== S U B	R O U T	I N E =======================================
sub_12871A:
		ASL
		ASL
		TAY
		LDX		byte_6D8
		JSR		sub_12872A
		LDA		byte_1F
		CLC
		ADC		#$1F
		STA		byte_1F

; =============== S U B	R O U T	I N E =======================================
sub_12872A:
		JSR		sub_128735
		INC		byte_1F
		INY
		JSR		sub_128735
		INY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128735:
		LDA		byte_20
		STA		byte_300,X
		INX
		LDA		byte_1F
		STA		byte_300,X
		INX
		LDA		byte_7200,Y
		STA		byte_300,X
		INX
		INC		byte_6D9
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
		STA		byte_300,X
		INX
		LDA		byte_1F
		STA		byte_300,X
		INX
		TYA
		STA		byte_300,X
		INX
		INC		byte_6D9
		STX		byte_6D8
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s2:
		JSR		sub_128BF0
		LDA		byte_6D9
		BEQ		loc_128784
		JSR		sub_1742BA
		JSR		_vblank
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
		JSR		_vblank
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
sub_12888D:
		LDA		#0
		STA		byte_32
		JSR		_vblank
locret_128894:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128895:
		BCS		locret_128894
		LDA		#$FF
		STA		byte_32
		LDY		byte_6D8
		LDA		word_3C
		ORA		#$C0
		STA		byte_300,Y
		STA		byte_305,Y
		LDA		#2
		STA		byte_301,Y
		STA		byte_306,Y
		LDA		word_3C+1
		STA		byte_302,Y
		LDA		byte_7200,X
		STA		byte_303,Y
		INX
		INX
		LDA		byte_7200,X
		STA		byte_304,Y
		DEX
		LDA		word_3C+1
		CLC
		ADC		#1
		STA		byte_307,Y
		LDA		byte_7200,X
		STA		byte_308,Y
		INX
		INX
		LDA		byte_7200,X
		STA		byte_309,Y
		TXA
		LSR
		LSR
		TAX
		LDA		byte_7300,X
		STA		word_40
		JSR		sub_1289B8
		LDA		word_3E
		STA		byte_30A,Y
		LDA		word_3E+1
		STA		byte_30B,Y
		LDA		word_40
		STA		byte_30C,Y
		LDA		byte_6D8
		CLC
		ADC		#$D
		STA		byte_6D8
		INC		byte_6D9
		INC		byte_6D9
		INC		byte_6D9
		INC		byte_44
		LDA		byte_44
		CMP		byte_47
		BEQ		loc_128914
		LDA		#0
		STA		byte_32
		RTS
loc_128914:
		JMP		sub_12888D

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
		LDA		byte_6DE0,X
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
		JMP		sub_176C99

; =============== S U B	R O U T	I N E =======================================
sub_128979:
		LDA		byte_30
		STA		byte_48
		LDA		byte_31
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
		JSR		sub_1742CF
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
		LDA		byte_480,X
		AND		word_4+1
		ORA		word_40
		STA		byte_480,X
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
		LDA		byte_6D9
		BEQ		loc_128A7B
		JSR		_vblank
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
		LDA		byte_6D9
		BEQ		loc_128AEC
		JSR		_vblank
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
		LDA		byte_6DE0,X
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
		LDA		byte_6D9
		BEQ		loc_128B52
		JSR		_vblank
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
		LDA		byte_6DE0,X
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
		JSR		sub_1742CF
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
		JSR		sub_1742CF
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
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		LDA		#0
		STA		byte_28
		JSR		_vblank
		LDA		#$10
		STA		byte_28
locret_128BEF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128BF0:
		LDA		byte_8B
		CMP		#$CC
		BNE		locret_128BEF
		LDX		#$19
loc_128BF8:
		LDA		byte_30
		AND		#$FE
		CMP		byte_128C2B,X
		BNE		loc_128C0A
		LDA		byte_31
		AND		#$FE
		CMP		byte_128C2B-1,X
		BEQ		loc_128C0F
loc_128C0A:
		DEX
		DEX
		BPL		loc_128BF8
		RTS
loc_128C0F:
		LDA		byte_31
		AND		#1
		ORA		byte_128C45-1,X
		STA		byte_31
		TAY
		LDA		byte_30
		AND		#1
		ORA		byte_128C45,X
		STA		byte_30
		TAX
		JSR		sub_176F34
		AND		#$E0
		STA		byte_8C
		RTS
byte_128C2B:
		.BYTE	0,  8,	8,  0,	8,$10, $E,  8,$10,  8,$14,  2,$14, $E,$20,  0
		.BYTE $26,  8,$28,  8,$2C,  2,$2C, $E,$32,  8
byte_128C45:
		.BYTE $18,  8,$14, $C,$14,  4,$26,  8,$28,  8,	8, $E,	8,  2,$2C, $C
		.BYTE  $E,  8,$10,  8,$20, $E,$20,  2,	2,  8

; =============== S U B	R O U T	I N E =======================================
_bC_s5:
		LDX		byte_30
		LDY		byte_31
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
		STX		byte_2A
		STY		byte_2B
		JSR		sub_128CC1
		LDA		word_3C+1
		STA		byte_2B
		STA		byte_101
		LDA		word_3C
		STA		byte_2A
		STA		byte_100
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s31:
		LDA		byte_30
		PHA
		LDA		byte_31
		PHA
		LDX		byte_2D
		STX		byte_30
		LDY		byte_2E
		STY		byte_31
		JSR		sub_128CC1
		PLA
		STA		byte_31
		STA		byte_101
		PLA
		STA		byte_30
		STA		byte_100
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128CAB:
		LDA		byte_2A
		STA		word_3C
		LDA		byte_2B
		STA		word_3C+1
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s3:
		LDX		byte_2A
		LDY		byte_2B
		JSR		sub_176CA4
		STA		byte_92
		LDX		byte_2A
		LDY		byte_2B

; =============== S U B	R O U T	I N E =======================================
sub_128CC1:
		STX		byte_100
		STY		byte_101
		LDA		byte_73E
		BPL		loc_128CD5
		STX		byte_104
		STY		byte_105
		JMP		loc_128CE1
loc_128CD5:
		TXA
		EOR		#$80
		STA		byte_104
		TYA
		EOR		#$80
		STA		byte_105
loc_128CE1:
		LDA		byte_740
		BPL		loc_128CEF
		STX		byte_108
		STY		byte_109
		JMP		loc_128CFB
loc_128CEF:
		TXA
		EOR		#$80
		STA		byte_108
		TYA
		EOR		#$80
		STA		byte_109
loc_128CFB:
		LDA		byte_742
		BPL		loc_128D09
		STX		byte_10C
		STY		byte_10D
		JMP		loc_128D15
loc_128D09:
		TXA
		EOR		#$80
		STA		byte_10C
		TYA
		EOR		#$80
		STA		byte_10D
loc_128D15:
		LDA		byte_92
		STA		byte_93
		STA		byte_94
		STA		byte_95
		STA		byte_96
		LDA		byte_644
		STA		byte_103
		STA		byte_6BC
		LDA		#4
		ORA		byte_644
		STA		byte_107
		LDA		#8
		ORA		byte_644
		STA		byte_10B
		LDA		#$C
		ORA		byte_644
		STA		byte_10F
		LDA		#0
		STA		byte_97

; =============== S U B	R O U T	I N E =======================================
sub_128D44:
		LDA		#0
		STA		byte_102
		LDA		#1
		STA		byte_106
		LDA		#2
		STA		byte_10A
		LDA		#3
		STA		byte_10E

; =============== S U B	R O U T	I N E =======================================
_bC_s35:
		LDA		byte_AC
		AND		#$1F
		BNE		locret_128D96
		BIT		byte_60C5
		BVS		locret_128D96
		LDA		byte_2C
		BNE		locret_128D96
		LDA		#1
		STA		word_6C+1
		LDA		#0
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDA		byte_73E
		BPL		loc_128D7E
		LDA		#4
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
loc_128D7E:
		LDA		byte_740
		BPL		loc_128D8A
		LDA		#8
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
loc_128D8A:
		LDA		byte_742
		BPL		locret_128D96
		LDA		#$C
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
locret_128D96:
		RTS
		.BYTE $6F,  0,	0,$80,$6F,  0,	0,$88,$77,  0,	0,$80,$77,  0,	0,$88

; =============== S U B	R O U T	I N E =======================================
_bC_s4:
		LDA		byte_2C
		BNE		locret_128D96
		LDA		byte_644
		BEQ		loc_128DE6
		CMP		#1
		BEQ		loc_128DCF
		CMP		#2
		BEQ		loc_128DFD
		JSR		sub_128E92
		LDX		byte_30
		STX		byte_100
		INX
		STX		byte_104
		INX
		STX		byte_108
		INX
		STX		byte_10C
		JMP		loc_128E11
loc_128DCF:
		JSR		sub_128E92
		LDX		byte_30
		STX		byte_100
		DEX
		STX		byte_104
		DEX
		STX		byte_108
		DEX
		STX		byte_10C
		JMP		loc_128E11
loc_128DE6:
		JSR		sub_128E83
		LDY		byte_31
		STY		byte_101
		INY
		STY		byte_105
		INY
		STY		byte_109
		INY
		STY		byte_10D
		JMP		loc_128E11
loc_128DFD:
		JSR		sub_128E83
		LDY		byte_31
		STY		byte_101
		DEY
		STY		byte_105
		DEY
		STY		byte_109
		DEY
		STY		byte_10D
loc_128E11:
		LDA		#4
		ORA		byte_644
		STA		byte_107
		LDA		#8
		ORA		byte_644
		STA		byte_10B
		LDA		#$C
		ORA		byte_644
		STA		byte_10F
		LDA		#$F0
		STA		byte_97
		LDX		byte_100
		LDY		byte_101
		JSR		sub_176F34
		STA		byte_93
		LDX		byte_104
		LDY		byte_105
		JSR		sub_176F34
		STA		byte_94
		LDX		byte_108
		LDY		byte_109
		JSR		sub_176F34
		STA		byte_95
		LDX		byte_10C
		LDY		byte_10D
		JSR		sub_176F34
		STA		byte_96
		LDA		byte_73E
		BMI		loc_128E66
		LDA		#$80
		STA		byte_104
		STA		byte_105
loc_128E66:
		LDA		byte_740
		BMI		loc_128E73
		LDA		#$80
		STA		byte_108
		STA		byte_109
loc_128E73:
		LDA		byte_742
		BMI		loc_128E80
		LDA		#$80
		STA		byte_10C
		STA		byte_10D
loc_128E80:
		JMP		sub_128D44

; =============== S U B	R O U T	I N E =======================================
sub_128E83:
		LDX		byte_30
		STX		byte_100
		STX		byte_104
		STX		byte_108
		STX		byte_10C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_128E92:
		LDY		byte_31
		STY		byte_101
		STY		byte_105
		STY		byte_109
		STY		byte_10D
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s34:
		LDA		byte_31
		CMP		#$C
		BNE		locret_128F02
		BIT		byte_60C5
		BVC		locret_128F02
		BRK
		.BYTE $21, $2F		; _syscall12
		JSR		sub_128F03
		JSR		sub_128F24
		JSR		sub_128F4F
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		JSR		sub_174369
		LDA		#$C5
		STA		byte_8B
		LDA		#7
		STA		byte_30
		LDA		#5
		STA		byte_31
		LDA		#$2F
		STA		byte_2A
		LDA		#$15
		STA		byte_2B
		LDA		#0
		STA		byte_644
		JSR		loc_1752EB
		JSR		_bC_s1A
		JSR		sub_175B0E
		LDA		#$80
		STA		byte_60C5
		LDA		#$A
		STA		byte_92
		LDX		#$B
loc_128EEB:
		LDA		#$F
		STA		byte_750,X
		DEX
		LDA		#$80
		STA		byte_750,X
		DEX
		LDA		#0
		STA		byte_750,X
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
		JSR		sub_1743B8
		AND		#$F
		ASL
		STA		word_4
		JSR		sub_1743B8
		AND		#$F
		TAX
		DEX
		TAX
		ASL
		STA		word_4+1
		JSR		sub_129074
		BRK
		.BYTE $95, $2F		; _syscall12
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
		JSR		sub_1742BA
		JSR		_vblank
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
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
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
		.BYTE	0,  0,	0,  0,	1,  0,	0,  1,	0,  0,	1,  1,	0,  0,	0,  1
		.BYTE	0,  0,	0,  1,	0
byte_128FCE:
		.BYTE	0,  0,	0,  0,	1,  0,	0,  1,	0,  0,	0,  0,	3,  0,	0,  0
		.BYTE	3,  0,	0,  3,	3

; =============== S U B	R O U T	I N E =======================================
_bC_s1B:
		LDX		#0
		LDA		#$D
loc_128FE7:
		STA		byte_7400,X
		INX
		CPX		#$60
		BNE		loc_128FE7
		LDA		#$2E
		STA		byte_7400
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
		LDA		byte_60C5
		ORA		#$20
		STA		byte_60C5
		JSR		_bC_s1B
		BRK
		.BYTE $F2, 7		; ofs 0x00080014, -> dst _b5_sA
		JSR		sub_128F03
		LDA		byte_31
		AND		#1
		EOR		#1
		ASL
		STA		word_3C+1
		LDA		#$78
		STA		byte_6DF
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
		JSR		sub_1742BA
		BRK
		.BYTE $95, $2F		; _syscall12
		JMP		sub_128F4A

; =============== S U B	R O U T	I N E =======================================
sub_129060:
		PHA
		LDX		#$16
		STX		word_4
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		PLA
		TAX
		INX
		TXA
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
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
		JSR		sub_1742C7
		JMP		loc_129057

; =============== S U B	R O U T	I N E =======================================
sub_12908F:
		LDA		byte_60C8
		AND		#4
		BEQ		locret_1290E0
		LDA		byte_30
		CMP		#$10
		BCC		locret_1290E0
		CMP		#$14
		BCS		locret_1290E0
		LDA		byte_31
		CMP		#$D
		BCC		locret_1290E0
		CMP		#$11
		BCS		locret_1290E0
		JSR		sub_174CCF
		BRK
		.BYTE $93, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#2
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD
		JSR		sub_174CCF
		BRK
		.BYTE $94, $77		; _msg_m00_arg1
loc_1290C1:
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_1290CC
		BRK
		.BYTE $91, $77		; _msg_m00_arg1
		JMP		loc_1290C1
loc_1290CC:
		BRK
		.BYTE $92, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$80
		STA		byte_60C8
		LDA		#$12
		STA		byte_7579
		LDA		#$2F
		BNE		loc_129117
locret_1290E0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1290E1:
		LDY		byte_31
		LDA		byte_60C8
		BMI		locret_1290E0
		CMP		#1
		BCS		loc_1290FF
		CPY		#4
		BNE		locret_1290E0
		LDA		#1
		STA		byte_60C8
		JSR		sub_174CCF
		BRK
		.BYTE $8E, $77		; _msg_m00_arg1
		LDA		#$2D
		BNE		loc_129117
loc_1290FF:
		CMP		#3
		BCS		locret_1290E0
		CPY		#6
		BNE		locret_1290E0
		LDA		#3
		STA		byte_60C8
		JSR		sub_174CCF
		BRK
		.BYTE $8F, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$2E
loc_129117:
		JSR		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12911A:
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
locret_12911F:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129120:
		LDA		byte_60C8
		BMI		locret_12911F
		AND		#4
		BNE		locret_12911F
		LDA		byte_31
		CMP		#8
		BNE		locret_12911F
		LDA		#7
		STA		byte_60C8
		JSR		sub_174CCF
		BRK
		.BYTE $90, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		JSR		sub_12911A
		LDA		#$1E
		STA		byte_92
		LDX		#$10
		STX		word_4
		LDY		#$E
		STY		word_4+1
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		LDA		#0
		JSR		sub_12915C
		LDA		#1
		JSR		sub_12915C
		JMP		sub_1742B0

; =============== S U B	R O U T	I N E =======================================
sub_12915C:
		JSR		_bC_s1F
		JMP		sub_129A38

; =============== S U B	R O U T	I N E =======================================
sub_129162:
		LDA		byte_60B7
		BMI		loc_129199
		ORA		byte_60B9
		ORA		byte_60CA
		BMI		locret_129198
		LDA		byte_30
		CMP		#$21
		BNE		locret_129198
		LDA		byte_31
		CMP		#$C
		BNE		locret_129198
		LDA		#1
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		byte_60B7
		ORA		#$80
		STA		byte_60B7
		LDA		#$AC
		STA		byte_7633
		JSR		sub_174CBD
		JSR		_bC_s12_vblank_count_50
		LDA		#$2A
		JMP		_bC_s0
locret_129198:
		RTS
loc_129199:
		LDA		byte_30
		CMP		#$23
		BNE		locret_129198
		LDA		byte_31
		CMP		#$C
		BNE		locret_129198
		LDA		byte_60CA
		ORA		#$80
		STA		byte_60CA
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22
		JSR		sub_174369
		LDA		#$9D
		STA		byte_2A
		LDA		#$93
		STA		byte_2B
		LDA		#$15
		STA		byte_30
		LDA		#8
		STA		byte_31
		LDA		#$17
		STA		byte_8B
		LDA		#2
		STA		byte_644
		LDA		#$12
		STA		byte_92
		LDA		#$78
		STA		byte_6DF
		JSR		loc_1752EB
		JSR		sub_174CCF
		BRK
		.BYTE $98, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s10:
		JSR		sub_1293DA
		BCS		loc_12923A
		LDA		byte_60B7
		BPL		loc_1291F6
		LDA		byte_8B
		CMP		#$C
		BEQ		loc_12923A
		CMP		#$7A
		BEQ		loc_12923A
loc_1291F6:
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		byte_6DF
		STA		byte_C5
		CMP		#$78
		LDA		#$97
		BCC		loc_129206
		LDA		#$3D
loc_129206:
		STA		byte_6DF
		JSR		sub_12923C
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s11:
		JSR		sub_1293DA
		BCS		loc_12923A
		LDA		byte_6DF
		STA		byte_C5
		CMP		#$78
		BCS		loc_129232
		LDA		#$97
		STA		byte_6DF
		BRK
		.BYTE 4, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		JSR		sub_12923C
		SEC
		RTS
loc_129232:
		BRK
		.BYTE 2, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		SEC
		RTS
loc_12923A:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12923C:
		LDA		#0
		STA		byte_AA
		LDA		byte_9A
		BNE		sub_1292B0
		LDX		#6
loc_129246:
		LDA		#$89
		JSR		_get_syscall0_data_byte_X
		CMP		byte_C5
		BCC		loc_129254
		BEQ		loc_129254
		DEX
		BNE		loc_129246
loc_129254:
		STX		byte_C5
		LDA		#$8A
		JSR		_get_syscall0_data_byte_X
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
		LDA		#$8B
		JSR		_get_syscall0_data_byte_Y
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
		JSR		sub_17435B
		LDX		#3
		JSR		_vblank_count
		PLA
		TAY
		CPY		#$54
		BNE		loc_12929A
		LDY		#0
loc_12929A:
		DEC		byte_C5
		LDA		byte_C5
		BNE		loc_12926A
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		RTS
byte_1292A4:
		.BYTE	1,  4,	7, $A,	2,  5,	8, $B,	3,  6,	9, $C

; =============== S U B	R O U T	I N E =======================================
sub_1292B0:
		JSR		sub_129323
		LDY		#0
loc_1292B5:
		JSR		sub_1292F5
		CPY		#$C
		BNE		loc_1292B5
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369
		JSR		_vblank_and_render_off_flag10_set
		JSR		sub_176C41
		JSR		sub_129323
		JSR		sub_12932E
		JSR		_clear_nmi_flag_10
		LDA		#$FF
		STA		byte_6F0
		BRK
		.BYTE $E9, 7		; ofs 0x00158062, -> dst _bE_s31
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		JSR		_pal_fade_in
		JSR		sub_17435B
		JSR		_vblank
		JSR		sub_17443A
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
		.BYTE	1,  8,	1,  5,	8,  0,	5,  8,	0,  5,	4,  1,	5,  4,	2,  1
		.BYTE	4,  0,	1,  8,	0,  5,	4,  8,	1,  8,	4

; =============== S U B	R O U T	I N E =======================================
sub_129323:
		LDX		#$C
loc_129325:
		LDA		_ram_pal_buf,X
		STA		_pak_data_ptr+1,X
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
		JSR		sub_17435B
		LDX		#3
		JSR		_vblank_count
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
		LDA		_pak_data_ptr+1,X
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
		CMP		_pak_data_ptr+1,X
		BCS		locret_1293C9
		ADC		#$10
		BNE		loc_1293C6

; =============== S U B	R O U T	I N E =======================================
sub_1293DA:
		LDA		byte_2F
		AND		#2
		BNE		loc_129436
		LDA		byte_2C
		CMP		#1
		BNE		loc_1293ED
		BIT		byte_60B8
		BVC		loc_1293ED
		SEC
		RTS
loc_1293ED:
		LDA		byte_8B
		CMP		#$9C
		BEQ		loc_129436
		CMP		#$9D
		BEQ		loc_129436
		CMP		#$60
		BEQ		loc_129436
		CMP		#$72
		BNE		sub_129404
		LDA		byte_60B7
		BMI		loc_129436

; =============== S U B	R O U T	I N E =======================================
sub_129404:
		LDA		byte_9A
		BEQ		loc_129438
		LDA		byte_8B
		CMP		#8
		BEQ		loc_129436
		CMP		#$2D
		BCC		loc_129438
		CMP		#$3C
		BCC		loc_129436
		CMP		#$58
		BEQ		loc_129436
		CMP		#$5B
		BEQ		loc_129436
		CMP		#$85
		BEQ		loc_129436
		CMP		#$9F
		BCC		loc_129438
		CMP		#$A6
		BEQ		loc_129438
		CMP		#$C6
		BCC		loc_129436
		CMP		#$CF
		BCC		loc_129438
		CMP		#$D6
		BCS		loc_129438
loc_129436:
		SEC
		RTS
loc_129438:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_sF:
		LDA		#3
		BNE		sub_129446

; =============== S U B	R O U T	I N E =======================================
_bC_sE:
		LDA		#1
		BNE		sub_129446

; =============== S U B	R O U T	I N E =======================================
_bC_sD:
		LDA		#0
		BEQ		sub_129446

; =============== S U B	R O U T	I N E =======================================
sub_129446:
		STA		_tmp_pak_data_bank
		LDA		#$10
		STA		byte_BA
		STA		word_4
		LDA		#$E
		STA		byte_BB
		STA		word_4+1
		LDX		byte_30
		STX		word_B7+1
		LDY		byte_31
		STY		byte_B9
		JSR		sub_176F34
		AND		#$1F
		STA		word_B7
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		BEQ		loc_12946E
		JSR		sub_1294A8
loc_12946E:
		JSR		sub_129581
		LDX		word_B7+1
		LDY		byte_B9
		JSR		sub_176F34
		TAX
		AND		#$E0
		STA		byte_BC
		TXA
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#$D
		BNE		loc_129490
		LSR		_tmp_pak_data_bank
		BNE		sub_1294D0
		BEQ		loc_1294A0
loc_129490:
		CMP		#$C
		BNE		loc_12949A
		LSR		_tmp_pak_data_bank
		BCS		sub_1294D0
		BCC		loc_1294A0
loc_12949A:
		CMP		#$B
		BEQ		sub_1294D0
		CLC
		RTS
loc_1294A0:
		BRK
		.BYTE 0, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
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
		JSR		sub_176F34
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
		JSR		sub_176C3C
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		LDA		#$90
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		JSR		sub_129526
		JSR		sub_1295B8
		BCC		loc_129518
		JSR		sub_129581
		JSR		sub_129526
		JSR		sub_129585
		LDX		word_B7+1
		LDY		byte_B9
		JSR		sub_176F34
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
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
		JSR		sub_1742BA
		JSR		_vblank
loc_129524:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129526:
		JSR		sub_129555
		LDA		word_B7
		LDX		word_B7+1
		LDY		byte_B9
		JSR		sub_177CC8
		LDA		byte_BC
		CMP		byte_8C
		BNE		locret_129554
		LDA		byte_BA
		LSR
		STA		word_4
		LDA		byte_BB
		LSR
		STA		word_4+1
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		BCS		locret_129554
		LDA		byte_BA
		STA		word_4
		LDA		byte_BB
		STA		word_4+1
		LDA		word_B7
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
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
		LDA		byte_8B
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
sub_129581:
		LDA		#0
		BEQ		sub_12958F

; =============== S U B	R O U T	I N E =======================================
sub_129585:
		LDA		#1
		BNE		sub_12958F

; =============== S U B	R O U T	I N E =======================================
sub_129589:
		LDA		#2
		BNE		sub_12958F

; =============== S U B	R O U T	I N E =======================================
sub_12958D:
		LDA		#3

; =============== S U B	R O U T	I N E =======================================
sub_12958F:
		CLC
		ADC		byte_644
		AND		#3
		BEQ		loc_1295AA
		LSR
		BEQ		loc_1295A3
		BCC		loc_1295B1
		DEC		word_B7+1
		DEC		byte_BA
		DEC		byte_BA
		RTS
loc_1295A3:
		INC		word_B7+1
		INC		byte_BA
		INC		byte_BA
		RTS
loc_1295AA:
		DEC		byte_B9
		DEC		byte_BB
		DEC		byte_BB
		RTS
loc_1295B1:
		INC		byte_B9
		INC		byte_BB
		INC		byte_BB
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1295B8:
		JSR		sub_129404
		BCS		locret_1295CC
		LDA		byte_8B
		CMP		#$9F
		BCS		locret_1295CC
		CMP		#$41
		BCS		loc_1295CB
		CMP		#$2D
		BCS		locret_1295CC
loc_1295CB:
		CLC
locret_1295CC:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s36:
		STA		_pak_data_ptr
		STA		byte_CE
		JMP		sub_129874

; =============== S U B	R O U T	I N E =======================================
_bC_s37:
		LDX		#$C
		LDA.W		byte_8B
loc_1295D9:
		CMP		byte_129B5D,X
		BEQ		loc_1295E5
		DEX
		DEX
		DEX
		DEX
		BPL		loc_1295D9
		RTS
loc_1295E5:
		LDA		byte_129B5D+3,X
		AND		#$7F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1295EB:
		PHA
		LDX		byte_30
		LDY		byte_31
		JSR		sub_177CC8
		LDA		#$10
		STA		word_4
		LDA		#$E
		STA		word_4+1
		PLA
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129600:
		LDX		byte_30
		LDY		byte_31
		JSR		sub_176F34
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129610:
		BRK
		.BYTE $68, $77		; _msg_m00_arg1
		JMP		loc_129745

; =============== S U B	R O U T	I N E =======================================
sub_129616:
		BRK
		.BYTE $1C, $77		; _msg_m00_arg1
		JMP		loc_129742

; =============== S U B	R O U T	I N E =======================================
_bC_s1D:
		JSR		sub_174DF2
		LDA		byte_60B7
		AND		#$40
		BNE		sub_129610
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		STA		byte_CE
		LDA		#0
		STA		byte_B9
		LDA		byte_2C
		LSR
		BCS		sub_129616
		LDA		byte_9A
		BNE		loc_12963D
		JMP		loc_1297EA
loc_12963D:
		JSR		sub_129600
		CMP		#3
		BEQ		loc_129647
		JMP		loc_12970F
loc_129647:
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
		JSR		sub_1299B6
		JSR		_bC_s1F
		PHP
		TXA
		ASL
		ASL
		ASL
		ADC		word_4
		TAY
		LDA		#$B7
		JSR		_get_syscall0_data_byte_Y
		STA		_pak_data_ptr
		LDY		word_4
		PLP
		BCS		loc_129688
		JSR		sub_129A38
		LDA		#$8F
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		LDA		#$1F
		JSR		sub_1295EB
		BRK
		.BYTE $64, $67		; _msg_m00_arg0
		LDA		byte_8B
		CMP		#$D3
		BNE		loc_12967D
		JSR		loc_1296F5
loc_12967D:
		LDA		_pak_data_ptr
		BMI		loc_12968B
		CMP		#$7F
		BEQ		loc_129698
		JMP		loc_12986B
loc_129688:
		JMP		loc_129847
loc_12968B:
		TAY
		INY
		BEQ		loc_1296BD
		INY
		BEQ		loc_1296C3
		INY
		BEQ		loc_1296D2
		INY
		BEQ		loc_1296E8
loc_129698:
		LDX		#0
		STX		byte_641
		STX		byte_D0
		STX		byte_CF
		LDA		_pak_data_ptr
		ASL
		ASL
		ROL		byte_CF
		ASL
		ROL		byte_CF
		STA		byte_63F
		STA		byte_CE
		LDA		byte_CF
		STA		byte_640
		JSR		_sram_bank0_sub1C
		BRK
		.BYTE $26, $67		; _msg_m00_arg0
		JMP		loc_129745
loc_1296BD:
		BRK
		.BYTE $49, $77		; _msg_m00_arg1
		JMP		loc_129745
loc_1296C3:
		LDA		byte_60C5
		BMI		loc_1296BD
		BRK
		.BYTE $AC, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$C
		BNE		loc_1296DF
loc_1296D2:
		LDA		byte_60C5
		BMI		loc_1296BD
		BRK
		.BYTE $AD, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$12
loc_1296DF:
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD
		JMP		loc_129745
loc_1296E8:
		LDA		#$4B
		STA		_pak_data_ptr
		JSR		loc_12986F
		BRK
		.BYTE $7F, $17		; ofs 0x00098030, -> dst _b6_s18
		JMP		loc_129745
loc_1296F5:
		LDA		_pak_data_ptr
		PHA
		BRK
		.BYTE $3E, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$B
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD
		JSR		sub_174CCF
		PLA
		STA		_pak_data_ptr
		STA		byte_CE
		RTS
loc_12970F:
		LDX		#0
loc_129711:
		LDA		byte_129B25,X
		INX
		CMP		byte_8B
		BNE		loc_129738
		LDA		byte_129B25,X
		INX
		CMP		byte_30
		BNE		loc_129739
		LDA		byte_129B25,X
		INX
		CMP		byte_31
		BEQ		loc_129777
		AND		#$7F
		CMP		byte_31
		BEQ		loc_129749
		AND		#$3F
		CMP		byte_31
		BNE		loc_12973A
		JMP		loc_129807
loc_129738:
		INX
loc_129739:
		INX
loc_12973A:
		INX
		CPX		#$68
		BNE		loc_129711
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
loc_129742:
		BRK
		.BYTE $46, $77		; _msg_m00_arg1
loc_129745:
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS
loc_129749:
		LDA		byte_129B25,X
		PHA
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
		PLA
		STA		word_6+1
		JSR		sub_129600
		CMP		#1
		BEQ		loc_129742
		CMP		#$A
		BEQ		loc_129742
		LDA		word_6+1
		BPL		loc_12976B
		LDA		byte_60B7
		AND		#2
		BEQ		loc_129742
		LDA		word_6+1
loc_12976B:
		AND		#$7F
		JSR		sub_1295EB
		JSR		sub_1742BA
		LDA		#$F
		BNE		loc_1297C1
loc_129777:
		LDY		byte_129B25,X
		BEQ		loc_12978A
		DEY
		BEQ		loc_1297B7
		DEY
		BEQ		loc_1297C7
		DEY
		BEQ		loc_1297D2
		DEY
		BEQ		loc_1297D9
		BNE		loc_129742
loc_12978A:
		LDA		byte_60B9
		BMI		loc_129801
		LDA		byte_110
		CMP		#5
		BEQ		loc_129801
		BRK
		.BYTE $B2, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#$92
		STA		byte_113
		LDA		#5
		STA		byte_110
		LSR
		STA		byte_111
		LSR
		STA		word_6C+1
		LDA		#$10
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JMP		loc_129745
loc_1297B7:
		LDA		byte_644
		BNE		loc_129801
		BRK
		.BYTE $3B, $77		; _msg_m00_arg1
		LDA		#$3D
loc_1297C1:
		JSR		sub_176C70
		JMP		loc_129745
loc_1297C7:
		LDA		byte_644
		CMP		#2
		BNE		loc_129801
		LDA		#$42
		BNE		loc_1297C1
loc_1297D2:
		BRK
		.BYTE $44, $77		; _msg_m00_arg1
		LDA		#$A9
		BNE		loc_1297C1
loc_1297D9:
		LDA		byte_60CA
		AND		#2
		BNE		loc_129801
		BRK
		.BYTE $44, $77		; _msg_m00_arg1
		LDA		#$4A
		STA		_pak_data_ptr
		JMP		loc_12986B
loc_1297EA:
		LDX		#$68
loc_1297EC:
		LDA		byte_129B25,X
		INX
		CMP		byte_2A
		BNE		loc_1297FB
		LDA		byte_129B25,X
		CMP		byte_2B
		BEQ		loc_12980E
loc_1297FB:
		INX
		INX
		CPX		#$6B
		BCC		loc_1297EC
loc_129801:
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
loc_129804:
		JMP		loc_129742
loc_129807:
		DEX
		LDA		byte_129B25,X
		ASL
		ROR		byte_B9
loc_12980E:
		INX
		LDA		byte_129B25,X
		PHA
		AND		#$7F
		STA		_pak_data_ptr
		CMP		#$79
		BNE		loc_12982B
		LDA		byte_60CD
		CMP		#$FF
		BNE		loc_129827
		LDA		byte_60B7
		BPL		loc_12982B
loc_129827:
		LDA		#$FF
		STA		_pak_data_ptr
loc_12982B:
		TXA
		LSR
		LSR
		CLC
		ADC		#$B6
		STA		byte_60A8
		PHA
		BRK
		.BYTE $47, $77		; _msg_m00_arg1
		PLA
		STA		word_4
		PLA
		BMI		loc_12984F
		ASL		byte_B9
		BCS		loc_12985A
		JSR		loc_129A20
		BCC		loc_129868
loc_129847:
		LDA		_pak_data_ptr
		JSR		sub_129A62
		JMP		loc_129856
loc_12984F:
		LDX		#0
		LDA		_pak_data_ptr
		JSR		sub_129A69
loc_129856:
		BCS		loc_129804
		BCC		loc_12986B
loc_12985A:
		LDA		byte_6AE6
		AND		#1
		BNE		loc_129804
		ORA		#1
		STA		byte_6AE6
		BNE		loc_12986B
loc_129868:
		JSR		sub_129A38
loc_12986B:
		LDA		_pak_data_ptr
		BMI		loc_129804
loc_12986F:
		STA		byte_D3
		BRK
		.BYTE $65, $67		; _msg_m00_arg0

; =============== S U B	R O U T	I N E =======================================
sub_129874:
		JSR		_sram_b0_s31
		LDY		word_4
		DEY
		STY		_pak_data_ptr+1
		BRK
		.BYTE $68, 7		; ofs 0x00008078, -> dst _b0_s3C
		BCC		loc_129888
		LDA		word_4
		STA		byte_CE
		JMP		loc_129939
loc_129888:
		LDY		#$67
		LDA		_pak_data_ptr+1
		BNE		loc_12988F
		DEY
loc_12988F:
		TYA
		JSR		sub_176C6C
		BRK
		.BYTE $45, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BNE		loc_1298D1
		LDA		_pak_data_ptr+1
		BEQ		loc_1298A9
loc_12989F:
		BRK
		.BYTE $6A, $67		; _msg_m00_arg0
		BRK
		.BYTE $1C, $D7		; _syscall0D
		CMP		#$FF
		BEQ		loc_1298D1
loc_1298A9:
		STA		_tmp_pak_data_bank
		STA		byte_CE
		BRK
		.BYTE $68, $67		; _msg_m00_arg0
		BRK
		.BYTE $2D, $D7		; _syscall0D
		CMP		#$FF
		BEQ		loc_1298CD
		STA		byte_CF
		BRK
		.BYTE $49, 7		; ofs 0x00008050, -> dst _b0_s28
		LDA		word_4+1
		AND		#$7F
		TAX
		LDA		#$90
		JSR		_get_syscall0_data_byte_X
		AND		#$10
		BEQ		loc_1298E5
		BRK
		.BYTE $2A, $77		; _msg_m00_arg1
loc_1298CD:
		LDA		_pak_data_ptr+1
		BNE		loc_12989F
loc_1298D1:
		JSR		loc_129A20
		JSR		sub_129A46
		LDA		#0
		STA		byte_D2
		LDA		_pak_data_ptr
		STA		byte_D3
		BRK
		.BYTE $69, $67		; _msg_m00_arg0
		JMP		loc_129943
loc_1298E5:
		LDA		_tmp_pak_data_bank
		STA		byte_CE
		JSR		_sram_bank0_sub28
		LDA		word_4+1
		AND		#$7F
		STA		byte_D3
		STA		byte_D4
		JSR		_sram_bank0_sub2A
		LDY		#$3F
		LDA		_tmp_pak_data_bank
		ASL
		TAX
		LDA		byte_73D,X
		ASL
		BCC		loc_129914
		BMI		loc_129913
		TXA
		LSR
		STA		byte_D2
		LDA		_pak_data_ptr
		STA		byte_D4
		BRK
		.BYTE $4A, $77		; _msg_m00_arg1
		JMP		loc_129935
loc_129913:
		INY
loc_129914:
		TXA
		LSR
		STA		byte_D3
		LDA		_pak_data_ptr
		STA		byte_D5
		LDX		#0
loc_12991E:
		LDA		byte_73D,X
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
		JSR		sub_176C70
loc_129935:
		LDA		_tmp_pak_data_bank
		STA		byte_CE
loc_129939:
		LDA		_pak_data_ptr
		STA		byte_CF
		JSR		_sram_bank0_sub29
		JSR		loc_129953
loc_129943:
		LDA		_pak_data_ptr
		CMP		#$5B
		BNE		loc_129950
		LDA		_tmp_pak_data_bank
		STA		byte_D2
		BRK
		.BYTE $4B, $77		; _msg_m00_arg1
loc_129950:
		JMP		loc_129745
loc_129953:
		LDA		_pak_data_ptr
		CMP		#$7A
		BNE		loc_129961
		LDA		byte_60CD
		ORA		#8
		STA		byte_60CD
loc_129961:
		LDA		_pak_data_ptr
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
		ORA		byte_60CE
		STA		byte_60CE
		JSR		_bC_s23
		RTS
loc_12997D:
		CMP		#$4E
		BNE		loc_12998F
		LDA		byte_8B
		CMP		#$57
		BNE		loc_12998F
		LSR		byte_60CA
		SEC
		ROL		byte_60CA
		RTS
loc_12998F:
		CMP		#$4A
		BNE		locret_12999B
		LDA		byte_60CA
		ORA		#2
		STA		byte_60CA
locret_12999B:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s23:
		LDY		#6
		LDX		#0
		LDA		byte_60CE
loc_1299A3:
		LSR
		BCC		loc_1299A7
		INX
loc_1299A7:
		DEY
		BNE		loc_1299A3
		CPX		#3
		BCC		locret_1299B5
		ASL		byte_60CD
		SEC
		ROR		byte_60CD
locret_1299B5:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_1299B6:
		LDA		#$74
		STA		word_6C+1
		LDA		#0
		STA		word_6C
		STA		word_4
loc_1299C0:
		LDY		#0
		LDA		(word_6C),Y
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
		AND		#$F
		CMP		#3
		BNE		loc_1299DD
		BRK
		.BYTE $AE, 7		; ofs 0x00158040, -> dst _bE_s20
		CPY		byte_31
		BNE		loc_1299DB
		CPX		byte_30
		BEQ		loc_1299E5
loc_1299DB:
		INC		word_4
loc_1299DD:
		INC		word_6C
		BNE		loc_1299E3
		INC		word_6C+1
loc_1299E3:
		BNE		loc_1299C0
loc_1299E5:
		LDA		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s1F:
		TAX
		LDA		byte_8B
		CMP		#$75
		BNE		loc_1299FD
		LDA		byte_60CD
		CMP		#$FF
		BNE		loc_1299FD
		LDA		byte_60B7
		BMI		loc_1299FD
		INX
		INX
loc_1299FD:
		TXA
		STA		word_4
		LDX		#0
loc_129A02:
		LDA		#$B6
		JSR		_get_syscall0_data_byte_X
		INX
		CMP		byte_8B
		BEQ		loc_129A1B
		LDA		#$B6
		JSR		_get_syscall0_data_byte_X
		INX
		CLC
		ADC		word_4
		STA		word_4
		CPX		#$80
		BCC		loc_129A02
loc_129A1B:
		LDA		word_4
		STA		byte_60A8
loc_129A20:
		LDA		byte_60A8
		PHA
		LSR
		LSR
		LSR
		TAX
		PLA
		AND		#7
		TAY
		STA		word_4
		LDA		byte_608E,X
loc_129A31:
		ASL
		DEY
		BPL		loc_129A31
		LDY		word_4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A38:
		SEC
		LDA		#0
loc_129A3B:
		ROR
		DEY
		BPL		loc_129A3B
		ORA		byte_608E,X
		STA		byte_608E,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A46:
		CLC
		LDA		#$FF
loc_129A49:
		ROR
		DEY
		BPL		loc_129A49
		AND		byte_608E,X
		STA		byte_608E,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A54:
		CMP		byte_129B93-3,X
		BEQ		loc_129A60
		DEX
		DEX
		DEX
		BPL		sub_129A54
		CLC
		RTS
loc_129A60:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A62:
		LDX		#$51
		JSR		sub_129A54
		BCC		loc_129A60

; =============== S U B	R O U T	I N E =======================================
sub_129A69:
		STA		byte_CE
		LDY		off_129B91,X
		STY		word_B7
		LDY		off_129B91+1,X
		STY		word_B7+1
		BRK
		.BYTE $28, $17		; ofs 0x0014002e, -> dst _bD_s17
		BCC		loc_129A60
		BRK
		.BYTE $2C, $17		; ofs 0x0000809a, -> dst _b0_s4D
		BCS		loc_129A60
		JMP		(word_B7)

; =============== S U B	R O U T	I N E =======================================
sub_129A82:
		LDA		byte_60B6
		AND		#8
		BNE		loc_129A60

; =============== S U B	R O U T	I N E =======================================
sub_129A89:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A8B:
		LDA		byte_60B8
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A90:
		LDA		byte_60CD
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129A97:
		LDA		#$6E
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129A9B:
		LDA		byte_60B6
		LSR
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129AA0:
		LDA		#$5A
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AA4:
		LDA		#$59
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AA8:
		LDA		#$5C
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AAC:
		LDA		byte_60B7
		LSR
		LSR
		LSR
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129AB3:
		LDA		byte_60B6
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129ABA:
		LDA		byte_60B9
		AND		#$20
		BNE		loc_129A60
		LDA		#$1C
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AC5:
		LDA		byte_60B6
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129ACB:
		LDA		byte_60BA
		ASL
		ASL
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129AD2:
		LDA		#$76
		BNE		sub_129A62

; =============== S U B	R O U T	I N E =======================================
sub_129AD6:
		LDA		byte_60B6
		ASL
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_129ADB:
		LDA		_pak_data_ptr
		AND		#$7F
		SEC
		SBC		#$76
		TAY
		LDA		byte_60CF
loc_129AE6:
		LSR
		DEY
		BNE		loc_129AE6
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s1E:
		JSR		sub_129600
		CMP		#3
		BNE		loc_129B23
		JSR		sub_1299B6
		JSR		_bC_s1F
		LDY		#$3A
		BCC		loc_129AFE
		BNE		loc_129B1D
loc_129AFE:
		TXA
		ASL
		ASL
		ASL
		ADC		word_4
		TAX
		LDA		#$B7
		JSR		_get_syscall0_data_byte_X
		TAX
		LDA		byte_8B
		CMP		#$D3
		BEQ		loc_129B1B
		INX
		BEQ		loc_129B1D
		INX
		BEQ		loc_129B1A
		INX
		BNE		loc_129B1C
loc_129B1A:
		DEY
loc_129B1B:
		DEY
loc_129B1C:
		DEY
loc_129B1D:
		TYA
		JSR		sub_176C70
		SEC
		RTS
loc_129B23:
		CLC
		RTS
byte_129B25:
		.BYTE $8A,  5,	3,  0,$3B,$16, $C,  1,$3B,$17, $C,  1,$D3, $B,	5,  2
		.BYTE $D3, $C,	5,  2,$D3,  6,	9,  3,$D3,  5, $C,  3,$D3,  5, $F,  3
		.BYTE $D3,  6,$12,  3,$D3,$11,	9,  3,$D3,$12, $C,  3,$D3,$12, $F,  3
		.BYTE $D3,$11,$12,  3,$CF,$16, $C,  4
byte_129B5D:
		.BYTE	6,$1C,$86,$89
		.BYTE	8,$19,$85, $E
		.BYTE $D0,$10,$9B, $E
		.BYTE $18,$1A,$8B,  9
		.BYTE $75,  4,$42,$79
		.BYTE $1D, $E,$50,$11
		.BYTE $1A, $B,$4C,$70
		.BYTE $19, $F,$50,$1B
		.BYTE $12,$17,$63,$5E
		.BYTE $85,  4,$45,$64
		.BYTE $13,$12,$4D,$63
		.BYTE $57,  6,$45,$4E
		.BYTE $7B,$4C,$E9,$1C
off_129B91:
		.WORD sub_129A89
byte_129B93:
		.BYTE $10
		.WORD sub_129AD2
		.BYTE $11
		.WORD sub_129A82
		.BYTE $47
		.WORD sub_129AD2
		.BYTE $4F
		.WORD sub_129A8B
		.BYTE $51
		.WORD sub_129A90
		.BYTE $52
		.WORD sub_129A89
		.BYTE $54
		.WORD sub_129A97
		.BYTE $57
		.WORD sub_129A9B
		.BYTE $58
		.WORD sub_129AA4
		.BYTE $59
		.WORD sub_129AA0
		.BYTE $5A
		.WORD sub_129A89
		.BYTE $5B
		.WORD sub_129AA8
		.BYTE $5C
		.WORD sub_129AAC
		.BYTE $5D
		.WORD sub_129AB3
		.BYTE $5E
		.WORD sub_129ABA
		.BYTE $6B
		.WORD sub_129AC5
		.BYTE $6E
		.WORD sub_129A89
		.BYTE $70
		.WORD sub_129ACB
		.BYTE $72
		.WORD sub_129A89
		.BYTE $75
		.WORD sub_129AD2
		.BYTE $76
		.WORD sub_129AD6
		.BYTE $77
		.WORD sub_129ADB
		.BYTE $78
		.WORD sub_129ADB
		.BYTE $79
		.WORD sub_129ADB
		.BYTE $7A
		.WORD sub_129ADB
		.BYTE $7B
		.WORD sub_129ADB
		.BYTE $7C
		.WORD sub_129ADB

; =============== S U B	R O U T	I N E =======================================
_bC_s22:
		LDA		byte_2C
		EOR		#1
		CLC
		ADC		#$5D
		JSR		sub_176C70
		LDA		byte_2F
		LSR
		BCS		loc_129C0E
		LDA		byte_2A
		CMP		#$A1
		BCC		loc_129C0E
		CMP		#$A4
		BCS		loc_129C0E
		LDA		byte_2B
		CMP		#$38
		BCC		loc_129C0E
		CMP		#$3D
		BCS		loc_129C0E
		LDA		byte_60B6
		AND		#4
		BEQ		loc_129C16
loc_129C0E:
		JSR		sub_176C3C
		BRK
		.BYTE 1, $77		; _msg_m00_arg1
		CLC
		RTS
loc_129C16:
		JSR		sub_176C3C
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		LDA		_ram_pal_buf+$D
		PHA
		LDA		_ram_pal_buf+$E
		PHA
		LDA		_ram_pal_buf+$F
		PHA
		LDA		byte_60B6
		ORA		#4
		STA		byte_60B6
		JSR		sub_129E5D
		BRK
		.BYTE $24, $2F		; _syscall12
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
		BRK
		.BYTE $25, $2F		; _syscall12
		JSR		sub_129EBC
		JSR		sub_129EEB
loc_129C72:
		JSR		sub_129E9B
		JSR		sub_129F24
		LDY		#0
		JSR		sub_129EA1
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		PLA
		STA		_ram_pal_buf+$F
		PLA
		STA		_ram_pal_buf+$E
		PLA
		STA		_ram_pal_buf+$D
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
loc_129C8F:
		JSR		sub_17435B
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
		JMP		_vblank

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
		.BYTE	0,$F8,	8,$F8,$F8,  0,$10,  0,$F0,  8,$F8,  8,$10,  8,$18,  8
		.BYTE $E8,$10,$20,$10,$E8,$18,$20,$18,$F0,$20,$F8,$20,	0,$20,	8,$20
		.BYTE $10,$20,$18,$20

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
		.BYTE $30,$34,$38,$3C,$40,$44,$48,$4C,$50,$54,$58,$5C

; =============== S U B	R O U T	I N E =======================================
sub_129D63:
		LDA		#$AA
		SEC
		SBC		byte_2A
		STA		word_4+1
		LDA		#$40
		SEC
		SBC		byte_2B
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
		SBC		byte_2A
		ASL
		STA		word_4
		LDA		#$40
		SEC
		SBC		byte_2B
		ASL
		STA		word_4+1
		INC		word_4
		INC		word_4
		LDA		word_3C
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4
		DEC		word_4
		INC		word_4+1
		INC		word_4+1
		LDA		word_3C+1
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		LDA		word_3E
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		LDA		word_3E+1
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		JSR		sub_1742BA
		LDX		#$20
		JMP		sub_12A1F1
byte_129E55:
		.BYTE	6,  6,$15,  6,$17,$17,$17,$17 

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
		JSR		sub_17415B
		INC		_tmp21+2
		LDX		#$28
		JSR		sub_12A1ED
		LDA		#2
		JSR		sub_17415B
		INC		_tmp21+2
		LDX		#$28
		JSR		sub_12A1ED
		LDA		#3
		JSR		sub_17415B
		INC		_tmp21+2
		LDX		#$20
		JSR		sub_12A1ED
		LDA		#4
		JSR		sub_17415B
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
		JMP		sub_1742BA

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
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
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
		LDA		byte_60B6
		AND		#$FB
		STA		byte_60B6
		LDA		_ram_pal_buf+$D
		PHA
		LDA		_ram_pal_buf+$E
		PHA
		LDA		_ram_pal_buf+$F
		PHA
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_129E5D
		BRK
		.BYTE $24, $2F		; _syscall12
		JSR		sub_129C94
		JSR		sub_129F07
		LDY		#$10
		JSR		sub_129EA1
		JSR		sub_129CAD
		JSR		sub_129D3A
		JSR		sub_129CA1
		LDX		#4
		JSR		sub_129E07
		BRK
		.BYTE $25, $2F		; _syscall12
		JSR		sub_129EBC
		JMP		loc_129C72

; =============== S U B	R O U T	I N E =======================================
_bC_s13:
		LDA		byte_2F
		LSR
		BCC		loc_129F9D
		LDA		byte_8B
		CMP		#$A0
		BNE		loc_129F9D
		LDA		byte_31
		CMP		#$D
		BNE		loc_129F9D
		LDA		byte_30
		CMP		#8
		BEQ		loc_129FA2
		CMP		#9
		BEQ		loc_129FA2
loc_129F9D:
		BRK
		.BYTE $18, $77		; _msg_m00_arg1
		CLC
		RTS
loc_129FA2:
		BRK
		.BYTE $17, $77		; _msg_m00_arg1
		JSR		sub_176C3C
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		JSR		sub_129FC3
		BRK
		.BYTE $97, $2F		; _syscall12
		BRK
		.BYTE $EA, 7		; ofs 0x00038010, -> dst _b2_s8_screen_hit_blink
		JSR		sub_129FE2
		LDA		byte_60B6
		ORA		#2
		STA		byte_60B6
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
		JSR		sub_17415B
		INC		_tmp21+2
		LDA		#6
		JSR		sub_17415B
		INC		_tmp21+2
		LDA		#7
		JMP		sub_17415B

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
		SBC		byte_30
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
		LDX		byte_30
		LDY		byte_31
		JSR		sub_176F34
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
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		PLA
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		PLA
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4
		INC		word_4
		LDA		#2
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		INC		word_4+1
		INC		word_4+1
		LDA		#6
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4
		DEC		word_4
		PLA
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4
		DEC		word_4
		PLA
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		DEC		word_4
		DEC		word_4
		LDA		#5
		BRK
		.BYTE $9D, 7		; ofs 0x00128014, -> dst _bC_sA
		LDX		#8
		LDY		#$E
		PLA
		JSR		sub_177CC8
		LDX		#9
		LDY		#$E
		PLA
		JSR		sub_177CC8
		LDX		#8
		LDY		#$F
		PLA
		JSR		sub_177CC8
		LDX		#9
		LDY		#$F
		PLA
		JSR		sub_177CC8
		LDX		#7
		LDY		#$E
		LDA		#1
		JSR		sub_177CC8
		LDX		#7
		LDY		#$F
		LDA		#5
		JSR		sub_177CC8
		LDX		#$A
		LDY		#$E
		LDA		#2
		JSR		sub_177CC8
		LDX		#$A
		LDY		#$F
		LDA		#6
		JSR		sub_177CC8
		JSR		sub_1742BA
		JMP		_vblank
byte_12A1DA:
		.BYTE $CC
byte_12A1DB:
		.BYTE $D0
byte_12A1DC:
		.BYTE $D4
byte_12A1DD:
		.BYTE $D8
byte_12A1DE:
		.BYTE $DC
byte_12A1DF:
		.BYTE	7,$10,	7, $F,	6,$10,	8,$11,	7,$12 

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
		JSR		_vblank
		JSR		sub_12A93B
		JSR		_vblank
		JSR		sub_12A93B
		JSR		_vblank
		JSR		sub_12A93B
		JSR		_vblank
		PLA
		TAX
		DEX
		BNE		loc_12A1F6
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_sC:
		LDA		byte_2F
		BEQ		loc_12A239
		LDA		byte_60CE
		LDX		#6
loc_12A221:
		LDY		byte_12A261-1,X
		CPY		byte_8B
		BEQ		loc_12A247
		LSR
		DEX
		BNE		loc_12A221
		LDY		#$18
		CPY		byte_8B
		BNE		loc_12A239
		LDA		byte_60CE
		AND		#2
		BEQ		loc_12A259
loc_12A239:
		BRK
		.BYTE $1E, $2F		; _syscall12
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		BRK
		.BYTE $D, $77		; _msg_m00_arg1
		JSR		__pause_or_skip
		SEC
		RTS
loc_12A247:
		LSR
		BCS		loc_12A239
		CPX		#4
		BNE		loc_12A259
		LDY		byte_60CD
		INY
		BNE		loc_12A239
		LDA		byte_60B7
		BMI		loc_12A239
loc_12A259:
		BRK
		.BYTE $1D, $2F		; _syscall12
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		SEC
		RTS
byte_12A261:
		.BYTE $15,$BD,$17,$75,$8B,$20 

; =============== S U B	R O U T	I N E =======================================
_bC_s26:
		LDA		byte_8B
		CMP		#$25
		BNE		loc_12A281
		LDX		#$C
loc_12A26F:
		LDA		byte_12A2CB-1,X
		DEX
		CMP		byte_31
		BNE		loc_12A27E
		LDA		byte_12A2CB-1,X
		CMP		byte_30
		BEQ		loc_12A283
loc_12A27E:
		DEX
		BNE		loc_12A26F
loc_12A281:
		CLC
		RTS
loc_12A283:
		STX		word_6
		SEC
		LDA		#0
loc_12A288:
		ROL
		DEX
		DEX
		BPL		loc_12A288
		STA		word_4
		AND		byte_60D0
		BNE		loc_12A281
		LDA		byte_48
		SEC
		SBC		#$76
		TAX
		SEC
		LDA		#0
loc_12A29D:
		ROL
		DEX
		BNE		loc_12A29D
		STA		word_4+1
		AND		byte_60CF
		BNE		loc_12A281
		LDA		byte_60CF
		ORA		word_4+1
		STA		byte_60CF
		LDA		byte_60D0
		ORA		word_4
		STA		byte_60D0
		LDA		word_6
		PHA
		JSR		sub_176C3C
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		JSR		sub_176C3C
		PLA
		LSR
		BRK
		.BYTE $94, $17		; ofs 0x00098034, -> dst _b6_s1A
		SEC
		RTS
byte_12A2CB:
		.BYTE	7,  4,	3,  6, $B,  6,	3, $A, $B, $A,	7, $C

; =============== S U B	R O U T	I N E =======================================
_bC_s2B:
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#0
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		BRK
		.BYTE $3B, $17		; ofs 0x00128074, -> dst _bC_s3A
		BRK
		.BYTE $44, $17		; ofs 0x00140044, -> dst _bD_s22
		JSR		sub_174CCF
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		BRK
		.BYTE $B0, $77		; _msg_m00_arg1
		LDA		#$47
		BRK
		.BYTE $A3, 7		; ofs 0x0014004e, -> dst _bD_s27
		BCC		loc_12A2FE
		BRK
		.BYTE $B1, $77		; _msg_m00_arg1
		LDA		#0
		BEQ		loc_12A308
loc_12A2FE:
		LDA		byte_60BA
		AND		#$DF
		STA		byte_60BA
		LDA		#1
loc_12A308:
		PHA
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		PLA
		BRK
		.BYTE $41, $17		; ofs 0x00128076, -> dst _bC_s3B
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A312:
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		LDA		byte_2C
		BNE		loc_12A326
		LDX		#$CA
		STX		word_3C
		DEX
		STX		word_3C+1
		BRK
		.BYTE $9F, $2F		; _syscall12
		JSR		_bC_s17
loc_12A326:
		LDA		#$3E
		BRK
		.BYTE $20, 7		; ofs 0x00158018, -> dst _bE_sC
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
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		JSR		__pause_or_skip
		JMP		_bC_s20

; =============== S U B	R O U T	I N E =======================================
sub_12A34B:
		LDA		#$38
		STA		word_6C
		LDA		#1
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
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
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
		LDA		#0
		STA		word_6C
		LDA		#1
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
		LDA		byte_7C1,X
		BMI		sub_12A3DC
loc_12A3B4:
		LDY		#0
		LDA		(word_6C),Y
		SEC
		SBC		byte_100
		CLC
		ADC		#8
		STA		word_4
		INY
		LDA		(word_6C),Y
		SEC
		SBC		byte_101
		CLC
		ADC		#7
		STA		word_4+1
		BRK
		.BYTE 9, 7		; ofs 0x00158012, -> dst _bE_s9
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s38:
		LDA		#1
		STA		word_6C+1
		LDY		#3
		LDA		(word_6C),Y
		JMP		_bC_s9

; =============== S U B	R O U T	I N E =======================================
sub_12A3DC:
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s17:
		LDX		#1
loc_12A3E0:
		TXA
		PHA
		LDY		word_3C
		JSR		_syscall00_safe
		LDX		#4
		JSR		_vblank_count
		LDY		word_3C+1
		JSR		_syscall00_safe
		PLA
		PHA
		TAX
		JSR		_vblank_count
		PLA
		TAX
		INX
		CPX		#9
		BNE		loc_12A3E0
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s39:
		LDA		#$38
		STA		word_6C
		LDX		#2
		JSR		_bC_sB
		LDA		#$80
		STA		byte_138
locret_12A40D:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s3B:
		PHA
		LDA		#$10
		STA		word_6C
		LDX		#2
		JSR		_bC_sB
		LDA		#$80
		STA		byte_111
		PLA
		BEQ		locret_12A40D
		LDA		#3
		STA		byte_7673
		LDA		#7
		STA		byte_7697
		LDA		#$E2
		STA		word_3C
		LDA		#$FE
		STA		word_3C+1
		JMP		_bC_s17

; =============== S U B	R O U T	I N E =======================================
_bC_s3A:
		LDA		#$FE
		STA		word_3C
		LDA		#$E2
		STA		word_3C+1
		JSR		_bC_s17
		LDA		#$13
		STA		byte_7673
		STA		byte_7697
		LDA		#$F
		STA		byte_110
		LDA		#$12
		STA		byte_111
		LDA		#$92
		STA		byte_113
		LDA		#$10
		STA		word_6C
		ASL
		ORA		byte_60BA
		STA		byte_60BA
		LDX		#0

; =============== S U B	R O U T	I N E =======================================
_bC_sB:
		LDA		#1
		STA		word_6C+1
		LDA		byte_12A47B,X
		STA		word_3C
		LDA		byte_12A47B+1,X
		STA		word_3C+1
		JSR		sub_12A3A6
		BCS		locret_12A47A
		JSR		_bC_s17
locret_12A47A:
		RTS
byte_12A47B:
		.BYTE $FA,$FD,$FD,$FA

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
		SBC		byte_30
		ASL
		STA		word_4
		LDA		#$10
		CLC
		ADC		word_4
		STA		word_4
		LDA		#$11
		SEC
		SBC		byte_31
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
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
sub_12A4B6:
		LDA		byte_31
		AND		#$FE
		STA		word_3C+1
		LDY		#0
loc_12A4BE:
		LDA		byte_12A4F8,Y
		CMP		byte_30
		BNE		loc_12A4D4
		LDA		byte_12A4F8+1,Y
		CMP		word_3C+1
		BNE		loc_12A4D4
		LDA		byte_12A4F8+2,Y
		CMP		byte_644
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
		JSR		sub_174CCF
		PLA
		LDX		#1
		BRK
		.BYTE 4, 7		; ofs 0x00158008, -> dst _bE_s4_msg_m00
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS
byte_12A4F8:
		.BYTE $23,  2,	3
		.BYTE  $E,  8,	1
		.BYTE	8, $E,	1
		.BYTE  $A, $E,	1
		.BYTE  $D,$14,	3
		.BYTE $1F,$14,	3
		.BYTE $12,  2,	3
		.BYTE	4, $E,	1
		.BYTE  $C, $E,	1
		.BYTE  $E, $E,	1
		.BYTE	7,$14,	3
		.BYTE $14,$14,	3
		.BYTE $14, $E,	3

; =============== S U B	R O U T	I N E =======================================
_bC_s33:
		JSR		sub_177668
		LDA		byte_6BB
		ORA		byte_12F
		AND		#$FC
		STA		byte_12F
		BRK
		.BYTE $9E, $2F		; _syscall12
		JSR		sub_12A55D
		JSR		sub_12A58F
		JSR		sub_12A59F
		BRK
		.BYTE $A0, $2F		; _syscall12
		JSR		sub_12A5CA
		JSR		sub_12A5DB
		LDA		#$B
		JSR		_bC_s0
		LDA		#$80
		STA		byte_118
		LDA		#$35
		STA		byte_9E
		LDA		#$F4
		STA		byte_9F
		LDA		byte_60B9
		ORA		#$40
		STA		byte_60B9
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
		JMP		_vblank_count

; =============== S U B	R O U T	I N E =======================================
sub_12A58F:
		LDA		#7
		STA		byte_12C
		STA		byte_12D
		LDA		#$2C
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
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
		JSR		_vblank
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
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
sub_12A5CA:
		JSR		loc_12A5CD
loc_12A5CD:
		LDX		#$1E
		JSR		_vblank_count
		INC		byte_12F

; =============== S U B	R O U T	I N E =======================================
sub_12A5D5:
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JMP		_vblank

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
		LDA		byte_11B
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
		LDA		byte_11B
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
_bC_s19:
		BIT		byte_60B7
		BVS		loc_12A686
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369
		BRK
		.BYTE 1, $2F		; _syscall12
		BRK
		.BYTE $7B, $17		; ofs 0x000080ac, -> dst _b0_s56
		LDA		byte_60B7
		ORA		#$40
		STA		byte_60B7
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		JSR		sub_177CFC
		JSR		_vblank_and_render_off_flag10_set
		LDA		#$F
		LDY		#0
		JSR		sub_1762A8
		LDA		#2
		STA		byte_644
		STA		byte_103
		LDA		#$12
		STA		byte_30
		STA		byte_100
		LDA		#3
		STA		byte_31
		STA		byte_101
		JSR		sub_12A6F1
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		LDA		#0
		STA		byte_8E
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		BRK
		.BYTE 3, $2F		; _syscall12
		JMP		sub_175B0E
loc_12A686:
		JSR		sub_174369
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		LDA		byte_60B7
		AND		#$BF
		STA		byte_60B7
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		LDA		#$12
		STA		byte_30
		LDA		#4
		STA		byte_31
		LDA		#$4A
		STA		byte_8B
		LDA		#0
		STA		byte_644
		STA		byte_6BC
		JMP		loc_1752EB

; =============== S U B	R O U T	I N E =======================================
_bC_s28:
		LDA		byte_60BA
		ORA		#1
		STA		byte_60BA
		JSR		sub_12A6C8
		LDY		#$19
		LDA		byte_6DF
		CMP		#$78
		BCC		loc_12A6C4
		LDY		#$39
loc_12A6C4:
		TYA
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12A6C8:
		BRK
		.BYTE $45, $17		; ofs 0x0000809c, -> dst _b0_s4E
		JSR		sub_12A6FD
		LDY		#4
loc_12A6D0:
		LDA		byte_100,Y
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
		STA		byte_100,Y
loc_12A6E7:
		PLA
loc_12A6E8:
		STA		byte_100,X
		INX
		INY
		CPY		#$10
		BNE		loc_12A6D0

; =============== S U B	R O U T	I N E =======================================
sub_12A6F1:
		LDA		#$80
		STA		byte_104
		STA		byte_108
		STA		byte_10C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A6FD:
		LDX		#$10
loc_12A6FF:
		LDA		byte_102,X
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
		STA		byte_644
		STA		byte_6BC
		LDA		#$E
		STA		byte_30
		LDA		#$C
		STA		byte_31
		LDA		#1
		STA		byte_2F
		LDA		#$F
		STA		byte_8B
		LDA		#$6C
		STA		byte_2A
		LDA		#$D6
		STA		byte_2B
		LDX		#$FF
		TXS
		JMP		loc_174BBB

; =============== S U B	R O U T	I N E =======================================
_bC_s30:
		LDA		byte_60B7
		ORA		#$80
		STA		byte_60B7
		LDA		#$1B
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
_bC_s21:
		BRK
		.BYTE $BF, 7		; ofs 0x00158044, -> dst _bE_s22

; =============== S U B	R O U T	I N E =======================================
sub_12A743:
		BRK
		.BYTE $22, $2F		; _syscall12
		LDA		byte_AC
		AND		#$E0
		STA		byte_AC
		JSR		_bC_s1A
		JSR		_vblank
		JSR		sub_12A89C
		JSR		sub_12A8C5
		JSR		sub_12A8AE
		JSR		sub_12A78C
		JSR		sub_12A795
		JSR		sub_12A79E
		JSR		sub_12A7A7
		JSR		_bC_s1A
		JSR		_vblank
		JSR		sub_12A91B
		JSR		sub_12AA18
		JSR		sub_12A9DC
		JSR		sub_12A9D3
		JSR		sub_12A9CA
		JSR		sub_12A9C1
		JSR		_bC_s5
		BRK
		.BYTE $21, $2F		; _syscall12
		JSR		sub_12AA57
		BRK
		.BYTE 7, $2F		; _syscall12
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A78C:
		LDA		byte_73C
		BPL		locret_12A7C0
		LDA		#0
		BEQ		sub_12A7AE

; =============== S U B	R O U T	I N E =======================================
sub_12A795:
		LDA		byte_73E
		BPL		locret_12A7C0
		LDA		#1
		BNE		sub_12A7AE

; =============== S U B	R O U T	I N E =======================================
sub_12A79E:
		LDA		byte_740
		BPL		locret_12A7C0
		LDA		#2
		BNE		sub_12A7AE

; =============== S U B	R O U T	I N E =======================================
sub_12A7A7:
		LDA		byte_742
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
		JSR		_vblank
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
		JSR		sub_1743B8
		LDX		word_40
		STA.WX		byte_3B,X
		DEX
		BNE		loc_12A89E
		STX		word_40
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A8AE:
		LDA		#$10
		STA		byte_87
		LDA		#0
		STA		byte_85
loc_12A8B6:
		JSR		sub_175B03
		JSR		sub_12A92A
		LDA		byte_87
		BNE		loc_12A8B6
		LDA		#$FF
		STA		byte_86
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A8C5:
		LDA		byte_644
		EOR		#2
		STA		byte_644
		LDA		#$80
		STA		word_40+1
		LDA		#$6F
		STA		byte_42
		LDA		byte_644
		AND		#1
		BEQ		loc_12A8EE
		JSR		sub_12A900
		ADC		word_40+1
		STA		word_40+1
		JSR		sub_12A90F
		ADC		byte_30
		STA		byte_30
		STA		byte_100
		RTS
loc_12A8EE:
		JSR		sub_12A900
		ADC		byte_42
		STA		byte_42
		JSR		sub_12A90F
		ADC		byte_31
		STA		byte_31
		STA		byte_101
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A900:
		LDX		#$10
		ASL
		EOR		byte_644
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
		JSR		_vblank
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
		LDA		byte_6D0,Y
		PHA
		CLC
		ADC		byte_12A967,X
		STA		byte_6D0,Y
		JSR		sub_12A99F
		PLA
		CPY		#0
		BEQ		loc_12A956
loc_12A954:
		INX
		RTS
loc_12A956:
		EOR		byte_6D0,Y
		AND		#$80
		BEQ		loc_12A954
		LDA		byte_6D3
		EOR		#1
		STA		byte_6D3
		INX
		RTS
byte_12A967:
		.BYTE	3,  3,	0,$FE,$FD,  2,	0,$FD 
		.BYTE	2,  2,	0,$FF,$FE,  2,	0,$FD
		.BYTE	2,  2,	0,$FF,$FE,  1,	0,$FE
		.BYTE	2,  2,	0,$FF,$FE,  1,	0,$FE
		.BYTE	1,  1,	0,  0,$FF,  0,	0,$FF
		.BYTE	1,  0,$FF,  0,	0,  0,	0,  0
		.BYTE	4,  4,	0,$FD,$FC,  3,	0,$FC

; =============== S U B	R O U T	I N E =======================================
sub_12A99F:
		TYA
		PHA
		JSR		sub_12A9A7
		PLA
		TAY
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12A9A7:
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
		LDA		byte_73C
		BPL		locret_12A9C0
		LDA		#0
		BEQ		loc_12A9E3

; =============== S U B	R O U T	I N E =======================================
sub_12A9CA:
		LDA		byte_73E
		BPL		locret_12A9C0
		LDA		#4
		BNE		loc_12A9E3

; =============== S U B	R O U T	I N E =======================================
sub_12A9D3:
		LDA		byte_740
		BPL		locret_12A9C0
		LDA		#8
		BNE		loc_12A9E3

; =============== S U B	R O U T	I N E =======================================
sub_12A9DC:
		LDA		byte_742
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
		JSR		_vblank
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
		LDA		#0
		STA		word_6C
		LDA		#1
		STA		word_6C+1
		LDA		#2
		STA		byte_644
		JSR		sub_12AA2E
		JSR		sub_12AA2E
		JSR		sub_12AA2E

; =============== S U B	R O U T	I N E =======================================
sub_12AA2E:
		LDA		word_6C
		LSR
		TAX
		LDA		byte_73C,X
		BPL		loc_12AA4F
		LDA		byte_30
		STA		byte_80
		LDA		byte_31
		SEC
		SBC		#8
		STA		byte_81
		LDY		#3
		LDA		(word_6C),Y
		AND		#$FC
		ORA		#2
		STA		(word_6C),Y
		BRK
		.BYTE $34, $17		; ofs 0x00140034, -> dst _bD_s1A
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
_bC_s24:
		LDA		byte_2A
		CMP		#$4A
		BNE		loc_12AA8C
		LDA		byte_2B
		CMP		#$90
		BEQ		loc_12AA8E
loc_12AA8C:
		CLC
		RTS
loc_12AA8E:
		LDA		#0
		STA		byte_8E
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
		JSR		sub_12AE73
		JSR		sub_12AB1E
		JSR		sub_12AAD4
		BRK
		.BYTE $22, $2F		; _syscall12
		JSR		sub_12AB31
		JSR		sub_12AB90
		JSR		sub_12AC5C
		JSR		sub_12ADB1
		JSR		sub_12AD96
		BRK
		.BYTE $23, $2F		; _syscall12
		JSR		sub_12AC79
		JSR		sub_12ADD7
		JSR		sub_12AC69
		LDX		#$2D
		JSR		_vblank_count
		JSR		sub_12AE80
		JSR		sub_12AF78
		BRK
		.BYTE 4, $2F		; _syscall12
		LDA		byte_60B6
		ORA		#8
		STA		byte_60B6
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AAD4:
		LDX		#$28
		STX		word_3C
		BRK
		.BYTE $20, $2F		; _syscall12
		JSR		sub_12AAEA
		JSR		sub_12AAEA
		BRK
		.BYTE $21, $2F		; _syscall12
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
		JSR		_vblank
		TXA
		AND		#7
		BNE		loc_12AB4B
		LDA		byte_6D4
		EOR		#1
		STA		byte_6D4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12AB5F:
		LDA		#0
		STA		word_3C
loc_12AB63:
		JSR		sub_1743B8
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
sub_12AB90:
		LDA		#0
		STA		word_3E+1
loc_12AB94:
		BRK
		.BYTE $98, $2F		; _syscall12
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
		JMP		_vblank

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
		JSR		_vblank
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
		JMP		sub_1742B0

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
		JSR		_vblank
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
		JSR		sub_1742BA
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
		.BYTE $7F,$F4,	1,$80,$7F,$F5,	1,$88,$87,$F5,$81,$80,$87,$F4,$81,$88
byte_12ADF4:
		.BYTE	3,  3,	2,  3,	2,  3,	2,  2 
byte_12ADFC:
		.BYTE	1,  0,	1,  0,	1,  0,	1,  0,	1,  2,	3,  2,	3,  2,	0,  4
		.BYTE	5
word_12AE0D:
		.WORD  $1F1,$41F0, $1F0,$41F1, $1F4, $1F5,$81F5,$81F4
		.WORD  $1F3, $1F5, $1F0, $1F2,$C1F2,$C1F0,$C1F5,$C1F3
		.WORD  $1FA, $1FB, $1F6, $1F7, $1FC, $1FD, $1F8, $1F9

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
		JMP		sub_17415B

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
		LDX		byte_6D8
loc_12AEB6:
		LDA		word_3E+1
		STA		byte_300,X
		INX
		LDA		word_3C+1
		TAY
		CLC
		ADC		word_3E
		STA		byte_300,X
		INX
		LDA		byte_7800,Y
		STA		byte_300,X
		INX
		TYA
		CLC
		ADC		#8
		TAY
		STY		word_3C+1
		CPY		word_40
		BCC		loc_12AEB6
		STX		byte_6D8
		LDA		word_40
		LSR
		LSR
		LSR
		CLC
		ADC		byte_6D9
		STA		byte_6D9
		JSR		sub_1742BA
		LDX		word_40+1
		JSR		_vblank_count
		INC		word_3C
		LDA		word_3C
		CMP		#$40
		BNE		loc_12AE97
		RTS
word_12AEF8:
		.WORD $7F01,$7F06,$BF03,$7F00,$FE05,$FE01,$FD07,$F702
		.WORD $BF06,$7F03,$FE06,$BF04,$F707,$FD04,$F701,$7F07
		.WORD $7F02,$FB07,$F700,$7F05,$FB04,$FD01,$FB02,$F706
		.WORD $FB05,$FB06,$DF03,$FE04,$BF01,$FD02,$FE00,$EF02
		.WORD $FE03,$7F04,$EF01,$BF05,$F704,$FE07,$EF00,$EF06
		.WORD $F705,$DF01,$FE02,$BF07,$BF02,$FD06,$FD05,$F703
		.WORD $FD03,$FB03,$FD00,$DF04,$EF05,$FB00,$FB01,$DF00
		.WORD $DF02,$DF07,$DF06,$EF03,$EF07,$EF04,$DF05,$BF00

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
		JMP		_vblank

; =============== S U B	R O U T	I N E =======================================
_bC_s14:
		LDA		byte_6E1
		BNE		loc_12AFA9
		JSR		sub_12B041
		JSR		sub_12B080
		JSR		sub_12B0B0
		JSR		sub_12B01C
		JSR		sub_12B0FA
loc_12AFA9:
		LDA		byte_9A
		BNE		loc_12AFB3
		JSR		_bC_s29
		JMP		locret_12AFC6
loc_12AFB3:
		LDX		#0
		LDA		byte_8B
loc_12AFB7:
		CMP		byte_12AFC7,X
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
		.BYTE $BD,$D2,$61,$4F,	2,  1,$75, $F, $C,$7A,$CB,  8,$B2,$A3,$CC,$C3
		.BYTE $41,$47,$EB,$EC,$EE,$BB,$6B

; =============== S U B	R O U T	I N E =======================================
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
		.WORD sub_12A4B6
		.WORD sub_12B189
		.WORD sub_12B200
		.WORD sub_12B241
		.WORD sub_12B263
		.WORD sub_12B29D
		.WORD sub_12B2BD
		.WORD sub_12B2EB
		.WORD sub_12B3D1
		.WORD sub_12B493
		.WORD sub_12B518
		.WORD sub_12B5AD
		.WORD sub_12B6AF
		.WORD sub_12B7C8
		.WORD sub_12B7E1
		.WORD sub_12B97E
		.WORD sub_12B999
		.WORD sub_12B99D
		.WORD sub_12908F
		.WORD sub_1290E1
		.WORD sub_129120
		.WORD sub_129162
		.WORD sub_12B9A1

; =============== S U B	R O U T	I N E =======================================
sub_12B01C:
		LDA		byte_2C
		BNE		locret_12B040
		LDA		byte_60C9
		AND		#$3F
		BEQ		locret_12B040
		DEC		byte_60C9
		LDA		byte_60C9
		AND		#$3F
		BNE		locret_12B040
		JSR		_vblank
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		JSR		sub_174CCF
		BRK
		.BYTE $AF, $77		; _msg_m00_arg1
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
locret_12B040:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B041:
		LDA		byte_2C
		BNE		locret_12B040
		LDA		byte_AC
		AND		#$1F
		BEQ		locret_12B040
		LDA		byte_9A
		BEQ		loc_12B070
		LDA		byte_8B
		CMP		#$61
		BNE		loc_12B070
		LDA		byte_30
		CMP		#$E
		BNE		loc_12B070
		LDA		byte_31
		CMP		#$D
		BNE		loc_12B070
		LDA		byte_6DF
		CMP		#$78
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
		JSR		_sram_b0_s31
		LDA		word_4
		STA		word_3C
		JSR		sub_12B0EB
loc_12B08A:
		JSR		sub_12B0A6
		BPL		loc_12B09D
		LDY		word_3C+1
		LDA		byte_B0,Y
		AND		#2
		BEQ		loc_12B09D
		STY		byte_CE
		JSR		_sram_bank0_sub4
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
		LDA		byte_73D,X
locret_12B0AF:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B0B0:
		LDA		byte_9A
		BNE		locret_12B0AF
		LDA		byte_2C
		BNE		locret_12B0AF
		JSR		_sram_b0_s31
		LDA		word_4
		STA		word_3C
		JSR		sub_12B0EB
		STA		word_3E+1
loc_12B0C4:
		JSR		sub_12B0A6
		BPL		loc_12B0DB
		LDY		word_3E+1
		LDA		byte_B0,Y
		AND		#4
		BEQ		loc_12B0DB
		STY		byte_CE
		JSR		_sram_bank0_sub1A
		LDA		#$FF
		STA		word_3C+1
loc_12B0DB:
		INC		word_3E+1
		LDA		word_3E+1
		CMP		word_3C
		BNE		loc_12B0C4
		LDA		word_3C+1
		BEQ		locret_12B0EA
		BRK
		.BYTE $A9, 7		; ofs 0x0000808c, -> dst _b0_s46
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
		JSR		_sram_b0_s31
		LDY		#0
loc_12B0FF:
		LDA		byte_93,Y
		AND		#$1F
		TAX
		LDA		byte_6DE0,X
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
		LDA		byte_60B6
		AND		#$40
		BNE		locret_12B163
		LDA		byte_2A
		CMP		#$56
		BNE		locret_12B163
		LDA		byte_2B
		CMP		#$48
		BNE		locret_12B163
		LDA		byte_2C
		CMP		#1
		BNE		locret_12B163
		JSR		sub_174CCF
		BRK
		.BYTE $A, $77		; _msg_m00_arg1
		BRK
		.BYTE 0, $2F		; _syscall12
		BRK
		.BYTE $C, $2F		; _syscall12
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#0
		STA		byte_6EB
		LDA		#$C
		STA		byte_6EF
		LDA		#$40
		STA		byte_6E1
		LDA		#$A8
		STA		byte_6E2
locret_12B163:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s2A:
		LDA		byte_8B
		CMP		#$2F
		BNE		locret_12B163
		LDA		byte_31
		CMP		#$11
		BNE		locret_12B163
		LDA		byte_110
		CMP		#$31
		BNE		locret_12B163
		JSR		sub_174CCF
		BRK
		.BYTE $A4, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#7
		STA		byte_6E1
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B189:
		LDA		byte_31
		CMP		#$1A
		BNE		locret_12B1A1
		JSR		sub_174CCF
		BRK
		.BYTE $41, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		sub_12B1A2

; =============== S U B	R O U T	I N E =======================================
_bC_s20:
		LDA		#0
		STA		byte_8E
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
locret_12B1A1:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B1A2:
		LDA		byte_30
		CMP		#$1A
		BEQ		loc_12B1B2
		CMP		#3
		BEQ		loc_12B1CB
loc_12B1AC:
		LDA		#8
		STA		byte_6DF3
		RTS
loc_12B1B2:
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		BRK
		.BYTE $AE, $77		; _msg_m00_arg1
		LDA		byte_60B7
		AND		#8
		BNE		loc_12B1F9
		LDA		#8
		ORA		byte_60B7
		STA		byte_60B7
		BNE		loc_12B1FC
loc_12B1CB:
		LDA		byte_60B7
		TAX
		AND		#8
		BEQ		loc_12B1AC
		TXA
		AND		#$10
		BNE		loc_12B1F9
		TXA
		ORA		#$10
		STA		byte_60B7
		BRK
		.BYTE $A3, $2F		; _syscall12
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		BRK
		.BYTE $80, $77		; _msg_m00_arg1
		LDA		#$13
		STA		byte_753A
		STA		byte_753B
		STA		byte_7558
		STA		byte_7559
		BNE		loc_12B1FC
loc_12B1F9:
		BRK
		.BYTE $40, $67		; _msg_m00_arg0
loc_12B1FC:
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B200:
		LDA		byte_30
		CMP		#$E
		BNE		locret_12B21A
		LDA		byte_31
		CMP		#$D
		BNE		locret_12B21A
		LDA		byte_60CD
		AND		#$20
		BNE		locret_12B21A
		LDA		byte_6DF
		CMP		#$78
		BCC		loc_12B21B
locret_12B21A:
		RTS
loc_12B21B:
		JSR		sub_174CCF
		LDA		byte_60B9
		AND		#1
		BEQ		loc_12B22B
		BRK
		.BYTE $70, $77		; _msg_m00_arg1
		JMP		loc_12B236
loc_12B22B:
		LDA		byte_60B9
		ORA		#1
		STA		byte_60B9
		BRK
		.BYTE $6A, $77		; _msg_m00_arg1
loc_12B236:
		BRK
		.BYTE $6B, $77		; _msg_m00_arg1
		LDA		#$C
		JSR		_bC_s0
		JMP		sub_174D4F

; =============== S U B	R O U T	I N E =======================================
sub_12B241:
		LDA		byte_30
		CMP		#$B
		BCC		locret_12B262
		LDA		byte_31
		AND		#$FE
		CMP		#$A
		BNE		locret_12B262
		LDA		byte_111
		CMP		#7
		BNE		locret_12B262
		LDA		byte_6DF
		CMP		#$78
		BCC		locret_12B262
		LDA		#$13
		JSR		_bC_s0
locret_12B262:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B263:
		LDA		byte_31
		CMP		#$25
		BNE		locret_12B262
		LDA		byte_644
		CMP		#2
		BEQ		locret_12B262
		LDA		byte_AC
		AND		#$1F
		BNE		locret_12B262
		LDX		#$14
		LDY		#$14
		LDA		byte_6DF
		CMP		#$78
		BCC		loc_12B285
		LDX		#$14
		LDY		#$35
loc_12B285:
		LDA		byte_30
		CMP		byte_100,X
		BEQ		locret_12B262
		CMP		#$D
		BEQ		loc_12B298
		CMP		#$E
		BNE		locret_12B262
		TYA
		JMP		_bC_s0
loc_12B298:
		INY
		TYA
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12B29D:
		BIT		byte_60B7
		BVC		locret_12B2BC
		LDA		byte_30
		AND		#$FE
		CMP		#$10
		BNE		locret_12B2BC
		LDA		byte_31
		CMP		#$2D
		BNE		locret_12B2BC
		LDA		byte_128
		CMP		#$F
		BNE		locret_12B2BC
		LDA		#$16
		JSR		_bC_s0
locret_12B2BC:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B2BD:
		LDA		byte_644
		CMP		#3
		BNE		locret_12B2BC
		LDA		byte_60CD
		CMP		#$FF
		BNE		loc_12B2D0
		LDA		byte_60B7
		BPL		locret_12B2BC
loc_12B2D0:
		LDA		byte_30
		CMP		#$1C
		BNE		locret_12B2BC
		LDA		byte_31
		CMP		#$18
		BNE		locret_12B2BC
		LDY		#$17
		LDA		byte_6DF
		CMP		#$78
		BCC		loc_12B2E7
		LDY		#$37
loc_12B2E7:
		TYA
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12B2EB:
		LDA		byte_30
		CMP		#$E
		BNE		locret_12B30C
		LDA		byte_31
		CMP		#3
		BNE		locret_12B30C
		LDA		byte_60BA
		AND		#2
		BNE		loc_12B30D
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		STA		byte_D2
		JSR		sub_174CCF
		BRK
		.BYTE $26, $3F		; _msg_m00_arg6
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
locret_12B30C:
		RTS
loc_12B30D:
		LDA		#0
		STA		byte_6BC
		STA		byte_644
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		LDA		byte_60BA
		AND		#$FC
		STA		byte_60BA
		LDA		#0
		JSR		sub_12B353
		JSR		sub_174CCF
		JSR		_sram_b0_s31
		LDA		word_4
		CMP		#1
		BEQ		loc_12B34C
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F
		LDA		#1
		STA		byte_D2
		LDA		word_4
		BNE		loc_12B346
		BRK
		.BYTE $29, $3F		; _msg_m00_arg6
		JMP		loc_12B349
loc_12B346:
		BRK
		.BYTE $2A, $3F		; _msg_m00_arg6
loc_12B349:
		BRK
		.BYTE $2B, $3F		; _msg_m00_arg6
loc_12B34C:
		BRK
		.BYTE $2C, $3F		; _msg_m00_arg6
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B353:
		ASL
		TAX
		LDA		off_12B3CD,X
		STA		word_6E
		LDA		off_12B3CD+1,X
		STA		word_6E+1
		LDA		#1
		STA		word_6C+1
		JSR		_sram_b0_s31
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
		JSR		_sram_b0_s31
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
		STA.WX		word_FE+1,X
		LDA		(word_6E),Y
		AND		#$7F
		STA		byte_104,Y
		DEX
		DEY
		BPL		loc_12B39F
loc_12B3AF:
		JSR		_sram_b0_s31
		LDA		word_4
		STA		byte_6ABE
		LDA		#4
		STA		word_6C
loc_12B3BB:
		DEC		byte_6ABE
		BEQ		locret_12B3CC
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		BNE		loc_12B3BB
locret_12B3CC:
		RTS
off_12B3CD:
		.WORD byte_12BA57
		.WORD byte_12BB12

; =============== S U B	R O U T	I N E =======================================
sub_12B3D1:
		LDA		byte_60B7
		BPL		locret_12B42D
		LDA		byte_30
		CMP		#7
		BNE		locret_12B42D
		LDA		byte_31
		CMP		#$12
		BNE		locret_12B42D
		LDA		byte_60BA
		AND		#$10
		BNE		loc_12B453
		LDA		byte_144
		BMI		locret_12B42D
		JSR		_sram_b0_s31
		LDA		word_4
		STA		byte_6A62
		CMP		#1
		BEQ		loc_12B443
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		LDA		#$44
		STA		word_6C
		LDA		byte_147
		AND		#3
		BNE		loc_12B41C
		LDA		byte_147
		AND		#$FC
		ORA		#1
		JSR		loc_12B448
		LDA		byte_147
		AND		#$FC
		ORA		#2
		JSR		loc_12B448
loc_12B41C:
		JSR		sub_174DF2
		BRK
		.BYTE $99, $3F		; _msg_m00_arg6
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B42E
		BRK
		.BYTE $9A, $3F		; _msg_m00_arg6
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
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
		JSR		_sram_bank0_sub1D
		JSR		_bC_s20
loc_12B443:
		LDA		#$1C
		JMP		_bC_s0
loc_12B448:
		STA		byte_147
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		LDX		#$A
		JMP		_vblank_count
loc_12B453:
		LDA		byte_6A62
		CMP		#1
		BEQ		locret_12B492
		LDA		#0
		STA		byte_6BC
		STA		byte_644
		BRK
		.BYTE $46, $17		; ofs 0x0000809e, -> dst _b0_s4F
		LDA		#1
		JSR		sub_12B353
		JSR		sub_174CCF
		LDA		#1
		STA		byte_CE
		JSR		_sram_b0_s2F
		LDA		#1
		STA		byte_D2
		STA		byte_D4
		LDA		word_4
		BEQ		loc_12B484
		BRK
		.BYTE $AA, $3F		; _msg_m00_arg6
		JMP		loc_12B487
loc_12B484:
		BRK
		.BYTE $A5, $3F		; _msg_m00_arg6
loc_12B487:
		JSR		sub_174D4F
		LDA		byte_60B7
		AND		#$7F
		STA		byte_60B7
locret_12B492:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B493:
		LDA		byte_60BA
		AND		#$10
		BNE		locret_12B492
		LDA		byte_30
		CMP		#7
		BNE		locret_12B492
		LDA		byte_114
		BMI		locret_12B492
		LDA		byte_60BA
		ORA		#$10
		STA		byte_60BA
		JSR		sub_174CCF
		BRK
		.BYTE $9D, $3F		; _msg_m00_arg6
		BRK
		.BYTE $9E, $3F		; _msg_m00_arg6
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B4BE
		BRK
		.BYTE $9F, $3F		; _msg_m00_arg6
loc_12B4BE:
		BRK
		.BYTE $A0, $3F		; _msg_m00_arg6
		BRK
		.BYTE 1, $17		; ofs 0x00128024, -> dst _bC_s12_vblank_count_50
		JSR		sub_174369
		JSR		_ppu_screen_clear
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JSR		sub_174DF2
		JSR		_pal_fade_in
		BRK
		.BYTE $A1, $3F		; _msg_m00_arg6
		JSR		sub_174369
		LDA		#8
		STA		byte_30
		STA		byte_100
		LDA		#3
		STA		byte_31
		STA		byte_101
		LDA		#7
		STA		byte_110
		DEC		byte_111
		DEC		byte_115
		LDA		byte_113
		AND		#$FC
		ORA		#1
		STA		byte_113
		BRK
		.BYTE $F1, 7		; ofs 0x00080012, -> dst _b5_s9
		LDA		#0
		STA		word_6C
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		JSR		sub_175B0E
		JSR		sub_174CCF
		BRK
		.BYTE $A2, $3F		; _msg_m00_arg6
		JSR		sub_174D4F
		LDA		#$1D
		JMP		_bC_s0
locret_12B517:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B518:
		LDA		byte_60B9
		AND		#$10
		BNE		locret_12B517
		LDA		byte_30
		CMP		#$E
		BNE		locret_12B517
		LDA		byte_31
		AND		#$FE
		CMP		#$1C
		BNE		locret_12B517
		JSR		sub_174CCF
		BRK
		.BYTE $8A, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		byte_6DD
		PHA
		LDA		#3
		STA		byte_6DD
		LDA		#0
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		PLA
		STA		byte_6DD
		LDA		#$80
		STA		byte_110
		STA		byte_114
		LDY		byte_31
		INY
		STY		byte_119
		JSR		sub_174CBD
		JSR		sub_174CCF
		LDA		byte_6A65
		BNE		loc_12B564
		BRK
		.BYTE $8B, $77		; _msg_m00_arg1
loc_12B564:
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $8C, $77		; _msg_m00_arg1
		LDA		#$80
		STA		byte_118
		LDA		#1
		STA		word_6C+1
		LDA		#$18
		STA		word_6C
		JSR		_bC_s38
		LDY		byte_31
		INY
		STY		byte_11D
		LDA		#1
		STA		word_6C+1
		LDA		#0
		STA		word_6C
		BRK
		.BYTE $DD, 7		; ofs 0x0014001a, -> dst _bD_sD
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#$80
		STA		byte_11C
		LDA		#1
		STA		word_6C+1
		LDA		#$1C
		STA		word_6C
		JSR		_bC_s38
		LDA		byte_60B9
		ORA		#$10
		STA		byte_60B9
		BRK
		.BYTE $F4, 7		; ofs 0x00158066, -> dst _bE_s33
		BRK
		.BYTE 7, $2F		; _syscall12
locret_12B5AC:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B5AD:
		LDA		byte_60C4
		BMI		locret_12B5AC
		LDA		byte_30
		CMP		#$14
		BCC		loc_12B5F3
		CMP		#$1E
		BCS		loc_12B5F3
		LDA		byte_31
		CMP		#$1E
		BCS		loc_12B5EA
		CMP		#$1A
		BNE		loc_12B5F3
		LDA		byte_60C4
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
		STA		byte_60C4
		BRK
		.BYTE $95, $2F		; _syscall12
		JMP		loc_12B6A2
loc_12B5EA:
		LDA		byte_60C4
		AND		#$80
		STA		byte_60C4
		RTS
loc_12B5F3:
		LDA		byte_60C4
		AND		#$1F
		BEQ		locret_12B5AC
		INC		byte_60C4
		LDA		byte_60C4
		AND		#$1F
		CMP		#$1B
		BNE		loc_12B615
		JSR		sub_174CCF
		BRK
		.BYTE $7F, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		JMP		loc_12B61D
byte_12B612:
		.BYTE  $E, $E, $E
loc_12B615:
		CMP		#$1D
		BEQ		loc_12B61D
		CMP		#$1F
		BNE		locret_12B682
loc_12B61D:
		LDA		byte_60C4
		AND		#$1F
		SEC
		SBC		#$1B
		LSR
		TAX
		LDA		byte_12B612,X
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_174CBD
		LDA		byte_60C4
		CLC
		ADC		#$20
		STA		byte_60C4
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
		LDA		byte_88
		JSR		_mul16_to_8
		LDA		#$16
		LDY		#byte_74
		JSR		_add_16_to_16
		JSR		sub_12B672
		JSR		sub_12B667
		LDA		byte_60C4
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
		LDY		byte_88
		STA		(word_4),Y
		INY
		STA		(word_4),Y
locret_12B682:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B683:
		LDA		#$80
		STA		byte_60C4
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
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		LDA		#0
		STA		byte_8E
		LDA		#$F
		BRK
		.BYTE $1F, 7		; ofs 0x00158016, -> dst _bE_sB
locret_12B6AE:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B6AF:
		BIT		byte_60BA
		BMI		locret_12B6AE
		BVS		loc_12B71C
		LDA		byte_31
		CMP		#$D
		BNE		loc_12B6C9
		LDA		byte_30
		AND		#$FE
		CMP		#$C
		BNE		locret_12B6AE
		LDA		#$1F
		JMP		_bC_s0
loc_12B6C9:
		LDA		byte_124
		CMP		#$C
		BNE		locret_12B6AE
		LDA		byte_31
		CMP		#$11
		BEQ		loc_12B73A
		AND		#$FE
		CMP		#$E
		BNE		locret_12B6AE
		LDA		byte_30
		CMP		#$B
		BCC		locret_12B6AE
		CMP		#$F
		BCS		locret_12B6AE
		JSR		sub_174CCF
		BRK
		.BYTE $7A, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#3
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		LDA		#$80
		STA		byte_124
		STA		byte_128
		ORA		byte_60BA
		STA		byte_60BA
		JSR		sub_12B7AD
		JSR		sub_174CBD
		JSR		sub_174CCF
		BRK
		.BYTE $7B, $77		; _msg_m00_arg1
loc_12B70E:
		BRK
		.BYTE $7C, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B74D
		BRK
		.BYTE $7D, $77		; _msg_m00_arg1
		JMP		loc_12B70E
loc_12B71C:
		LDA		byte_644
		CMP		#2
		BNE		locret_12B739
		LDA		byte_31
		CMP		#$17
		BNE		loc_12B757
		LDA		byte_124
		CMP		#$10
		BNE		locret_12B739
		JSR		sub_174CCF
		BRK
		.BYTE $74, $77		; _msg_m00_arg1
		JSR		sub_174D4F
locret_12B739:
		RTS
loc_12B73A:
		LDA		byte_60B7
		BMI		locret_12B739
		ORA		#$80
		STA		byte_60B7
		JSR		sub_174CCF
		BRK
		.BYTE $79, $77		; _msg_m00_arg1
		JMP		sub_174D4F
loc_12B74D:
		BRK
		.BYTE $7E, $77		; _msg_m00_arg1
		JSR		sub_174D4F
		LDA		#$28
		BNE		loc_12B764
loc_12B757:
		CMP		#$18
		BNE		loc_12B767
		LDA		byte_128
		CMP		#6
		BNE		locret_12B739
		LDA		#$23
loc_12B764:
		JMP		_bC_s0
loc_12B767:
		CMP		#$1D
		BNE		locret_12B739
		LDA		byte_30
		CMP		#$D
		BNE		locret_12B739
		LDA		byte_124
		CMP		#$10
		BNE		locret_12B739
		JSR		sub_174CCF
		BRK
		.BYTE $41, $77		; _msg_m00_arg1
		BRK
		.BYTE $20, $17		; ofs 0x00158038, -> dst _bE_s1C
		BEQ		loc_12B786
		JMP		_bC_s20
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
		LDA		byte_60BA
		AND		#$BF
		STA		byte_60BA
		JSR		_bC_s20
		LDA		#$24
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
sub_12B7AD:
		LDY		#$C
		STY		byte_131
		STY		byte_12D
		INY
		STY		byte_121
		LDA		#$80
		STA		byte_110
		STA		byte_114
		STA		byte_118
		STA		byte_11C
locret_12B7C7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B7C8:
		LDA		byte_30
		CMP		#$19
		BNE		locret_12B7C7
		LDA		byte_31
		CMP		#$25
		BNE		locret_12B7C7
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
		BRK
		.BYTE $55, $17		; ofs 0x000080a8, -> dst _b0_s54
		BRK
		.BYTE $8B, $17		; ofs 0x00140022, -> dst _bD_s11
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
locret_12B7E0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B7E1:
		LDA		byte_60C5
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
		CPY		byte_31
		BNE		locret_12B7E0
		CPY		#$14
		BEQ		sub_12B877
		LDA		byte_12B81D,X
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_12B91A
		JSR		sub_174CBD
		ASL		byte_60C5
		RTS
loc_12B819:
		BRK
		.BYTE $59, $17		; ofs 0x00128068, -> dst _bC_s34
locret_12B81C:
		RTS
byte_12B81D:
		.BYTE	7,  9, $F

; =============== S U B	R O U T	I N E =======================================
sub_12B820:
		LDA		byte_30
		SEC
		SBC		#$A
		CMP		#4
		BCS		locret_12B81C
		LDA		byte_31
		SEC
		SBC		#4
		CMP		#4
		BCS		locret_12B81C
		JSR		sub_174CCF
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $82, $77		; _msg_m00_arg1
		JSR		_bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#8
		BRK
		.BYTE $4E, $17		; ofs 0x00008002, -> dst _b0_s1
		JSR		sub_12B91A
		JSR		sub_174CBD
		JSR		sub_174CCF
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $A7, $77		; _msg_m00_arg1
		LDA		#$CF
		STA		word_3C
		LDA		#$F3
		STA		word_3C+1
		BRK
		.BYTE $CE, 7		; ofs 0x0012802e, -> dst _bC_s17
		LDA		#$80
		STA		byte_138
		STA		byte_13C
		STA		byte_140
		STA		byte_144
		JSR		_vblank
		JSR		sub_174D4F
		LDA		#$C0
		STA		byte_60C5
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B877:
		BRK
		.BYTE $AB, 7		; ofs 0x0015803a, -> dst _bE_s1D
		JSR		sub_12B8F4
		BRK
		.BYTE $21, 7		; ofs 0x0015801a, -> dst _bE_sD
		JSR		sub_12B92A
		LDA		#$10
		STA		word_6C
		JSR		_bC_s12_vblank_count_50
loc_12B88A:
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
		BRK
		.BYTE $9B, $2F		; _syscall12
		JSR		_bC_s12_vblank_count_50
		LDA		word_6C
		CLC
		ADC		#4
		STA		word_6C
		CMP		#$28
		BNE		loc_12B88A
		JSR		sub_1287A7
		JSR		sub_128A2C
		JSR		sub_128A49
		LDA		#1
		STA		word_6C+1
		LDA		#$38
		STA		word_6C
		JSR		sub_12B8E9
		JSR		sub_12B8E9
		JSR		sub_12B8E9
		JSR		sub_12B8E9
		JSR		_vblank
		LDA		#0
		STA		byte_28
		LDA		#$31
		JMP		_bC_s0

; =============== S U B	R O U T	I N E =======================================
_bC_s2E_vblank_count_50_wait_50_or_skip: 
		JSR		_bC_s12_vblank_count_50
		LDA		#$3C
		STA		byte_6AE8
loc_12B8CF:
		JSR		_vblank
		JSR		_calc_pads
		LDA		_pads
		BNE		locret_12B8DE
		DEC		byte_6AE8
		BNE		loc_12B8CF
locret_12B8DE:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s12_vblank_count_50:
		LDX		#$3C
		JMP		_vblank_count

; =============== S U B	R O U T	I N E =======================================
; unreferenced code
sub_12B8E4:
		STA		word_6C
		JMP		_bC_s38

; =============== S U B	R O U T	I N E =======================================
sub_12B8E9:
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
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
		STA		byte_110,X
		INX
		CPX		byte_6ABF
		BNE		loc_12B936
		RTS
byte_12B946:
		.BYTE	9, $E,	4,$92, $D, $E,	4,$96,	9,$11,	4,$9A, $D,$11,	4,$9E
		.BYTE	8,$14,	4,$A2, $E,$14,	4,$A6,	9,  8,	4,$82, $D,  8,	4,$82
		.BYTE	9, $B,	4,$82, $D, $B,	4,$82, $B, $D,	5,$A8, $C, $D,	5,$AD
		.BYTE  $B, $E,	5,$B2, $C, $E,	5,$B7

; =============== S U B	R O U T	I N E =======================================
sub_12B97E:
		LDA		byte_60C5
		BPL		locret_12B998
		AND		#$20
		BNE		locret_12B998
		LDA		byte_30
		CMP		#$11
		BNE		locret_12B998
		LDA		byte_31
		AND		#$FE
		CMP		#6
		BNE		locret_12B998
		JSR		sub_129007
locret_12B998:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B999:
		BRK
		.BYTE $75, $17		; ofs 0x000f8020, -> dst _bA_s10
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B99D:
		BRK
		.BYTE $76, $17		; ofs 0x000f8022, -> dst _bA_s11
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12B9A1:
		BRK
		.BYTE $7E, $17		; ofs 0x000b0034, -> dst _b7_s1A
		RTS

; =============== S U B	R O U T	I N E =======================================
_bC_s27:
		LDX		#0
loc_12B9A7:
		LDA		byte_12B9B4,X
		CMP		byte_8B
		BEQ		loc_12B9CE
		INX
		CMP		#$FF
		BNE		loc_12B9A7
		RTS
byte_12B9B4:
		.BYTE $4A, $F, $A,$91, $C,$7A,$CB,$EF,$B2,  0,$EB,$EC,$EE,$BB,$2F,$30
		.BYTE $70,$58, $E,$25,$47,$18,$17,$79,$41,$FF
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
		.WORD nullsub_14
		.WORD sub_12BA11
		.WORD sub_12BA63
		.WORD sub_12BAC3
		.WORD sub_12BAD3
		.WORD sub_12BB1E
		.WORD sub_12BB2F
		.WORD nullsub_16
		.WORD sub_12BB41
		.WORD sub_12BB64
		.WORD sub_12BB96
		.WORD sub_12BBAC
		.WORD sub_12BBBF
		.WORD sub_12BBC9
		.WORD sub_12BBDA
		.WORD sub_12BBDA
		.WORD sub_12BAB8
		.WORD sub_12BBF1
		.WORD nullsub_15
		.WORD sub_12BBFD
		.WORD sub_174D1B
		.WORD sub_174D26
		.WORD sub_174D31
		.WORD sub_12BC2A
		.WORD sub_12BC33

; =============== S U B	R O U T	I N E =======================================
nullsub_14:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BA11:
		LDA		byte_60BA
		AND		#1
		BEQ		nullsub_14
		LDX		#$10
		LDA		byte_6DF
		CMP		#$78
		BCC		loc_12BA23
		LDX		#$10
loc_12BA23:
		LDA		#$F
		STA		byte_100,X
		LDA		#3
		STA		byte_101,X
		LDA		byte_103,X
		AND		#$FC
		ORA		#3
		STA		byte_103,X
		JSR		sub_12A6FD
		LDY		#0
		LDA		byte_6A62
		STA		byte_6ABE
loc_12BA42:
		DEC		byte_6ABE
		BEQ		locret_12BA56
loc_12BA47:
		LDA		byte_12BA57,Y
		STA		byte_100,X
		INX
		INY
		TYA
		AND		#3
		BNE		loc_12BA47
		BEQ		loc_12BA42
locret_12BA56:
		RTS
byte_12BA57:
		.BYTE  $E,  4,	1,$84, $E,  5,	2,$88, $E,  6,	3,$8C

; =============== S U B	R O U T	I N E =======================================
sub_12BA63:
		LDY		#$18
		LDY		#$18
loc_12BA67:
		LDX		#0
loc_12BA69:
		LDA		byte_110,X
		PHA
		LDA		byte_100,Y
		STA		byte_110,X
		PLA
		STA		byte_100,Y
		INY
		INX
		CPX		#4
		BNE		loc_12BA69
		LDA		byte_8B
		CMP		#$91
		BEQ		sub_12BA9A
		LDA		byte_60B8
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
		STA		byte_110
		LDA		byte_2E
		STA		byte_111
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAA5:
		LDA		byte_60CB
		BPL		locret_12BAB7
		LDA		#$80
		STA		byte_124
		LDA		#$19
		STA		byte_11D
		STA		byte_121
locret_12BAB7:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAB8:
		LDA		byte_60CB
		BPL		locret_12BAB7
		LDA		#$80
		STA		byte_110
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BAC3:
		LDY		#$18
		LDA		byte_2C
		BNE		loc_12BA67
		LDA		#$A
		STA		byte_2D
		LDA		#$13
		STA		byte_2E
		BNE		loc_12BA67

; =============== S U B	R O U T	I N E =======================================
sub_12BAD3:
		LDA		byte_60B7
		BMI		loc_12BAE1
		LDA		byte_60BA
		AND		#$10
		BNE		loc_12BB0C
		BEQ		locret_12BB11
loc_12BAE1:
		LDA		byte_6DF
		CMP		#$78
		BCS		loc_12BAF1
		LDA		byte_60B7
		AND		#$7F
		STA		byte_60B7
		RTS
loc_12BAF1:
		LDA		byte_6A62
		STA		byte_6ABE
		LDX		#0
loc_12BAF9:
		DEC		byte_6ABE
		BEQ		loc_12BB0C
loc_12BAFE:
		LDA		byte_12BB12,X
		STA		byte_154,X
		INX
		TXA
		AND		#3
		BNE		loc_12BAFE
		BEQ		loc_12BAF9
loc_12BB0C:
		LDX		#$44
		JSR		sub_12BB5E
locret_12BB11:
		RTS
byte_12BB12:
		.BYTE	7,$13,	1,$84,	7,$14,	2,$8B,	8,$14,	3,$8F

; =============== S U B	R O U T	I N E =======================================
sub_12BB1E:
		LDA		byte_60B7
		BMI		locret_12BB11
		LDA		byte_60BA
		AND		#$10
		BNE		locret_12BB11
		LDX		#$14
		JMP		sub_12BB5E

; =============== S U B	R O U T	I N E =======================================
sub_12BB2F:
		LDA		byte_60B9
		AND		#$10
		BEQ		locret_12BB11
		LDX		#$10
		JSR		sub_12BB5E
		LDX		#$14
		JMP		sub_12BB5E

; =============== S U B	R O U T	I N E =======================================
nullsub_16:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB41:
		LDA		#$80
		BIT		byte_60BA
		BMI		loc_12BB4B
		BVS		loc_12BB51
		RTS
loc_12BB4B:
		STA		byte_128
		STA		byte_124
loc_12BB51:
		STA		byte_110
		STA		byte_114
		STA		byte_118
		STA		byte_11C
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB5E:
		LDA		#$80
		STA		byte_100,X
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BB64:
		LDA		byte_6E1
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
		STX		byte_120
		STY		byte_121
		STA		byte_123
loc_12BB80:
		LDA		byte_60B7
		AND		#$7F
		STA		byte_60B7
		RTS
loc_12BB89:
		LDA		byte_60C6
		BPL		loc_12BB80
		LDX		#$10
		LDY		#$17
		LDA		#$80
		BNE		loc_12BB77

; =============== S U B	R O U T	I N E =======================================
sub_12BB96:
		LDA		byte_60C8
		AND		#4
		BNE		locret_12BBAB
loc_12BB9D:
		LDA		#$80
		STA		byte_118
		STA		byte_11C
loc_12BBA5:
		STA		byte_110
		STA		byte_114
locret_12BBAB:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBAC:
		LDA		byte_60C8
		BMI		loc_12BBA5
		AND		#3
		ORA		#$80
		CMP		#$83
		BEQ		loc_12BBA5
		LDA		#0
		STA		byte_60C8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBBF:
		LDA		byte_60C8
		BMI		loc_12BB9D
		AND		#4
		BNE		loc_12BB9D
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBC9:
		LDA		byte_60B9
		ORA		byte_60B7
		ORA		byte_60CA
		BPL		locret_12BBD9
		LDA		#$80
		STA		byte_110
locret_12BBD9:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBDA:
		LDA		byte_60B6
		AND		#$20
		BEQ		locret_12BBF0
		LDA		#$32
		STA		byte_110
		LDA		#$15
		STA		byte_111
		LDA		#$83
		STA		byte_113
locret_12BBF0:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBF1:
		LDA		byte_60CB
		BPL		locret_12BBFB
		LDA		#$80
		STA		byte_110
locret_12BBFB:
		RTS

; =============== S U B	R O U T	I N E =======================================
nullsub_15:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BBFD:
		LDX		#0
		LDA		byte_60D0
		STA		word_4
loc_12BC04:
		LSR		word_4
		BCC		loc_12BC14
		LDY		byte_12BC24,X
		LDA		byte_101,Y
		SEC
		SBC		#$34
		STA		byte_101,Y
loc_12BC14:
		INX
		CPX		#6
		BNE		loc_12BC04
		BIT		byte_60B9
		BVC		locret_12BC23
		LDA		#$80
		STA		byte_118
locret_12BC23:
		RTS
byte_12BC24:
		.BYTE $24,$34,$30,$20,$1C,$28 

; =============== S U B	R O U T	I N E =======================================
sub_12BC2A:
		LDA		byte_60B7
		AND		#$7F
		STA		byte_60B7
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_12BC33:
		BIT		byte_60C6
		BVC		locret_12BC40
		LDA		byte_113
		AND		#$FC
		STA		byte_113
locret_12BC40:
		RTS

		ECHO "bank 0C size", [.-$8000], "free space", [$BFD8-.]

		ORG $BFD8
		SEI
		INC	$BFDF
		JMP	_RESET
		.BYTE $80
		.BYTE "DRAGON WARRIOR "
		.BYTE $33
		.WORD $FFFF
		.WORD 0
		.BYTE $48
		.BYTE 4
		.BYTE 1
		.BYTE $F
		.BYTE 7
		.BYTE $9D
		.WORD $BFD8
		.WORD $BFD8
		.WORD $BFD8
