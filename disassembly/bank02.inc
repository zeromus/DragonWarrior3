
		ORG $8000

		.WORD _b2_s0		; data used at 8000
		.WORD _b2_s1
		.WORD _b2_s2		; data used at 8000
		.WORD _b2_s3		; data used at 8000
		.WORD _b2_s4		; data used at 8000
		.WORD _b2_s5		; data used at 8000
		.WORD _b2_s6_screen_damage_shake ; data	used at	8000
		.WORD _b2_s7_screen_spell_blink	; data used at 8000
		.WORD _b2_s8_screen_hit_blink ;	data used at 8000
		.WORD _b2_s9
		.WORD _b2_sA		; data used at 8000
		.WORD _b2_sB		; data used at 8000
		.WORD _b2_sC		; data used at 8000
		.WORD _b2_sD		; data used at 8000
		.WORD _b2_sE

_pak_data7C:
		.BYTE $C8,$50,$1F,$1F,	1,  1,	7,$3F,$66,  1,	1,  7,$3F,$26,$C8,$60
					; DATA XREF: BANK2:937F-o
		.BYTE $D8,$D9, $C,$18,	3,  6,	1, $C,	8,  3,	2,$C8,$31,$FF,	0,  3
		.BYTE  $F, $F,$1F,$1F,$3F,$3F,$3F,$C9,$41,$FF,$F0,$FF,	0,$40,$40,$40
		.BYTE $C0,$C0,$E0,$E0,$3F,$7F,$7F,$7F,$C9,$51,$DF,$8F,$EF,$E0,$D8,$DE
		.BYTE $9D,$8E,$8F,$DC,$FF,$9D,$8E,$8F,$DC,$C0,$61,$5C,$18,$78,$F8,$3E
		.BYTE $63,$C0,$80,$5C,$18,$78,$F8,$3E,$62,$40,$80,$C8,$22,  0,$1F,$20
		.BYTE $20,$A8,$E8,$F8,$C0,$32,$38,$1A, $E, $C, $E,  6,	4,  6,$C4,$E5
		.BYTE $F1,$F3,$F1,$F9,$FB,$F9,$C0,$42,	7,  7,	6,  3,	3,  1,	1,  0
		.BYTE $F8,$F8,$F8,$FC,$FC,$FE,$FE,$FF,$C0,$52,	0,  0,$40,$D0,$D9,$EE
		.BYTE $36,  3,$FF,$FF,$DF,$DE,$DC,$EE,$36,  3,$C8,$33,$3F,$1E,$10, $D
		.BYTE  $D,  7,$80,$C0,$E0,$E0,$F0,$F7,$C8,$43,$FF,  7,$40,$C0,$F0,$F7
		.BYTE $38,$DB,$64,$BA,$9C,$2E,	7,$C0,$53,$30,$18,  0,$E0,$F8,$FC,$FC
		.BYTE $67,$CF,$E3,$1B,	7,  7,	3,  3,	3,$C8,$63,$F8,$FC,$5F,$3B,$14
		.BYTE	7, $D,$10,  7,	3,  4,	7, $D,$C8,$34,$1F,$7F,	2, $B, $C,$58
		.BYTE $71,$E2,	6,  3,	7, $F,$1E,$FE,$C8,$44,$FF,$E0, $C,$18,$30,$FC
		.BYTE $78,$B0,$C0,$60,$70,$38,$BC,$C8,$54,$FF,	3,$60,$F0,$CE,$F3,$7D
		.BYTE $82,$F1,$FE,$EF,$F1,$C0,$64,$F0,$F8,$38,$CC,$B6,$CB,$61,$20,$F0
		.BYTE $F8,$38,$CC,$B6,$CB,$61,	0,$C8,$35,$78,$F8,$B8,$E0,$18,$60,$80
		.BYTE $1C,$F8,$E0,$80,$C8,$55,$47,  0,$80,$E6,$FD,$FF,$C8,$65,$83,  3
		.BYTE $80,$60,$E7,$80,$60,$88,$23,$25,	3,  3,$24,$30,$C0,$44,$80,$24
		.BYTE $2F,$E0,$F1,$44,$48,$3C,$1C, $E,	7,$A0,$E0,$78,$36,$39, $C, $C
		.BYTE	3
_pak_data20:
		.BYTE $C8,$10,$3F,$3F,$18,$3C,$7E,$EE,$84,$82,$10,$10,$54,$6E,$9E,$F6
					; DATA XREF: BANK2:91B3-o BANK2:91C7-o
		.BYTE $C0,$20,	2, $F,$3F,$3B,$17,$1E, $E,  6, $C,$3D,$38,  2,	3,$11 ;	ind data used at 8000
		.BYTE	9,  0,$C8,$30,	0,$C0,	6,  4,$C8,$50,$C0,$30,	2,  2,	1,  2
		.BYTE $C8,$11,	7,  7,$1D,$3C,$7B,$10,$30,$20,$C0,$21,$7B,$F6,$F6,$FA
		.BYTE $ED,$EF,$26,$1A,$20,$20,$80,$80,$41,$41,	1,  1,$C8,$31,$7E,$F7
		.BYTE  $C,$13,$1F, $E,	1, $F,	7,$10,$10,  1,	6,  8,	8,$C8,$41,$1F
		.BYTE $FF,  6,	1,  7,	4,$1F,$2F,$67,$F2, $C,	4,$33,$58,$ED,$C0,$51
		.BYTE $6C,$FC,$EF,$7F, $C,  7,	6,$71,$93,$30,$F3,$50,$18, $C,	8,$40
		.BYTE $C8,$61,$E0,$E0,$7E,$7C,$18,$70,$78,$18,$C8,$12,	3,$7F,$1C,$73
		.BYTE $E7,$9E,$78,$FF,$7F,  8,$3F,$C0,$22,$CC,$EC,$FF,$7F,$7F,$5A,$40
		.BYTE $AD,$CC, $C,  3,	0,$7F,$5A,$40,$AD,$C8,$32,$FA,$EF,$3F,$80,$98
		.BYTE $40,$FD,$F3,$CD,$BF,$40,$7F,$9F,$3E,  2,$C0,$42,$3E,$FE,$FD,  3
		.BYTE $B7,$B1,$30,$30,$3C,  0,	1,$10,$48,$CE,$C3,  0,$C8,$52, $B,$8E
		.BYTE $10,$C0,$60,$E0,$40,$20,$C0,$C8,$13,  7,$17,$80,$DC,$3E,$DF, $C
		.BYTE	8,  1,$C0,$23,$DD,$DD,$DB,$BB,$B7,$96,$8E,$2E,$91,$80,$81,  1
		.BYTE $85,$A4,$AD,$4F,$C8,$33,$E5,$FF,$1E,$3C,	2,$7E,$BC,$BC,$BC,$B8
		.BYTE $51,$C2,$82,$3C,$20,$C0,$43,$D8,$D8,$D8,$BC,$A4,$9E,$3C,	3,$18
		.BYTE	0,$18,$7C,$C0,	0,$40,$F0,$C0,$53, $D,$13,$2F,$10,$17,	9,$37
		.BYTE $7A,$41,$20,$20,	1,  9,	0,$23,$40,$C8,$63,$FC,$FC,$FC,$FE,$DD
		.BYTE $62,$35,$1A,$F0,$98,$46,	5, $A,	4,$C8,$14,$3F,$3F,$18,$3C,$7E
		.BYTE $77,$21,$40,  8,	8,$2A,$76,$39, $E,$C8,$24,$5F,$FC,$30,$40,$F1
		.BYTE $F9,$7D,$AD, $E,$46,$3C,$1C,$48,$30,$C8,$34,  0,$F0,$30,$30,$30
		.BYTE $20,$C8,$54,$18,$7C,$80,$80,$40,$C0,$80,$80,$C0,$C8,$64,$2C,$1C
		.BYTE $C0,$C0,$80,$80,$40,$80,$88,$10,$10,$C7,$C0,$33,$13,$33,$13,$25
		.BYTE $3F,$12
_pak_data42:
		.BYTE $C8,$10,	7, $F, $F,$31,$4A,$B4, $E,$3B,$74,$C8,$20,$C0,$C0,$A8
					; DATA XREF: BANK2:925D-o BANK2:92F3-o
					; BANK2:9352-o
		.BYTE $40,$28,$40,$C8,$11, $F, $F,  1,$C1,$61,$31,  1,	1,$81,$41,$C9
		.BYTE $21, $F,$FF,$E0,$13,$1B, $B,$23,	3,  3,	7,  3,	3, $B,	9,$C8
		.BYTE $31,$80,$FF,  7,	6,  6,	6, $C, $C, $C,$18,  1,$C9,$41,	8,$F9
		.BYTE $9F,$18, $C, $E,	5,  5,	1,  0,$10,$10,$10,$10, $E,$C8,$51,$80
		.BYTE $E0,  1,	1,  1,	6,$C9,$12,$FF,$E7,$E7,$80,$E0,$FC,$F1,$EE,$EF
		.BYTE $80,$E0,$FC,$F1,$EE,$EF,$C9,$22,$EF,$FF,$E0,$F7,$F7,$F7,$F6,$F7
		.BYTE $F5,$EE,$EA,$EB,$EB,$EB,$C9,$32, $F,$FF,$C3,$EF,$2F,  7,	7,$E9
		.BYTE $29, $D, $C, $C, $C,  4,	6,$C9,$42,  3,$8F,$9F,	7,$43,$81,$86
		.BYTE $7D,$2B,	6,  1,	0,  0,$44,$C0,$52,$93,$B6,$DA,$D8,$B8,$50,$32
		.BYTE $52,  0,$21,$51,$53,$32,$45,$21,$41,$C8,$62,$FC,$FC,$54,$38,$5F
		.BYTE $2F,$24,$40,$42,$20,$50,$28,$65,$C0,$C8,$13,$1F,$1F,$80,$F0,$FE
		.BYTE $3E,$C6,$80,$F0,$FE,$3E,$C6,$C9,$23,$FF,$FF,$C0,$F8,$FE,$F8,$26
		.BYTE $9B,$CD,$66,$32,$11,$98,$C9,$33,$FF,$FF,	1,$FD,$8C,$CC,$C6,$C6
		.BYTE $C6,$46,$67,$2D,$C9,$43,$80,$E7,$E5,$FE,$FE,$C2,	0,$E4,$3E,$7E
		.BYTE $C2,$21,$1B,  0,$C9,$53,$70,$FF,$E2,$1C,$38,$78,$30,$C3,$87,  6
		.BYTE  $C,  8, $C,  8,	0,$C8,$63,$F8,$F0,$70,$E0,$C0,$80,  8,$18,$30
		.BYTE $60,$80,$C8,$24,$1F,$1F,$80,$C0,$C0,$E0,$E0,$80,$C0,$40,$20,$A0
		.BYTE $C9,$34,$F8,$FF,$C3,$F0,$F0,$FB,$F7,$90,$50,$48,$28,$28,$38,$38
		.BYTE $F0,$C8,$44,$CF,$FE,$C7,$80,  7, $F,$51,$E0,$20,$C0,$80,$86, $B
		.BYTE $D5,$74,$C0,$54,	0,  0,$30,$70,$70,$38,$38,$1D,$38,$44,$C4,$86
		.BYTE $86,$C3,$42,$60,$C8,$64,$E0,$C0, $F,  6,$30,$19, $F,$C8,$15,$78
		.BYTE $FF,  1,	2,  7, $A,$10,$10,$10,$30,  1,	1,  6,	8,$C8,$25,  0
		.BYTE $FF,$30,$30,$30,$18,$18,$18, $C, $C,$C8,$35,  3,$FF, $C,	6,  6
		.BYTE	7,  3,	3,  6,$86,  1,	1,$C0,$45,$CE,$7C,$B8,$C0,$C0,$E3,$64
		.BYTE $2E,  1,	2,  6,$1C,$18,	0,$80,$D2,$C0,$55,$2A,$1C,$1A,$15,$38
		.BYTE $34,$68,$D0,$52,$64,$22,	4, $B,	4,  8,$30,$C8,$65,$FE,$BE,$80
		.BYTE $20,$40,$20,$18,	4,$40,$E0,$B0,$58,$28,$1C,  4,$C8,$16,$70,$F0
		.BYTE $C0,$30,$40,$A0,$C0,$50,$A0,$C8,$56,$38,$F0,$20,$20,$40,$80,$20
		.BYTE $40,$80,$88,$18,$20,$18,$18,$14,	6,  8,	8,$88,$20,$20,$30,$70
		.BYTE $30,$20,$A0,$40,$40
_pak_data36:
		.BYTE $C0,$20,	0,  0,	1,  2,	1,  3,	2,  1,	3,  6, $D, $A,	9, $B
					; DATA XREF: BANK2:9221-o BANK2:92FD-o
		.BYTE  $A,  9,$C8,$30,$FF,$80,	3, $B, $C,  5,	7,  2,	7,  5, $C,$C0 ;	ind data used at 8000
		.BYTE $40,  0,	0,  4,	2, $D,	6,  3,	1,  9,$1A,$15,$32,$2D,$36,$1B
		.BYTE  $D,$C8,$50,$E0,	0,  6,	3,  1,$C8,$11, $F, $F,	1, $F,$7C,$13
		.BYTE	1, $F,$7C,$93,$C0,$21, $E,  5,$42,$C0,$B1,$63,$C4,$8C,$EE,$35
		.BYTE $5A,$CD,$B6,$6C,$D8,$B0,$C8,$31,$E3,$F3,$10,$30,$40,$C0,$60,$20
		.BYTE $60,$C0,$80,$80,$C0,$C0,$41,$18,$88,$46,	3,$10,$A0,$63,$82,$60
		.BYTE $B0,$58,$AC,$57,$AC,$6B,$9A,$C8,$51,$FC,$E0,$C1,	7,  8,$D1,$37
		.BYTE $A8,$E7,$5C,$20,$C8,$12,$3F,$1F,$38, $F,	2,$C1,$80,  7,$38,$EF
		.BYTE $32,$DD,$B6,$C8,$22,$F0,$7F,$80,	7,$3E,$F0,$C0,$C0,$40,$37,$BF
		.BYTE $78,$C0,$C8,$42,$3F,$E7,$80,$D0,$E0,$70,$C8,$38,$10,$F0,$80,$70
		.BYTE $C8,$38,$C8,$52,$F0,$80,$E0,$E0,$1C,$F0,$80,$C8,$13,$1F,	6,$40
		.BYTE $E0,$C0,$20,$50,$E8,$3C,$C8,$23,$80,$F0,$1C,$FC,$D8,  8,$E0,$C8
		.BYTE $33,  3,$1F,  4,	4,  6,$1C,$30,	2, $F,$C8,$43,$F8,$20,	8,$1A
		.BYTE $16, $C,	4,  8,$88,  4,$1A,  0,$70,  1,	3,  1,$80, $C,$1A,$D9
		.BYTE $AD,$B4,$AB,$DC,$78,$30,$10,$19,$3D,$34,$20,  0,	3,  7,	2,$88
		.BYTE $14,$1A,$CF,$F8,$6F,$2F,$DF,$C6,	2,$E0,$20,$38,$DC,$EE,$EE,$88
		.BYTE  $C,$12,	0, $F,	1,$11,$3B,$6E,$88,$14,$12,  1,$7F,  2,$1E,$FC
		.BYTE $F8,$F0,$3C,$DD,$C0,$88,$14,$22,$FF,  0,$EE,$77,$77,$7B,$3B,$3D
		.BYTE $3E,$3F,$88,$14,$2A,$F0,	0,$1F,$1F, $F,	3,$88,$1C,$22,$1F,  0
		.BYTE $80,$C0,$F0,$F8,$F8,$88,$1C,$2A,$F0,  0,$F8,$F8,$F0,$E0
_pak_data57:
		.BYTE $48,$40,$C8,$30,	6,$3E,	1,  1,	1,  1,	1,  1,	1,$C8,$21,$1F
					; DATA XREF: BANK2:92C6-o
		.BYTE $3F,  1,	7,$1F,$7F,$7F,$FF,  2,	5,  7,	8,$11,$C0,$31,$FB,$F6 ;	ind data used at 8000
		.BYTE $E5,$E5,$CF,$9F,$9F,$DF,$26,$4D,$5B,$9B,$BE,$F6,$F6,$F4,$C0,$41
		.BYTE $DF,$EF,$CF,$CD,$CD,$EA,$F2,$F9,$74,$BC,$7E,$7E,$3E,$3F,$9F,$FF
		.BYTE $C0,$51,$FD,$6E,$77,$33,$3B,$1D, $F,  1,$FF,$7F,$7F,$3F,$3F,$1F
		.BYTE  $F,  1,$C9,$22,$FF,$FF,$80,$3F,	0,  0, $E,$3B,$F1,  8,	0,  3
		.BYTE $C0,$32,$FF,$FF,$E3,$EF,$DF,$BF,$FF,$DE,$2C,$C0,$9C,$30,$60,$C0
		.BYTE	0,  0,$C8,$42,$C3,$FF,$C0,$E0,$E0,$F0,$A1,$DF,$40,$60,$1E,  1
		.BYTE $80,$80,$C9,$52,$FF,$E0,$FF,$38,$8F,$47,$E0,$78, $F,$87,$FC,$C0
		.BYTE $F0,$F8,$4A,$63,$C8,$62,$C0,$C0,$7F,$3F,$7F,$3F,$C9,$23,$FF,$FF
		.BYTE $80,$E0,	0,  4,	2,$1C,$82,$41,$F0,$18,$C0,$33,$FF,$FF,$FF,$EE
		.BYTE $F7,$E7,$C7,$85,	6,  1,	0,  1,	0,$10,$20,$40,$C8,$43,	1,$FF
		.BYTE	2,  6, $C,$F8,$E1,  1,	3,  6,	1,$C9,$53,$FF,$C0,$FF,$1C,$E2
		.BYTE $8C,$78,$1F,$F3,$E7,$8F,	3,$1F,$C8,$24,	7,$3F,$80,$E0,$E0,$F0
		.BYTE $F0,$F0,$40,$A0,$90,$C0,$34,$D8,$DC,$EC,$6E, $E,$A4,$D4,$50,$60
		.BYTE $60,$30,$B0,$F0,$7A,$3A,$3F,$C0,$44,$D0,$F8,$EC,$EC,$ED,$6D,$5A
		.BYTE $3A,$2F, $F,$1F,$3F,$3F,$BF,$FE,$FE,$C9,$54,$C0,$F9,$F9,$54,$9C
		.BYTE $38,$F0,$E0,$80,$FC,$FC,$F8,$F0,$E0,$80,$88,$10,$21,$40,$65, $E
		.BYTE	6,  5,	1,  1,$88,$18,$21,$80,$BB,$20,	4,$10,$62,  8,$A0,$40
		.BYTE $88,$18,$19,  0,	3,$10,$30
_pak_data1E:
		.BYTE $C8,  0,	0,$FF,$78,$F6,$DE,$3F, $B,  7,	6,  7,$C8,$10,	3,$FF
					; DATA XREF: BANK2:91A9-o BANK2:91FE-o
					; BANK2:92B7-o
		.BYTE	6,  6, $C, $E, $E,$1C, $C,  4,$10,$10,$C9,$20,$30,$FF,$E0,$18 ;	ind data used at 8000
		.BYTE $18,  8,$20,$20,$20,$40,$40,  0,$40,$40,$C8,$30,$F8,$FF,$18, $D
		.BYTE	2,  1,	1,  7, $D,$1F,$40,$30,$28,$1C,	8,$C8,$40,  1,$FF,$3F
		.BYTE $3F,$3F,$7F,$7F,$3C,$7B,$3F,$40,$C8,$50,$FF,$E0,$1F,$1F,	7,$40
		.BYTE $20,$28,$1B, $F,$10,$1F, $F,$C8,$60,$E0,$60, $C,	6,$1B, $F,  6
		.BYTE $C8,$21,	0,$FF,	3,  7,$1F,$3F,$17,$7D,$AB,$7B,$C8,$31,	1,$FF
		.BYTE $F9,$7B,$FB,$F9,$7B,$FD,$FC,$F9,	4,$C8,$41,$F8,$F7,$F8,$F0,$E0
		.BYTE $80,$F8,$F4,$FC,	6, $E,$1A,$7F,	2,$C8,$51,$FF,$F0,$F8,$FC,$F8
		.BYTE $F0,  2,	2,  6, $E,$BD,$F6,$D8,	4,$C8,$61,$FC,$7C,  2,$D9,$6C
		.BYTE	1,  1,$FC,$6A,$D9,$6C,	1,  1,$C8,$12,	0,  3,$7E,$FF,$C8,$22
		.BYTE	0,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FF,$FF,$C8,$32,	0,$FF,$FF,$FF
		.BYTE $FF,$FF,$FF,$FF,$FF,$FF,$C8,$42,$2F,$FF,$FF,$BF,$DF,$5F,$5F,$1F
		.BYTE $3F,$3F,$20,$20,$40,$C0,$80,$C9,$52,$1F,$FF,$B8,$3F,$3F,$3F, $F
		.BYTE $C0,$C0,$40,$C0,$20,$60,$20,$60,$C0,$62,$1F, $F,	7,  6,$60,$ED
		.BYTE $DB,  0,$A0,$F0,$F0,$D8,$75,$ED,$DB,  0,$C8,$13,	1,$1F,$36,$CB
		.BYTE $35,$DF,$7F,$20,$C0,$23,$BF,$BF,$3F,$AF,$D7,$97,$D7,$DF,$30,$30
		.BYTE $38,$28,$14,$15,$11,$19,$C0,$33,$9D,$DF,$DD,$BF,$3F,$9D,$8C,  6
		.BYTE	1,  1,	0,  1,	3,$25,$14,$3E,$C0,$43,$86,$82,$81,$41,$C1,$80
		.BYTE $C0,$40,$2E,$1A,	7,  1, $D,$1A, $D,$1F,$C9,$53,$E0,$FF,$25,$C0
		.BYTE $C0,$C0, $F, $F, $F, $F,	0,  6, $F, $E,$C9,$63,$B0,$F3,$F3,$E0
		.BYTE $A3,$CD,$A6,$60,	0,  1, $F, $D,$26,$60,	0,$C8,$14,  0, $F,$40
		.BYTE $A0,$F4,$FB,$C0,$24,$DD,$FD,$EE,$FE,$F6,$FF,$7F,$8D,$20,	0,$10
		.BYTE	0,$C8,$F6,$7F,$8D,$C0,$34,$81,$CD,$B3,$AD,$DA,$E1,$FB,$3F,$80
		.BYTE $CC,$B2,$AD,$DA,$E1,$FB,$3F,$C8,$44, $F, $E,$80,$C2,$7C,$80,$C2
		.BYTE $7D,  3,$C8,$54,$F0,  0,$FE,$FF,$FC,$C1,$C8,$64,$E0,$E0,$C0,$60
		.BYTE $80,$C0,$60,$80,$C8,$25,	0,$FF,$E0,$B0,$E8,$F8,$FC,$3C,$5C,$5E
		.BYTE $C8,$35,$1F,$FF,$6E,$AE,$AC,$96,$96,$84,$96,  6,$20,$A0,$A0,$A0
		.BYTE $20,$C9,$45, $F,$FF,$C1,$16,$17,$1F,$60,$60,$E0,$E0,$E0,$D0,$50
		.BYTE $A0,$C9,$55,$1F,$FF,  7, $F, $F, $F,$A0,$40,$E0,$60,$E0,$B0,$50
		.BYTE $30,$C0,$65,  7,	7,  3,$41,$F0,$C8,$6E,$1D,$10,	8,$3C,$7E,$FF
		.BYTE $CD,$6E,$1D,$C8,$46,  0,	3,$80,$80,$C8,$56,  0,$FF,$40,$C0,$A0
		.BYTE $E0,$F0,$E0,$F0,$E0,$C8,$66,$1F,$FF,$F0,$D0,$E0,$50,$28,$B0,$D0
		.BYTE $C0,$30,$E8,$B0,$D0,$C0,$88,$1F,$17,  0,$41,$19,$80,$88,$1F,$1F
		.BYTE $3C,$FE,$20,$1A,$94,$42,$41,$2B,$1E,$28,$3C,$3E,$14,$88,$27,$1F
		.BYTE	0,$E0,$40,$80,$80
_pak_data3A:
		.BYTE $C0,$40,	3,  0,	6,$1C,$3A, $D,$15,$1F,	3,  0,	6,$1C,$3A, $D
					; DATA XREF: BANK2:9235-o BANK2:92DA-o
					; BANK2:9316-o
		.BYTE $15,$1F,$C8,$50,$FC,$FC,$37,$2D, $D, $C,	8,  8,$37,$2D, $D, $C
		.BYTE	8,  8,$C8,$11,$3F,  0,	1,  1,	1,  1,	3,  3,$C9,$21,	1,$FF
		.BYTE	0,  3,	3,$83,$43,$27,$17,$17, $B,$C0,$31,  1,	0,  1,	0,  8
		.BYTE $10,$20,$20, $B,	4,$15,$14,$3A,$32,$62,$62,$C9,$41,$40,$FF,$2E
		.BYTE	0,$C0,$80,$C0,$42,$C2,$82,$42,$C4,$84,$C4,$44,$C8,$51,$FF,$80
		.BYTE $40,$44,	4,  8,	8,  8,	8,  8,	8,$C8,$61,$F8,	0,  8,	8,  4
		.BYTE	4,  3,$C8,  2,$7F,$1F,	3,  6,	8,$10,$30,  1,	7,$1F,$3F,$7F
		.BYTE $7F,$FC,$C9,$12,$C0,$F0,$FA,$20,$60,$40,$40,$80,$80,$F8,$F0,$E0
		.BYTE $E0,$C9,$22,$80,	2,$AA,	0,  0,	0,  0,	0,$C8,$32,$3F,$32,  3
		.BYTE	1,  1,	3,  1,	2,  2,	5,  6,$C8,$42,$F7,  7,$1F,  7,	1,  7
		.BYTE	7,  3,	3,$1F,	7,  1,$C8,$52,$6C,$6C,	3,$1F,	1,  3,	3,$1F
		.BYTE	1,  3,$C8,$62,	4,  0,$FF,$C8,	3,$7E,$38,$54,$FF,  1,$FF,$FF
		.BYTE $FF,$FF,$FF,  7,$C0,$13,	0,  0,	1,  3,	4,  4,	8, $C,$33,$2F
		.BYTE $1F,$3F,$3F,$3F,$7F,$7E,$C0,$23,	8, $C, $C,  8,	4,  6,$C0,$CC
		.BYTE $7E,$7E,$7F,$7F,$3F,$3F,$D0,$CC,$C0,$33,$C7,$E3,$60,$E6,$73,$31
		.BYTE $B8,$F8,$D7,$EB,$68,$E6,$73,$35,$BA,$FA,$C8,$43,$FF,$E3,$1C, $D
		.BYTE $10,$C0,$80,$1C,$ED,$D0,$EE,$DF,$29,$D0,$B0,$C0,$53,  0,$80,$D1
		.BYTE $30,$B8,$B8,$38,$1C,$38,$AC,$C4,	6,$83,$82,  3,	0,$C8,$63,$3C
		.BYTE $88,  6,	1,  3, $E,$70,$80,$C8,	4,$FF,$1E,$80,$E0,$60,$20, $C
		.BYTE  $E,$C5,$F2,$F7,$FB,$FB,	1,$C9,$14,$FF,$83,$FF,	0,  0,$F8,$4E
		.BYTE	2,  1,	3,$11,$FE, $F,	7,$C0,$24,  3,$13,$21,	3,  2, $E,$CC
		.BYTE $D8,  7,	7, $F,$EF,$DF,$3F,$DF,$DF,$C9,$34,$C0,$F0,$18,$C4,$D0
		.BYTE $DD,$DB,$DB,$D1,$C9,$44,	2,$FC,$FC,$C0,$24, $C,$18,  9,	7,$C0
		.BYTE $24,$CC,$58,$89,	7,$C8,$54,$1F,$70,  8,$98,$C0,	4,$38,$F7,$E6
		.BYTE $EB,$C8,$64,$F0,$3F,  1,	9,$88,$C2,$7C,$AA,$3F,$DA,$94,$20,$C8
		.BYTE	5,$FF,$98,$40,	4,  4,$40,$60,$A0,$E4,$5C,$78,$40,$40,$C8,$15
		.BYTE $FF,$85,$20,$20,$10,$20,$80,$80,$C0,$C0,$C0,$E0,$E0,$C8,$25,$FF
		.BYTE $52,$10,$10,$20,$E0,$E0,$E0,$E0,$E0,$C0,$C0,$40,$C8,$35,$FF,  0
		.BYTE $99,$FD,$FA,$CA,$14,$14,$14,$2A,$C8,$45,$FF,$18,$80,$40,$6B,$E9
		.BYTE $A8,$A8,$48,  4,	4,  4,$C8,$55,$FF,  0,	4,  4,	2,  2,	2,  2
		.BYTE $82,$44,$C8,$65,$C0,  0,$A4,$98,$C8,$26,$1F,  0,$18,$20,$40,$80
		.BYTE $80,$C8,$46,$40,$40,$C0,$C0,$88,$1D,$24,	0,$FC,	4,  6,$D7,$F3
		.BYTE $7A,  8,$88,$29,$36,$FF, $F,  4,	2,  3,	3,$80,$60,$3E,$1F, $F
		.BYTE $17, $F,$1F,$88,$29,$3E,$FE,$F0,	7,  7,	7,  3, $F,$1F,$1F,$3F
		.BYTE $3F,$17, $B,$88,$31,$36,$1F,  1,$80,$A0,$D0,$D0,$F8,$F8,$88,$31
		.BYTE $3E,$FE,$F0,$80,$C0,$C0,$80,$F8,$F0,$F8,$F8,$F8,$F0,$C0
_pak_data4:
		.BYTE $4A,$23,$C8,$20,$3F,  3,	7, $F,$78,$FE,$FF,$FF,$F8,$72,$4B,$33
					; DATA XREF: BANK2:9127-o BANK2:9195-o
					; BANK2:9280-o
		.BYTE $C9,$30, $F,$F1,$1F,  7,	0,  0,	0,  0,$37,$37,$12,$18,$1F,$4A ;	ind data used at 8000
		.BYTE $43,$C8,$40,$FF,$20,  1,$1F, $C,	2,  7,	3,  1,	7,  6,$C0,$21
		.BYTE	8,$34,$64,  2,	2,  3,	7,$87,	8,$34,$64,  2,$82,$C0,$E0,$70
		.BYTE $C0,$31,$85,$88,$88, $C,$18,$10,	0,  0,$70,$60,$60,$E0,$C0,$C0
		.BYTE $E0,$D0,$C8,$41,$FE,$F0,	1,$E1,$E0,$C0,$31,$D1,$D8,$38,$F0,$F0
		.BYTE $60,$C9,$22,$20,$E7,$E7,	8,$16,$13,$E0,$F0,$F1,	8,$16,$13,  1
		.BYTE	3,  6,$C0,$32,$D1,$89,	9,$18, $C,  4,	0,  0,	6,  2,	2,  3
		.BYTE	1,  1,	3,  3,$C8,$42,$FE,$F0,$40,$C7,	7,  3,$44,$C3, $B,$1C
		.BYTE  $F, $F,	6, $A,	9,$18,$88,$10,$18, $E,$62,$20,$60,$A0,$A0,$F0
		.BYTE	8, $A,	9,$20,$88,$10,$20,$F0,$60,$20,$80,$10,$10,$20,$C0
_pak_data2:
		.BYTE $C8,$30,	3,  3,$3E,$41,$3E,$41,$C8,$40,	0,$FC,$3E,$3F,$1F,  7
					; DATA XREF: BANK2:911D-o BANK2:914A-o
		.BYTE	3,  1,$C9,$50,	5,$E1,$E1,  1,	2,  2,	6,  1,	2,  2,	6,$C8 ;	ind data used at 8000
		.BYTE $60,$C0,$FC,  2,	1,  2, $F,$17, $A,  2,	1,$C8,$31,  3,	3,  1
		.BYTE $C3,  1,$C3,$C0,$41,$33,$CD,$F6,$FB,$BD,$ED,$F5,$3B,$33, $D,  6
		.BYTE	3,  1,	1,  1,	3,$C9,$51,$ED,$CB,$FB,$47,$F6,$EC,$EC,$EE,$F6
		.BYTE $FB,$47,$F6,$EE,$F2,$F8,$C8,$61,$F0,$FE,$FC,$72,$6D,$3B,$D4, $E
		.BYTE $15,$FC,$72,$68,$18,$C8,$32,$DF,	3,$83,$C7,$10,$10,$10,$10,$28
		.BYTE $BB,$D7,$C9,$42,$83,$FF,$3A,$C6,	1,$C7,	1,$AB,$BB,$D6,$29,$FF
		.BYTE $93,$6D,$BB,$C0,$52,$C7,$7C,$38,$10,$10,$39,$7C,$FF,$C7,$7C,$BB
		.BYTE $83,$82,	1,  0,	0,$C8,$62,  0,$FA,$D6,$EE,$6D,$93,$FE,	1,$C8
		.BYTE $33,  1,	1,$87,$87,$C8,$43,$F1,$FF,$98,$67,$DF,$BF,$7B,$6F,$5E
		.BYTE $B8,$98,$60,$C0,$80,$80,$C9,$53,$6F,$EB,$EB,$C5,$DE,$6E,$EF,$DF
		.BYTE $BE,$C5,$DE,$6E,$EF,$9F,$3E,$C8,$63,$F0,$FE,$7E,$9D,$6C,$B9,$57
		.BYTE $E0,$50,$7E,$9D,$2C,$30,$C8,$34,	3,  3,$F8,  4,$F8,  4,$C8,$44
		.BYTE	0,$F8,$F8,$F8,$F0,$C0,$80,$C9,$54,$40,$E1,$E1,	0,$80,$80,$C0
		.BYTE	0,$80,$80,$C0,$C8,$64,$80,$BC,$80,$80,$E0,$D0,$A0,$80,$88,$10
		.BYTE $28,$18,	0,$44,$44
_pak_data2C:
		.BYTE $4A,$25,$C8,$20,$7E,$7E,	2,  7, $B, $C,$18,$30,	2,  7, $B, $C
					; DATA XREF: BANK2:91EF-o BANK2:920D-o
					; BANK2:927B-o
		.BYTE $18,$30,$4A,$55,$C8,$50,	0,$FF,	1,  3,	7, $F, $F, $F,	5,  3
		.BYTE $42,$24,$C0,$21,$D0,$EE,$5D,$3D,$1B,$69,$70,$68,$D0,$EE,$5D,$3D
		.BYTE $1B,$69,$76,$6A,$42,$34,$C0,$31,$59,$36,$37, $E,	1,  1,	2,  1
		.BYTE $59,$36,$37, $E,$30,$3C,$58,$7C,$42,$44,$C0,$41,	3,  2,	2,  1
		.BYTE	1,  1,	0,  0,$38,$78,$58,$7C,$3C,$7C,$2E, $E,$4A,$54,$C8,$51
		.BYTE $C7,$FF,$B0,$F8,$F8,$FF,$EC,$F4,$F8,$B0,	7,  3,	1,  3,	2,$C8
		.BYTE $12,$1F,	0,  4,	2,  3, $F,$1F,$4B,$23,$C9,$22,$70,$F6,$F6,  0
		.BYTE $E0,$D0,$B8,$60,$E0,$1F,$EF,$D4,$B8,$60,$E0,$C0,$32,$70,$A0,$40
		.BYTE $E0,$E0,$C0,$C2,$C0,$70,$A8,$1C,	6,  3,$10,$12,$10,$C9,$42,$F0
		.BYTE $FF,$87,$60,$7B,$FB,$DC,	9,  3,	7,  7,	4,  0,	0,  0,$4A,$53
		.BYTE $C8,$52,$1F,$F8,$5F,$2F,$CB,  5,	1,$30,$F8,$FE,$FF,$FF,$4A,$63
		.BYTE $C8,$62,$F0,  0,$FB,$5F,$2B,  5,$C8,$13,$1F,  0,$60,$D0,$E0,$F0
		.BYTE $F8,$C0,$33, $E,	5,  2,	7,  7,	3,$43,	2, $E,$15,$38,$E0,$C0
		.BYTE	8,$48,	8,$C9,$43, $F,$FF,$87,	7,$1E,$1F,$3B,$90,$C0,$E0,$E0
		.BYTE $20,  0,	0,  0, $A,$20,$30,$88,	8,$30,$1E,$FE, $C,$1F,$1E,$1E
		.BYTE $7F,$DC,$30,$18,$7F,$DC,$30,$88,$14,$13,	0,$FF,$2C,$7A,$FF,$BD
		.BYTE $7E,$76,$2C,$10,$88,$14,$1B,$70,$2C,$18,$99,$66,$81,$C3,$42
_pak_data87:
		.BYTE $C8,$40,	6,  3,	1,$3F,	3,$3E,$C8,$50,$2F,$9D, $E,  7, $B,  1
					; DATA XREF: BANK2:93B6-o
		.BYTE	1,  8,	7,  7,	3,  1,$C8,$21,	7,  7,	3,  3,$E7,  3,$3F,$7F ;	ind data used at 8000
		.BYTE $C8,$31,$A0,$E0,$7F,$1E,	1,$1E,	1,$C8,$41,$1C, $F,  1,$1F,$FC
		.BYTE $C1,  3,$3E,$E0,$C8,$51,$F7,$8F, $E,$80,$C0,$E8,$94, $E,	6,  3
		.BYTE	1,$80,$C0,$C0,$C9,$61,	1,$F1,$FD,$96,$45, $A,	5,  7,	0,  0
		.BYTE $B4,$6C, $A,  4,	0,$C8,$71,$F0,$F0,  3,	1,$63,$7E,  4,$1F,$7F
		.BYTE $7E,$C0,$12,$1E, $F,$3F,$7F,$5F,$BF,$7F,$36,$1E, $F,$3D,$7E,$5F
		.BYTE $BF,$7F,$36,$C8,$22,$A7,$A7,$13,	7,$B8,$98,$D0,$13,  2,$B8,$D0
		.BYTE $80,$C0,$32,$90,$68,$95, $B,$1C,$76,$7E,$3F,  0,$60,$F1,$F8,$7C
		.BYTE $7E,$7E,$3C,$C8,$42,$77,$BF,$3C,	1,$1F,$FC,$C3,$2C,$F6,	3,$3E
		.BYTE $E0,  3, $C,$63,$C0,$52,$74,$96,	6,  6,$2B,$9B,$45,$3A,$13,$83
		.BYTE $63,$F3,$F9,$D9,$64,$38,$C0,$62, $A,  2,$E1,$E0,$70,$40,$80,$E0
		.BYTE	9,  1,$60,$E0,$F0,$D0,$D8,$E8,$C8,$72,$E0,$E0,$74,$A0,$80,$74
		.BYTE $2C,$80,$C9,$13,$FE,$F9,$F9,$D0,$E8,$FA,$FC,$FC,$DE,$D0,$E8,$FA
		.BYTE $6C,$FC,$DE,$C8,$23,$AE,$AF,$64,$70,  1, $B, $D,	4,$64,$20,  1
		.BYTE	9, $C,$C0,$33,	5, $B,$D7,$66,$81,$80,$A4,$40,	1,  3,$C7, $E
		.BYTE $1C,$3D,$3C,  3,$C0,$43,	1,$1F,$FC,$C3,$3C,$E0,$19,$77,$3E,$E0
		.BYTE	0,  3,$3C,$E3,$1B,$E6,$C9,$53,$E0, $F,$FF,$36,$31,$36,$71,$6E
		.BYTE $E1,$C0,$20,$CE,$C7, $D,	3,$C9,$63,  1,$FC,$FC,$68,$E0,$C0,$80
		.BYTE	0,  2,$CC,$C0,$80,  0,	0,  2,$C8,$24,$3C,$3E,$22,$C7,$7E,$F8
		.BYTE $C0,$3E,$FE,$F8,$C0,$C0,$34,$C0,$C0,$E0,$60,$A0,$40,$20,$10,$80
		.BYTE $80,$C0,$40,$20,$80,$40,$A0,$C9,$44,$10,$BD,$EE,$90,$C8,	8,$40
		.BYTE $E0,$F0,$20,$30,	0,$C0,$E0,  0,$C0,$54,$E8,$FC,$7C,$84,$DA,$1F
		.BYTE  $F,  7,$E8,$7C,	4,$80,$5A, $F,$E7,  3,$C8,$64,	0,$80,	3,$C8
		.BYTE $74,$F8,$B8,$80,$40,$20,$10,$80,$80,$C0,$60,$10,$48,$76,$C8,$75
		.BYTE	0,  0,$88,$10, $A,  5,	0,  9,$28,$88,$18, $A,	7,  1, $A,$20
		.BYTE $80,$80,$88,$10,$12,$F7,$A0,  8,	1,$20,$17,  6,	2,  5,	4,  2
		.BYTE $88,$18,$12,$EC,$F7, $A,$74,$50,$20,$90,$10,$20,$80,$80,$A0,$80
		.BYTE $40,$88,	9,$1A,$7F,$F9,$40, $C,$2E,$5A,$50,  5,$70,$D0,$A0,$84
		.BYTE $25,$A5,$50,$88,	7,$22,	1,$81,$16,$18,$E0,$88,	8,$2A,$84,$F0
		.BYTE $18,$7C,$1E,  6,$E0,  1,$88,$10,$2A,  3,	4,$80,$80,$40,$88,$28
		.BYTE $15,$7F,$BB,$80,$30,  8,$80,  2,	2,$E0,$C0,$F0,$7C,$4C,$B4,$DC
		.BYTE $88,$28,$1D,$C0,$E0,$16,$3C,$60,$C8,$80,$88,$20,$15,$63,$F8,  1
		.BYTE	6,$3E,	7,$19,	1,  1,	1,  7,$88,$20,$1D,$D0,$60,  8,	4, $A
		.BYTE	2,  3,$88,$1A,$30,$7F,$F8,  3, $E,$3E, $C,  4,	1,  1,	3,  3
		.BYTE	3,  1,	1,$88,$22,$30,$7F,$E0,$E0,$10,	4,$E0,$F8,$FC,$FE,$FE
		.BYTE $FF,$FF,$88,$22,$38,$E0,$F8,  1,	1,$43,$3E,$1C,$FE,$FE,$3C
_pak_data_banks_list:
		.BYTE $D7,$EF,$FF,$DD,$77,$F6,$DD,$DF,$DF,$3F,$F6,$EF,$5E,$FF,$EF,$F7
					; DATA XREF: _get_pak_data_bank+14-r
		.BYTE $FE,$E0		; data used at 8000
_pak_data_lib:
		.BYTE	4		; DATA XREF: BANK2:_pak_data_lib_ofs-o
					; ind data used	at 8000
		.WORD _pak_data0	; ind data used	at 8000
		.WORD _pak_param0	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data1	; ind data used	at 8000
		.WORD _pak_param1	; ind data used	at 8000
		.BYTE $15		; ind data used	at 8000
		.WORD _pak_data2	; ind data used	at 8000
		.WORD _pak_param2	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data3	; ind data used	at 8000
		.WORD _pak_param3	; ind data used	at 8000
		.BYTE $B		; ind data used	at 8000
		.WORD _pak_data4	; ind data used	at 8000
		.WORD _pak_param4	; ind data used	at 8000
		.BYTE $17		; ind data used	at 8000
		.WORD _pak_data5	; ind data used	at 8000
		.WORD _pak_param5	; ind data used	at 8000
		.BYTE 6			; ind data used	at 8000
		.WORD _pak_data6	; ind data used	at 8000
		.WORD _pak_param6	; ind data used	at 8000
		.BYTE $F		; ind data used	at 8000
		.WORD _pak_data7	; ind data used	at 8000
		.WORD _pak_param7	; ind data used	at 8000
		.BYTE $B		; ind data used	at 8000
		.WORD _pak_data8	; ind data used	at 8000
		.WORD _pak_param8	; ind data used	at 8000
		.BYTE 6			; ind data used	at 8000
		.WORD _pak_data9	; ind data used	at 8000
		.WORD _pak_param9	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data3	; ind data used	at 8000
		.WORD _pak_paramA	; ind data used	at 8000
		.BYTE $15		; ind data used	at 8000
		.WORD _pak_data2	; ind data used	at 8000
		.WORD _pak_paramB	; ind data used	at 8000
		.BYTE $17		; ind data used	at 8000
		.WORD _pak_data5	; ind data used	at 8000
		.WORD _pak_paramC	; ind data used	at 8000
		.BYTE $16		; ind data used	at 8000
		.WORD _pak_dataD	; ind data used	at 8000
		.WORD _pak_paramD	; ind data used	at 8000
		.BYTE $11		; ind data used	at 8000
		.WORD _pak_dataE	; ind data used	at 8000
		.WORD _pak_paramE	; ind data used	at 8000
		.BYTE $14		; ind data used	at 8000
		.WORD _pak_dataF	; ind data used	at 8000
		.WORD _pak_paramF	; ind data used	at 8000
		.BYTE $B		; ind data used	at 8000
		.WORD _pak_data8	; ind data used	at 8000
		.WORD _pak_param10	; ind data used	at 8000
		.BYTE $F		; ind data used	at 8000
		.WORD _pak_data11	; ind data used	at 8000
		.WORD _pak_param11	; ind data used	at 8000
		.BYTE $10		; ind data used	at 8000
		.WORD _pak_data12	; ind data used	at 8000
		.WORD _pak_param12	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data13	; ind data used	at 8000
		.WORD _pak_param13	; ind data used	at 8000
		.BYTE $16		; ind data used	at 8000
		.WORD _pak_dataD	; ind data used	at 8000
		.WORD _pak_param14	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data1	; ind data used	at 8000
		.WORD _pak_param15	; ind data used	at 8000
		.BYTE $14		; ind data used	at 8000
		.WORD _pak_dataF	; ind data used	at 8000
		.WORD _pak_param16	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data13	; ind data used	at 8000
		.WORD _pak_param17	; ind data used	at 8000
		.BYTE $10		; ind data used	at 8000
		.WORD _pak_data18	; ind data used	at 8000
		.WORD _pak_param18	; ind data used	at 8000
		.BYTE $11		; ind data used	at 8000
		.WORD _pak_dataE	; ind data used	at 8000
		.WORD _pak_param19	; ind data used	at 8000
		.BYTE $B		; ind data used	at 8000
		.WORD _pak_data4	; ind data used	at 8000
		.WORD _pak_param1A	; ind data used	at 8000
		.BYTE $19		; ind data used	at 8000
		.WORD _pak_data1B	; ind data used	at 8000
		.WORD _pak_param1B	; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _pak_data1C	; ind data used	at 8000
		.WORD _pak_param1C	; ind data used	at 8000
		.BYTE $17		; ind data used	at 8000
		.WORD _pak_data5	; ind data used	at 8000
		.WORD _pak_param1D	; ind data used	at 8000
		.BYTE $29		; ind data used	at 8000
		.WORD _pak_data1E	; ind data used	at 8000
		.WORD _pak_param1E	; ind data used	at 8000
		.BYTE $11		; ind data used	at 8000
		.WORD _pak_data1F	; ind data used	at 8000
		.WORD _pak_param1F	; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _pak_data20	; ind data used	at 8000
		.WORD _pak_param20	; ind data used	at 8000
		.BYTE $F		; ind data used	at 8000
		.WORD _pak_data11	; ind data used	at 8000
		.WORD _pak_param21	; ind data used	at 8000
		.BYTE $12
		.WORD _pak_data22
		.WORD _pak_param22
		.BYTE $16		; ind data used	at 8000
		.WORD _pak_dataD	; ind data used	at 8000
		.WORD _pak_param23	; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _pak_data20	; ind data used	at 8000
		.WORD _pak_param24	; ind data used	at 8000
		.BYTE $13
		.WORD _pak_data13
		.WORD _pak_param25
		.BYTE $B
		.WORD _pak_data8
		.WORD _pak_param26
		.BYTE $14
		.WORD _pak_dataF
		.WORD _pak_param27
		.BYTE $12
		.WORD _pak_data22
		.WORD _pak_param28
		.BYTE $10
		.WORD _pak_data12
		.WORD _pak_param29
		.BYTE $13
		.WORD _pak_data3
		.WORD _pak_param2A
		.BYTE 6
		.WORD _pak_data9
		.WORD _pak_param2B
		.BYTE $12
		.WORD _pak_data2C
		.WORD _pak_param2C
		.BYTE $13
		.WORD _pak_data1C
		.WORD _pak_param2D
		.BYTE $F
		.WORD _pak_data7
		.WORD _pak_param2E
		.BYTE $29
		.WORD _pak_data1E
		.WORD _pak_param2F
		.BYTE $20
		.WORD _pak_data30
		.WORD _pak_param30
		.BYTE 4
		.WORD _pak_data0
		.WORD _pak_param31
		.BYTE $12
		.WORD _pak_data2C
		.WORD _pak_param32
		.BYTE $2B
		.WORD _pak_data33
		.WORD _pak_param33
		.BYTE $15
		.WORD _pak_data34
		.WORD _pak_param34
		.BYTE $12
		.WORD _pak_data22
		.WORD _pak_param35
		.BYTE $1A		; ind data used	at 8000
		.WORD _pak_data36	; ind data used	at 8000
		.WORD _pak_param36	; ind data used	at 8000
		.BYTE $2B
		.WORD _pak_data33
		.WORD _pak_param37
		.BYTE $1C
		.WORD _pak_data38
		.WORD _pak_param38
		.BYTE 8
		.WORD _pak_data39
		.WORD _pak_param39
		.BYTE $27
		.WORD _pak_data3A
		.WORD _pak_param3A
		.BYTE $11
		.WORD _pak_dataE
		.WORD _pak_param3B
		.BYTE $1C
		.WORD _pak_data3C
		.WORD _pak_param3C
		.BYTE $1C
		.WORD _pak_data38
		.WORD _pak_param3D
		.BYTE $19
		.WORD _pak_data1B
		.WORD _pak_param3E
		.BYTE 8
		.WORD _pak_data39
		.WORD _pak_param3F
		.BYTE 6
		.WORD _pak_data9
		.WORD _pak_param40
		.BYTE $13
		.WORD _pak_data41
		.WORD _pak_param41
		.BYTE $22
		.WORD _pak_data42
		.WORD _pak_param42
		.BYTE $F
		.WORD _pak_data11
		.WORD _pak_param43
		.BYTE $13
		.WORD _pak_data41
		.WORD _pak_param44
		.BYTE $20
		.WORD _pak_data30
		.WORD _pak_param45
		.BYTE $1C
		.WORD _pak_data46
		.WORD _pak_param46
		.BYTE $1D		; ind data used	at 8000
		.WORD _pak_data47	; ind data used	at 8000
		.WORD _pak_param47	; ind data used	at 8000
		.BYTE $12
		.WORD _pak_data2C
		.WORD _pak_param48
		.BYTE $B
		.WORD _pak_data4
		.WORD _pak_param49
		.BYTE $1D
		.WORD _pak_data47
		.WORD _pak_param4A
		.BYTE $1C
		.WORD _pak_data38
		.WORD _pak_param4B
		.BYTE $19
		.WORD _pak_data1B
		.WORD _pak_param4C
		.BYTE $2B
		.WORD _pak_data33
		.WORD _pak_param4D
		.BYTE $1C
		.WORD _pak_data4E
		.WORD _pak_param4E
		.BYTE $1B
		.WORD _pak_data4F
		.WORD _pak_param4F
		.BYTE $1C
		.WORD _pak_data3C
		.WORD _pak_param50
		.BYTE $10
		.WORD _pak_data18
		.WORD _pak_param51
		.BYTE $1C
		.WORD _pak_data4E
		.WORD _pak_param52
		.BYTE $14		; ind data used	at 8000
		.WORD _pak_data53	; ind data used	at 8000
		.WORD _pak_param53	; ind data used	at 8000
		.BYTE $29
		.WORD _pak_data1E
		.WORD _pak_param54
		.BYTE $19
		.WORD _pak_data55
		.WORD _pak_param55
		.BYTE $20
		.WORD _pak_data30
		.WORD _pak_param56
		.BYTE $15		; ind data used	at 8000
		.WORD _pak_data57	; ind data used	at 8000
		.WORD _pak_param57	; ind data used	at 8000
		.BYTE $1C
		.WORD _pak_data46
		.WORD _pak_param58
		.BYTE $1F
		.WORD _pak_data4F
		.WORD _pak_param59
		.BYTE $19
		.WORD _pak_data55
		.WORD _pak_param5A
		.BYTE $2B
		.WORD _pak_data3A
		.WORD _pak_param5B
		.BYTE $3C
		.WORD _pak_data5C
		.WORD _pak_param5C
		.BYTE $10
		.WORD _pak_data12
		.WORD _pak_param5D
		.BYTE $22
		.WORD _pak_data1F
		.WORD _pak_param5E
		.BYTE $15
		.WORD _pak_data34
		.WORD _pak_param5F
		.BYTE $22
		.WORD _pak_data42
		.WORD _pak_param60
		.BYTE $1E
		.WORD _pak_data61
		.WORD _pak_param61
		.BYTE $1A
		.WORD _pak_data36
		.WORD _pak_param62
		.BYTE $1E
		.WORD _pak_data61
		.WORD _pak_param63
		.BYTE $10
		.WORD _pak_data18
		.WORD _pak_param64
		.BYTE $24
		.WORD _pak_data65
		.WORD _pak_param65
		.BYTE $33
		.WORD _pak_data66
		.WORD _pak_param66
		.BYTE $2B
		.WORD _pak_data3A
		.WORD _pak_param67
		.BYTE 4
		.WORD _pak_data0
		.WORD _pak_param68
		.BYTE $C		; ind data used	at 8000
		.WORD _pak_data69	; ind data used	at 8000
		.WORD _pak_param69	; ind data used	at 8000
		.BYTE $10
		.WORD _pak_data18
		.WORD _pak_param6A
		.BYTE $1F
		.WORD _pak_data4F
		.WORD _pak_param6B
		.BYTE 6			; ind data used	at 8000
		.WORD _pak_data6	; ind data used	at 8000
		.WORD _pak_param6C	; ind data used	at 8000
		.BYTE $1D
		.WORD _pak_data47
		.WORD _pak_param6D
		.BYTE $2A
		.WORD _pak_data6E
		.WORD _pak_param6E
		.BYTE $44
		.WORD _pak_data5C
		.WORD _pak_param6F
		.BYTE $1C
		.WORD _pak_data4E
		.WORD _pak_param70
		.BYTE $33
		.WORD _pak_data71
		.WORD _pak_param71
		.BYTE $13
		.WORD _pak_data41
		.WORD _pak_param72
		.BYTE $22
		.WORD _pak_data42
		.WORD _pak_param73
		.BYTE $1C		; ind data used	at 8000
		.WORD _pak_data46	; ind data used	at 8000
		.WORD _pak_param74	; ind data used	at 8000
		.BYTE $33		; ind data used	at 8000
		.WORD _pak_data66	; ind data used	at 8000
		.WORD _pak_param75	; ind data used	at 8000
		.BYTE $2A
		.WORD _pak_data6E
		.WORD _pak_param76
		.BYTE $F
		.WORD _pak_data7
		.WORD _pak_param77
		.BYTE $14
		.WORD _pak_data53
		.WORD _pak_param78
		.BYTE $28
		.WORD _pak_data79
		.WORD _pak_param79
		.BYTE $24
		.WORD _pak_data65
		.WORD _pak_param7A
		.BYTE $44
		.WORD _pak_data5C
		.WORD _pak_param7B
		.BYTE $17
		.WORD _pak_data7C
		.WORD _pak_param7C
		.BYTE $28
		.WORD _pak_data79
		.WORD _pak_param7D
		.BYTE $33
		.WORD _pak_data71
		.WORD _pak_param7E
		.BYTE $2A
		.WORD _pak_data6E
		.WORD _pak_param7F
		.BYTE $1E
		.WORD _pak_data61
		.WORD _pak_param80
		.BYTE $24		; ind data used	at 8000
		.WORD _pak_data65	; ind data used	at 8000
		.WORD _pak_param81	; ind data used	at 8000
		.BYTE $51		; ind data used	at 8000
		.WORD _pak_data82	; ind data used	at 8000
		.WORD _pak_param82	; ind data used	at 8000
		.BYTE $33		; ind data used	at 8000
		.WORD _pak_data71	; ind data used	at 8000
		.WORD _pak_param83	; ind data used	at 8000
		.BYTE $51
		.WORD _pak_data82
		.WORD _pak_param84
		.BYTE $62		; ind data used	at 8000
		.WORD _pak_data85	; ind data used	at 8000
		.WORD _pak_param85	; ind data used	at 8000
		.BYTE $62
		.WORD _pak_data85
		.WORD _pak_param86
		.BYTE $2B		; ind data used	at 8000
		.WORD _pak_data87	; ind data used	at 8000
		.WORD _pak_param87	; ind data used	at 8000
		.BYTE $2B		; ind data used	at 8000
		.WORD _pak_data33	; ind data used	at 8000
		.WORD _pak_param88	; ind data used	at 8000
		.BYTE $2B
		.WORD _pak_data33
		.WORD _pak_param89
		.BYTE $19		; ind data used	at 8000
		.WORD _pak_data1B	; ind data used	at 8000
		.WORD _pak_param8A	; ind data used	at 8000
_pak_param0:
		.BYTE $10,$30,$15,$1C	; DATA XREF: BANK2:9115-o
					; ind data used	at 8000
_pak_param1:
		.BYTE $11, $F,$10, $F,$30,$27,$12 ; DATA XREF: BANK2:911A-o
					; ind data used	at 8000
_pak_param2:
		.BYTE $11, $F,$15, $F,$36,$26,$30 ; DATA XREF: BANK2:911F-o
					; ind data used	at 8000
_pak_param3:
		.BYTE $11,$30,$31, $F,$17,  6,$28 ; DATA XREF: BANK2:9124-o
					; ind data used	at 8000
_pak_param4:
		.BYTE $11,$30,$11, $F,$15,$2B,$12 ; DATA XREF: BANK2:9129-o
					; ind data used	at 8000
_pak_param5:
		.BYTE $11,$15, $F, $F,$30,$29,$26 ; DATA XREF: BANK2:912E-o
					; ind data used	at 8000
_pak_param7:
		.BYTE $11,$36, $F, $F,$26,  0,$36 ; DATA XREF: BANK2:9138-o
					; ind data used	at 8000
_pak_param6:
		.BYTE $10,$30,$29,$1A	; DATA XREF: BANK2:9133-o
					; ind data used	at 8000
_pak_param8:
		.BYTE $11, $F,$25,$13,$30,$16,$1C ; DATA XREF: BANK2:913D-o
					; ind data used	at 8000
_pak_param9:
		.BYTE $10,$11,$27,$30	; DATA XREF: BANK2:9142-o
					; ind data used	at 8000
_pak_paramA:
		.BYTE $11,$25,$2A, $F,$10,  0,$11 ; DATA XREF: BANK2:9147-o
					; ind data used	at 8000
_pak_paramB:
		.BYTE $11, $F,$15, $F,$30,$37,$13 ; DATA XREF: BANK2:914C-o
					; ind data used	at 8000
_pak_paramC:
		.BYTE $11,$13, $F, $F,$37,$2C,$28 ; DATA XREF: BANK2:9151-o
					; ind data used	at 8000
_pak_paramD:
		.BYTE $11,$36,$27,$16,$13,$2A,$24 ; DATA XREF: BANK2:9156-o
					; ind data used	at 8000
_pak_paramE:
		.BYTE $11,$30, $C, $F,	7,$3A,$1C ; DATA XREF: BANK2:915B-o
					; ind data used	at 8000
_pak_paramF:
		.BYTE $10,$30,$1C,$15	; DATA XREF: BANK2:9160-o
					; ind data used	at 8000
_pak_param10:
		.BYTE $11, $F,$10,$15,$30,$2B,$19 ; DATA XREF: BANK2:9165-o
					; ind data used	at 8000
_pak_param11:
		.BYTE $11, $F, $F,$13,$30,$26,$16 ; DATA XREF: BANK2:916A-o
					; ind data used	at 8000
_pak_param12:
		.BYTE $10,$30,$10,  0	; DATA XREF: BANK2:916F-o
					; ind data used	at 8000
_pak_param13:
		.BYTE $11, $F,$36, $F,$38,$18,$16 ; DATA XREF: BANK2:9174-o
					; ind data used	at 8000
_pak_param14:
		.BYTE $11,$30,$26,$24,	0,$1C,$3B ; DATA XREF: BANK2:9179-o
					; ind data used	at 8000
_pak_param1B:
		.BYTE $11,$15, $F, $F,$30,$26,$11 ; DATA XREF: BANK2:919C-o
					; ind data used	at 8000
_pak_param15:
		.BYTE $11, $F,$1C, $F,$3C,$10,$1B ; DATA XREF: BANK2:917E-o
					; ind data used	at 8000
_pak_param16:
		.BYTE $10,$30,$17,$1C	; DATA XREF: BANK2:9183-o
					; ind data used	at 8000
_pak_param17:
		.BYTE $11, $F,$26, $F,$31,$2C,$13 ; DATA XREF: BANK2:9188-o
					; ind data used	at 8000
_pak_param2B:
		.BYTE $10,$15,$2B,$30	; DATA XREF: BANK2:91EC-o
_pak_param19:
		.BYTE $11,$30,	0, $F,	2,$1C,$16 ; DATA XREF: BANK2:9192-o
					; ind data used	at 8000
_pak_param1A:
		.BYTE $11,$30,$24, $F,$2C,$1C,$18 ; DATA XREF: BANK2:9197-o
					; ind data used	at 8000
_pak_param26:
		.BYTE $11, $F,$1B,$11,$3C,$14,$12 ; DATA XREF: BANK2:91D3-o
_pak_param27:
		.BYTE $10,$26,$15,$11	; DATA XREF: BANK2:91D8-o
_pak_param1D:
		.BYTE $11,$1A, $F, $F,$35,$16,$23 ; DATA XREF: BANK2:91A6-o
					; ind data used	at 8000
_pak_param21:
		.BYTE $11, $F, $F,$25,$30,$2A,$1B ; DATA XREF: BANK2:91BA-o
					; ind data used	at 8000
_pak_param23:
		.BYTE $11,$31,$23,$11,$1B,$15,$26 ; DATA XREF: BANK2:91C4-o
					; ind data used	at 8000
_pak_param20:
		.BYTE $11, $F,$15,$26,$30,$10,$1C ; DATA XREF: BANK2:91B5-o
					; ind data used	at 8000
_pak_param28:
		.BYTE $11, $F,$27, $F,$29,$1A,	7 ; DATA XREF: BANK2:91DD-o
_pak_param1F:
		.BYTE $11,$30,$17, $F,$3C,$2C,$15 ; DATA XREF: BANK2:91B0-o
					; ind data used	at 8000
_pak_param24:
		.BYTE $11, $F, $E,$27,$3C,$2C,$13 ; DATA XREF: BANK2:91C9-o
					; ind data used	at 8000
_pak_param1C:
		.BYTE $11,$37, $F, $F,$30,$26,	6 ; DATA XREF: BANK2:91A1-o
					; ind data used	at 8000
_pak_param22:
		.BYTE $11, $F,$3B, $F,$37,$28,$1C ; DATA XREF: BANK2:91BF-o
_pak_param25:
		.BYTE $11, $F,$37, $F,$23,$14,$12 ; DATA XREF: BANK2:91CE-o
_pak_param1E:
		.BYTE $11,$30,$15, $F,$17,  7,$10 ; DATA XREF: BANK2:91AB-o
					; ind data used	at 8000
_pak_param29:
		.BYTE $10,$30,$27,$16	; DATA XREF: BANK2:91E2-o
_pak_param2A:
		.BYTE $11,$30,$28, $F,$22,$11,$24 ; DATA XREF: BANK2:91E7-o
_pak_param2D:
		.BYTE $11,$25, $F, $F,$37,$1C,	4 ; DATA XREF: BANK2:91F6-o
_pak_param2C:
		.BYTE $11,$16,$30,  0,$37,$26,$2C ; DATA XREF: BANK2:91F1-o
_pak_param2F:
		.BYTE $11,$30,$15, $F,$23,$13,$36 ; DATA XREF: BANK2:9200-o
_pak_param2E:
		.BYTE $11,$1C, $F, $F,$37,$19,$16 ; DATA XREF: BANK2:91FB-o
_pak_param30:
		.BYTE $11,$27,$15,$37,$36,$18,$17 ; DATA XREF: BANK2:9205-o
_pak_param31:
		.BYTE $10,$30, $E,  0	; DATA XREF: BANK2:920A-o
_pak_param33:
		.BYTE $11,$30,	7,$11,$1A,$18,$1C ; DATA XREF: BANK2:9214-o
_pak_param32:
		.BYTE $11,$11,$37,  7,$30,$21,$26 ; DATA XREF: BANK2:920F-o
_pak_param35:
		.BYTE $11, $F,$2C, $F,$15,  4,$1B ; DATA XREF: BANK2:921E-o
_pak_param37:
		.BYTE $11,$30,	7,$15,$11,  0,$26 ; DATA XREF: BANK2:9228-o
_pak_param18:
		.BYTE $10,$10,	0,$3C	; DATA XREF: BANK2:918D-o
					; ind data used	at 8000
_pak_param3A:
		.BYTE $11,$21, $F, $F,$30,$27,$17 ; DATA XREF: BANK2:9237-o
_pak_param36:
		.BYTE $11,  1,$15,$26,$30,$1C,$17 ; DATA XREF: BANK2:9223-o
					; ind data used	at 8000
_pak_param34:
		.BYTE $11, $F,$15, $F,$30,$13,$26 ; DATA XREF: BANK2:9219-o
_pak_param38:
		.BYTE $11,$36, $F, $F,$17,$26,	0 ; DATA XREF: BANK2:922D-o
_pak_param39:
		.BYTE $11,$1A, $F, $F,$30,$29,$17 ; DATA XREF: BANK2:9232-o
_pak_param3B:
		.BYTE $11,$30,	6, $F,$14,$22,	0 ; DATA XREF: BANK2:923C-o
_pak_param3C:
		.BYTE $11,$30,$27,$17,$1C,$10,$15 ; DATA XREF: BANK2:9241-o
_pak_param3D:
		.BYTE $11,$30, $F, $F,$13,$27,$16 ; DATA XREF: BANK2:9246-o
_pak_param3E:
		.BYTE $11,$22, $F, $F,$10,$37,	0 ; DATA XREF: BANK2:924B-o
_pak_param3F:
		.BYTE $11, $C, $F, $F,$30,$1C,	0 ; DATA XREF: BANK2:9250-o
_pak_param40:
		.BYTE $10,$30,$2C,$10	; DATA XREF: BANK2:9255-o
_pak_param41:
		.BYTE $10,$30,$1C,$10	; DATA XREF: BANK2:925A-o
_pak_param42:
		.BYTE $11,$38,$25, $F,$30,$10,$2C ; DATA XREF: BANK2:925F-o
_pak_param43:
		.BYTE $11, $F, $F,$1B,$31,  0,$12 ; DATA XREF: BANK2:9264-o
_pak_param44:
		.BYTE $10,$37,$19,$27	; DATA XREF: BANK2:9269-o
_pak_param45:
		.BYTE $11,$27,$15,$37,$30,$10,$22 ; DATA XREF: BANK2:926E-o
_pak_param46:
		.BYTE $11,$30,$15, $F,$37,$18,$1C ; DATA XREF: BANK2:9273-o
_pak_param47:
		.BYTE $11, $C,	0, $F,$1C,$10,$17 ; DATA XREF: BANK2:9278-o
					; ind data used	at 8000
_pak_param48:
		.BYTE $11,$1A,$35,$22,$3B,$2A,$37 ; DATA XREF: BANK2:927D-o
_pak_param49:
		.BYTE $11,$30,$1C, $F,$13,$24,$26 ; DATA XREF: BANK2:9282-o
_pak_param4A:
		.BYTE $11,  0,$37, $F,	2,$1B,$14 ; DATA XREF: BANK2:9287-o
_pak_param4B:
		.BYTE $11,$31, $F, $F,$1C,$3B,$23 ; DATA XREF: BANK2:928C-o
_pak_param4C:
		.BYTE $11,$2B, $F, $F,$26,$30,$15 ; DATA XREF: BANK2:9291-o
_pak_param4D:
		.BYTE $11,$37,$10,$13,$15,$12,$2A ; DATA XREF: BANK2:9296-o
_pak_param4E:
		.BYTE $11,$21, $F, $F,$30,$16,	7 ; DATA XREF: BANK2:929B-o
_pak_param4F:
		.BYTE $11,$2C,$12,$15,$19,$36,$1B ; DATA XREF: BANK2:92A0-o
_pak_param50:
		.BYTE $11,$30,	3,$13,$27,$16,$1B ; DATA XREF: BANK2:92A5-o
_pak_param51:
		.BYTE $10,$11, $C,$26	; DATA XREF: BANK2:92AA-o
_pak_param52:
		.BYTE $11,$25,	0,  0,$30,$3C,$21 ; DATA XREF: BANK2:92AF-o
_pak_param56:
		.BYTE $11,$37,$2B,$30,$32,$21,$15 ; DATA XREF: BANK2:92C3-o
_pak_param54:
		.BYTE $11,$30,$15, $F,$2B,$1B,$17 ; DATA XREF: BANK2:92B9-o
_pak_param55:
		.BYTE $11,$30,$15,$17,$36, $C,$10 ; DATA XREF: BANK2:92BE-o
_pak_param57:
		.BYTE $11,$30,$15, $F,$1C, $C,	3 ; DATA XREF: BANK2:92C8-o
					; ind data used	at 8000
_pak_param59:
		.BYTE $12,$27,$15,$13,$30,$1B,$17,$16,$28,$1C ;	DATA XREF: BANK2:92D2-o
_pak_param58:
		.BYTE $11,$37,$15, $F,$30,  0,$27 ; DATA XREF: BANK2:92CD-o
_pak_param5C:
		.BYTE $11,$37,$26,$30,$10,$17,	7 ; DATA XREF: BANK2:92E1-o
_pak_param5A:
		.BYTE $11,$30,$15,$10,$3A,$16,$1C ; DATA XREF: BANK2:92D7-o
_pak_param5B:
		.BYTE $11,$29,$11,$21,$30,$2C,	1 ; DATA XREF: BANK2:92DC-o
_pak_param5D:
		.BYTE $10,$3C,$2C,$11,$12,$30,$21,$15,$30,$3C, $F,  0,$1B,$27
					; DATA XREF: BANK2:92E6-o
_pak_param5E:
		.BYTE $14,$30,$11,$21,$30,$23,$10,$30,$24,$2B,$27,$26,	7,$37,$26,$15
					; DATA XREF: BANK2:92EB-o
_pak_param60:
		.BYTE $11,$30,$12, $F,$2C,$1C,$1A ; DATA XREF: BANK2:92F5-o
_pak_param5F:
		.BYTE $11, $F,$21, $F,$37,$1B,	0 ; DATA XREF: BANK2:92F0-o
_pak_param65:
		.BYTE $11,$30,	7,$11,	9,$19,$25 ; DATA XREF: BANK2:930E-o
_pak_param61:
		.BYTE $11,$22, $F, $F,$30,$26,$12,$12,$30,$24,$11,$30,$10, $F,$16,$19
					; DATA XREF: BANK2:92FA-o
		.BYTE $27
_pak_param62:
		.BYTE $11,  8,$23,$30,$31,$10, $C ; DATA XREF: BANK2:92FF-o
_pak_param63:
		.BYTE $11,$10, $F, $F,$17,$36,	0 ; DATA XREF: BANK2:9304-o
_pak_param64:
		.BYTE $10,$2B,$1B,$14	; DATA XREF: BANK2:9309-o
_pak_param67:
		.BYTE $11,$12,$15,$2C,$37,$24,	0 ; DATA XREF: BANK2:9318-o
_pak_param66:
		.BYTE $11,$15,	0,$10,$10,  0,$37 ; DATA XREF: BANK2:9313-o
_pak_param84:
		.BYTE $23,$30,$18,$28,$25,$37,$30, $F,$26,$23,$29,$19,$26,$29,$19,$23
					; DATA XREF: BANK2:93A9-o
_pak_param68:
		.BYTE $10,$30, $E,$16	; DATA XREF: BANK2:931D-o
_pak_param69:
		.BYTE $10,$30,$18,$10	; DATA XREF: BANK2:9322-o
					; ind data used	at 8000
_pak_param53:
		.BYTE $11, $F,$15,$26,$30,$10, $C ; DATA XREF: BANK2:92B4-o
					; ind data used	at 8000
_pak_param6A:
		.BYTE $10,$15,	5,$30	; DATA XREF: BANK2:9327-o
_pak_param6B:
		.BYTE $12,$23,	2,$1B,$3C,  0,$2B,$13,$11,$15 ;	DATA XREF: BANK2:932C-o
_pak_param6C:
		.BYTE $10,$30,$10,  0	; DATA XREF: BANK2:9331-o
					; ind data used	at 8000
_pak_param6D:
		.BYTE $11,  7,$35,  0,$30,$15,$1C,$12,$31,$1B,$15,$31,$22, $F,$12,$26
					; DATA XREF: BANK2:9336-o
		.BYTE $2C
_pak_param6E:
		.BYTE $11,$15,	7, $F,$30,$26,$13 ; DATA XREF: BANK2:933B-o
_pak_param6F:
		.BYTE $12,$30,$25,$37,$17, $E, $F,$13,$29,$19 ;	DATA XREF: BANK2:9340-o
_pak_param70:
		.BYTE $11,$23, $F, $F,$30,$37,$27 ; DATA XREF: BANK2:9345-o
_pak_param71:
		.BYTE $10,$30,$27,$21	; DATA XREF: BANK2:934A-o
_pak_param72:
		.BYTE $10,$36,$13,$26	; DATA XREF: BANK2:934F-o
_pak_param73:
		.BYTE $11,$30,$15, $F,$26,$17,$13 ; DATA XREF: BANK2:9354-o
_pak_param74:
		.BYTE $11,$37,$15, $F,$30,$1C,$10 ; DATA XREF: BANK2:9359-o
					; ind data used	at 8000
_pak_param75:
		.BYTE $11,$11,$1B,$2B,$2B,$1B,$24 ; DATA XREF: BANK2:935E-o
					; ind data used	at 8000
_pak_param76:
		.BYTE $11,$21, $C, $F,$30,$10,$16 ; DATA XREF: BANK2:9363-o
_pak_param77:
		.BYTE $11,  6, $F, $F,$22,$14,$2B ; DATA XREF: BANK2:9368-o
_pak_param78:
		.BYTE $11, $F,$15,$26,$30,$37,	7 ; DATA XREF: BANK2:936D-o
_pak_param79:
		.BYTE $11,$30,$37,$26,$13,$26, $C ; DATA XREF: BANK2:9372-o
_pak_param7A:
		.BYTE $11,$30,	1,$26, $C,$1C,$2B ; DATA XREF: BANK2:9377-o
_pak_param7B:
		.BYTE $12,$30,$11,$31,$10, $E, $F,$1B,$13,  3 ;	DATA XREF: BANK2:937C-o
_pak_param7C:
		.BYTE $11,$30,$15, $C,$10,$19,$27 ; DATA XREF: BANK2:9381-o
_pak_param7D:
		.BYTE $11,$31,$37,  5,$18,  0,$10 ; DATA XREF: BANK2:9386-o
_pak_param7E:
		.BYTE $10,$27,	7,$3B	; DATA XREF: BANK2:938B-o
_pak_param7F:
		.BYTE $11,$34,$10, $F,$39,$2B,$1C ; DATA XREF: BANK2:9390-o
_pak_param80:
		.BYTE $11,$2A, $F, $F,$23,$1C,$1A ; DATA XREF: BANK2:9395-o
_pak_param81:
		.BYTE $11,$30,	9,$23,	4,$14,$21 ; DATA XREF: BANK2:939A-o
					; ind data used	at 8000
_pak_param82:
		.BYTE $23,$30,$1C,$2C,$21,$10,$37, $F,	0,$1A,$23,$13,	0,$23,$13,$1A
					; DATA XREF: BANK2:939F-o
					; ind data used	at 8000
_pak_param83:
		.BYTE $10,$14, $C,$30	; DATA XREF: BANK2:93A4-o
					; ind data used	at 8000
_pak_param85:
		.BYTE $23,$30,$26,$16,$30,  0,$16,$30,$2C,$1C,$23,$26,$16, $C,$26,$16
					; DATA XREF: BANK2:93AE-o
					; ind data used	at 8000
_pak_param86:
		.BYTE $23,$3C,$2C,$1C,$3C, $C,$1C,$3C,$21,$11,$21,$2C,$1C,  1,$2C,$1C
					; DATA XREF: BANK2:93B3-o
		.BYTE $11,$30,$15, $C,$10,$19,$27
_pak_param87:
		.BYTE $11,$26,$37,  0,$30,$21,$11 ; DATA XREF: BANK2:93B8-o
					; ind data used	at 8000
_pak_param88:
		.BYTE $11,$37,$10,$13,$19,$27,$1A ; DATA XREF: BANK2:93BD-o
					; ind data used	at 8000
_pak_param89:
		.BYTE $11,$37,$10,$13,$15,$12,$2A ; DATA XREF: BANK2:93C2-o
_pak_param8A:
		.BYTE $11,$2A, $F, $F,$27,$37,$18 ; DATA XREF: BANK2:93C7-o
					; ind data used	at 8000
_pak_data_lib_ofs:
		.WORD	_pak_data_lib	; DATA XREF: sub_39AA9+46-r
					; sub_39AA9+4B-r
					; data used at 8000
off_397AB:
		.WORD byte_400		; DATA XREF: sub_39C5F+DC-r
					; sub_39C5F+E3-r
					; data used at 8000

; =============== S U B	R O U T	I N E =======================================
_get_far_pak_data_ptr_byte_safe:	; CODE XREF: sub_398C7:loc_398DD-p
					; sub_398C7+1A-p sub_39A1E:loc_39A43-p
					; sub_39A1E+30-p sub_39C5F:loc_39C89-p
					; sub_39C5F+42-p sub_39C5F:loc_39CA6-p
					; sub_39C5F+4C-p sub_39C5F+5B-p
					; sub_39C5F:loc_39CEF-p
					; sub_39C5F:loc_39D0C-p
					; sub_39E9E:loc_39ECE-p	sub_39E9E+40-p
					; sub_39E9E:loc_39F19-p	sub_39E9E+CA-p
					; sub_39E9E+D3-p sub_39E9E+FC-p
					; sub_3A056:loc_3A095-p
		TXA				; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		TYA				; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		LDY		#0		; code used as ind data	at 8000
		LDX		#_pak_data_ptr	; code used as ind data	at 8000
		LDA		_tmp_pak_data_bank ; code used as ind data at 8000
		JSR		_get_far_ptr_byte_safe ; code used as ind data at 8000
		STA		word_B7		; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		TAY				; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		word_B7		; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
_inc_pak_data_ptr:			; CODE XREF: sub_398C7+13-p
					; sub_398EA+4-p	sub_39A1E+29-p
					; sub_39C5F+32-p sub_39C5F:loc_39C94-p
					; sub_39C5F+A2-p sub_39C5F+A5-p
					; sub_39E9E+34-p sub_3A056+54-p
					; sub_3A056:loc_3A0AD-p
		INC		_pak_data_ptr	; code used as ind data	at 8000
		BNE		locret_397C8	; code used as ind data	at 8000
		INC		_pak_data_ptr+1	; code used at 8000
locret_397C8:				; CODE XREF: _inc_pak_data_ptr+2-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
; packed data is in banks 2 and	3, so for every	single
; data record only 1 bit is enough to select desired
; bank,	so we pick this	bit here from the res blits list.
_get_pak_data_bank:			; CODE XREF: sub_39A1E+20-p
					; sub_39C5F+11-p sub_39E9E+26-p
					; sub_3A056+39-p
		TYA				; code used at 8000
		PHA				; code used at 8000
		TXA				; code used at 8000
		PHA				; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAX				; code used at 8000
		LDA		_enemy_roster_index_list,X ; code used as ind data at 8000
		PHA				; code used at 8000
		AND		#7		; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		TAY				; code used at 8000
		LDA		_pak_data_banks_list,Y ; code used at 8000
loc_397E0:				; CODE XREF: _get_pak_data_bank+19-j
		ASL		; code used at 8000
		DEX				; code used as ind data	at 8000
		BPL		loc_397E0	; code used at 8000
		LDY		#2		; code used at 8000
		BCC		loc_397E9	; code used at 8000
		INY				; code used at 8000
loc_397E9:				; CODE XREF: _get_pak_data_bank+1D-j
		STY		_tmp_pak_data_bank ; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		PLA				; code used at 8000
		TAY				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s8_screen_hit_blink:		; CODE XREF: sub_692D4+A-P sub_692D4+D-P
					; _bA_s12+D-P _bC_s13+31-P
					; DATA XREF: BANK2:8010-o
		LDX		#3		; code used at 8000
		STX		byte_C8		; code used at 8000
		LDX		#5		; code used at 8000
		BNE		sub_397FE	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s7_screen_spell_blink:		; CODE XREF: sub_9E9C+BE-P
					; sub_3A7E9+19-P sub_68E96+3-P
					; sub_68EC7+3-P	sub_68FEB+4-P
					; sub_69415+3-P	sub_69453+3-P
					; _b6_s1B+23-P _b6_s1B+26-P _bA_s8+3-P
					; _bA_s8+6-P _bA_s8+9-P	sub_F834B+13-P
					; sub_12B7C8+C-P _npc_hndl65+3-P
					; DATA XREF: BANK2:800E-o
		LDX		#1		; code used at 8000
		STX		byte_C8		; code used at 8000
		LDX		#8		; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_397FE:				; CODE XREF: _b2_s8_screen_hit_blink+6-j
		LDA		#$98       ; code used at 8000
		STA		_PPU_MASK	; code used at 8000
loc_39803:				; CODE XREF: sub_397FE+2A-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		sub_3A2E1	; code used at 8000
		LDA		#$10		; code used at 8000
loc_3980A:				; CODE XREF: sub_397FE+12-j
		STA		_ram_pal_buf,X	; code used at 8000
		INX				; code used at 8000
		CPX		#$19		; code used at 8000
		BNE		loc_3980A	; code used at 8000
		JSR		sub_17435B	; code used at 8000
		LDX		byte_C8		; code used as ind data	at 8000
		JSR		_vblank_count	; code used at 8000
		JSR		sub_3A2ED	; code used at 8000
		JSR		sub_17435B	; code used at 8000
		LDX		byte_C8		; code used at 8000
		JSR		_vblank_count	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		BNE		loc_39803	; code used at 8000
		LDA		#$18		; code used at 8000
		STA		_PPU_MASK	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s6_screen_damage_shake:		; CODE XREF: sub_6A57F+30-P
					; _b6_s1B:loc_9BD94-P
					; _b7_s19:loc_B2711-P _bA_s8+F-P
					; _bA_s8+12-P _bA_s8+15-P _bA_s8+21-P
					; _bA_s8+24-P
					; DATA XREF: BANK2:800C-o
		JSR		_vblank		; code used at 8000
		LDA		#2		; code used at 8000
		STA		byte_BA		; code used at 8000
		LDX		#0		; code used at 8000
loc_39839:				; CODE XREF: _b2_s6_screen_damage_shake+43-j
		STX		byte_BB		; code used at 8000
		TXA				; code used at 8000
		LDX		#1		; code used at 8000
		AND		#2		; code used at 8000
		BEQ		loc_39845	; code used at 8000
		LDA		#3		; code used at 8000
		DEX				; code used at 8000
loc_39845:				; CODE XREF: _b2_s6_screen_damage_shake+10-j
		TAY				; code used at 8000
		LDA		byte_6D0,X	; code used at 8000
		CLC				; code used at 8000
		ADC		byte_BA		; code used at 8000
		STA		byte_6D0,X	; code used at 8000
		LDX		#$40       ; code used at 8000
loc_39851:				; CODE XREF: _b2_s6_screen_damage_shake+2F-j
		LDA		_spr_ram,Y	; code used at 8000
		SEC				; code used at 8000
		SBC		byte_BA		; code used at 8000
		STA		_spr_ram,Y	; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		INY				; code used at 8000
		DEX				; code used at 8000
		BNE		loc_39851	; code used at 8000
		LDX		#2		; code used at 8000
		JSR		_vblank_count	; code used at 8000
		LDA		byte_BA		; code used at 8000
		EOR		#$FF		; code used at 8000
		STA		byte_BA		; code used at 8000
		INC		byte_BA		; code used at 8000
		LDX		byte_BB		; code used at 8000
		INX				; code used at 8000
		CPX		#$C		; code used at 8000
		BNE		loc_39839	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39876:				; CODE XREF: _b2_s0+14-p _b2_s9+4-p
		LDA		#0		; code used at 8000
		STA		byte_4C1	; code used at 8000
		LDX		#$19		; code used at 8000
loc_3987D:				; CODE XREF: sub_39876+A-j
		STA		_pak_data_ptr,X	; code used at 8000
		DEX				; code used at 8000
		BPL		loc_3987D	; code used at 8000
		LDX		#$34       ; code used at 8000
loc_39884:				; CODE XREF: sub_39876+12-j
		STA		byte_4BF,X	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_39884	; code used at 8000
		LDX		#$20       ; code used at 8000
loc_3988C:				; CODE XREF: sub_39876+1A-j
		STA		byte_696,X	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_3988C	; code used at 8000
		STX		byte_4F5	; code used at 8000
		INX				; code used at 8000
		STX		byte_4F6	; code used at 8000
		LDA		#1		; code used at 8000
		STA		byte_4F3	; code used at 8000
		LDA		#$90       ; code used at 8000
		STA		byte_4F4	; code used at 8000
		LDA		#$F		; code used at 8000
		STA		_ram_pal_buf	; code used at 8000
		LDA		byte_6E0	; code used at 8000
		LDX		#3		; code used at 8000
loc_398AD:				; CODE XREF: sub_39876+3B-j
		STA		_ram_pal_buf,X	; code used at 8000
		DEX				; code used at 8000
		BNE		loc_398AD	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_398B3:				; CODE XREF: sub_39E9E+71-p
					; sub_3A056:loc_3A0C1-p
		LDA		#0		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
loc_398B6:				; CODE XREF: sub_398B3+9-j
		STA		byte_400,X	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#$70       ; code used as ind data at 8000
		BCC		loc_398B6	; code used as ind data	at 8000
		LDX		#$C		; code used as ind data	at 8000
loc_398C0:				; CODE XREF: sub_398B3+11-j
		STA		byte_4C2,X	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		BNE		loc_398C0	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_398C7:				; CODE XREF: sub_39A1E+3D-p
					; sub_39C5F:loc_39D85-p
					; sub_39E9E:loc_39EEC-p
					; sub_39E9E:loc_3A038-p
					; sub_3A056:loc_3A0B7-p
		LSR		; code used as ind data	at 8000
		AND		#4		; code used as ind data	at 8000
		BNE		loc_398D8	; code used as ind data	at 8000
		LDA		#$10		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		_pak_data_ptr	; code used as ind data	at 8000
		STA		_pak_data_ptr	; code used as ind data	at 8000
		BCC		locret_398D7	; code used as ind data	at 8000
		INC		_pak_data_ptr+1	; code used at 8000
locret_398D7:				; CODE XREF: sub_398C7+C-j
		RTS				; code used as ind data	at 8000
loc_398D8:				; CODE XREF: sub_398C7+3-j
		BCC		loc_398DD	; code used as ind data	at 8000
		JSR		_inc_pak_data_ptr ; code used as ind data at 8000
loc_398DD:				; CODE XREF: sub_398C7:loc_398D8-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		TAY				; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		JSR		sub_398EA	; code used as ind data	at 8000
		TYA				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_398EA:				; CODE XREF: sub_398C7+1F-p
					; sub_398EA:loc_398F2-j
		ASL		; code used as ind data	at 8000
		BCC		loc_398F2	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		JSR		_inc_pak_data_ptr ; code used as ind data at 8000
		PLA				; code used as ind data	at 8000
loc_398F2:				; CODE XREF: sub_398EA+1-j
		BNE		sub_398EA	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_398F5:				; CODE XREF: _b2_s5+5-p	_b2_s4+5-p
					; sub_399EC-p
		DEY				; code used at 8000
		CPY		#8		; code used at 8000
		BCS		loc_398FE	; code used at 8000
		CPX		#4		; code used at 8000
		BCC		loc_39901	; code used at 8000
loc_398FE:				; CODE XREF: sub_398F5+3-j
		LDY		#0
		RTS
loc_39901:				; CODE XREF: sub_398F5+7-j
		TYA				; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used at 8000
		AND		#$1C		; code used at 8000
		STA		byte_BA		; code used at 8000
		TXA				; code used at 8000
		AND		#3		; code used at 8000
		ORA		byte_BA		; code used at 8000
		STA		byte_BA		; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#8		; code used at 8000
loc_39913:				; CODE XREF: sub_398F5+2E-j
		LDA		byte_697,X	; code used as ind data	at 8000
		BPL		loc_3991E	; code used at 8000
		AND		#$1F		; code used at 8000
		CMP		byte_BA		; code used as ind data	at 8000
		BEQ		loc_39937	; code used as ind data	at 8000
loc_3991E:				; CODE XREF: sub_398F5+21-j
		INX				; code used at 8000
		INX				; code used as ind data	at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_39913	; code used at 8000
		LDX		#0		; code used at 8000
		LDY		#8		; code used at 8000
loc_39929:				; CODE XREF: sub_398F5+3E-j
		LDA		byte_697,X	; code used at 8000
		BPL		loc_39935	; code used at 8000
		INX				; code used at 8000
		INX				; code used as ind data	at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		DEY				; code used at 8000
		BNE		loc_39929	; code used at 8000
loc_39935:				; CODE XREF: sub_398F5+37-j
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_39937:				; CODE XREF: sub_398F5+27-j
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s5:					; DATA XREF: BANK2:800A-o
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		INY				; code used at 8000
		JSR		sub_398F5	; code used at 8000
		BCC		loc_39944	; code used at 8000
		RTS
loc_39944:				; CODE XREF: _b2_s5+8-j
		STX		byte_BA		; code used at 8000
		LDX		#4		; code used at 8000
loc_39948:				; CODE XREF: _b2_s5+1A-j
		TXA				; code used at 8000
		PHA				; code used at 8000
		JSR		sub_3A056	; code used at 8000
		JSR		sub_39E9E	; code used at 8000
		PLA				; code used at 8000
		TAX				; code used at 8000
		DEX				; code used at 8000
		BNE		loc_39948	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s4:					; CODE XREF: sub_3A157+26-p
					; DATA XREF: BANK2:8008-o
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		INY				; code used at 8000
		JSR		sub_398F5	; code used at 8000
		BCC		loc_39961	; code used at 8000
		RTS				; code used at 8000
loc_39961:				; CODE XREF: _b2_s4+8-j
		STX		byte_BA		; code used at 8000
		JSR		sub_3A056	; code used at 8000
		LDX		byte_BA		; code used at 8000
		LDA		byte_697,X	; code used at 8000
		AND		#$7F       ; code used at 8000
		STA		byte_697,X	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s3:					; CODE XREF: sub_3A157:loc_3A1A8-p
					; DATA XREF: BANK2:8006-o
		LDX		word_B7+1	; code used at 8000
		LDY		byte_B9		; code used at 8000
		INY				; code used at 8000
		JSR		_b2_s1		; code used at 8000
		BCS		locret_39988	; code used at 8000
		LDA		byte_697,X	; code used at 8000
		ORA		#$80       ; code used at 8000
		STA		byte_697,X	; code used at 8000
		JSR		sub_39E9E	; code used at 8000
		CLC				; code used at 8000
locret_39988:				; CODE XREF: _b2_s3+8-j
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s2:					; CODE XREF: sub_8683+75-P
					; DATA XREF: BANK2:8004-o
		JSR		sub_17435B	; code used at 8000
		LDX		#0		; code used as ind data	at 8000
loc_3998E:				; CODE XREF: _b2_s2+17-j
		STX		byte_BA		; code used at 8000
		LDA		byte_697,X	; code used at 8000
		BPL		loc_3999A	; code used as ind data	at 8000
		JSR		sub_39E9E	; code used at 8000
		LDX		byte_BA		; code used at 8000
loc_3999A:				; CODE XREF: _b2_s2+A-j
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		INX				; code used at 8000
		CPX		#$20       ; code used at 8000
		BNE		loc_3998E	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
_b2_s1:					; CODE XREF: _b2_s3+5-p	sub_3A157+21-p
					; DATA XREF: BANK2:8002-o
		LDX		word_B7+1	; code used at 8000
		LDA		_enemy_roster_index_list,X ; code used at 8000
		CMP		#$FF		; code used as ind data	at 8000
		BEQ		locret_399EB	; code used at 8000
		LDY		byte_B9		; code used at 8000
		INY				; code used at 8000
		BNE		loc_399CD	; code used at 8000
		TXA
		PHA
		STA		byte_B9
		LDY		#0
		LDX		#0
loc_399BA:				; CODE XREF: _b2_s1+23-j
		LDA		byte_697,X
		AND		#3
		CMP		byte_B9
		BNE		loc_399C4
		INY
loc_399C4:				; CODE XREF: _b2_s1+1D-j
		INX
		CPX		#8
		BNE		loc_399BA
		STY		byte_B9
		PLA
		TAX
loc_399CD:				; CODE XREF: _b2_s1+C-j
		JSR		sub_399EC	; code used at 8000
		BCS		locret_399EB	; code used at 8000
		LDX		byte_BA		; code used at 8000
		LDY		byte_BB		; code used at 8000
		LDA		byte_4CF,Y	; code used at 8000
		STA		byte_699,X	; code used at 8000
		LDA		byte_4C0	; code used at 8000
		BMI		locret_399EB	; code used as ind data	at 8000
		JSR		sub_39D93	; code used at 8000
		BCS		locret_399EB	; code used at 8000
		LDX		byte_BA		; code used at 8000
		STA		byte_698,X	; code used at 8000
locret_399EB:				; CODE XREF: _b2_s1+7-j	_b2_s1+2C-j
					; _b2_s1+3B-j _b2_s1+40-j
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_399EC:				; CODE XREF: _b2_s1:loc_399CD-p
		JSR		sub_398F5	; code used at 8000
		BCS		loc_399F3	; code used at 8000
		SEC
		RTS
loc_399F3:				; CODE XREF: sub_399EC+3-j
		TYA				; code used at 8000
		BNE		loc_399F8	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_399F8:				; CODE XREF: sub_399EC+8-j
		LDA		byte_BA		; code used at 8000
		STA		byte_697,X	; code used at 8000
		STX		byte_BA		; code used at 8000
		AND		#3		; code used at 8000
		STA		byte_BB		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_BB		; code used at 8000
		STA		byte_BB		; code used at 8000
		TAY				; code used at 8000
		LDA		byte_4CF,Y	; code used at 8000
		BNE		loc_39A1B	; code used at 8000
		JSR		sub_39AA9	; code used at 8000
		LDY		byte_BB		; code used at 8000
		LDX		byte_BA		; code used at 8000
		BCC		loc_39A1B	; code used at 8000
		RTS				; code used at 8000
loc_39A1B:				; CODE XREF: sub_399EC+23-j
					; sub_399EC+2C-j
		STA		byte_699,X	; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39A1E:				; CODE XREF: _b2_sA+1D-p
		LDA		byte_4D2,Y	; code used at 8000
		CLC				; code used at 8000
		BNE		loc_39A25	; code used at 8000
		RTS				; code used at 8000
loc_39A25:				; CODE XREF: sub_39A1E+4-j
		ADC		byte_4C1	; code used at 8000
		CMP		#$41       ; code used as ind data at 8000
		BCC		loc_39A2D	; code used at 8000
		RTS
loc_39A2D:				; CODE XREF: sub_39A1E+C-j
		LDA		byte_4D7,Y	; code used at 8000
		STA		byte_BD		; code used at 8000
		LDA		word_4D5,Y	; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		LDA		word_4D5+1,Y	; code used at 8000
		STA		_pak_data_ptr+1	; code used at 8000
		TYA				; code used at 8000
		TAX				; code used at 8000
		JSR		_get_pak_data_bank ; code used at 8000
		LDX		#0		; code used at 8000
loc_39A43:				; CODE XREF: sub_39A1E+3B-j
					; sub_39A1E+42-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
		PHA				; code used as ind data	at 8000
		JSR		_inc_pak_data_ptr ; code used as ind data at 8000
		AND		#$40       ; code used as ind data at 8000
		BNE		loc_39A58	; code used as ind data	at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
		CLC				; code used at 8000
		ADC		#$4F       ; code used at 8000
		STA		byte_400,X	; code used at 8000
		INX				; code used at 8000
loc_39A58:				; CODE XREF: sub_39A1E+2E-j
		PLA				; code used as ind data	at 8000
		BPL		loc_39A43	; code used as ind data	at 8000
		JSR		sub_398C7	; code used as ind data	at 8000
		DEC		byte_BD		; code used as ind data	at 8000
		BNE		loc_39A43	; code used as ind data	at 8000
		STX		byte_BC		; code used at 8000
		LDA		#$48       ; code used at 8000
		STA		byte_BD		; code used at 8000
loc_39A68:				; CODE XREF: sub_39A1E+87-j
		LDX		#0		; code used as ind data	at 8000
		LDA		byte_4C1	; code used as ind data	at 8000
		BEQ		loc_39A88	; code used as ind data	at 8000
		STA		byte_BE		; code used as ind data	at 8000
		LDX		#0		; code used as ind data	at 8000
		LDY		#0		; code used as ind data	at 8000
loc_39A75:				; CODE XREF: sub_39A1E+68-j
		LDA		_spr_ram,Y	; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		byte_BD		; code used as ind data	at 8000
		CMP		#8		; code used as ind data	at 8000
		BCS		loc_39A80	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
loc_39A80:				; CODE XREF: sub_39A1E+5F-j
		INY				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
		DEC		byte_BE		; code used as ind data	at 8000
		BNE		loc_39A75	; code used as ind data	at 8000
loc_39A88:				; CODE XREF: sub_39A1E+4F-j
		LDY		#0		; code used as ind data	at 8000
loc_39A8A:				; CODE XREF: sub_39A1E+7A-j
		LDA		byte_400,Y	; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		byte_BD		; code used as ind data	at 8000
		CMP		#8		; code used as ind data	at 8000
		BCS		loc_39A95	; code used as ind data	at 8000
		INX				; code used at 8000
loc_39A95:				; CODE XREF: sub_39A1E+74-j
		INY				; code used as ind data	at 8000
		CPY		byte_BC		; code used as ind data	at 8000
		BNE		loc_39A8A	; code used as ind data	at 8000
		CPX		#9		; code used as ind data	at 8000
		BCC		loc_39A9F	; code used as ind data	at 8000
		RTS				; code used at 8000
loc_39A9F:				; CODE XREF: sub_39A1E+7E-j
		INC		byte_BD		; code used as ind data	at 8000
		LDA		byte_BD		; code used as ind data	at 8000
		CMP		#$C8       ; code used as ind data at 8000
		BNE		loc_39A68	; code used as ind data	at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39AA9:				; CODE XREF: sub_399EC+25-p
		LDA		byte_4C0	; code used at 8000
		AND		#$7F       ; code used at 8000
		BEQ		loc_39AB2	; code used at 8000
		SEC
		RTS
loc_39AB2:				; CODE XREF: sub_39AA9+5-j
		LDX		byte_BB		; code used at 8000
		LDA		byte_4CF,X	; code used at 8000
		BEQ		loc_39ABB	; code used at 8000
		SEC
		RTS
loc_39ABB:				; CODE XREF: sub_39AA9+E-j
		LDA		byte_4F5	; code used at 8000
		STA		byte_BD		; code used at 8000
		LDA		byte_4F6	; code used at 8000
		STA		byte_BC		; code used at 8000
		LDA		byte_4F3	; code used at 8000
		STA		byte_BE		; code used at 8000
		LDA		byte_4F4	; code used at 8000
		STA		byte_BF		; code used at 8000
		LDA		#0		; code used at 8000
		STA		_pak_data_ptr+1	; code used at 8000
		LDA		byte_BB		; code used at 8000
		AND		#3		; code used at 8000
		TAY				; code used at 8000
		LDA		_enemy_roster_index_list,Y ; code used at 8000
		CMP		#$A7       ; code used at 8000
		BCC		loc_39AE0	; code used at 8000
		RTS
loc_39AE0:				; CODE XREF: sub_39AA9+34-j
		ASL		; code used at 8000
		ROL		_pak_data_ptr+1	; code used at 8000
		ASL		; code used at 8000
		ROL		_pak_data_ptr+1	; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		_enemy_roster_index_list,Y ; code used at 8000
		BCC		loc_39AEE	; code used at 8000
		INC		_pak_data_ptr+1	; code used at 8000
loc_39AEE:				; CODE XREF: sub_39AA9+41-j
		CLC				; code used at 8000
		ADC		_pak_data_lib_ofs ; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		LDA		_pak_data_lib_ofs+1 ; code used	as ind data at 8000
		ADC		_pak_data_ptr+1	; code used at 8000
		STA		_pak_data_ptr+1	; code used at 8000
		LDY		byte_BB		; code used at 8000
		LDX		#_pak_data_ptr	; code used at 8000
		JSR		_get_data_next_byte ; code used	at 8000
		STA		byte_4D7,Y	; code used at 8000
		JSR		_get_data_next_byte ; code used	at 8000
		STA		word_4D5,Y	; code used at 8000
		JSR		_get_data_next_byte ; code used	at 8000
		STA		word_4D5+1,Y	; code used as ind data	at 8000
		JSR		_get_data_next_byte ; code used	at 8000
		PHA				; code used at 8000
		JSR		_get_data_next_byte ; code used	at 8000
		STA		_pak_data_ptr+1	; code used at 8000
		PLA				; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		JSR		_get_data_next_byte ; code used	at 8000
		STA		byte_C0		; code used at 8000
		AND		#$F		; code used at 8000
		BEQ		loc_39B4C	; code used at 8000
		STA		byte_C1		; code used at 8000
		LDA		#$C		; code used at 8000
		STA		byte_C2		; code used at 8000
		JSR		sub_39B9D	; code used at 8000
		BCC		loc_39B32	; code used at 8000
		RTS
loc_39B32:				; CODE XREF: sub_39AA9+86-j
		LDX		byte_BB		; code used at 8000
		LDA		byte_C4		; code used at 8000
		STA		byte_4D3,X	; code used at 8000
		LDA		byte_C0		; code used at 8000
		AND		#$F		; code used at 8000
		STA		byte_C2		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C2		; code used at 8000
		CLC				; code used at 8000
		ADC		_pak_data_ptr	; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		BCC		loc_39B4C	; code used at 8000
		INC		_pak_data_ptr+1
loc_39B4C:				; CODE XREF: sub_39AA9+7B-j
					; sub_39AA9+9F-j
		LDA		byte_C0		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		AND		#$F		; code used at 8000
		BEQ		loc_39B69	; code used at 8000
		STA		byte_C1		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_C2		; code used at 8000
		JSR		sub_39B9D	; code used at 8000
		BCC		loc_39B62	; code used at 8000
		RTS				; code used at 8000
loc_39B62:				; CODE XREF: sub_39AA9+B6-j
		LDX		byte_BB		; code used at 8000
		LDA		byte_C4		; code used at 8000
		STA		byte_4D4,X	; code used at 8000
loc_39B69:				; CODE XREF: sub_39AA9+AB-j
		JSR		sub_39C5F	; code used at 8000
		BCC		loc_39B6F	; code used at 8000
		RTS
loc_39B6F:				; CODE XREF: sub_39AA9+C3-j
		LDX		byte_BB		; code used at 8000
		LDA		byte_BD		; code used at 8000
		STA		byte_4F5	; code used at 8000
		LDA		byte_BC		; code used at 8000
		STA		byte_4F6	; code used as ind data	at 8000
		LDA		byte_C4		; code used at 8000
		STA		byte_4CF,X	; code used at 8000
		LDA		byte_4F3	; code used at 8000
		STA		byte_4D1,X	; code used at 8000
		LDA		byte_4F4	; code used at 8000
		STA		byte_4D0,X	; code used at 8000
		LDA		byte_C3		; code used at 8000
		STA		byte_4D2,X	; code used at 8000
		LDA		byte_BE		; code used at 8000
		STA		byte_4F3	; code used at 8000
		LDA		byte_BF		; code used at 8000
		STA		byte_4F4	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39B9D:				; CODE XREF: sub_39AA9+83-p
					; sub_39AA9+B3-p
		LDA		#0		; code used at 8000
		STA		byte_C3		; code used at 8000
		STA		byte_C4		; code used at 8000
		LDA		byte_C2		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		AND		#1		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_BC,X	; code used at 8000
		STA		byte_C5		; code used at 8000
		BEQ		loc_39C11	; code used at 8000
loc_39BB0:				; CODE XREF: sub_39B9D+B2-j
		LDX		byte_C2		; code used at 8000
		BNE		loc_39BDB	; code used at 8000
		LDY		_enemy_roster_index_list+3 ; code used at 8000
		INY				; code used at 8000
		BEQ		loc_39BDB	; code used at 8000
		LDY		#3		; code used at 8000
loc_39BBC:				; CODE XREF: sub_39B9D+28-j
		LDA		_ram_pal_buf,Y	; code used at 8000
		CMP		byte_6E0	; code used at 8000
		BNE		loc_39BDB	; code used at 8000
		DEY				; code used at 8000
		BNE		loc_39BBC	; code used at 8000
		LDA		byte_C3		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C3		; code used at 8000
		TAY				; code used at 8000
		LDA		(_pak_data_ptr),Y ; code used at 8000
		CMP		byte_6E0	; code used at 8000
		BNE		loc_39BDB	; code used at 8000
		LDA		#0		; code used at 8000
		PHA				; code used at 8000
		JMP		loc_39C23	; code used at 8000
loc_39BDB:				; CODE XREF: sub_39B9D+15-j
					; sub_39B9D+1B-j sub_39B9D+25-j
					; sub_39B9D+36-j
		LDA		#0		; code used at 8000
		STA		byte_C6		; code used at 8000
		LDX		byte_C2		; code used at 8000
loc_39BE1:				; CODE XREF: sub_39B9D+6C-j
		LDA		byte_C3		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C3		; code used at 8000
		TAY				; code used at 8000
		LDA		#3		; code used at 8000
		STA		byte_C7		; code used at 8000
loc_39BEC:				; CODE XREF: sub_39B9D+5A-j
		LDA		_ram_pal_buf+1,X ; code	used at	8000
		CMP		(_pak_data_ptr),Y ; code used at 8000
		BNE		loc_39BFE	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		DEC		byte_C7		; code used at 8000
		BNE		loc_39BEC	; code used at 8000
		LDA		byte_C6		; code used at 8000
		JMP		loc_39C38	; code used at 8000
loc_39BFE:				; CODE XREF: sub_39B9D+54-j
					; sub_39B9D+64-j
		INX				; code used at 8000
		DEC		byte_C7		; code used at 8000
		BNE		loc_39BFE	; code used as ind data	at 8000
		INC		byte_C6		; code used at 8000
		LDA		byte_C5		; code used at 8000
		CMP		byte_C6		; code used at 8000
		BNE		loc_39BE1	; code used at 8000
		CMP		#4		; code used at 8000
		BNE		loc_39C11	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_39C11:				; CODE XREF: sub_39B9D+11-j
					; sub_39B9D+70-j
		PHA				; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C5		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C2		; code used at 8000
		TAX				; code used at 8000
		INC		byte_C5		; code used at 8000
		LDA		byte_C3		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C3		; code used at 8000
		TAY				; code used at 8000
loc_39C23:				; CODE XREF: sub_39B9D+3B-j
		LDA		#3		; code used at 8000
		STA		byte_C7		; code used at 8000
		LDA		byte_6B8	; code used at 8000
		BNE		loc_39C37	; code used at 8000
loc_39C2C:				; CODE XREF: sub_39B9D+98-j
		LDA		(_pak_data_ptr),Y ; code used at 8000
		STA		_ram_pal_buf+1,X ; code	used at	8000
		INX				; code used at 8000
		INY				; code used as ind data	at 8000
		DEC		byte_C7		; code used as ind data	at 8000
		BNE		loc_39C2C	; code used as ind data	at 8000
loc_39C37:				; CODE XREF: sub_39B9D+8D-j
		PLA				; code used at 8000
loc_39C38:				; CODE XREF: sub_39B9D+5E-j
		LDX		byte_C3		; code used at 8000
		INX				; code used at 8000
		STX		byte_C3		; code used at 8000
loc_39C3D:				; CODE XREF: sub_39B9D+A5-j
		DEX				; code used at 8000
		BEQ		loc_39C45	; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		JMP		loc_39C3D	; code used at 8000
loc_39C45:				; CODE XREF: sub_39B9D+A1-j
		ORA		byte_C4		; code used at 8000
		STA		byte_C4		; code used at 8000
		LDA		byte_C3		; code used at 8000
		CMP		byte_C1		; code used at 8000
		BEQ		loc_39C52	; code used at 8000
		JMP		loc_39BB0	; code used at 8000
loc_39C52:				; CODE XREF: sub_39B9D+B0-j
		LDA		byte_C2		; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		AND		#1		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_C5		; code used at 8000
		STA		byte_BC,X	; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39C5F:				; CODE XREF: sub_39AA9:loc_39B69-p
		LDX		byte_BB		; code used at 8000
		LDA		word_4D5,X	; code used at 8000
		STA		_pak_data_ptr	; code used at 8000
		LDA		word_4D5+1,X	; code used at 8000
		STA		_pak_data_ptr+1	; code used at 8000
		LDA		byte_4D7,X	; code used at 8000
		STA		byte_C0		; code used at 8000
		JSR		_get_pak_data_bank ; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_C3		; code used at 8000
		STA		byte_C4		; code used at 8000
loc_39C79:				; CODE XREF: sub_39C5F+12D-j
		LDA		_pak_data_ptr	; code used at 8000
		PHA				; code used as ind data	at 8000
		LDA		_pak_data_ptr+1	; code used as ind data	at 8000
		PHA				; code used at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_C5		; code used as ind data	at 8000
		LDA		#$FF		; code used as ind data	at 8000
		STA		byte_C6		; code used at 8000
		STA		byte_C7		; code used at 8000
loc_39C89:				; CODE XREF: sub_39C5F+39-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
		TAX				; code used as ind data	at 8000
		AND		#$40       ; code used as ind data at 8000
		BNE		loc_39C94	; code used as ind data	at 8000
		JSR		_inc_pak_data_ptr ; code used at 8000
loc_39C94:				; CODE XREF: sub_39C5F+30-j
		JSR		_inc_pak_data_ptr ; code used as ind data at 8000
		TXA				; code used as ind data	at 8000
		BPL		loc_39C89	; code used at 8000
		LSR		; code used as ind data	at 8000
		AND		#4		; code used at 8000
		BEQ		loc_39CB0	; code used as ind data	at 8000
		BCC		loc_39CA6	; code used at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
		STA		byte_C5		; code used at 8000
loc_39CA6:				; CODE XREF: sub_39C5F+40-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		STA		byte_C6		; code used at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		STA		byte_C7		; code used at 8000
loc_39CB0:				; CODE XREF: sub_39C5F+3E-j
		LDX		#0		; code used at 8000
loc_39CB2:				; CODE XREF: sub_39C5F+6D-j
		LDA		byte_C5		; code used as ind data	at 8000
		ASL		byte_C6		; code used as ind data	at 8000
		ROL		byte_C7		; code used as ind data	at 8000
		BCC		loc_39CBD	; code used as ind data	at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
loc_39CBD:				; CODE XREF: sub_39C5F+59-j
		STA		byte_400,X	; code used as ind data	at 8000
		LDY		#8		; code used as ind data	at 8000
loc_39CC2:				; CODE XREF: sub_39C5F+68-j
		ASL		; code used as ind data	at 8000
		ROR		byte_410,X	; code used as ind data	at 8000
		DEY				; code used as ind data	at 8000
		BNE		loc_39CC2	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#$10		; code used as ind data	at 8000
		BNE		loc_39CB2	; code used as ind data	at 8000
		LDX		#0		; code used at 8000
loc_39CD0:				; CODE XREF: sub_39C5F+84-j
		TXA				; code used as ind data	at 8000
		ORA		#7		; code used as ind data	at 8000
		TAY				; code used as ind data	at 8000
loc_39CD4:				; CODE XREF: sub_39C5F+80-j
		LDA		byte_400,X	; code used as ind data	at 8000
		STA		byte_420,Y	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		DEY				; code used as ind data	at 8000
		TXA				; code used as ind data	at 8000
		AND		#7		; code used as ind data	at 8000
		BNE		loc_39CD4	; code used as ind data	at 8000
		CPX		#$20       ; code used as ind data at 8000
		BNE		loc_39CD0	; code used as ind data	at 8000
		PLA				; code used at 8000
		STA		_pak_data_ptr+1	; code used as ind data	at 8000
		PLA				; code used at 8000
		STA		_pak_data_ptr	; code used as ind data	at 8000
		LDA		#0		; code used at 8000
		STA		byte_C1		; code used as ind data	at 8000
loc_39CEF:				; CODE XREF: sub_39C5F+123-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
		STA		byte_C2		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		LDA		byte_C2		; code used as ind data	at 8000
		AND		#$40       ; code used as ind data at 8000
		BNE		loc_39D0C	; code used at 8000
		INC		byte_C3		; code used at 8000
		JSR		_inc_pak_data_ptr ; code used at 8000
		JSR		_inc_pak_data_ptr ; code used at 8000
		LDX		#0		; code used at 8000
		JMP		loc_39D17	; code used at 8000
loc_39D0C:				; CODE XREF: sub_39C5F+9E-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		AND		#$F		; code used as ind data	at 8000
		CMP		byte_C4		; code used as ind data	at 8000
		BCC		loc_39D17	; code used as ind data	at 8000
		STA		byte_C4		; code used at 8000
loc_39D17:				; CODE XREF: sub_39C5F+AA-j
					; sub_39C5F+B4-j
		TXA				; code used as ind data	at 8000
		TAY				; code used at 8000
		INY				; code used at 8000
		LDA		#$20       ; code used as ind data at 8000
loc_39D1C:				; CODE XREF: sub_39C5F+BF-j
		LSR		; code used as ind data	at 8000
		DEY				; code used as ind data	at 8000
		BNE		loc_39D1C	; code used as ind data	at 8000
		TAY				; code used at 8000
		AND		byte_C1		; code used as ind data	at 8000
		BNE		loc_39D7E	; code used as ind data	at 8000
		TYA				; code used as ind data	at 8000
		ORA		byte_C1		; code used as ind data	at 8000
		STA		byte_C1		; code used as ind data	at 8000
		LDY		#$10		; code used at 8000
		TXA				; code used at 8000
		BNE		loc_39D32	; code used at 8000
		LDY		#0		; code used at 8000
		INX				; code used at 8000
loc_39D32:				; CODE XREF: sub_39C5F+CE-j
		STY		byte_20		; code used as ind data	at 8000
		DEX				; code used at 8000
		TXA				; code used as ind data	at 8000
		ASL		; code used at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used at 8000
		ASL		; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		off_397AB	; code used as ind data	at 8000
		STA		_tmp21		; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		ADC		off_397AB+1	; code used as ind data	at 8000
		STA		_tmp21+1	; code used as ind data	at 8000
		LDA		#$10		; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		_tmp21		; code used at 8000
		STA		_tmp21+2	; code used as ind data	at 8000
		LDA		#0		; code used at 8000
		ADC		_tmp21+1	; code used at 8000
		STA		byte_24		; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
		STA		byte_1F		; code used as ind data	at 8000
		LDA		byte_20		; code used at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		AND		#1		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_BE,X	; code used as ind data	at 8000
		INC		byte_BE,X	; code used as ind data	at 8000
		BNE		loc_39D69	; code used as ind data	at 8000
		SEC
		RTS
loc_39D69:				; CODE XREF: sub_39C5F+106-j
		LDY		#4		; code used at 8000
loc_39D6B:				; CODE XREF: sub_39C5F+110-j
		LSR		; code used as ind data	at 8000
		ROR		byte_1F		; code used as ind data	at 8000
		DEY				; code used as ind data	at 8000
		BNE		loc_39D6B	; code used as ind data	at 8000
		ORA		byte_20		; code used as ind data	at 8000
		STA		byte_20		; code used as ind data	at 8000
		LDA		byte_32		; code used as ind data	at 8000
		CMP		#$FD       ; code used as ind data at 8000
		BNE		loc_39D7E	; code used at 8000
		JSR		sub_1741D7	; code used as ind data	at 8000
loc_39D7E:				; CODE XREF: sub_39C5F+C4-j
					; sub_39C5F+11A-j
		LDA		byte_C2		; code used at 8000
		BMI		loc_39D85	; code used as ind data	at 8000
		JMP		loc_39CEF	; code used as ind data	at 8000
loc_39D85:				; CODE XREF: sub_39C5F+121-j
		JSR		sub_398C7	; code used at 8000
		DEC		byte_C0		; code used as ind data	at 8000
		BEQ		loc_39D8F	; code used as ind data	at 8000
		JMP		loc_39C79	; code used at 8000
loc_39D8F:				; CODE XREF: sub_39C5F+12B-j
		INC		byte_C4		; code used at 8000
		CLC				; code used at 8000
		RTS				; code used as ind data	at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39D93:				; CODE XREF: _b2_s1+3D-p
		LDX		byte_BB		; code used at 8000
		LDA		byte_4CF,X	; code used at 8000
		BNE		loc_39D9C	; code used at 8000
		SEC
		RTS
loc_39D9C:				; CODE XREF: sub_39D93+5-j
		STA		byte_C0		; code used at 8000
		LDA		byte_4C0	; code used at 8000
		BEQ		loc_39E08	; code used at 8000
		BPL		loc_39DA7	; code used at 8000
		CLC
		RTS
loc_39DA7:				; CODE XREF: sub_39D93+10-j _b2_sA+2A-j
		LDA		#$1D		; code used at 8000
		SEC				; code used at 8000
		SBC		byte_C0		; code used at 8000
		STA		byte_BC		; code used at 8000
		LDX		byte_C0		; code used at 8000
		DEX				; code used at 8000
		TXA				; code used at 8000
		LSR		; code used at 8000
		EOR		#$FF		; code used at 8000
		SEC				; code used at 8000
		ADC		#$F		; code used at 8000
		STA		byte_BD		; code used at 8000
		LDA		#0		; code used at 8000
		STA		byte_BE		; code used at 8000
loc_39DBE:				; CODE XREF: sub_39D93+65-j
		LDA		#0		; code used as ind data	at 8000
loc_39DC0:				; CODE XREF: sub_39D93+6F-j
		STA		byte_BF		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_697,X	; code used as ind data	at 8000
		BPL		loc_39DFB	; code used at 8000
		LDA		byte_698,X	; code used at 8000
		CLC				; code used at 8000
		ADC		byte_699,X	; code used at 8000
		CMP		byte_BD		; code used at 8000
		BCC		loc_39DFB	; code used at 8000
		LDA		byte_698,X	; code used at 8000
		CLC				; code used as ind data	at 8000
		SBC		byte_C0		; code used at 8000
		CMP		#$20       ; code used at 8000
		BCS		loc_39DE1	; code used at 8000
		CMP		byte_BD		; code used as ind data	at 8000
		BCS		loc_39DFB	; code used at 8000
loc_39DE1:				; CODE XREF: sub_39D93+48-j
		INC		byte_BE		; code used as ind data	at 8000
		LDA		byte_BE		; code used as ind data	at 8000
		CMP		byte_BC		; code used at 8000
		BNE		loc_39DEB	; code used at 8000
		SEC				; code used at 8000
		RTS				; code used at 8000
loc_39DEB:				; CODE XREF: sub_39D93+54-j
		EOR		#1		; code used at 8000
		LSR		; code used at 8000
		LDA		byte_BE		; code used as ind data	at 8000
		BCC		loc_39DF4	; code used at 8000
		EOR		#$FF		; code used at 8000
loc_39DF4:				; CODE XREF: sub_39D93+5D-j
		ADC		byte_BD		; code used at 8000
		STA		byte_BD		; code used at 8000
		JMP		loc_39DBE	; code used at 8000
loc_39DFB:				; CODE XREF: sub_39D93+33-j
					; sub_39D93+3E-j sub_39D93+4C-j
		LDA		byte_BF		; code used at 8000
		CLC				; code used at 8000
		ADC		#4		; code used at 8000
		CMP		#$20       ; code used at 8000
		BNE		loc_39DC0	; code used at 8000
		LDA		byte_BD		; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000
loc_39E08:				; CODE XREF: sub_39D93+E-j
		LDA		#2		; code used at 8000
		STA		byte_BD		; code used at 8000
		LDX		#0		; code used at 8000
loc_39E0E:				; CODE XREF: sub_39D93+93-j
		LDA		byte_697,X	; code used as ind data	at 8000
		BPL		loc_39E20	; code used as ind data	at 8000
		LDA		byte_698,X	; code used at 8000
		SEC				; code used at 8000
		ADC		byte_699,X	; code used at 8000
		CMP		byte_BD		; code used at 8000
		BCC		loc_39E20	; code used at 8000
		STA		byte_BD		; code used at 8000
loc_39E20:				; CODE XREF: sub_39D93+7E-j
					; sub_39D93+89-j
		INX				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		CPX		#$20       ; code used as ind data at 8000
		BNE		loc_39E0E	; code used as ind data	at 8000
		LDA		byte_BD		; code used as ind data	at 8000
		LDX		byte_BA		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_699,X	; code used at 8000
		CMP		#$1F		; code used at 8000
		BCC		loc_39E35	; code used at 8000
		RTS				; code used at 8000
loc_39E35:				; CODE XREF: sub_39D93+9F-j
		LDA		byte_BD		; code used at 8000
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39E39:				; CODE XREF: sub_39E9E+6E-p
					; sub_3A056+3C-p
		LDA		byte_C1		; code used at 8000
		LSR		; code used at 8000
		ORA		#$50       ; code used at 8000
		STA		byte_470	; code used at 8000
		LDA		#0		; code used at 8000
		ROL		; code used at 8000
		SEC				; code used at 8000
		LDX		byte_BB		; code used at 8000
		ADC		byte_4CF,X	; code used at 8000
		LSR		; code used at 8000
		ORA		#$40       ; code used at 8000
		STA		byte_471	; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39E51:				; CODE XREF: sub_39E9E+1A7-p
					; sub_3A056+71-p
		LDA		byte_471	; code used at 8000
		AND		#$F		; code used at 8000
		PHA				; code used at 8000
		ORA		#$20       ; code used at 8000
		STA		byte_471	; code used at 8000
		JSR		sub_17474C	; code used at 8000
		PLA				; code used at 8000
		ASL		; code used at 8000
		PHA				; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		_tmp21		; code used at 8000
		TAX				; code used at 8000
		LDY		#0		; code used at 8000
loc_39E69:				; CODE XREF: sub_39E51+22-j
		LDA		byte_400,X	; code used at 8000
		STA		byte_400,Y	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		_tmp21		; code used at 8000
		BCC		loc_39E69	; code used at 8000
		PLA				; code used at 8000
		STA		_tmp21		; code used at 8000
		TAX				; code used at 8000
		LDY		#0		; code used at 8000
loc_39E7B:				; CODE XREF: sub_39E51+3D-j
		CPX		#$C		; code used at 8000
		BCC		loc_39E84	; code used at 8000
loc_39E7F:				; code used at 8000
		LDA		byte_4B7,X
		BCS		loc_39E87	; code used at 8000
loc_39E84:				; CODE XREF: sub_39E51+2C-j
		LDA		byte_460,X	; code used at 8000
loc_39E87:				; CODE XREF: sub_39E51+31-j
		STA		byte_460,Y	; code used at 8000
		INX				; code used at 8000
		INY				; code used at 8000
		CPY		_tmp21		; code used at 8000
		BCC		loc_39E7B	; code used at 8000
		LDA		byte_470	; code used at 8000
		CLC				; code used at 8000
		ADC		#$20       ; code used at 8000
		STA		byte_470	; code used at 8000
		JSR		sub_17474C	; code used at 8000
loc_39E9C:				; CODE XREF: sub_39E9E+2C-j
		CLC				; code used at 8000
		RTS				; code used at 8000

; =============== S U B	R O U T	I N E =======================================
sub_39E9E:				; CODE XREF: _b2_s5+14-p _b2_s3+12-p
					; _b2_s2+C-p
		LDY		byte_BA		; code used as ind data	at 8000
		LDA		byte_697,Y	; code used at 8000
		AND		#3		; code used at 8000
		STA		byte_BB		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		CLC				; code used at 8000
		ADC		byte_BB		; code used at 8000
		STA		byte_BB		; code used at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_4C1	; code used as ind data	at 8000
		STA		byte_C5		; code used as ind data	at 8000
		LDA		word_4D5,X	; code used as ind data	at 8000
		STA		_pak_data_ptr	; code used at 8000
		LDA		word_4D5+1,X	; code used as ind data	at 8000
		STA		_pak_data_ptr+1	; code used as ind data	at 8000
		LDA		byte_4D7,X	; code used at 8000
		STA		byte_C0		; code used as ind data	at 8000
		JSR		_get_pak_data_bank ; code used at 8000
		LDA		byte_4C0	; code used as ind data	at 8000
		BMI		loc_39E9C	; code used at 8000
		BNE		loc_39EF9	; code used at 8000
loc_39ECE:				; CODE XREF: sub_39E9E+4C-j
					; sub_39E9E+53-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		JSR		_inc_pak_data_ptr ; code used as ind data at 8000
		AND		#$40       ; code used as ind data at 8000
		BNE		loc_39EE9	; code used as ind data	at 8000
		LDA		byte_C5		; code used as ind data	at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
loc_39EE1:				; code used at 8000
		CLC
		ADC		#$4F       ; code used at 8000
		STA		_spr_ram,X	; code used at 8000
		INC		byte_C5		; code used as ind data	at 8000
loc_39EE9:				; CODE XREF: sub_39E9E+39-j
		PLA				; code used as ind data	at 8000
		BPL		loc_39ECE	; code used as ind data	at 8000
loc_39EEC:				; code used as ind data	at 8000
		JSR		sub_398C7
		DEC		byte_C0		; code used as ind data	at 8000
		BNE		loc_39ECE	; code used as ind data	at 8000
		LDA		byte_C5		; code used at 8000
		STA		byte_4C1	; code used as ind data	at 8000
		RTS				; code used as ind data	at 8000
loc_39EF9:				; CODE XREF: sub_39E9E+2E-j
		LDA		byte_698,Y	; code used at 8000
		STA		byte_C1		; code used at 8000
		LDA		byte_4D0,X	; code used at 8000
		STA		byte_C7		; code used at 8000
		DEC		byte_C7		; code used at 8000
		LDA		byte_4D1,X	; code used at 8000
		STA		byte_C6		; code used at 8000
		DEC		byte_C6		; code used at 8000
		JSR		sub_39E39	; code used at 8000
		JSR		sub_398B3	; code used at 8000
		JSR		_vblank		; code used at 8000
loc_39F15:				; CODE XREF: sub_39E9E+1A1-j
		LDA		#0		; code used as ind data	at 8000
		STA		byte_C2		; code used as ind data	at 8000
loc_39F19:				; CODE XREF: sub_39E9E+197-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		STA		byte_C3		; code used as ind data	at 8000
		AND		#$40       ; code used as ind data at 8000
		BNE		loc_39F7F	; code used as ind data	at 8000
		LDA		byte_C5		; code used as ind data	at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		TAX				; code used at 8000
		LDA		byte_C2		; code used at 8000
		AND		#$10		; code used at 8000
		BNE		loc_39F35	; code used as ind data	at 8000
		INC		byte_C6		; code used at 8000
		LDA		byte_C2		; code used as ind data	at 8000
		ORA		#$10		; code used as ind data	at 8000
		STA		byte_C2		; code used at 8000
loc_39F35:				; CODE XREF: sub_39E9E+8D-j
		LDA		byte_C6		; code used at 8000
		STA		_spr_ram+1,X	; code used at 8000
		LDA		byte_C3		; code used at 8000
		ROR		; code used as ind data	at 8000
		ROR		; code used as ind data	at 8000
		ROR		; code used at 8000
		ROR		; code used at 8000
		PHA				; code used at 8000
		AND		#3		; code used as ind data	at 8000
		STA		byte_C4		; code used as ind data	at 8000
		LDY		byte_BB		; code used at 8000
		LDA		byte_4D3,Y	; code used at 8000
		LDY		byte_C4		; code used at 8000
		INY				; code used at 8000
loc_39F4D:				; CODE XREF: sub_39E9E+B4-j
		DEY				; code used as ind data	at 8000
		BEQ		loc_39F55	; code used at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		JMP		loc_39F4D	; code used at 8000
loc_39F55:				; CODE XREF: sub_39E9E+B0-j
		AND		#3		; code used as ind data	at 8000
		STA		byte_C4		; code used as ind data	at 8000
		PLA				; code used at 8000
		AND		#$C0       ; code used as ind data at 8000
		ORA		byte_C4		; code used as ind data	at 8000
		STA		_spr_ram+2,X	; code used as ind data	at 8000
		LDA		byte_C1		; code used as ind data	at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		ASL		; code used at 8000
		STA		byte_C4		; code used at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used at 8000
		CLC				; code used at 8000
		ADC		byte_C4		; code used at 8000
		STA		_spr_ram+3,X	; code used at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		CLC				; code used at 8000
		ADC		#$4F       ; code used at 8000
		STA		_spr_ram,X	; code used at 8000
		INC		byte_C5		; code used as ind data	at 8000
		JMP		loc_3A031	; code used as ind data	at 8000
loc_39F7F:				; CODE XREF: sub_39E9E+82-j
		LDA		byte_C3		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		AND		#3		; code used as ind data	at 8000
		TAY				; code used as ind data	at 8000
		LDX		byte_BB		; code used as ind data	at 8000
		LDA		byte_4D4,X	; code used as ind data	at 8000
		INY				; code used as ind data	at 8000
loc_39F8E:				; CODE XREF: sub_39E9E+F5-j
		DEY				; code used as ind data	at 8000
		BEQ		loc_39F96	; code used as ind data	at 8000
		LSR		; code used at 8000
		LSR		; code used at 8000
		JMP		loc_39F8E	; code used at 8000
loc_39F96:				; CODE XREF: sub_39E9E+F1-j
		AND		#3		; code used as ind data	at 8000
		STA		byte_1E		; code used as ind data	at 8000
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at 8000
		PHA				; code used as ind data	at 8000
		AND		#$F		; code used as ind data	at 8000
		STA		word_4		; code used as ind data	at 8000
		LDA		byte_471	; code used as ind data	at 8000
		AND		#$F		; code used as ind data	at 8000
		STA		word_4+1	; code used as ind data	at 8000
		PLA				; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		AND		#7		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		BEQ		loc_39FC1	; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
loc_39FB5:				; CODE XREF: sub_39E9E+11B-j
		CLC				; code used as ind data	at 8000
		ADC		word_4+1	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		BNE		loc_39FB5	; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		word_4		; code used as ind data	at 8000
		STA		word_4		; code used as ind data	at 8000
loc_39FC1:				; CODE XREF: sub_39E9E+113-j
		LDA		byte_C1		; code used as ind data	at 8000
		AND		#1		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		word_4		; code used as ind data	at 8000
		STA		byte_4C2	; code used as ind data	at 8000
		LDA		word_4+1	; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		ASL		; code used as ind data	at 8000
		STA		word_6		; code used as ind data	at 8000
		LDA		byte_4C2	; code used as ind data	at 8000
		LDX		#0		; code used as ind data	at 8000
loc_39FD6:				; CODE XREF: sub_39E9E+13E-j
		STA		word_6+1	; code used as ind data	at 8000
		INX				; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		word_6		; code used as ind data	at 8000
		BCS		loc_39FD6	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		LDA		#0		; code used as ind data	at 8000
loc_39FE1:				; CODE XREF: sub_39E9E+147-j
		CLC				; code used as ind data	at 8000
		ADC		word_4+1	; code used as ind data	at 8000
		DEX				; code used as ind data	at 8000
		BNE		loc_39FE1	; code used as ind data	at 8000
		STA		word_6		; code used as ind data	at 8000
		ASL		word_4+1	; code used as ind data	at 8000
		LDA		word_6+1	; code used as ind data	at 8000
		SEC				; code used as ind data	at 8000
		SBC		word_4+1	; code used as ind data	at 8000
		BCC		loc_39FF4	; code used as ind data	at 8000
		STA		word_6+1	; code used as ind data	at 8000
loc_39FF4:				; CODE XREF: sub_39E9E+152-j
		LDA		word_6+1	; code used as ind data	at 8000
		LSR		; code used as ind data	at 8000
		CLC				; code used as ind data	at 8000
		ADC		word_6		; code used as ind data	at 8000
		TAX				; code used as ind data	at 8000
		LDA		byte_1E		; code used as ind data	at 8000
		CPX		#$C		; code used as ind data	at 8000
		BCS		loc_3A006	; code used as data at 8000
		STA		byte_460,X	; code used as ind data	at a000
		BCC		loc_3A009	; code used as ind data	at a000
loc_3A006:				; CODE XREF: sub_39E9E+161-j
		STA		byte_4B7,X	; code used as ind data	at a000
loc_3A009:				; CODE XREF: sub_39E9E+166-j
		LDA		byte_C3		; code used as ind data	at a000
		LSR		; code used as ind data	at a000
		AND		#3		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		INY				; code used as ind data	at a000
		LDA		#$10		; code used as ind data	at a000
loc_3A013:				; CODE XREF: sub_39E9E+177-j
		LSR		; code used as ind data	at a000
		DEY				; code used as ind data	at a000
		BNE		loc_3A013	; code used as ind data	at a000
		STA		byte_C4		; code used as ind data	at a000
		AND		byte_C2		; code used as ind data	at a000
		BNE		loc_3A029	; code used as ind data	at a000
		LDA		byte_C2		; code used as ind data	at a000
		ORA		byte_C4		; code used as ind data	at a000
		STA		byte_C2		; code used as ind data	at a000
		INC		byte_C7		; code used as ind data	at a000
		LDA		byte_C7		; code used as ind data	at a000
		STA		byte_BC,X	; code used as ind data	at a000
loc_3A029:				; CODE XREF: sub_39E9E+17D-j
		LDA		byte_BC,X	; code used as ind data	at a000
		LDX		byte_4C2	; code used as ind data	at a000
		STA		byte_400,X	; code used as ind data	at a000
loc_3A031:				; CODE XREF: sub_39E9E+DE-j
		LDA		byte_C3		; code used as ind data	at a000
		BMI		loc_3A038	; code used as ind data	at a000
		JMP		loc_39F19	; code used as ind data	at a000
loc_3A038:				; CODE XREF: sub_39E9E+195-j
		JSR		sub_398C7	; code used as ind data	at a000
		DEC		byte_C0		; code used as ind data	at a000
		BEQ		loc_3A042	; code used as ind data	at a000
		JMP		loc_39F15	; code used as ind data	at a000
loc_3A042:				; CODE XREF: sub_39E9E+19F-j
		JSR		_vblank		; code used as ind data	at a000
		JSR		sub_39E51	; code used at a000
		LDX		byte_BA		; code used at a000
		LDA		byte_4C1	; code used at a000
		STA		byte_69A,X	; code used at a000
		LDA		byte_C5		; code used at a000
		STA		byte_4C1	; code used at a000
locret_3A055:				; CODE XREF: sub_3A056+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A056:				; CODE XREF: _b2_s5+11-p _b2_s4+D-p
		LDA		byte_6B8	; code used at a000
		BNE		locret_3A055	; code used at a000
		LDA		byte_4C0	; code used at a000
		BNE		loc_3A062	; code used at a000
loc_3A060:				; CODE XREF: sub_3A056+11-j
		SEC
		RTS
loc_3A062:				; CODE XREF: sub_3A056+8-j
		LDY		byte_BA		; code used at a000
		LDA		byte_697,Y	; code used at a000
		BPL		loc_3A060	; code used at a000
		AND		#3		; code used at a000
		STA		byte_BB		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		byte_BB		; code used at a000
		STA		byte_BB		; code used at a000
		TAX				; code used at a000
		LDA		byte_698,Y	; code used at a000
		STA		byte_C1		; code used at a000
		LDA		byte_69A,Y	; code used at a000
		STA		byte_C2		; code used at a000
		LDA		word_4D5,X	; code used at a000
		STA		_pak_data_ptr	; code used at a000
		LDA		word_4D5+1,X	; code used at a000
		STA		_pak_data_ptr+1	; code used at a000
		LDA		byte_4D7,X	; code used at a000
		STA		byte_C0		; code used at a000
		JSR		_get_pak_data_bank ; code used at a000
		JSR		sub_39E39	; code used at a000
loc_3A095:				; CODE XREF: sub_3A056+5E-j
					; sub_3A056+68-j
		JSR		_get_far_pak_data_ptr_byte_safe	; code used as ind data	at a000
		STA		byte_BF		; code used as ind data	at a000
		AND		#$40       ; code used as ind data at a000
		BNE		loc_3A0AD	; code used as ind data	at a000
		LDA		byte_C2		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		#$F8       ; code used as ind data at a000
		STA		_spr_ram,X	; code used as ind data	at a000
		INC		byte_C2		; code used as ind data	at a000
		JSR		_inc_pak_data_ptr ; code used as ind data at a000
loc_3A0AD:				; CODE XREF: sub_3A056+46-j
		JSR		_inc_pak_data_ptr ; code used as ind data at a000
		LDA		byte_BF		; code used as ind data	at a000
		BMI		loc_3A0B7	; code used as ind data	at a000
		JMP		loc_3A095	; code used at a000
loc_3A0B7:				; CODE XREF: sub_3A056+5C-j
		JSR		sub_398C7	; code used as ind data	at a000
		DEC		byte_C0		; code used as ind data	at a000
		BEQ		loc_3A0C1	; code used as ind data	at a000
		JMP		loc_3A095	; code used as ind data	at a000
loc_3A0C1:				; CODE XREF: sub_3A056+66-j
		JSR		sub_398B3	; code used as ind data	at a000
		JSR		_vblank		; code used as ind data	at a000
		JSR		sub_39E51	; code used at a000
		LDY		byte_BA		; code used at a000
		LDX		byte_BB		; code used at a000
		LDA		byte_4D2,X	; code used at a000
		BEQ		loc_3A138	; code used at a000
		STA		byte_BD		; code used at a000
		LDA		byte_69A,Y	; code used at a000
		STA		byte_BC		; code used at a000
		LDA		byte_4C1	; code used at a000
		SEC				; code used at a000
		SBC		byte_BD		; code used at a000
		STA		byte_4C1	; code used at a000
		SEC				; code used at a000
		SBC		byte_BC		; code used at a000
		BEQ		loc_3A105	; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		byte_BE		; code used at a000
		LDA		byte_BC		; code used at a000
		CLC				; code used at a000
		ADC		byte_BD		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_BC		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
loc_3A0F9:				; CODE XREF: sub_3A056+AD-j
		LDA		_spr_ram,Y	; code used at a000
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		DEC		byte_BE		; code used at a000
		BNE		loc_3A0F9	; code used at a000
loc_3A105:				; CODE XREF: sub_3A056+90-j
		LDA		byte_BD		; code used at a000
		STA		byte_BE		; code used at a000
loc_3A109:				; code used at a000
		LDA		byte_4C1
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#$F8       ; code used at a000
loc_3A111:				; CODE XREF: sub_3A056+C4-j
		STA		_spr_ram,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		DEC		byte_BE		; code used at a000
		BNE		loc_3A111	; code used at a000
		LDX		#0		; code used at a000
loc_3A11E:				; CODE XREF: sub_3A056+E0-j
		LDA		byte_697,X	; code used at a000
		BPL		loc_3A130	; code used at a000
		LDA		byte_69A,X	; code used at a000
		CMP		byte_BC		; code used at a000
		BCC		loc_3A130	; code used at a000
		SEC				; code used at a000
		SBC		byte_BD		; code used at a000
		STA		byte_69A,X	; code used at a000
loc_3A130:				; CODE XREF: sub_3A056+CB-j
					; sub_3A056+D2-j
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		CPX		#$20       ; code used at a000
		BNE		loc_3A11E	; code used at a000
loc_3A138:				; CODE XREF: sub_3A056+7B-j
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b2_s0:					; CODE XREF: sub_8683:loc_86F5-P
					; DATA XREF: BANK2:8000-o
		LDY		byte_62		; code used at a000
		INY				; code used at a000
		BEQ		loc_3A142	; code used at a000
		JSR		sub_3A267	; code used at a000
loc_3A142:				; CODE XREF: _b2_s0+3-j
		JSR		_vblank_and_render_off_flag10_set ; code used at a000
		LDA		#$FD       ; code used at a000
		STA		byte_32		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6B8	; code used at a000
		JSR		sub_39876	; code used at a000
		JSR		sub_3A157	; code used at a000
		JMP		_clear_nmi_flag_10 ; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A157:				; CODE XREF: _b2_s0+17-p _b2_s9+17-p
		LDA		#0		; code used at a000
		STA		byte_4C0	; code used at a000
		STA		byte_6B7	; code used at a000
		LDX		#0		; code used at a000
loc_3A161:				; CODE XREF: sub_3A157+82-j
		STX		word_B7+1	; code used at a000
		LDA		#0		; code used as ind data	at a000
		STA		byte_B9		; code used at a000
		LDA		_enemy_roster_index_list,X ; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_3A1D6	; code used as ind data	at a000
		LDA		byte_571,X	; code used at a000
		BNE		loc_3A1A8	; code used at a000
		LDA		#$80       ; code used at a000
		STA		byte_4C0	; code used at a000
		JSR		_b2_s1		; code used at a000
		BCS		loc_3A188	; code used at a000
		JSR		_b2_s4		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_697,X	; code used at a000
		JMP		loc_3A194	; code used at a000
loc_3A188:				; CODE XREF: sub_3A157+24-j
		LDX		word_B7+1
		LDA		#$FF
		STA		_enemy_roster_index_list,X
		LDA		#0
		STA		byte_571,X
loc_3A194:				; CODE XREF: sub_3A157+2E-j
		LDA		#0		; code used at a000
		STA		byte_4C0	; code used at a000
		LDA		byte_6B8	; code used at a000
		BEQ		loc_3A1A3	; code used at a000
		LDA		#$80 
		STA		byte_4C0
loc_3A1A3:				; CODE XREF: sub_3A157+45-j
		LDX		word_B7+1	; code used at a000
		JMP		loc_3A1D6	; code used at a000
loc_3A1A8:				; CODE XREF: sub_3A157+1A-j
					; sub_3A157+5F-j
		JSR		_b2_s3		; code used at a000
		LDX		word_B7+1	; code used at a000
		BCS		loc_3A1BA	; code used at a000
		INC		byte_B9		; code used at a000
		LDA		byte_B9		; code used at a000
		CMP		byte_571,X	; code used at a000
		BCC		loc_3A1A8	; code used at a000
		BCS		loc_3A1D6	; code used at a000
loc_3A1BA:				; CODE XREF: sub_3A157+56-j
		LDA		#$FF		; code used at a000
		STA		byte_6B7	; code used at a000
		LDA		byte_B9		; code used at a000
		STA		byte_571,X	; code used at a000
		BNE		loc_3A1D6	; code used at a000
loc_3A1C6:				; CODE XREF: sub_3A157+7C-j
		LDA		#$FF		; code used at a000
		STA		_enemy_roster_index_list,X ; code used at a000
		LDA		#0		; code used at a000
		STA		byte_571,X	; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_3A1C6	; code used at a000
		DEX				; code used at a000
loc_3A1D6:				; CODE XREF: sub_3A157+15-j
					; sub_3A157+4E-j sub_3A157+61-j
					; sub_3A157+6D-j
		INX				; code used at a000
		CPX		#4		; code used as ind data	at a000
		BNE		loc_3A161	; code used at a000
		LDX		#1		; code used at a000
		STX		byte_4C1	; code used at a000
		LDA		byte_6B8	; code used at a000
		BNE		loc_3A25E	; code used at a000
		LDA		#$F0       ; code used at a000
		DEX				; code used at a000
loc_3A1E8:				; CODE XREF: sub_3A157+98-j
		STA		_spr_ram,X	; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		BNE		loc_3A1E8	; code used as ind data	at a000
		TXA				; code used at a000
		LDX		#$40       ; code used at a000
loc_3A1F4:				; CODE XREF: sub_3A157+A1-j
		STA		_ram_pal_buf+$18,X ; code used as ind data at a000
		DEX				; code used as ind data	at a000
		BNE		loc_3A1F4	; code used as ind data	at a000
		STX		byte_BA		; code used at a000
loc_3A1FC:				; CODE XREF: sub_3A157+D9-j
		LDA		byte_697,X	; code used as ind data	at a000
		BPL		loc_3A22A	; code used at a000
		STA		byte_BB		; code used at a000
		AND		#$7F       ; code used at a000
loc_3A205:				; code used at a000
		STA		byte_697,X
		AND		#3		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		byte_BC		; code used at a000
		LDA		byte_BB		; code used as ind data	at a000
		LSR		; code used at a000
		LSR		; code used as ind data	at a000
		AND		#7		; code used at a000
		ORA		byte_BC		; code used at a000
		TAY				; code used as ind data	at a000
		LDA		byte_699,X	; code used at a000
		SEC				; code used at a000
		ADC		byte_BA		; code used at a000
		CMP		#$1E		; code used at a000
		BCS		loc_3A22A	; code used at a000
		STA		byte_BA		; code used at a000
		TXA				; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_400,Y	; code used at a000
loc_3A22A:				; CODE XREF: sub_3A157+A8-j
					; sub_3A157+C9-j
		INX				; code used at a000
		INX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$20       ; code used at a000
		BNE		loc_3A1FC	; code used at a000
		DEC		byte_BA		; code used at a000
		LDA		#$20       ; code used at a000
		SEC				; code used at a000
		SBC		byte_BA		; code used at a000
		LSR		; code used at a000
		STA		byte_BA		; code used at a000
		LDY		#0		; code used at a000
loc_3A23E:				; CODE XREF: sub_3A157+105-j
		LDA		byte_400,Y	; code used as ind data	at a000
		BPL		loc_3A259	; code used as ind data	at a000
		AND		#$1F		; code used at a000
		TAX				; code used at a000
		LDA		byte_697,X	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_697,X	; code used at a000
		LDA		byte_BA		; code used at a000
		STA		byte_698,X	; code used at a000
		SEC				; code used at a000
		ADC		byte_699,X	; code used at a000
		STA		byte_BA		; code used at a000
loc_3A259:				; CODE XREF: sub_3A157+EA-j
		INY				; code used as ind data	at a000
		CPY		#$20       ; code used as ind data at a000
		BNE		loc_3A23E	; code used as ind data	at a000
loc_3A25E:				; CODE XREF: sub_3A157+8C-j
		LDA		#1		; code used at a000
		STA		byte_4C0	; code used at a000
		LSR		byte_6B7	; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A267:				; CODE XREF: _b2_s0+5-p
		LDX		#0		; code used at a000
loc_3A269:				; CODE XREF: sub_3A267+C-j
		LDA		_enemy_roster_index_list,X ; code used at a000
		CMP		#$FF		; code used at a000
		BNE		loc_3A276	; code used at a000
		INX
		CPX		#3
		BNE		loc_3A269
		RTS
loc_3A276:				; CODE XREF: sub_3A267+7-j
		STX		byte_8		; code used at a000
		INX				; code used at a000
		STX		byte_9		; code used at a000
loc_3A27B:				; CODE XREF: sub_3A267+4C-j
		LDA		#$17		; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		byte_8		; code used at a000
		LDA		_enemy_roster_index_list,X ; code used at a000
		LDX		#word_4		; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		#$6A       ; code used at a000
		LDX		#word_6		; code used at a000
		JSR		_get_syscall0_bank_ptr_no_prg_change ; code used at a000
		LDA		word_6		; code used at a000
		LDY		word_6+1	; code used at a000
		LDX		#word_4		; code used at a000
		JSR		_add_16_to_16	; code used at a000
		LDY		#$A		; code used at a000
loc_3A29F:				; CODE XREF: sub_3A267+48-j
		LDA		#0		; code used at a000
		LDX		#word_4		; code used at a000
		JSR		_get_far_ptr_byte_safe ; code used at a000
		AND		#$3F       ; code used at a000
		CMP		#$3B       ; code used at a000
		BCS		loc_3A2B6	; code used at a000
		INY				; code used at a000
		CPY		#$12		; code used at a000
		BNE		loc_3A29F	; code used at a000
		DEC		byte_8		; code used at a000
		BPL		loc_3A27B	; code used at a000
		RTS				; code used at a000
loc_3A2B6:				; CODE XREF: sub_3A267+43-j
		SBC		#$3B       ; code used at a000
		TAX				; code used at a000
		LDA		byte_3A2DC,X	; code used at a000
		TAY				; code used at a000
		LDX		#2		; code used at a000
loc_3A2BF:				; CODE XREF: sub_3A267+67-j
		LDA		_enemy_roster_index_list,X ; code used at a000
		STA		_enemy_roster_index_list+1,X ; code used at a000
loc_3A2C5:				; code used at a000
		LDA		byte_571,X
		STA		byte_572,X	; code used at a000
		DEX				; code used at a000
		CPX		byte_9		; code used at a000
		BCS		loc_3A2BF	; code used at a000
		LDX		byte_9		; code used at a000
		TYA				; code used at a000
		STA		_enemy_roster_index_list,X ; code used at a000
		LDA		#0		; code used at a000
		STA		byte_571,X	; code used at a000
		RTS				; code used at a000
byte_3A2DC:
		.BYTE	9,$75,$47,$56,$59 ; DATA XREF: sub_3A267+52-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A2E1:				; CODE XREF: sub_397FE+7-p
		LDX		#$19		; code used at a000
loc_3A2E3:				; CODE XREF: sub_3A2E1+9-j
		LDA		byte_3E6,X	; code used at a000
		STA		_ram_pal_buf+$18,X ; code used at a000
		DEX				; code used at a000
		BNE		loc_3A2E3	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A2ED:				; CODE XREF: sub_397FE+1C-p
		LDX		#$19		; code used at a000
loc_3A2EF:				; CODE XREF: sub_3A2ED+9-j
		LDA		_ram_pal_buf+$18,X ; code used at a000
		STA		byte_3E6,X	; code used at a000
		DEX				; code used at a000
		BNE		loc_3A2EF	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b2_sA:					; CODE XREF: sub_68576+D-P sub_6858A+F-P
					; sub_68C64+1A-P sub_69370+33-P
					; DATA XREF: BANK2:8014-o
		CMP		#$FF		; code used at a000
		BEQ		loc_3A30C	; code used at a000
		LDX		#0		; code used at a000
loc_3A2FF:				; CODE XREF: _b2_sA+E-j
		CMP		_enemy_roster_index_list,X ; code used at a000
		BEQ		loc_3A30A	; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BCC		loc_3A2FF	; code used at a000
		RTS				; code used at a000
loc_3A30A:				; CODE XREF: _b2_sA+9-j
		STX		word_B7+1	; code used at a000
loc_3A30C:				; CODE XREF: _b2_sA+2-j
		LDX		word_B7+1	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ADC		word_B7+1	; code used at a000
		PHA				; code used at a000
		TAY				; code used at a000
		JSR		sub_39A1E	; code used at a000
		PLA				; code used at a000
		BCC		loc_3A31D	; code used at a000
		RTS				; code used at a000
loc_3A31D:				; CODE XREF: _b2_sA+21-j
		TAY				; code used at a000
		LDA		byte_4CF,Y	; code used at a000
		STA		byte_C0		; code used at a000
		JMP		loc_39DA7	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b2_s9:					; CODE XREF: sub_80D4+35-P
					; DATA XREF: BANK2:8012-o
		LDA		#0
		STA		byte_32
		JSR		sub_39876
		LDX		#$C
loc_3A32F:				; CODE XREF: _b2_s9+10-j
		LDA		_ram_pal_buf+$C,X
		STA		byte_60A8,X
		DEX
		BNE		loc_3A32F
		LDA		#$FF
		STA		byte_6B8
		JSR		sub_3A157
		LDX		#$C
loc_3A342:				; CODE XREF: _b2_s9+23-j
		LDA		byte_60A8,X
		STA		_ram_pal_buf+$C,X
		DEX
		BNE		loc_3A342
		BRK
		.BYTE 0, $6F		; ofs 0x0021c000, -> dst _b16_s0
		RTS

; =============== S U B	R O U T	I N E =======================================
_b2_sB:					; CODE XREF: _b4_s0+2D-P
					; DATA XREF: BANK2:8016-o
		LDA		byte_6A63	; code used as ind data	at a000
		BEQ		loc_3A355	; code used as ind data	at a000
		RTS				; code used at a000
loc_3A355:				; CODE XREF: _b2_sB+3-j
		BRK
		.BYTE $71, 7		; ofs 0x0006800c, -> dst _b4_s6
		LDA		byte_566	; code used at a000
		AND		#$C4       ; code used at a000
		BEQ		loc_3A360	; code used at a000
		RTS				; code used at a000
loc_3A360:				; CODE XREF: _b2_sB+E-j
		LDX		#0		; code used at a000
		STX		byte_52		; code used at a000
loc_3A364:				; CODE XREF: _b2_sB+51-j
		STX		byte_51		; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		AND		#8		; code used at a000
		BNE		loc_3A39B	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73C,X	; code used at a000
		AND		byte_73D,X	; code used at a000
		BPL		loc_3A39B	; code used at a000
		LDA		byte_73D,X	; code used at a000
		AND		#$40       ; code used at a000
		BNE		loc_3A39B	; code used at a000
		LDA		byte_73C,X	; code used at a000
		AND		#$40       ; code used at a000
		BNE		loc_3A3AC	; code used at a000
		LDA		byte_567	; code used at a000
		AND		#$C		; code used at a000
		BEQ		loc_3A396	; code used at a000
		LDA		byte_567
		AND		#3
		CMP		byte_51
		BNE		loc_3A39B
loc_3A396:				; CODE XREF: _b2_sB+3C-j
		JSR		loc_3A3CF	; code used at a000
		INC		byte_52		; code used at a000
loc_3A39B:				; CODE XREF: _b2_sB+1C-j _b2_sB+27-j
					; _b2_sB+2E-j _b2_sB+45-j _b2_sB+6B-j
					; _b2_sB+7E-j
		LDX		byte_51		; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_3A364	; code used at a000
		JSR		sub_1743B8	; code used at a000
		AND		#$F		; code used at a000
		STA		byte_6A68	; code used at a000
		TXA				; code used at a000
		RTS				; code used at a000
loc_3A3AC:				; CODE XREF: _b2_sB+35-j
		JSR		sub_1743B8
		LDX		byte_51
		CMP		#0
		BNE		loc_3A3BC
		LDA		#$80 
		STA		byte_54C,X
		BNE		loc_3A39B
loc_3A3BC:				; CODE XREF: _b2_sB+64-j
		JSR		sub_1743B8
		AND		#1
		CLC
		ADC		#4
		ASL
		ASL
		ASL
		ASL
		ORA		#$80 
		STA		byte_54C,X
		BNE		loc_3A39B
loc_3A3CF:				; CODE XREF: _b2_sB:loc_3A396-p
					; _b2_sB:loc_3A454-j _b2_sB+156-j
					; _b2_sB+183-j _b2_sB+217-j _b2_sB+277-j
					; _b2_sB+283-j
		BRK
		.BYTE $77, 7		; ofs 0x00068018, -> dst _b4_sC
		LDA		#$3F       ; code used at a000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		LDX		byte_51		; code used at a000
		JSR		sub_3A6FD	; code used at a000
		LDA		byte_54		; code used at a000
		CLC				; code used at a000
		ADC		#$18		; code used at a000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF		; code used at a000
		BNE		loc_3A417	; code used at a000
		LDA		byte_52		; code used at a000
		BEQ		loc_3A412	; code used at a000
		DEC		byte_52		; code used at a000
loc_3A3EE:				; CODE XREF: _b2_sB+A8-j _b2_sB+B3-j
					; _b2_sB+BA-j _b2_sB+C1-j
		DEC		byte_51		; code used at a000
		LDX		byte_51		; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		AND		#8		; code used at a000
		BNE		loc_3A3EE	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_73C,X	; code used at a000
		AND		byte_73D,X	; code used at a000
		BPL		loc_3A3EE	; code used at a000
		LDA		byte_73D,X	; code used at a000
		AND		#$40       ; code used at a000
		BNE		loc_3A3EE	; code used at a000
		LDA		byte_73C,X	; code used at a000
		AND		#$40       ; code used at a000
		BNE		loc_3A3EE	; code used at a000
loc_3A412:				; CODE XREF: _b2_sB+9B-j
		DEC		byte_52		; code used at a000
		DEC		byte_51		; code used at a000
		RTS				; code used at a000
loc_3A417:				; CODE XREF: _b2_sB+97-j
		STA		word_4		; code used at a000
		LDA		byte_54		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		word_4		; code used at a000
		TAX				; code used at a000
		LDA		byte_3A733,X	; code used at a000
		STA		byte_53		; code used at a000
		CMP		#0		; code used at a000
		BEQ		loc_3A44A	; code used at a000
		CMP		#1		; code used at a000
		BEQ		loc_3A473	; code used at a000
		CMP		#3		; code used at a000
		BNE		loc_3A435	; code used at a000
		JMP		loc_3A5A8	; code used at a000
loc_3A435:				; CODE XREF: _b2_sB+E1-j
		CMP		#7		; code used at a000
		BNE		loc_3A43C	; code used at a000
		JMP		loc_3A689	; code used at a000
loc_3A43C:				; CODE XREF: _b2_sB+E8-j
		LDX		byte_51		; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		ORA		#$20       ; code used at a000
		STA		byte_6A9B,X	; code used at a000
		JSR		loc_3A675	; code used at a000
		RTS				; code used at a000
loc_3A44A:				; CODE XREF: _b2_sB+D9-j
		JSR		loc_3A457	; code used at a000
		CPX		#$FF		; code used at a000
		BEQ		loc_3A454	; code used at a000
		JMP		loc_3A677	; code used at a000
loc_3A454:				; CODE XREF: _b2_sB+100-j
		JMP		loc_3A3CF	; code used at a000
loc_3A457:				; CODE XREF: _b2_sB:loc_3A44A-p
					; _b2_sB:loc_3A635-p
		LDA		#$39       ; code used at a000
loc_3A459:				; CODE XREF: _b2_sB+319-p
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF		; code used at a000
		BEQ		loc_3A46F	; code used at a000
		CMP		#$80       ; code used at a000
		BCC		loc_3A46F	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_59		; code used at a000
		BRK
		.BYTE $6E, 7		; ofs 0x00068006, -> dst _b4_s3
		LDA		byte_5A		; code used at a000
		ORA		#$80       ; code used at a000
loc_3A46F:				; CODE XREF: _b2_sB+10F-j _b2_sB+113-j
		TAX				; code used at a000
		LDA		byte_53		; code used at a000
		RTS				; code used at a000
loc_3A473:				; CODE XREF: _b2_sB+DD-j _b2_sB+253-j
		LDA		#1		; code used at a000
		STA		byte_D0		; code used at a000
		LDX		byte_51		; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		AND		#3		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_bank0_sub39 ; code used at a000
		LDY		#0		; code used at a000
		LDA		byte_8		; code used at a000
		BEQ		loc_3A48A	; code used at a000
		INY				; code used at a000
loc_3A48A:				; CODE XREF: _b2_sB+138-j
		INC		byte_D0		; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		JSR		_sram_bank0_sub39 ; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		LDA		byte_8		; code used at a000
		BEQ		loc_3A498	; code used at a000
		INY				; code used at a000
loc_3A498:				; CODE XREF: _b2_sB+146-j
		CPY		#2		; code used at a000
		BNE		loc_3A4B0	; code used at a000
		LDA		#$22 
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF
		BNE		loc_3A4A8
		JMP		loc_3A3CF
loc_3A4A8:				; CODE XREF: _b2_sB+154-j
		CLC
		ADC		#1
		STA		byte_D0
		JMP		loc_3A4BD
loc_3A4B0:				; CODE XREF: _b2_sB+14B-j
		LDA		#1		; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_sub39 ; code used at a000
		LDA		byte_8		; code used at a000
		BNE		loc_3A4BD	; code used at a000
		INC		byte_D0		; code used at a000
loc_3A4BD:				; CODE XREF: _b2_sB+15E-j _b2_sB+16A-j
		LDX		byte_51		; code used at a000
		LDA		byte_6A4B,X	; code used at a000
		LDX		byte_D0		; code used at a000
		DEX				; code used at a000
		BEQ		loc_3A4C9	; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
loc_3A4C9:				; CODE XREF: _b2_sB+176-j
		AND		#3		; code used at a000
		BRK
		.BYTE $14, $17		; ofs 0x00020028, -> dst _b1_s14
		CMP		#$FF		; code used at a000
		BNE		loc_3A4D5	; code used at a000
		JMP		loc_3A3CF
loc_3A4D5:				; CODE XREF: _b2_sB+181-j
		PHA				; code used at a000
		LDA		byte_7E		; code used at a000
		LDX		byte_D0		; code used at a000
		DEX				; code used at a000
		BEQ		loc_3A4F1	; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		LDX		byte_51		; code used at a000
		PHA				; code used at a000
		LDA		byte_6A4B,X	; code used at a000
		AND		#3		; code used at a000
		STA		byte_6A4B,X	; code used at a000
		PLA				; code used at a000
		ORA		byte_6A4B,X	; code used at a000
		JMP		loc_3A500	; code used at a000
loc_3A4F1:				; CODE XREF: _b2_sB+18C-j
		LDX		byte_51		; code used at a000
		PHA				; code used at a000
		LDA		byte_6A4B,X	; code used at a000
		AND		#$C		; code used at a000
		STA		byte_6A4B,X	; code used at a000
		PLA				; code used at a000
		ORA		byte_6A4B,X	; code used at a000
loc_3A500:				; CODE XREF: _b2_sB+19F-j
		STA		byte_6A4B,X	; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		LDA		#$78       ; code used at a000
		JSR		_get_syscall0_data_byte_Y ; code used at a000
		AND		#$3F       ; code used at a000
		STA		byte_CF		; code used at a000
		LDA		byte_D0		; code used at a000
		PHA				; code used at a000
		LDA		byte_CF		; code used at a000
		PHA				; code used at a000
		LDA		#$41       ; code used at a000
		STA		byte_CF		; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE $9C, 7		; ofs 0x0000808a, -> dst _b0_s45
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		STA		byte_CF		; code used at a000
		LDA		word_4		; code used at a000
		CMP		#$C1       ; code used at a000
		BNE		loc_3A536	; code used at a000
		LDA		byte_CF
		ASL
		ADC		byte_CF
		LSR
		LSR
		BNE		loc_3A534
		CLC
		ADC		#1
loc_3A534:				; CODE XREF: _b2_sB+1E0-j
		STA		byte_CF
loc_3A536:				; CODE XREF: _b2_sB+1D7-j
		LDA		#0		; code used at a000
		STA		byte_D0		; code used at a000
		TYA				; code used at a000
		PHA				; code used at a000
		LDA		byte_CE		; code used at a000
		PHA				; code used at a000
		LDA		byte_51		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_bank0_subB ; code	used at	a000
		PLA				; code used at a000
		STA		byte_CE		; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		PLA				; code used at a000
		STA		byte_66		; code used at a000
		BCS		loc_3A569	; code used at a000
		LDA		#$3D 
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		LDA		#$20 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		JMP		loc_3A3CF
loc_3A569:				; CODE XREF: _b2_sB+1FF-j
		LDA		#$78       ; code used at a000
		JSR		_get_syscall0_data_byte_Y ; code used at a000
		BMI		loc_3A57B	; code used at a000
		LDX		#0
		AND		#$40 
		BEQ		loc_3A578
		LDX		#$80 
loc_3A578:				; CODE XREF: _b2_sB+225-j
		JMP		loc_3A675
loc_3A57B:				; CODE XREF: _b2_sB+21F-j
		LDX		#$39       ; code used at a000
		AND		#$40       ; code used at a000
		BNE		loc_3A582	; code used at a000
		DEX				; code used at a000
loc_3A582:				; CODE XREF: _b2_sB+230-j
		TYA				; code used at a000
		PHA				; code used at a000
		TXA				; code used at a000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF		; code used at a000
		BEQ		loc_3A59B	; code used at a000
		CMP		#$80       ; code used at a000
		BCC		loc_3A59B	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_59		; code used at a000
		BRK
		.BYTE $6E, 7		; ofs 0x00068006, -> dst _b4_s3
		LDA		byte_5A		; code used at a000
		ORA		#$80       ; code used at a000
loc_3A59B:				; CODE XREF: _b2_sB+23B-j _b2_sB+23F-j
		TAX				; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		CPX		#$FF		; code used at a000
		BNE		loc_3A5A5	; code used at a000
		JMP		loc_3A473
loc_3A5A5:				; CODE XREF: _b2_sB+251-j
		JMP		loc_3A675	; code used at a000
loc_3A5A8:				; CODE XREF: _b2_sB+E3-j _b2_sB+2CB-j
					; _b2_sB:loc_3A62E-j
		LDA		byte_51		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4		; code used at a000
		BNE		loc_3A5C9	; code used at a000
		LDA		#$3D 
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		LDA		byte_CE
		STA		byte_D2
		LDA		#$D1 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		LDX		#$1E
		JSR		_vblank_count
		JMP		loc_3A3CF
loc_3A5C9:				; CODE XREF: _b2_sB+262-j
		LDA		#$3B       ; code used at a000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF		; code used at a000
		BNE		loc_3A5D5	; code used at a000
		JMP		loc_3A3CF
loc_3A5D5:				; CODE XREF: _b2_sB+281-j
		STA		byte_CF		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_46		; code used at a000
		JSR		_sram_bank0_sub28 ; code used at a000
		LDA		word_4+1	; code used at a000
		AND		#$7F       ; code used at a000
		STA		byte_CF		; code used at a000
		STA		byte_45		; code used at a000
		STA		byte_D3		; code used at a000
		BRK
		.BYTE $A, $17		; ofs 0x000080c0, -> dst _b0_s60
		BNE		loc_3A5F4	; code used at a000
		BRK
		.BYTE 8, $17		; ofs 0x000080bc, -> dst _b0_s5E
		BCC		loc_3A5F4	; code used at a000
		INC		byte_46		; code used at a000
loc_3A5F4:				; CODE XREF: _b2_sB+29C-j _b2_sB+2A1-j
		BRK
		.BYTE 9, $17		; ofs 0x000080be, -> dst _b0_s5F
		BCC		loc_3A5FD	; code used at a000
		INC		byte_46		; code used at a000
		INC		byte_46		; code used at a000
loc_3A5FD:				; CODE XREF: _b2_sB+2A8-j
		LDA		byte_46		; code used at a000
		BNE		loc_3A61D	; code used at a000
		LDA		#$3D 
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		BRK
		.BYTE 2, 7		; ofs 0x00158004, -> dst _bE_s2
		BRK
		.BYTE 5, 7		; ofs 0x0015800a, -> dst _bE_s5
		LDA		byte_51
		STA		byte_D2
		LDA		#$BF 
		BRK
		.BYTE $74, 7		; ofs 0x00068012, -> dst _b4_s9
		LDX		#$3C 
		JSR		_vblank_count
		JMP		loc_3A5A8
loc_3A61D:				; CODE XREF: _b2_sB+2B0-j
		CMP		#1		; code used at a000
		BEQ		loc_3A635	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_3A642	; code used at a000
		LDA		#$21       ; code used at a000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		CMP		#$FF		; code used at a000
		BNE		loc_3A631	; code used at a000
loc_3A62E:				; CODE XREF: _b2_sB+2EB-j _b2_sB+31E-j
		JMP		loc_3A5A8
loc_3A631:				; CODE XREF: _b2_sB+2DD-j
		CMP		#0		; code used at a000
		BEQ		loc_3A642	; code used at a000
loc_3A635:				; CODE XREF: _b2_sB+2D0-j
		JSR		loc_3A457	; code used at a000
		CPX		#$FF		; code used at a000
		BEQ		loc_3A62E	; code used at a000
		LDY		byte_45		; code used at a000
		LDA		#6		; code used at a000
		BNE		loc_3A677	; code used at a000
loc_3A642:				; CODE XREF: _b2_sB+2D4-j _b2_sB+2E4-j
		LDX		byte_45		; code used at a000
		LDA		#$90       ; code used at a000
		JSR		_get_syscall0_data_byte_X ; code used at a000
		STA		byte_46		; code used at a000
		BIT		byte_46		; code used at a000
		BVS		loc_3A660	; code used at a000
		LDX		#$80       ; code used at a000
		AND		#$20       ; code used at a000
		BNE		loc_3A66F	; code used at a000
		LDX		byte_51		; code used at a000
		LDA		byte_540,X	; code used at a000
		AND		#3		; code used at a000
		TAX				; code used at a000
		JMP		loc_3A66F	; code used at a000
loc_3A660:				; CODE XREF: _b2_sB+2FE-j
		LDY		#$38       ; code used at a000
		AND		#$20       ; code used at a000
		BEQ		loc_3A667	; code used at a000
		INY				; code used at a000
loc_3A667:				; CODE XREF: _b2_sB+315-j
		TYA				; code used at a000
		JSR		loc_3A459	; code used at a000
		CPX		#$FF		; code used at a000
		BEQ		loc_3A62E	; code used at a000
loc_3A66F:				; CODE XREF: _b2_sB+304-j _b2_sB+30E-j
		LDY		byte_45		; code used at a000
		LDA		#3		; code used at a000
		BNE		loc_3A677	; code used at a000
loc_3A675:				; CODE XREF: _b2_sB+F7-p
					; _b2_sB:loc_3A578-j _b2_sB:loc_3A5A5-j
		LDA		byte_53		; code used at a000
loc_3A677:				; CODE XREF: _b2_sB+102-j _b2_sB+2F1-j
					; _b2_sB+324-j
		STX		word_4		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
loc_3A67B:				; code used at a000
		ASL
		ASL		; code used at a000
		ORA		word_4		; code used at a000
		LDX		byte_51		; code used at a000
		STA		byte_54C,X	; code used at a000
		TYA				; code used at a000
		STA		byte_558,X	; code used at a000
		RTS				; code used at a000
loc_3A689:				; CODE XREF: _b2_sB+EA-j
		LDA		#$3D       ; code used at a000
		BRK
		.BYTE $72, 7		; ofs 0x0006800e, -> dst _b4_s7
		BRK
		.BYTE $75, 7		; ofs 0x00068014, -> dst _b4_sA
		LDA		#$83       ; code used at a000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $2D, $17		; ofs 0x0014004c, -> dst _bD_s26
		LDA		word_4		; code used at a000
		STA		byte_D2		; code used at a000
		LDX		#$50       ; code used at a000
		BRK
		.BYTE $D7, 7		; ofs 0x0006803a, -> dst _b4_s1D
		CMP		#$50       ; code used at a000
		BEQ		loc_3A6A8	; code used at a000
		LDA		#8		; code used at a000
loc_3A6A8:				; CODE XREF: _b2_sB+355-j
		BRK
		.BYTE $73, 7		; ofs 0x00068010, -> dst _b4_s8
		LDA		byte_6A6B	; code used at a000
		BNE		loc_3A6D7	; code used at a000
		LDA		byte_566	; code used at a000
		AND		#8		; code used at a000
		BNE		loc_3A6CC	; code used at a000
		LDA		byte_6A6A	; code used at a000
		CMP		#$A		; code used at a000
		BCS		loc_3A6CC	; code used at a000
		LDA		byte_566	; code used at a000
		AND		#3		; code used at a000
		TAX				; code used at a000
		JSR		sub_1743B8	; code used at a000
		CMP		byte_3A6F9,X	; code used at a000
		BCC		loc_3A6D7	; code used at a000
loc_3A6CC:				; CODE XREF: _b2_sB+366-j _b2_sB+36D-j
		BRK
		.BYTE $AA, 7		; ofs 0x0000808e, -> dst _b0_s47
		BRK
		.BYTE $70, 7		; ofs 0x0006800a, -> dst _b4_s5
		PLA				; code used at a000
		PLA				; code used at a000
		LDA		#$FD       ; code used at a000
		RTS				; code used at a000
loc_3A6D7:				; CODE XREF: _b2_sB+35F-j _b2_sB+37B-j
		LDA		#$17
		BRK
		.BYTE $73, 7		; ofs 0x00068010, -> dst _b4_s8
		LDA		byte_566
		CLC
		ADC		#1
		AND		#3
		PHA
		LDA		byte_566
		AND		#$FC 
		STA		byte_566
		PLA
		ORA		byte_566
		ORA		#4
		STA		byte_566
		PLA
		PLA
		RTS
byte_3A6F9:
		.BYTE $80,$80,$40,  0	; DATA XREF: _b2_sB+378-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A6FD:				; CODE XREF: _b2_sB+8A-p
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		byte_6A9B,X	; code used at a000
		AND		#3		; code used at a000
		STA		byte_CE		; code used at a000
		JSR		_sram_b0_s2C	; code used at a000
		CMP		#7		; code used at a000
		BEQ		loc_3A721	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_D0		; code used at a000
		JSR		_sram_bank0_sub39 ; code used at a000
		LDA		byte_8		; code used at a000
		PHA				; code used at a000
		INC		byte_D0		; code used at a000
		JSR		_sram_bank0_sub39 ; code used at a000
		PLA				; code used at a000
		ORA		byte_8		; code used at a000
		BNE		loc_3A725	; code used at a000
loc_3A721:				; CODE XREF: sub_3A6FD+E-j
		LDY		#2		; code used at a000
		BNE		loc_3A727	; code used at a000
loc_3A725:				; CODE XREF: sub_3A6FD+22-j
		LDY		#0		; code used at a000
loc_3A727:				; CODE XREF: sub_3A6FD+26-j
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		byte_52		; code used at a000
		BEQ		loc_3A72E	; code used at a000
		INY				; code used at a000
loc_3A72E:				; CODE XREF: sub_3A6FD+2E-j
		STY		byte_54		; code used at a000
		STX		byte_CE		; code used at a000
		RTS				; code used at a000
byte_3A733:
		.BYTE	0,  1,	7,  3,	0,  1,	2,  3,	0,  7,	2,  3,	0,  2,	3
					; DATA XREF: _b2_sB+D2-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b2_sD:					; CODE XREF: sub_694DA:loc_69536-P
					; DATA XREF: BANK2:801A-o
		JSR		_sram_b0_s2C	; code used at a000
		CMP		#7		; code used at a000
		BNE		loc_3A750	; code used at a000
		JSR		sub_1743B8
		CMP		#$41 
		BCC		loc_3A752
loc_3A750:				; CODE XREF: _b2_sD+5-j	_b2_sD+20-j
		CLC				; code used at a000
		RTS				; code used at a000
loc_3A752:				; CODE XREF: _b2_sD+C-j
		JSR		_b2_sE
		LDA		off_3A946
		STA		word_3E
		LDA		off_3A946+1
		STA		word_3E+1
		BRK
		.BYTE $97, $17		; ofs 0x000f8016, -> dst _bA_sB
		BCC		loc_3A750
		TAX
		LDA		#$B2 
		JSR		_get_syscall0_data_byte_X
		TAX
		STA		byte_47
		CMP		#$F
		BCC		sub_3A7E9
		CMP		#$15
		BCC		loc_3A79E
		CMP		#$1E
		BCC		loc_3A7A1
		CMP		#$1E
		BEQ		loc_3A7A4
		CMP		#$1F
		BEQ		loc_3A7A7
		CMP		#$24 
		BCC		loc_3A787
		CLC
		RTS
loc_3A787:				; CODE XREF: _b2_sD+41-j
		JSR		sub_3A7E9
		LDA		byte_47
		SEC
		SBC		#$20 
		ASL
		TAX
		LDA		off_3A985,X
		STA		word_3C
		LDA		off_3A985+1,X
		STA		word_3C+1
		JMP		(word_3C)
loc_3A79E:				; CODE XREF: _b2_sD+31-j
		JMP		loc_3A7F9
loc_3A7A1:				; CODE XREF: _b2_sD+35-j
		JMP		loc_3A810
loc_3A7A4:				; CODE XREF: _b2_sD+39-j
		JMP		sub_3A85E
loc_3A7A7:				; CODE XREF: _b2_sD+3D-j
		JMP		sub_3A876

; =============== S U B	R O U T	I N E =======================================
sub_3A7AA:				; DATA XREF: BANK2:off_3A985-o
		LDX		byte_CE
		LDA		byte_6A9B,X
		ORA		#$20 
		STA		byte_6A9B,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A7B6:				; DATA XREF: BANK2:A987-o
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73D,X
		ORA		#$40 
		STA		byte_73D,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A7C4:				; DATA XREF: BANK2:A989-o
		LDX		byte_CE
		LDA		byte_6A9B,X
		ORA		#8
		STA		byte_6A9B,X
		TXA
		ASL
		TAX
		LDA		byte_73C,X
		ORA		#3
		STA		byte_73C,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A7DB:				; DATA XREF: BANK2:A98B-o
		LDA		byte_CE
		ASL
		TAX
		LDA		byte_73D,X
		ORA		#$10
		STA		byte_73D,X
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A7E9:				; CODE XREF: _b2_sD+2D-j
					; _b2_sD:loc_3A787-p
					; sub_3A7E9:loc_3A805-p	sub_3A7E9+4D-p
					; sub_3A85E-p sub_3A876+9-p
		LDA		byte_CE
		STA		byte_D2
		LDX		byte_47
		CPX		#$D
		BEQ		loc_3A854
		LDA		byte_3A950,X
		JMP		sub_3A93C
loc_3A7F9:				; CODE XREF: _b2_sD:loc_3A79E-j
		CMP		#$10
		BNE		loc_3A805
		LDA		#$8E 
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $66, 7		; ofs 0x0003800e, -> dst _b2_s7_screen_spell_blink
loc_3A805:				; CODE XREF: sub_3A7E9+12-j
		JSR		sub_3A7E9
		LDX		byte_47
		LDA		byte_3A965,X
		JMP		sub_3A93C
loc_3A810:				; CODE XREF: _b2_sD:loc_3A7A1-j
		CMP		#$1D
		BNE		loc_3A81D
		LDX		byte_CE
		LDA		byte_718,X
		AND		#8
		BEQ		loc_3A852
loc_3A81D:				; CODE XREF: sub_3A7E9+29-j
		LDA		byte_CE
		STA		byte_D3
		LDA		byte_47
		CMP		#$17
		BEQ		loc_3A831
		JSR		sub_3A88D
		BCC		loc_3A852
		BRK
		.BYTE $B1, 7		; ofs 0x00068024, -> dst _b4_s12
		STA		byte_D3
loc_3A831:				; CODE XREF: sub_3A7E9+3C-j
		LDX		byte_47
		LDA		byte_3A950,X
		JSR		sub_3A7E9
		BRK
		.BYTE $B1, 7		; ofs 0x00068024, -> dst _b4_s12
		STA		byte_D2
		LDX		byte_47
		LDA		byte_3A965,X
		JSR		sub_3A93C
		LDA		byte_47
		CMP		#$1D
		SEC
		BNE		locret_3A853
		LDA		#$FC 
		JMP		sub_3A93C
loc_3A852:				; CODE XREF: sub_3A7E9+32-j
					; sub_3A7E9+41-j sub_3A7E9+6E-j
		CLC
locret_3A853:				; CODE XREF: sub_3A7E9+62-j
		RTS
loc_3A854:				; CODE XREF: sub_3A7E9+8-j
		JSR		sub_3A8A4
		BCC		loc_3A852
		LDA		#$E2 
		JMP		sub_3A93C

; =============== S U B	R O U T	I N E =======================================
sub_3A85E:				; CODE XREF: _b2_sD:loc_3A7A4-j
		JSR		sub_3A7E9
		JSR		sub_3A8BA
		BCC		loc_3A86F
		LDA		word_4
		BNE		loc_3A874
		LDA		#$EC 
		JMP		sub_3A93C
loc_3A86F:				; CODE XREF: sub_3A85E+6-j
		LDA		#$EB 
		JMP		sub_3A93C
loc_3A874:				; CODE XREF: sub_3A85E+A-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A876:				; CODE XREF: _b2_sD:loc_3A7A7-j
		JSR		sub_3A901
		BCC		loc_3A88B
		LDA		word_4
		STA		byte_D3
		JSR		sub_3A7E9
		LDA		byte_D3
		STA		byte_D2
		LDA		#$F1 
		JMP		sub_3A93C
loc_3A88B:				; CODE XREF: sub_3A876+3-j
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A88D:				; CODE XREF: sub_3A7E9+3E-p
		LDX		#0
loc_3A88F:				; CODE XREF: sub_3A88D+10-j
		TXA
		ASL
		TAY
		LDA		byte_530,Y
		AND		byte_531,Y
		BMI		loc_3A8A0
		INX
		CPX		#8
		BNE		loc_3A88F
		DEX
loc_3A8A0:				; CODE XREF: sub_3A88D+B-j
		STX		byte_64
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A8A4:				; CODE XREF: sub_3A7E9:loc_3A854-p
		LDX		#7
loc_3A8A6:				; CODE XREF: sub_3A8A4+10-j
		TXA
		ASL
		TAY
		LDA		byte_530,Y
		BPL		loc_3A8B3
		LDA		byte_531,Y
		BPL		loc_3A8B8
loc_3A8B3:				; CODE XREF: sub_3A8A4+8-j
		DEX
		BPL		loc_3A8A6
		CLC
		RTS
loc_3A8B8:				; CODE XREF: sub_3A8A4+D-j
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_3A8BA:				; CODE XREF: sub_3A85E+3-p sub_3A901-p
		LDX		byte_4C
		DEX
		BNE		loc_3A8C1
		CLC
		RTS
loc_3A8C1:				; CODE XREF: sub_3A8BA+3-j
		LDX		#0
		STX		word_4+1
loc_3A8C5:				; CODE XREF: sub_3A8BA+2F-j
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		AND		byte_73D,Y
		BPL		loc_3A8E4
		CPX		byte_CE
		BEQ		loc_3A8E4
		LDA		byte_6A9B,X
		AND		#8
		STA		word_4
		LDA		byte_73D,Y
		AND		#$40 
		ORA		word_4
		BEQ		loc_3A8E6
loc_3A8E4:				; CODE XREF: sub_3A8BA+14-j
					; sub_3A8BA+18-j
		INC		word_4+1
loc_3A8E6:				; CODE XREF: sub_3A8BA+28-j
		INX
		CPX		#4
		BNE		loc_3A8C5
		LDA		word_4+1
		PHA
		JSR		_sram_bank0_sub33
		DEC		word_4
		PLA
		SEC
		SBC		word_4
		BNE		loc_3A8FD
loc_3A8F9:				; CODE XREF: sub_3A8BA+45-j
		STA		word_4
		SEC
		RTS
loc_3A8FD:				; CODE XREF: sub_3A8BA+3D-j
		LDA		#1
		BNE		loc_3A8F9

; =============== S U B	R O U T	I N E =======================================
sub_3A901:				; CODE XREF: sub_3A876-p
		JSR		sub_3A8BA
		BCS		loc_3A907
		RTS
loc_3A907:				; CODE XREF: sub_3A901+3-j
		LDX		#3
loc_3A909:				; CODE XREF: sub_3A901+1F-j
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		AND		byte_73D,Y
		BPL		loc_3A91F
		CPX		byte_CE
		BEQ		loc_3A91F
		LDA		byte_718,X
		AND		#8
		BNE		loc_3A924
loc_3A91F:				; CODE XREF: sub_3A901+11-j
					; sub_3A901+15-j
		DEX
		BPL		loc_3A909
		CLC
		RTS
loc_3A924:				; CODE XREF: sub_3A901+1C-j
		STX		word_4
		SEC
		RTS

; =============== S U B	R O U T	I N E =======================================
_b2_sE:					; CODE XREF: _b2_sD:loc_3A752-p
					; _bA_sA+20-P
					; DATA XREF: BANK2:801C-o
		LDA		off_3A944
		STA		word_3C
		LDA		off_3A944+1
		STA		word_3C+1
		LDA		byte_CE
		ASL
		ASL
		ASL
		LDX		#word_3C
		JMP		_add8_to_16	; A = value

; =============== S U B	R O U T	I N E =======================================
sub_3A93C:				; CODE XREF: sub_3A7E9+D-j
					; sub_3A7E9+24-j sub_3A7E9+5A-p
					; sub_3A7E9+66-j sub_3A7E9+72-j
					; sub_3A85E+E-j	sub_3A85E+13-j
					; sub_3A876+12-j
		BRK
		.BYTE $73, 7		; ofs 0x00068010, -> dst _b4_s8
		BRK
		.BYTE $D0, 7		; ofs 0x0006802c, -> dst _b4_s16
		SEC
		RTS
off_3A944:
		.WORD byte_79C		; DATA XREF: _b2_sE-r _b2_sE+5-r
off_3A946:
		.WORD byte_3A948	; DATA XREF: _b2_sD+13-r _b2_sD+18-r
byte_3A948:
		.BYTE $FF,$FF,$FF,$FF, $F,  0,	0,  0 ;	DATA XREF: BANK2:off_3A946-o
byte_3A950:
		.BYTE $DE,$DD,$DF,$E6,$E7,$E8,$E9,$EE,$EF,$F7,$3A,$FD,$E1,$E2,	0,$D7
					; DATA XREF: sub_3A7E9+A-r
					; sub_3A7E9+4A-r
		.BYTE $D9,$F2,$D6,$4B,$F4
byte_3A965:
		.BYTE $DA,$E0,$E3,$F3,$F6,$F9,$FE,$D8,$FA,$EA,$F0,  4,$ED,$E5,$E4,$F8
					; DATA XREF: sub_3A7E9+21-r
					; sub_3A7E9+57-r
		.BYTE $40,$40,$17,$4D,$F5,$DB,$DB,$12,$12,$12,$12,$FF,$FF,$FB,$EB,$F1
off_3A985:
		.WORD sub_3A7AA		; DATA XREF: _b2_sD+4F-r _b2_sD+54-r
		.WORD sub_3A7B6
		.WORD sub_3A7C4
		.WORD sub_3A7DB

; =============== S U B	R O U T	I N E =======================================
_b2_sC:					; CODE XREF: sub_20707+2-P sub_F9099-P
					; sub_158AA6+2F-P sub_158B9D-P
					; DATA XREF: BANK2:8018-o
		CPX		#5		; code used as ind data	at a000
		BNE		loc_3A994	; code used as ind data	at a000
		JSR		sub_3A9E8	; code used at a000
loc_3A994:				; CODE XREF: _b2_sC+2-j
		TAY				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		TXA				; code used as ind data	at a000
		CMP		#4		; code used as ind data	at a000
		BCS		loc_3A9A7	; code used as ind data	at a000
		CPY		#$40       ; code used as ind data at a000
		BCC		loc_3A9A7	; code used as ind data	at a000
		PLA				; code used at a000
		SBC		#$40       ; code used at a000
		PHA				; code used as ind data	at a000
		TXA				; code used at a000
		CLC				; code used at a000
		ADC		#8		; code used at a000
loc_3A9A7:				; CODE XREF: _b2_sC+C-j	_b2_sC+10-j
		ASL		; code used as ind data	at a000
		TAX				; code used as ind data	at a000
		LDA		_str_libs_list,X ; code	used as	ind data at a000
		STA		word_6E		; code used as ind data	at a000
		LDA		_str_libs_list+1,X ; code used as ind data at a000
		STA		word_6E+1	; code used as ind data	at a000
		LDY		#0		; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		BEQ		loc_3A9CC	; code used as ind data	at a000
		TAX				; code used as ind data	at a000
loc_3A9B9:				; CODE XREF: _b2_sC+34-j _b2_sC+38-j
		LDA		(word_6E),Y	; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BEQ		loc_3A9C8	; code used as ind data	at a000
loc_3A9BF:				; CODE XREF: _b2_sC+3C-j
		INC		word_6E		; code used as ind data	at a000
		BNE		loc_3A9B9	; code used as ind data	at a000
		INC		word_6E+1	; code used as ind data	at a000
		JMP		loc_3A9B9	; code used as ind data	at a000
loc_3A9C8:				; CODE XREF: _b2_sC+30-j
		DEX				; code used as ind data	at a000
		BNE		loc_3A9BF	; code used as ind data	at a000
		INY				; code used as ind data	at a000
loc_3A9CC:				; CODE XREF: _b2_sC+29-j
		LDX		#$F		; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
loc_3A9D0:				; CODE XREF: _b2_sC+46-j
		STA		word_4,X	; code used as ind data	at a000
		DEX				; code used as ind data	at a000
		BPL		loc_3A9D0	; code used as ind data	at a000
loc_3A9D5:				; CODE XREF: _b2_sC+54-j sub_3A9E8+1F-j
		LDA		(word_6E),Y	; code used as ind data	at a000
		CMP		#$FF		; code used as ind data	at a000
		BEQ		loc_3A9E3	; code used as ind data	at a000
		STA		word_4+1,X	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		INX				; code used as ind data	at a000
		CPX		#$F		; code used as ind data	at a000
		BCC		loc_3A9D5	; code used as ind data	at a000
loc_3A9E3:				; CODE XREF: _b2_sC+4C-j
		LDA		#$60       ; code used as ind data at a000
		STA		word_4+1,X	; code used at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_3A9E8:				; CODE XREF: _b2_sC+4-p
		TAY				; code used at a000
		PHA				; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		TYA				; code used at a000
		BNE		loc_3AA0A	; code used at a000
		LDA		byte_60B7	; code used at a000
		LSR		; code used at a000
		BCC		loc_3AA0A	; code used at a000
		LDA		_str_lib_erdrick_ofs
		STA		word_6E
		LDA		_str_lib_erdrick_ofs+1
		STA		word_6E+1
		LDX		#$FF
		LDY		#0
		PLA
		PLA
		PLA
		PLA
		JMP		loc_3A9D5
loc_3AA0A:				; CODE XREF: sub_3A9E8+5-j sub_3A9E8+B-j
		PLA				; code used at a000
		TAX				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000
_str_libs_list:
		.WORD _str_lib0_items_low0 ; DATA XREF:	_b2_sC+1C-r _b2_sC+21-r
					; data used at a000
		.WORD _str_lib1_items_low1 ; data used at a000
		.WORD _str_lib2_enemy_low0 ; data used at a000
		.WORD _str_lib3_enemy_low1 ; data used at a000
		.WORD _str_lib4_spells	; data used at a000
		.WORD _str_lib5_classes	; data used at a000
		.WORD _str_lib6_sex	; data used at a000
		.WORD _str_lib7_locations ; data used at a000
		.WORD _str_lib8_items_hi0 ; data used at a000
		.WORD _str_lib9_items_hi1 ; data used at a000
		.WORD _str_libA_enemy_hi0 ; data used at a000
		.WORD _str_libB_enemy_hi1 ; data used at a000
_str_lib_erdrick_ofs:
		.WORD _str_lib_erdrick ; DATA XREF: sub_3A9E8+D-r
					; sub_3A9E8+12-r
_str_lib5_classes:
		.BYTE	$2C, $F,$1C,$19,$FF ; DATA XREF: BANK2:AA18-o
					; ind data used	at a000
		.BYTE $3B,$13,$24, $B,$1C, $E,$FF ; ind	data used at a000
		.BYTE $34,$13,$16,$11,$1C,$13,$17,$FF ;	ind data used at a000
		.BYTE $37, $B,$11, $F,$FF ; ind	data used at a000
; [00000008 BYTES: BEGIN OF AREA BANK2:AA41. PRESS KEYPAD "-" TO COLLAPSE]
		.BYTE $37,$19,$16, $E,$13, $F,$1C,$FF ;	ind data used at a000
; [00000008 BYTES: END OF AREA BANK2:AA41. PRESS KEYPAD	"-" TO COLLAPSE]
		.BYTE $31, $F,$1C, $D,$12, $B,$18,$1E,$FF ; ind	data used at a000
		.BYTE $2A,$13,$11,$12,$1E, $F,$1C,$FF ;	ind data used at a000
		.BYTE $2B,$19,$19,$10,$6B,$19,$10,$10,$FF
_str_lib_erdrick:
		.BYTE $29,$1C,	$E,$1C,$13, $D,$15,$FF
					; DATA XREF: BANK2:_str_lib_erdrick_ofs-o
_str_lib6_sex:
		.BYTE $31, $B,$16, $F,$FF,$2A, $F,$17, $B,$16, $F,$FF
					; DATA XREF: BANK2:AA1A-o
					; ind data used	at a000
_str_lib7_locations:
		.BYTE $25,$16,$13, $B,$12, $B,$18,$FF ; DATA XREF: BANK2:AA1C-o
					; ind data used	at a000
		.BYTE $36, $F, $F,$20, $F,$61,$61,$FF ;	ind data used at a000
		.BYTE $36,$19,$17, $B,$16,$23,$61,$61,$FF ; ind	data used at a000
		.BYTE $2F, $B,$18, $B,$20, $F,$61,$FF ;	ind data used at a000
		.BYTE $32,$19, $B,$18,$13, $F,$16,$1D,$FF ; ind	data used at a000
		.BYTE $25,$1D,$1D, $B,$1C, $B,$17,$FF ;	ind data used at a000
; [00000008 BYTES: BEGIN OF AREA BANK2:AAA9. PRESS KEYPAD "-" TO COLLAPSE]
		.BYTE $2D,$1D,$13,$1D,$61,$61,$61,$FF ;	ind data used at a000
; [00000008 BYTES: END OF AREA BANK2:AAA9. PRESS KEYPAD	"-" TO COLLAPSE]
		.BYTE $34,$19,$1C,$1E,$19,$11, $B,$61,$FF ; ind	data used at a000
		.BYTE $26, $B,$12, $B,$1C, $B,$1E, $B,$FF ; ind	data used at a000
		.BYTE $28,$12, $B,$17, $B,$61,$61,$FF ;	ind data used at a000
		.BYTE $30, $B,$18, $D, $F,$16,$61,$FF ;	ind data used at a000
		.BYTE $2E,$13,$1A, $B,$18,$11,$61,$FF ;	ind data used at a000
		.BYTE $29,$11,$13,$18, $C, $F, $B,$1C,$FF ; ind	data used at a000
		.BYTE $37, $B,$17, $B,$18, $B,$19,$61,$FF ; ind	data used at a000
		.BYTE $37,$19,$19,$61,$61,$61,$61,$FF ;	ind data used at a000
		.BYTE $38, $B,$18,$1E, $F,$11, $F,$16,$FF ; ind	data used at a000
		.BYTE $2C, $B,$1F,$15,$1D,$18, $F,$1D,$1D,$FF ;	ind data used at a000
		.BYTE $27, $B,$18,$1E,$16,$13,$18,$FF ;	ind data used at a000
		.BYTE $2F,$19,$16,$61,$61,$61,$61,$FF ;	ind data used at a000
		.BYTE $36,$13,$17,$1F,$16, $E, $B,$1C,$FF ; ind	data used at a000
_str_lib4_spells:
		.BYTE $26,$16,	$B,$24,	$F,$FF ; DATA XREF: BANK2:AA16-o
					; ind data used	at a000
		.BYTE $26,$16, $B,$24, $F,$17,$19,$1C, $F,$FF ;	ind data used at a000
		.BYTE $26,$16, $B,$24, $F,$17,$19,$1D,$1E,$FF ;	ind data used at a000
		.BYTE $2A,$13,$1C, $F, $C, $B,$16,$FF ;	ind data used at a000
		.BYTE $2A,$13,$1C, $F, $C, $B,$18, $F,$FF ; ind	data used at a000
		.BYTE $2A,$13,$1C, $F,$20,$19,$16,$1E,$FF ; ind	data used at a000
		.BYTE $26, $B,$18,$11,$FF ; ind	data used at a000
		.BYTE $26,$19,$19,$17,$FF ; ind	data used at a000
		.BYTE $29,$22,$1A,$16,$19, $E, $F,$1E,$FF ; ind	data used at a000
		.BYTE $2D, $D, $F,$26,$19,$16,$1E,$FF ;	ind data used at a000
		.BYTE $37,$18,$19,$21, $C,$16, $B,$1D,$1E,$FF ;	ind data used at a000
		.BYTE $37,$18,$19,$21,$1D,$1E,$19,$1C,$17,$FF ;	ind data used at a000
		.BYTE $2D, $D, $F,$37,$1A, $F, $B,$1C,$1D,$FF ;	ind data used at a000
		.BYTE $2D,$18,$10, $F,$1C,$18,$19,$1D,$FF ; ind	data used at a000
		.BYTE $2D,$18,$10, $F,$1C,$17,$19,$1C, $F,$FF ;	ind data used at a000
		.BYTE $2D,$18,$10, $F,$1C,$17,$19,$1D,$1E,$FF ;	ind data used at a000
		.BYTE $3E, $B,$1A,$FF	; ind data used	at a000
		.BYTE $30,$13,$11,$12,$1E,$18,$13,$18,$11,$FF ;	ind data used at a000
		.BYTE $26, $F, $B,$1E,$FF ; ind	data used at a000
		.BYTE $28, $F,$10, $F, $B,$1E,$FF ; ind	data used at a000
		.BYTE $37, $B, $D,$1C,$13,$10,$13, $D, $F,$FF ;	ind data used at a000
		.BYTE $29,$22,$1A, $F,$16,$FF ;	ind data used at a000
		.BYTE $30,$13,$17, $C,$19,$FF ;	ind data used at a000
byte_3ABDB:
		.BYTE $36,$19, $C,$31, $B,$11,$13, $D,$FF ; ind	data used at a000
byte_3ABE4:
		.BYTE $37,$16,$19,$21,$FF ; ind	data used at a000
		.BYTE $37,$1A, $F, $F, $E,$39,$34,$FF ;	ind data used at a000
		.BYTE $2C, $F, $B,$16,$FF ; ind	data used at a000
byte_3ABF6:
		.BYTE $2C, $F, $B,$16,$17,$19,$1C, $F,$FF ; ind	data used at a000
		.BYTE $2C, $F, $B,$16, $B,$16,$16,$FF ;	ind data used at a000
		.BYTE	0,$FF		; ind data used	at a000
		.BYTE $2C, $F, $B,$16,$1F,$1D,$FF ; ind	data used at a000
		.BYTE $2C, $F, $B,$16,$1F,$1D, $B,$16,$16,$FF ;	ind data used at a000
		.BYTE $3A,$13,$20,$13,$10,$23,$FF ; ind	data used at a000
		.BYTE $36, $F,$20,$13,$20, $F,$FF ; ind	data used at a000
		.BYTE $37,$16, $F, $F,$1A,$FF ;	ind data used at a000
		.BYTE $25,$21, $B,$15, $F,$FF ;	ind data used at a000
		.BYTE $37,$1E,$19,$1A,$37,$1A, $F,$16,$16,$FF ;	ind data used at a000
		.BYTE $37,$1F,$1C,$1C,$19,$1F,$18, $E,$FF ; ind	data used at a000
		.BYTE $36, $F,$1E,$1F,$1C,$18,$FF ; ind	data used at a000
		.BYTE $27,$12, $B,$19,$1D,$FF ;	ind data used at a000
		.BYTE $38,$1C, $B,$18,$1D,$10,$19,$1C,$17,$FF ;	ind data used at a000
		.BYTE $26, $F,$28,$1C, $B,$11,$19,$18,$FF ; ind	data used at a000
		.BYTE $2D,$1C,$19,$18,$13,$24, $F,$FF ;	ind data used at a000
		.BYTE $37, $B,$1A,$FF	; ind data used	at a000
		.BYTE $28, $F,$10, $F,$18, $D, $F,$FF ;	ind data used at a000
		.BYTE $39,$1A,$1A, $F,$1C,$FF ;	ind data used at a000
		.BYTE $2D,$18, $D,$1C, $F, $B,$1D, $F,$FF ; ind	data used at a000
		.BYTE $2D,$18, $D,$1C, $F, $B,$1D, $F,$FF ; ind	data used at a000
		.BYTE $26,$19,$1F,$18, $D, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1C,$1C,$13, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$13,$15,$13,$16,$16 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$12, $B,$18, $D, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$18,$1E,$13, $E,$19,$1E, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,$1F,$17, $C,$33,$10,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$1F,$1C,$1D, $F,$33,$10,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $F,$1A, $F,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $B,$23,$6B,$32,$13,$11,$12,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1A, $F,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3C,$6B,$36, $B,$23 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1F,$1E,$1D,$13, $E, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$18,$20,$13,$1D,$13, $C,$16, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $F,$1A,$2B,$1F, $B,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_str_lib0_items_low0:
		.BYTE $27,$23,$1A,$1C, $F,$1D,$1D ; DATA XREF: BANK2:_str_libs_list-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16,$1F, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$19,$1A,$1A, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13, $D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$1C,$19,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1E,$1E,$16, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$1C,$19, $B, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$13,$24, $B,$1C, $E,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$19,$13,$1D,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$1C,$19,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$12,$19,$1C,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$13, $B,$18,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$12, $B,$13,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$12,$19,$1C,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$18,$19,$21, $C,$16, $B,$1D,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$17,$19,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $B,$10,$10,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $B,$10,$10,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$1F,$16,$1E,$13,$6B, $F, $E,$11, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $B,$10,$10,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3E,$19,$17, $C,$13, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A, $B,$16, $D,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$16, $F, $E,$11, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$12,$1F,$18, $E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $B,$10,$10,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C,$19, $D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$1C, $B,$11,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $B,$10,$10,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16,$19,$1E,$12, $F,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$1C, $B,$13,$18,$13,$18,$11 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $F, $B,$1E,$12, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$16, $B,$1D,$12,$23 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B,$16,$10,$50,$34,$16, $B,$1E, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$1F,$16,$16,$50,$34,$16, $B,$1E, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13, $D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16,$19, $B,$15,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$1C,$19,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$18,$13,$17, $B,$16 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$13,$11,$12,$1E,$13,$18,$11 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $B, $D,$1C, $F, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$1E, $F,$1C,$50,$2A,$16,$23,$13,$18,$11 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$12, $B,$13,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$23,$10, $B,$1C, $F,$1C,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $F,$20, $F, $B,$16,$13,$18,$11 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13, $D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12, $F,$16,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$1C, $B,$11,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E, $F, $E,$11, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$18,$11, $F,$16,$68,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $F, $B,$1E,$12, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$1C,$19,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$1C,$19,$18,$24, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$13,$16,$20, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$19,$16, $E, $F,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_str_lib8_items_hi0:
		.BYTE $2D,$1C,$19,$18 ; DATA XREF: BANK2:AA1E-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$23,$1D,$1E, $F,$1C,$13,$19,$1F,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $39,$18,$16,$1F, $D,$15,$23 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$1F,$1C, $C, $B,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,$19,$12	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $F, $B,$1E,$12, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$1C,$19,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $B, $D,$1C, $F, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$13,$18,$11,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$19, $F,$1D,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$19,$16, $E, $F,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $F,$1E, $F,$19,$1C,$13,$1E, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$19,$19,$15,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $50,$50		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$13,$24, $B,$1C, $E,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$16, $B, $D,$15 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $B,$11, $F,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$13,$1C,$1C,$19,$1C,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A, $B,$1D, $F,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $B,$17,$1A,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E, $B,$10,$10,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$19,$18, $F,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$18,$20,$13,$1D,$13, $C,$13,$16,$13,$1E,$23 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13, $D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$12,$13, $F,$10,$68,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13, $D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$13,$18, $B,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$1C, $F, $B,$17 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$15, $F,$50,$39,$1A ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$19,$23, $B,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C,$13, $D,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$1C, $F,$18,$11,$1E,$12 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$11,$13,$16,$13,$1E,$23 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A,$13,$1E, $B,$16,$13,$1E,$23 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$1F, $D,$15	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$18,$1E, $F,$16,$16,$13,$11, $F,$18, $D, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25, $D,$19,$1C,$18,$1D,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $F, $E,$13, $D, $B,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$18,$1E,$13, $E,$19,$1E, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A, $B,$13,$1C,$23 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$13,$18,$11,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $F, $B,$10,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $50,$50,$50	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$19, $D,$15, $F,$1E,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$1F,$16,$16,$50,$31,$19,$19,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$1E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $B,$13,$16,$19,$1C,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $29, $D,$12,$19,$13,$18,$11 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A, $B,$13,$1C,$23 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$13,$16,$20, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1A,$12, $F,$1C, $F,$50,$19,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$19,$13,$1D,$19,$18,$50,$31,$19,$1E,$12 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1A,$13, $E, $F,$1C,$68,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$19,$18, $F,$50,$19,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B,$13,$18, $C,$19,$21 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$13,$16,$20, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $F, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3D, $F,$16,$16,$19,$21 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$1F,$1C,$1A,$16, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$16,$1F, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$1C, $F, $F,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_str_lib1_items_low1:
		.BYTE $37,$1E,$13,	$D,$15 ; DATA XREF: BANK2:AA10-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$18,$13,$10, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1A, $F, $B,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$22, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$18, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32, $F, $F, $E,$16, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16, $B,$21	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$12,$13,$1A	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12, $F, $B,$1C,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$13, $D,$15,$16, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$22, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B,$13,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B, $B,$13, $B	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $F,$10,$16, $F, $D,$1E,$13,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$1D,$1E,$1C,$1F, $D,$1E,$13,$19,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$19,$1C, $D, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$16,$16,$1F,$1D,$13,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$16, $B,$1D,$12, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B,$17,$17, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$12,$1F,$18, $E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$18,$11,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$16,$16, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2E,$1F, $E,$11,$17, $F,$18,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1F,$13,$1E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16,$19,$1E,$12, $F,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $29,$20, $B,$1D,$13,$19,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B, $E,$13, $B,$18, $D, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1A,$1C,$19,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1F,$13,$1E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1F,$13,$1E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$19, $C, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B, $E, $F,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16,$19,$1E,$12 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$13,$16	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16,$19,$1E,$12, $F,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$13,$17,$1D,$1F,$13,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$13,$15,$13,$18,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38, $F,$1C,$1C, $B,$10,$13,$1C,$17, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$13,$16	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$19, $C, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$1C, $F,$18,$11,$1E,$12 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$1C,$19, $F,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$19,$1C,$1C,$19,$21 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12,$13, $F,$16, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$1C,$19,$21,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_str_lib9_items_hi1:
		.BYTE $2C, $F,$16,$17, $F,$1E ; DATA XREF: BANK2:AA20-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B,$1E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$16,$17, $F,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$1D,$15	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$16,$17, $F,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$1D,$15	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$17,$1F,$16, $F,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$13,$10, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B,$1A,$1A,$13,$18, $F,$1D,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$16, $B,$21	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17, $C, $B,$18, $E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $B,$1E,$19,$1C,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$13,$18,$11	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34, $F,$1A,$1A, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$19,$18, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$1C,$19,$1F,$11,$12,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $B,$1C,$15,$18, $F,$1D,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$12, $B,$18,$11, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$13,$10, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$16,$16	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F, $F,$23	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F, $F,$23	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F, $F,$23	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$1F, $C,$23	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$19,$21, $E, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $D,$1C,$19,$16,$16 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $F, $F, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $F, $F, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $F, $F, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $F, $F, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $F, $F, $E	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$13,$10, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$1E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$23,$20, $F,$1C,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$19,$1C,$16, $E,$50,$38,$1C, $F, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$19,$20, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$16, $B,$1D,$1E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$12,$13,$11,$12,$50,$26,$19,$18, $F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$16,$1F,$1E, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$16,$1F,$1E, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B,$1C,$1A	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$13,$11,$12,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$19,$21, $E, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $F, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1F,$18,$16,$13,$11,$12,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$1C,$19,$1A	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C, $C	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_str_lib2_enemy_low0:
		.BYTE $37,$16,$13,$17, $F,$A5 ; DATA XREF:	BANK2:AA12-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$16, $B, $D,$15,$50,$36, $B,$20, $F,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$19,$1C,$18, $F, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$13, $B,$18,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$1D,$15, $F, $E,$50,$31,$19,$1E,$12,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$1C,$19,$11,$11,$19,$1C, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B, $C, $C,$16, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13, $D,$13, $B,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $D,$19,$1C,$1A,$13,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F, $B,$16, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$17,$19,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1A,$13,$15, $F, $E,$50,$2C, $B,$1C, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$19,$13,$1D,$19,$18,$50,$38,$19, $B, $E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27, $B,$1E, $F,$1C,$1A,$13,$16,$16, $B,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$1F,$17, $B,$18, $B, $C, $B,$1E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$1F,$1E,$1C, $F,$1A,$1F,$1A,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$16,$16, $F,$1C,$50,$26, $F, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$23,$50,$27,$1C, $B, $C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B, $B,$1D,$50,$27,$16,$19,$1F, $E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$17,$19,$18,$50,$38,$19, $B, $E,$1D,$1E,$19,$19,$16,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$19,$13,$1D,$19,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$20, $F,$18,$11, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B, $E,$12,$19,$1F,$18, $E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F, $B, $E,$16,$23 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12, $B, $E,$19,$21,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A, $B,$17,$1A,$13,$1C, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$18,$6B,$29, $B,$1E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36,$19,$11,$1F, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A, $B,$17,$1A,$13,$1C, $F,$50,$27, $B,$1E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$18,$11	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$13,$16, $E,$50,$25,$1A, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$1C,$13, $D,$15,$50,$26, $B,$11,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$1F,$17,$17,$23,$50,$31,$A1 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2D,$18,$10, $F,$1C,$18,$1F,$1D ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$1F,$17,$1A,$1F,$1D,$A7 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$16, $B,$17, $B,$1A, $F, $E, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$1F,$17,$17,$A0 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11, $F	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$1F,$18,$1E, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$20, $F,$18,$11, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32, $F,$20,$A5	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F, $B,$1E,$50,$27,$16,$19,$1F, $E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$19,$18,$11,$1F, $F, $C, $F, $B,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$1F,$1C, $F,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B,$17,$17,$19,$1C, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27, $B,$1E,$1F,$16, $B,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $29,$20,$13,$16,$50,$31, $B,$11, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$13,$17,$13, $B, $D,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B, $B,$1C,$1F, $E, $B,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $F,$1E, $B,$16,$50,$37,$16,$13,$17, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$19, $B,$1E, $F,$11,$19,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $29,$22, $F, $D,$1F,$1E,$13,$19,$18, $F,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$17,$19,$18,$13,$1E, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$1C, $B,$18,$11, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$18,$6B,$29, $B,$1E, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $29,$16,$13,$17,$13,$18, $B,$1E,$19,$1C,$A5
		.BYTE $FF
		.BYTE $2B,$1C, $F, $B,$1E,$50,$26, $F, $B,$15,$A5
		.BYTE $FF
		.BYTE $37,$16,$13,$17, $F,$50,$37,$18, $B,$13,$A3
		.BYTE $FF
		.BYTE $37,$15,$23,$50,$28,$1C, $B,$11,$19,$18,$A5
		.BYTE $FF
		.BYTE $26, $B,$1C,$18, $B, $C, $B,$1D,$A7
		.BYTE $FF
		.BYTE $3B,$13,$1E, $D,$12,$A4
		.BYTE $FF
		.BYTE $25,$20, $F,$18,$11, $F,$1C
		.BYTE $FF
		.BYTE $2D,$18,$10, $F,$1C,$18,$1F,$1D
		.BYTE $FF
		.BYTE $31, $B,$1C,$13,$18, $F
		.BYTE $FF
_str_libA_enemy_hi0:
		.BYTE $31, $B,$18,$50,$33,$68,$50,$3B, $B,$1C,$A5
					; DATA XREF: BANK2:AA22-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $F,$1C,$24,$19,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$18,$11,$50,$37,$1B,$1F,$13, $E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$1C, $B, $C,$1F,$1D,$A7 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $F,$1C,$24,$19,$18, $D,$13, $B,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $B, $E, $F,$1D,$68 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$13, $F,$1C, $D, $F,$50,$26, $F, $B,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$19,$1C,$15,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$13,$11,$12,$19,$1C,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$13,$18,$11,$21,$13,$18,$11,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A, $F,$18,$19,$17 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$16,$1F, $F,$50,$26, $F, $B,$15,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $F,$1E,$12, $B,$16 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$20, $F,$18,$11, $F,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $B,$20,$A6	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$13,$1E, $D,$12 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$16, $E,$50,$2C, $B,$11,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38, $F,$1C,$1C,$19,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$16, $B, $D,$13, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$23,$20, $F,$1C,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$19,$18,$11,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$19,$1C,$1E,$1C, $B,$11,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $29,$16,$23,$1D,$13,$1F,$17 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$19,$17, $C,$50,$27,$1C, $B,$11,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$1C,$13,$24,$24,$16,$A0 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A,$19,$19, $E,$19,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$18,$11	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$18,$19,$21,$50,$28,$1C, $B,$11,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$1C,$19,$16,$16,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$1C,$19,$1D,$1E,$50,$27,$16,$19,$1F, $E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $B,$18, $D,$13,$18,$11 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$13,$18,$13, $E, $F,$17,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38, $F,$18,$1E, $B, $D,$16, $F,$1D,$A7 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$15, $F,$16, $F,$1E,$19,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$13,$17,$13, $D,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$1C, $B,$1F, $E, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$19,$16,$19,$11,$12,$19,$1D,$1E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C,$19, $D,$12,$13,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$1E,$19,$18, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $B,$16, $B,$17, $B,$18, $E, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $F, $E,$50,$37,$16,$13,$17, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$19,$19,$1A,$13,$A4 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A,$13,$16, $F,$50,$37,$12, $B, $E,$19,$21,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A,$19,$19, $E,$19,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $F,$1E, $B,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$12,$19,$1F,$16,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$13,$19,$18,$12, $F, $B, $E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$19,$1D,$1D,$50,$38,$1C,$19,$16,$16,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$19,$16, $E,$50,$26, $B,$1D,$12, $F,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37, $D, $B,$16,$11,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$18,$11,$50,$31, $F,$1C,$24,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$1C, $B,$11, $B, $D,$16, $F,$1D,$A7 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $B,$1C,$1E,$12, $C, $F, $B,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$1C, $B,$18,$13,$1E, $F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30, $F,$19,$18, $B,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C, $D,$12,$17, $B,$11, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31, $B,$11,$13,$21,$23,$20, $F,$1C,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$13,$18,$11, $F, $E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$23, $E,$1C, $B,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$1C,$19,$16,$16,$50,$2F,$13,$18,$11,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$1C, $F, $F,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1C,$19,$11,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $34,$1F,$1E,$1C, $F,$11,$19,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $30,$13,$19,$18,$1C,$19, $B,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$21,$19,$1C, $E,$19,$13, $E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$13,$18,$11,$50,$2C,$23, $E,$1C, $B,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1C, $B,$17,$19,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1C, $B,$17,$19,$1D ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1C, $B,$17,$19,$1D,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3E,$19,$17, $B,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3E,$19,$17, $B,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$1C,$1E, $F,$11, $B,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F, $B,$18, $E, $B,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F, $B,$18, $E, $B,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F, $B,$18, $E, $B,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_str_lib3_enemy_low1:
		.BYTE $FF		; DATA XREF: BANK2:AA14-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B, $C, $C,$13,$1E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$18,$1E, $F, $B,$1E, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$1D,$1A,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$18,$1E, $F, $B,$1E, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$13,$16,$15,$21,$19,$1C,$17,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $36, $B,$20, $F,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$19, $B, $E,$1D,$1E,$19,$19,$16,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $31,$19,$1E,$12,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$18,$13,$11,$12,$1E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$1C,$19,$11,$11,$19,$1C, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$1C, $B, $C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$19, $B, $E,$1D,$1E,$19,$A2 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,$16,$A0	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2E, $B, $D,$15, $B,$16,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$12, $F,$1D,$1E,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $F, $B,$15,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2F,$18,$13,$11,$12,$1E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$16,$13,$17, $F,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_str_libB_enemy_hi1:
		.BYTE $FF		; DATA XREF: BANK2:AA24-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $27,$19,$18, $E,$19,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3E,$19,$17, $C,$13, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $25,$1C,$17,$19,$1C,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1D,$12, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$19, $D,$1E,$19,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12, $B, $E,$19,$21,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B,$1D,$12, $F,$1C,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$13,$1C, $E,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $37,$12, $B,$17, $B,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$19,$1C,$1E,$1C, $B,$11,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2E, $F,$21, $F,$16,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C,$1F,$16,$15,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B, $B,$1C,$16,$19, $D,$15,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26, $B, $C, $C,$16, $F,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $38,$13,$1E, $B,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28, $F,$17,$19,$18,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $28,$1C, $B,$11,$19,$18,$A5 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,$19,$17,$1F,$1D,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B,$19,$18,$1F,$1D,$A5 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2C, $F,$18, $D,$12,$17,$A1 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000

		ECHO "bank 02 size", [.-$8000], "free space", [$BFD8-.]

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
