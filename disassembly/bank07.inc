
		ORG $8000

		.WORD _b7_d0_map_data_lib_ofs ;	data used at 8000
		.WORD _b7_d1
		.WORD _b7_d2
		.WORD _b7_d3
		.WORD _b7_d4
		.WORD _b7_d5
		.WORD 0
		.WORD 0
		.WORD _b7_s8		; data used at 8000
		.WORD 0
		.WORD _b7_sA_sram_test_and_init	; data used at 8000
		.WORD 0
		.WORD 0
		.WORD _b7_sD		; data used at 8000
		.WORD _b7_sE		; data used at 8000
		.WORD _b7_sF		; data used at 8000
		.WORD _b7_s10		; data used at 8000
		.WORD _b7_s11		; data used at 8000
		.WORD _b7_s12		; data used at 8000
		.WORD _b7_s13
		.WORD _b7_s14		; data used at 8000
		.WORD _b7_s15
		.WORD 0
		.WORD 0
		.WORD 0
		.WORD _b7_s19		; data used at 8000
		.WORD _b7_s1A		; data used at 8000
		.WORD _b7_s1B		; data used at 8000
		.WORD _b7_s1C		; data used at 8000
		.WORD _b7_s1D		; data used at 8000
		.WORD _b7_s1E

_b7_d0_map_data_lib_ofs:
		.WORD _map_data_lib ; DATA XREF: BANK7:8000-o
					; ind data used	at 8000
_map_data_lib:
		.WORD _map0		; DATA XREF: BANK7:_b7_d0_map_data_lib_ofs-o
					; ind data used	at 8000
		.BYTE 1			; ind data used	at 8000
		.WORD _map1		; ind data used	at 8000
		.BYTE 5			; ind data used	at 8000
		.WORD _map2
		.BYTE 5
		.WORD _map3
		.BYTE 2
		.WORD _map4
		.BYTE 2
		.WORD 0
		.BYTE $11
		.WORD _map6
		.BYTE 1
		.WORD _map7		; ind data used	at 8000
		.BYTE 1			; ind data used	at 8000
		.WORD _map8		; ind data used	at 8000
		.BYTE $E		; ind data used	at 8000
		.WORD _map9		; ind data used	at 8000
		.BYTE 5			; ind data used	at 8000
		.WORD _mapA
		.BYTE 1
		.WORD _mapB		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _mapC		; ind data used	at 8000
		.BYTE 5			; ind data used	at 8000
		.WORD 0
		.BYTE 1
		.WORD _mapE
		.BYTE 3
		.WORD _mapF
		.BYTE 2
		.WORD _map10
byte_B0072:
		.BYTE 8
		.WORD _map11		; ind data used	at 8000
		.BYTE 5			; ind data used	at 8000
		.WORD _map12
		.BYTE 1
		.WORD _map13
		.BYTE 7
		.WORD _map14		; ind data used	at 8000
		.BYTE 7			; ind data used	at 8000
		.WORD _map15
		.BYTE 8
		.WORD _map16
		.BYTE 5
		.WORD _map17
		.BYTE $B
		.WORD _map18
		.BYTE 3
		.WORD _map19
		.BYTE 6
		.WORD _map1A
		.BYTE 3
		.WORD _map1B		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map1C
		.BYTE 4
		.WORD _map1D
		.BYTE 4
		.WORD _map1E		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map1F
		.BYTE 4
		.WORD _map20
		.BYTE 5
		.WORD _map21
		.BYTE 4
		.WORD _map22
		.BYTE 2
		.WORD _map23
		.BYTE 2
		.WORD _map24
		.BYTE 4
		.WORD _map25
		.BYTE 2
		.WORD _map26
		.BYTE 4
		.WORD _map27
		.BYTE 6
		.WORD _map28
		.BYTE 3
		.WORD _map29
		.BYTE 6
		.WORD _map2A
		.BYTE 3
		.WORD _map2B		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map2B
		.BYTE 3
		.WORD _map2D		; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _map2E		; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _map2F
		.BYTE $C
		.WORD _map2F
		.BYTE $C
		.WORD _map31
		.BYTE $12
		.WORD _map32
		.BYTE $12
		.WORD _map33
		.BYTE $11
		.WORD _map34
		.BYTE $E
		.WORD _map35
		.BYTE $14
		.WORD _map36
		.BYTE $E
		.WORD _map37
		.BYTE $13
		.WORD _map38		; ind data used	at 8000
		.BYTE $17		; ind data used	at 8000
		.WORD _map39
		.BYTE $17
		.WORD _map3A
		.BYTE $17
		.WORD _map3B		; ind data used	at 8000
		.BYTE $16		; ind data used	at 8000
		.WORD _map3C		; ind data used	at 8000
		.BYTE $19		; ind data used	at 8000
		.WORD _map3D
		.BYTE $19
		.WORD _map3E
		.BYTE $1B
		.WORD _map3F		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _map40
		.BYTE $1B
		.WORD _map41		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map42		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map44		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map45		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map46		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map47		; ind data used	at 8000
		.BYTE 5			; ind data used	at 8000
		.WORD _map48		; ind data used	at 8000
		.BYTE 2			; ind data used	at 8000
		.WORD _map49		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD 0
		.BYTE 3
		.WORD _map4A		; ind data used	at 8000
		.BYTE 2			; ind data used	at 8000
		.WORD _map4B		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map4C		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map4D		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map4E
		.BYTE 8
		.WORD _map4F
		.BYTE 2
		.WORD _map50		; ind data used	at 8000
		.BYTE 1			; ind data used	at 8000
		.WORD _map51		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map52		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map53
		.BYTE 6
		.WORD _map54
		.BYTE 4
		.WORD _map55		; ind data used	at 8000
		.BYTE 5			; ind data used	at 8000
		.WORD _map56		; ind data used	at 8000
		.BYTE 2			; ind data used	at 8000
		.WORD _map57
		.BYTE 6
		.WORD _map58
		.BYTE $11
		.WORD _map59
		.BYTE 4
		.WORD _map5A
		.BYTE 2
		.WORD 0
		.BYTE 3
		.WORD _map5C
		.BYTE 3
		.WORD _map5D
		.BYTE 3
		.WORD _map5E
		.BYTE 3
		.WORD _map5F
		.BYTE 4
		.WORD _map60
		.BYTE 4
		.WORD _map61
		.BYTE 2
		.WORD _map62
		.BYTE 2
		.WORD _map63
		.BYTE 2
		.WORD _map65
		.BYTE 2
		.WORD _map66
		.BYTE 3
		.WORD _map42
		.BYTE 3
		.WORD _map68
		.BYTE 3
		.WORD _map69
		.BYTE 4
		.WORD _map6A		; ind data used	at 8000
		.BYTE 2			; ind data used	at 8000
		.WORD _map6B
		.BYTE 2
		.WORD _map6C		; ind data used	at 8000
		.BYTE 2			; ind data used	at 8000
		.WORD _map6D
		.BYTE 4
		.WORD _map6E		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map5D		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map70
		.BYTE 3
		.WORD _map51
		.BYTE 3
		.WORD _map72
		.BYTE 2
		.WORD _map73
		.BYTE 4
		.WORD _map74
		.BYTE 4
		.WORD _map75
		.BYTE 4
		.WORD _map76
		.BYTE 4
		.WORD _map77
		.BYTE 3
		.WORD _map78		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map79		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map7A
		.BYTE 2
		.WORD _map7B		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD 0
		.BYTE 4
		.WORD 0
		.BYTE 3
		.WORD _map7E
		.BYTE 3
		.WORD _map78
		.BYTE 3
		.WORD _map80
		.BYTE 3
		.WORD _map81
		.BYTE 4
		.WORD _map82
		.BYTE 3
		.WORD _map83
		.BYTE 6
		.WORD _map84		; ind data used	at 8000
		.BYTE 3			; ind data used	at 8000
		.WORD _map85		; ind data used	at 8000
		.BYTE 6			; ind data used	at 8000
		.WORD _map86
		.BYTE $15
		.WORD _map87
		.BYTE 3
		.WORD _map49		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD 0
		.BYTE 4
		.WORD _map8A
		.BYTE 3
		.WORD _map8B
		.BYTE 3
		.WORD _map8C
		.BYTE 3
		.WORD _map8D
		.BYTE 4
		.WORD _map8E
		.BYTE 3
		.WORD _map8F
		.BYTE 3
		.WORD _map90
		.BYTE 2
		.WORD _map91
		.BYTE 3
		.WORD _map92
		.BYTE 3
		.WORD _map93		; ind data used	at 8000
		.BYTE 6			; ind data used	at 8000
		.WORD _map94		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map95
		.BYTE 4
		.WORD 0
		.BYTE 3
		.WORD _map97		; ind data used	at 8000
		.BYTE 1			; ind data used	at 8000
		.WORD _map98		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map99		; ind data used	at 8000
		.BYTE 8			; ind data used	at 8000
		.WORD _map49
		.BYTE 4
		.WORD _map49
		.BYTE 4
		.WORD _map4B		; ind data used	at 8000
		.BYTE 4			; ind data used	at 8000
		.WORD _map9D
		.BYTE 9
		.WORD _map9E
		.BYTE $A
		.WORD 0
		.BYTE $A
		.WORD _mapA0		; ind data used	at 8000
		.BYTE $18		; ind data used	at 8000
		.WORD _mapA1		; ind data used	at 8000
		.BYTE $18		; ind data used	at 8000
		.WORD _mapA2		; ind data used	at 8000
		.BYTE $10		; ind data used	at 8000
		.WORD _mapA3		; ind data used	at 8000
		.BYTE $18		; ind data used	at 8000
		.WORD _mapA4		; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _mapA5		; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _mapA6		; ind data used	at 8000
		.BYTE $13		; ind data used	at 8000
		.WORD _mapA7
		.BYTE $C
		.WORD _mapA8
		.BYTE $17
		.WORD _mapA9
		.BYTE $12
		.WORD _mapAA
		.BYTE $12
		.WORD _mapAB
		.BYTE $12
		.WORD 0
		.BYTE $12
		.WORD 0
		.BYTE $1B
		.WORD 0
		.BYTE $13
		.WORD 0
		.BYTE $13
		.WORD 0
		.BYTE $13
		.WORD 0
		.BYTE $13
		.WORD 0
		.BYTE $13
		.WORD _mapB3
		.BYTE $10
		.WORD 0
		.BYTE $E
		.WORD 0
		.BYTE $E
		.WORD 0
		.BYTE $E
		.WORD 0
		.BYTE $10
		.WORD 0
		.BYTE $14
		.WORD 0
		.BYTE $14
		.WORD 0
		.BYTE $14
		.WORD 0
		.BYTE $14
		.WORD _mapBC
		.BYTE $14
		.WORD _mapBD
		.BYTE $E
		.WORD _mapBE
		.BYTE $F
		.WORD _mapBF
		.BYTE $13
		.WORD _mapC0
		.BYTE $13
		.WORD 0
		.BYTE 0
		.WORD 0
		.BYTE 0
		.WORD 0
		.BYTE 0
		.WORD _mapC4		; ind data used	at 8000
		.BYTE $17		; ind data used	at 8000
		.WORD 0
		.BYTE $C
		.WORD _mapC6		; ind data used	at 8000
		.BYTE $15		; ind data used	at 8000
		.WORD _mapC7
		.BYTE $C
		.WORD 0
		.BYTE $F
		.WORD _mapC9		; ind data used	at 8000
		.BYTE $F		; ind data used	at 8000
		.WORD _mapCA		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _mapCB		; ind data used	at 8000
		.BYTE $D		; ind data used	at 8000
		.WORD _mapCC		; ind data used	at 8000
		.BYTE $F		; ind data used	at 8000
		.WORD _mapCD		; ind data used	at 8000
		.BYTE $11		; ind data used	at 8000
		.WORD 0
		.BYTE 0
		.WORD 0
		.BYTE 0
		.WORD _mapD0
		.BYTE $15
		.WORD _mapD1		; ind data used	at 8000
		.BYTE $16		; ind data used	at 8000
		.WORD _mapD2		; ind data used	at 8000
		.BYTE $16		; ind data used	at 8000
		.WORD _mapD3		; ind data used	at 8000
		.BYTE $16		; ind data used	at 8000
		.WORD _mapD4
		.BYTE $15
		.WORD _mapD5
		.BYTE $15
		.WORD _mapD6
		.BYTE $16
		.WORD _mapD7		; ind data used	at 8000
		.BYTE $19		; ind data used	at 8000
		.WORD _mapD8		; ind data used	at 8000
		.BYTE $19		; ind data used	at 8000
		.WORD _mapD9		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD 0
		.BYTE $1B
		.WORD 0
		.BYTE $1B
		.WORD _mapDC
		.BYTE $1A
		.WORD _mapDD
		.BYTE $1A
		.WORD _mapDE
		.BYTE $1A
		.WORD _mapDF
		.BYTE $1A
		.WORD 0
		.BYTE 0
		.WORD 0
		.BYTE 0
		.WORD 0
		.BYTE $19
		.WORD 0
		.BYTE $19
		.WORD 0
		.BYTE $1B
		.WORD _mapE5
		.BYTE $1B
		.WORD _mapE6
		.BYTE $1A
		.WORD _mapE7
		.BYTE $1A
		.WORD _mapE8
		.BYTE $1A
		.WORD _mapE9		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _mapEA		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD 0
		.BYTE $1B
		.WORD _mapEC		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _mapED		; ind data used	at 8000
		.BYTE $19		; ind data used	at 8000
		.WORD _mapEE		; ind data used	at 8000
		.BYTE $D		; ind data used	at 8000
		.WORD _mapEF		; ind data used	at 8000
		.BYTE $1B		; ind data used	at 8000
		.WORD _mapF0
		.BYTE $1B
		.WORD _mapF1
		.BYTE $1B
		.WORD _mapF2
		.BYTE $1B
		.WORD _mapF3
		.BYTE $1B
_map2D:
		.BYTE $3A,$28,$D3,$98,	0,$12,$16,  0,	8,$14,$50,$A7,$1D,$92,	2,$90
					; DATA XREF: BANK7:80C7-o
		.BYTE $5A,$82,	2,$51,	0,  8,	0,$39,$2F,$30,$21,  2,$A9,$22,$C4,  7 ;	ind data used at 8000
		.BYTE $2A,$B0,$50,$AB,	5,$B0,$41,  4,$A4,$52,$90,  8,$42,$55,	8,$29
		.BYTE $E3,$F7,$B9,$C1,$EF,$32,$32,$58,$6A,$E7,$FF,$BC,$D0,$EC,$83,  7
		.BYTE $1C,$88,	0,$14,$3A,$4C,$8B,$AE,$B8,$34,$51,$AF,	5,$15,$6A,$A0
		.BYTE $3A,$CA,$F1,$D0,$82,$9D,$92,$89,$A7,$70,$94,$E2,$42,$89,$78,$C2
		.BYTE $81,$21,$1D,$AD,$59,$17,$E3,$49,$C8,$E6,$40,$9E,$52,$40,$C4,  4
		.BYTE $A4,$F0,$10
_mapA0:
		.BYTE $3A,$34,$DA,$D1,$31,$39,$CE,$A2,$81,$A0,	0,$36,$CB,$7D,$90,$5A
					; DATA XREF: BANK7:821D-o
		.BYTE $24,$68,	3,$4B,$22,$7A,	0,$30,$2D,$55,$79,$4F,$78,$22,$D1,$6F ;	ind data used at 8000
		.BYTE $BC,  0,	0,  1,$30,$22,$A2,$5A,	2,$80,$59,$62,$81,$A2,$C5,$25
		.BYTE $96,$57,$85,$88,$22,$51,$B6,$59,$E0,$16,$58,$96,$51,$65,$88,  8
		.BYTE $96,$52,$A5,$94,$1A,  3,$CB,$61,	4,$25,$B0,  0,$52,$20,$45,$B0
		.BYTE $43,$C8,	8,$D2,$B9,$E3,$17,$13,$DC,$F8,$AD,$E2,$C3,$99,$8E,$65
		.BYTE $47,$F5,$73,$CA, $E,$3F,$64,$B5,$97,$D6,$57,$37,$11,$DD,$54,$8E
		.BYTE $30,$A0,	0,$99,$28,  4,$15,$2A,	5,  2,$B6,$8C,$55,$E3,$A8,$54
		.BYTE $9D,$E2,$15,$AA,$59,$63,$D4,$58,$2D,$12, $B,$21,$4A, $B,$25,$F2
		.BYTE $50,$D9,$92,$58,$CA,$AD,$94,$B0,$13,$44,$88
_map86:
		.BYTE	8, $C,$DE,  1,$34,$8C,$E1,$54,$BC,$99,$EF,$17,$BC,$D2, $F,$CB
					; DATA XREF: BANK7:81CF-o
		.BYTE  $F,$20
_mapA1:
		.BYTE $20,$17,$DE,$98,	0,  0,	2,  7,$B1,$65,$84,$B2,$82,$CA,$2C,$B0
					; DATA XREF: BANK7:8220-o
		.BYTE $51,$4D,$3D,$2C,$B0,$2C,$57,$98,$19,$E7,$78,$1B,$61,$B6,$2B,$82 ;	ind data used at 8000
		.BYTE $86,$CD,$4E,$F1,$DC,$D2,$3F,$17,$47,$94,$B6,  5,$BE,$47,$98,  8
		.BYTE $2D,$38,$16,$D6,$4B,$CE,$74,$2D,$12,$C0,$B3,$F0,	0,$AA,$95,$7E
		.BYTE $4A
_mapA2:
		.BYTE $28,$30,$DE,$98,	0,  0,	2,$DC,$41,  2,$41,$54,	0,  2,$80,  0
					; DATA XREF: BANK7:8223-o
		.BYTE	1,$40,	0, $B,$65,  9,	1,$9F,$40,$50,$24,  2,$85,  4,$80,$A1 ;	ind data used at 8000
		.BYTE $7B,$2F,$60,$5A,	2,$80,	0,$16,$82,$20,$28,$5A,$20,$41,$68,$10
		.BYTE	0,$E7,$A8,$88,$85,$A4,$41,$68,$50,$28,$E3,$D9,$8A,$A4,$82,  8
		.BYTE $3C,  3,$18,$E7,$3A,$68,$90,$F8,$D8,$43,$42,$EE,$7B,$E7,$17,$AD
		.BYTE $51,$52,$B3,$C6,$A9,$2E,$7B,$DC,$D3,$C5,$5E,$82,$8A,$55,$92,$F7
		.BYTE $1A,$C4,$CB,$67,$DB,$3B,$7B,$A9,$5B,$EE,$C6,$5A,$51,$6F,$50,$E5
		.BYTE  $A,$AC,$F1,$67,$42,$30,$59,$BE,$99,$F6,$4B,$E7,$BD,$F3,$B4,$E9
		.BYTE $5B,$2A,$4A,$9D,	5,$A5,$EC,$61,$A5,$EA,$C3,$A1,$E4,$B0,$A9,$E1
		.BYTE $A1,$DC,$12,$E2,$88,$FE,$4D,$8F,$39,$90,	1,$D6,$D2,  8,$74,$D7
		.BYTE $AD,$28,$C4,$8F, $C,$E6,$90,$C5,$92,$14,	1, $D,$37,$52,$77,$F4
		.BYTE $89,$68,$F2,$A0,$50,$77,$AB,$99,$DC,$AF,$73,$44,$B6,$D3,$41,$9D
		.BYTE $3E,$8B, $D,$96,$16, $C,$8B,$C0,$92,$AE,$94,$EC,$63,$66,$35,$93
		.BYTE $4F,$32,$B3,$19
_mapA3:
		.BYTE $1A,$2E,$DE,$F1,$35,$8C,$C5,$84,$36,$34,$95,$87,$34,$34,$20,$29
					; DATA XREF: BANK7:8226-o
		.BYTE $B4,$3E,$25,$44,$39,  9,$61,$B4,$17,$44,$B5,  8,$A8,$BB,$E5,$4B ;	ind data used at 8000
		.BYTE $2B,$3C,$2E,$BD,$25,$58,$BB,$F2,$AE,$F9,$2A,$61,$3E,$A3,$27,$D2
		.BYTE $2F,$8C,$9B,$78,$45, $B,$A3,$DA,$3D,$59,$E7,$3F,$38,$4C,$7B,$A1
		.BYTE $9E, $C,$8F,$B1,$68,$5A,$F1,$6B,$5D,$72,$64,$C0,$E6,$7D,$88,$EC
		.BYTE $34,$7E,$10,$F7,$3E,$2B,$6F,  0,	0,  0,	9,$5B,$65,$95,$2A,$58
		.BYTE $59,$54,$58,$DF,$4A,$58,$A5,$89,$40,  0,$A2,$55,$82,$80,$25,$25
		.BYTE $14,$B2,$96,$4A,	0,$88,	1,$42,$D8,  2,$A8, $F,	1,$29,$1C,$A2
		.BYTE $A0,$94,$82,$1E,$40,$46,$95,$CA,$76,$51,$B2,$7C,$40,$A5,$7B,$92
		.BYTE $AD,$50,$4C,$FD,$55,$CF,$6C,$8F,$BB,  2,$46
_map2E:
		.BYTE $20,$34,$D3,  0,	0,$12,$15,  0,$19,$FC,$98,$9C,$E7,  4,$89,$62
					; DATA XREF: BANK7:80CA-o
		.BYTE $C3,  2,$D7,$AC,$18,$14,$A9,  9,$E1,$77,$C3,$42,$44,$47,$A1,$81 ;	ind data used at 8000
		.BYTE $65,$8A,$CF,$BE,$19,$22,$7B,$C8,$D1,$88,$4B,  2,$59,$E5,$68,$C6
		.BYTE $AA,$59,$2C,$5F,$62,$24,$A7,$1F,$84,$92,$5A,$22,$D7,$C0,$EE,$F4
		.BYTE $77,$B7,$C7,$63,$8E,$14,	3, $E,$B4,$24,$16,$D4,$65,$26,$F4,$E6
		.BYTE $47,$15,$C9,$47,$D6,$4C,$53,$D1,$26,  1,$34,$B6,$1B,$17,$B2,$3A
		.BYTE $9B,$88,$24,$A9,$99,$22,$D1,$9E,$F1,$AB, $A,$55,$B5,$5B,$1F,$8C
		.BYTE $36,$EC,$B9,$9D,$32,$31,$2C,$1E,$45,$4A,$3B,$D2,$15
_mapA4:
		.BYTE $22,$30,$D3,$99,$56,  8,$5F,$72,$74,$12,$88,$A0,	5,$24,$EB,$E6
					; DATA XREF: BANK7:8229-o
		.BYTE $22,$A2,$F4,$17,$8A,$8B, $C,$59,$65,$89,$65,$89,$65,$89,$66,$FC ;	ind data used at 8000
		.BYTE $2D,$7B,$C0,  0,$90,$B3,$3E,$D5,$29,$29,$42,$2C,$A2,$CB,$28,$59
		.BYTE $62,$8A,$94,$92,$C9,$52,$80,$12,$52,$42,$A8,$2A,$A0,$51,$60,$4A
		.BYTE $59,$52,$94,$59,$51,$25,$25,$85,$94,$94,$58,  5,$2A,$C5,$92,$A5
		.BYTE $16,$4B,$25,$F0,	0,$2C,$6C,$E2,$93,$C9,$88,$4E,$9C,$9C,$E6,$F7
		.BYTE $49,$39,$C4,$5B,$9C,$5D,$26,$E8,$1F,$49,$39,$C0,$3B,$C0,$3C,$AA
		.BYTE $CE,$81,$2C,$BC,$63,$10,$7F,$55,$7A,$DF,$9B,$71,$E7, $A,$11,$A3
		.BYTE $A8,$DA,$1D,$91,$D0,$28,$53,$C4,$80,  3,$8A,$C8,$CB,  6,$71,$FF
		.BYTE $A0,$D4,	6,$D0,$F4,$B0,$4B,  0,$F3,$AE,$23, $B,$91,$2D,	8,$7C
		.BYTE $CB,$30,$9E,$2B,$38,$8D,$60,  0, $A,$42,$4E,$67,$53,$91,$10,$87
		.BYTE	8,$80,$9F,$9A,$20,$10
_mapA5:
		.BYTE $32,$22,$D3,$99,$58,$3B,$28,$B2,$EF,$C7,$91,$8E,$B8,$B1,$65,$8B
					; DATA XREF: BANK7:822C-o
		.BYTE $2F,$80,	1,$21,$64,$DD,$92,$C5,$95,$10,$25,$85,$82,$89,$40,$8B ;	ind data used at 8000
		.BYTE	4,$45,$94,$25,$AA,$10,$82,$51,$61,  4,$25,$AA,$4A,$2D,$44,$5A
		.BYTE $88,$22,$C2,$D1,$10,  0,$20,$95,$2C,$59,$4E,$32,$90,$2D,$95,$67
		.BYTE $8F,$ED,$3E,$8F,$70,$E2,$4B,$B5,$BD,$EB,$E7,$8F,$8D,$73,$A8,$3B
		.BYTE $97,$DC,	5,$1C,$72,$23,$23,$44,$AB,$53,$1F,$85,	1,$44,$4D,$27
		.BYTE $CA,$8D,$98,$5A,$2D,$4B,$18,$4D,$27,$88,$DD,$27,$45,$B4,$4D,$34
		.BYTE $D3,$6C,$5A,$AA,$E3,$6C,$36,$83,	0,  0,$57,$8A,$43,$80,$B2,$87
		.BYTE $2D,$64,	0,$4C,	3,$CE,$B4,$53,$F8,$BD,$AC,$20,$10
_mapA6:
		.BYTE $26,$22,$DE,$A8,	0,$12,$16,$56,$1A,$5C,$FA,  2,$EF,$86,$D9,$66
					; DATA XREF: BANK7:822F-o
		.BYTE $7A,$E7,$DF,$79,$31,  9,$D2,$5B,$E8,$E5,$31,$9C,$CB,$13,$9A,$A0 ;	ind data used at 8000
		.BYTE $3C,$98,$9C,$E7,$47,$AD,$2C,$10,$39,$CF,$AF,$27,$35,  5,$2C,$B6
		.BYTE $4A,$B2,$6D,$26,$3D,$57,$7E,$2E,$FC,$A9,$9F,$4B,$2C,$A9,$EE,$54
		.BYTE $1A,$22,$A7,$14,$65,$2C,$96,$4B,$3C,$8C,$5B,$E2,$5B,$16,$89,$17
		.BYTE $9A,$F8,$2E,$FC,$BC,$AF,$12,$59, $D,$AF,$49,$E0,$80,$8C,$69,$7F
		.BYTE $27,$86,	6,$52,$E6,$51,$9E,$4B,$5C,$63,$F2,$D9,$CA,$11,$E4
_map2F:
		.BYTE $60,$1E,$DF,$38,	0,$12,$15,  0, $B,$3F, $E, $E,$73,$C6,	5,$2A
					; DATA XREF: BANK7:80CD-o BANK7:80D0-o
		.BYTE $51,$28,$22,$80,$12,$D9,$6B,$9B,$F1,  0,$A8,$15, $F, $F, $D,$74
		.BYTE $64,$A7,$AE,$58,$B0,$11,$62,$95,$2A,$C1,$65,$F3,$A4,$C6,$28,$25
		.BYTE $2C, $A,	5,$13,$C2,  2,$A1,$30,$43,$2E,$14,$A5,$E1,$41,$10,$9D
		.BYTE $73,$42,	2,$A1,$3A,$EA,$73,$30,$50,$57,$19,$D8,$68,$9A,$34,$65
		.BYTE $8C,$8A,$31,$34,$91,$46,$BC,$9C,$49,$43,$46,$BC,$5C,$40,$CB,$7D
		.BYTE $E3,$32,$C3,$1B,$96,$20,$AC,$81,$C8,$64,$20,$3F,$30,$3D,	7,$47
		.BYTE $98,$52,$40,$4E,$54,$C1,$16,$A5,$3C,$A5,$B1,$52,$31,$9F,$56,$18
		.BYTE $82,$F5,$5A,$A3,$5D,$35,$45,$3F,$53,$29,$7C,$D5,$90,$6B,$92,$40
		.BYTE $84,$E2,$D0,$EC,$45,$35,$2B,$94,$4C,$D9,$2F,$B2,$16,$1F,$63,$84
		.BYTE $C8
_map32:
		.BYTE $20, $E,$DE,$F0,	0,$12,$15,  0,$59,$54,$26,$FC,	0, $A,$13,$21
					; DATA XREF: BANK7:80D6-o
		.BYTE	5,$57,$82,$13,$34,$EA,$32,  2,$A8,$1E,$4C,$4E,$73,$88,$50,$A0
		.BYTE	2,$5A,$BE,$30,$35,$8D,$90,$53,$C7,$E4,$3E,$3A,$3C,$85
_mapA9:
		.BYTE $42,$2E,$DE,$98,	0,$12,$16,$1C,$28,$A2,$85,$16,	1,$50,$59,$65
					; DATA XREF: BANK7:8238-o
		.BYTE $89,$44,$52,$96,$51,$28,$94,$58,$84,$25,$29,$64,$59, $A,$4A,$2C
		.BYTE $94,$51,$45,$92,$C9,$56,$59,$54,$59,$2C,$85,$25,$92,$94,$52,$C8
		.BYTE $8A,  5,$94,$8A,$58,$89,$4A,$29,$62,$1C,$57,  8,$54,$20,$4B,$10
		.BYTE $A3,$9B,$59,  5,$44,$B2,$29,$64,$B0,$8B,$15,$E4,$B2,$5F,$D8,$37
		.BYTE $73,$B1,$FD, $F,$8E,$C9,$30,$71,$85,  0,	5,$8F,$61,  2,$EB,$59
		.BYTE $5C,$BB,$36,$BE,$2F,$6D,$6E,$EA,$D3,$34,$65,$8F,$BD,$54,$47,$23
		.BYTE $4C,$F9,$44,$D4,$5A,$6B,$35,$6B,$20,$1C,$92,$A6,$3F,$74,$AC,$14
		.BYTE $2D,$9E,$6B,$BD,$61,$2A,$67,$48,$55,$4E,$C2,$24,$70,$D6,$24,$85
		.BYTE $45,$43,$C4,$2B,$54,$22,$52,$D7,$47,$80,$2A,$D8,$E0,$40,$80,$C1
		.BYTE $E8,$2F,$22,$70,$12,$1C,	6,$98, $A,$E4,$CA,$93,$97,  1,$11,$FB
		.BYTE $2F,$6C,$D1,$9D,$30,$90
_mapAA:
		.BYTE $3A,$2A,$DE,$98,	0,$12,$16,$61,$CD,$2C,$52,$52,$C2,$52,$25,$91
					; DATA XREF: BANK7:823B-o
		.BYTE $4B,$25, $B,$16,$51,$65,$4A, $B,$2A,$54,$45,$16,$10,$A2,$51,$45
		.BYTE $80,$94,$58,$B2,$CB,$14,	5,$8A,$52,$CB,$22,$89,$65,$90,$B1,$65
		.BYTE	8,$96, $A,$4A,$12,$96,$45,$94,$E5,  2,	0,$4B,$10,$B0,$96,$2F
		.BYTE $8E,$C2,$C4,$7E,$14,$B9,$C5,$EF,$9E,$7B,$35,$7E,$29,$F8,$33,$E0
		.BYTE $D7,$83,$7E,$2A,$F8,$A9,$3C,$61,$4C,$D1,$8C,$57,$54,$96,$75, $F
		.BYTE $1C,$FC,$D1,$72,$5C,$95, $D,$17,$44,$97,$5E,$98,$34,  4,$85,$14
		.BYTE $85,$50,	5,$21,$85,$F0,$18,$3C,$E0,$34,$49,$CB,$50, $D,$AF,$6A
		.BYTE $C7,$B9, $E,$B7,$12,$64,$16,$CB,$61,$C4,$89,  7,$36,$64, $A,$5A
		.BYTE $99,$EE,$92,$A5,$CC,$C4,$A5,$19,$E0,  0,$DA,  0,	2,$46,$CA,$32
		.BYTE  $A,$7B,$C0, $F,$7E,$77,$C4,$44
_mapAB:
		.BYTE $28,$26,$DE,$98,	0,$12,$16,$29,$48,$51,$45,$82,$82,$51,$60,$28
					; DATA XREF: BANK7:823E-o
		.BYTE $94,$51,$45,$88,$21,$60,$12,$90,$44,$A2,$8A,$2C,$14,$12,$8B,  1
		.BYTE $44,$A2,$8A,$2C,$41, $B,	0,$94,$82,$3C,$E5,$4E,$41,$77,$DC,$17
		.BYTE $F1,$6F,$12,$54,$D9,$7C,$A7, $D,$E8,$BB,$EF,  7,$37,$41,$BE,$96
		.BYTE $6E,$8B,$E9,$67,$B9,  1,$4B, $B,	9,$65,$C1,$92,$CB,$2D,$9E,$F7
		.BYTE $54,$B1,$71,$2A,$CF,$79,$EA,$7D,$8B,$39,$B3,$AB,$2C,$B2,$D9,$BE
		.BYTE $72,$8B,$CB,$2C,$E5,$F9,$AC,$BE,$3B,$AC,$FB,$2A,$C4,$78,$FD,$A2
		.BYTE $8F,$30,$85,$63,$C0,  1,	2,  9,$68,  1,$B6,  8,$10,$1F,$20, $D
		.BYTE $A1,$E3,$9E,  4,	5, $A,$2C,$80,	6,$4A,$28,$50,$7D,$A0,$32,  7
		.BYTE $8F,$24,	5,$17,$B6,$3A,$5E,$53,$63,$55,$DB,$40,$A1,$85,$33
_map31:
		.BYTE $42,$28,$DE,$98,	0,$12,$16,  0,$4C,$A0,	0,  5, $B,  1,$65,$C8
					; DATA XREF: BANK7:80D3-o
		.BYTE $79,$4A,$90,$55,$12,  4,$2A,$92,	2,$45,$14,$21,$CB,$90, $B,$4E
		.BYTE $97,$4C,$84,$B4,$AB, $A,	0,$14,	0,  0,$A0,$A2,$C8,$44,$A5,$14
		.BYTE $B1,  4,$96,$53,$99,$51,	0,$50,$A0,$15,$45,$82,$10,  7,$43,$80
		.BYTE $B2,  9,$2F,  0,$72,$44,$B1,$65,$CF,$5B,$16,$22,$8B,$48,$8B,$48
		.BYTE $87,$9C,$1C,$E7,$28,$F4,$43,$A1,$EC,$39,$79,$F4,$9C,$E6,	0,$E3
		.BYTE $D7,  5,$BC,$17,$C2,$DE,	2,$6D,$65,$97,$22,$5C,$FA,$F0,$33,$C0
		.BYTE $16,$6F,$C6,$7B,$A5,$2E,$5A,$E7,$40,$C9,$9E,$4A,$58,$12,$CB,$16
		.BYTE $97,$CE,$42,$1B,$38,$A5,$E0,$71,$D1,$40,	1,$CC,$67, $E,$8C,$89
		.BYTE $4B,$CD,$FC,$39, $F,$E0,$74,$A0,	0,  0,$12,$8B,	5,$4E,$24,$D8
		.BYTE $71,$EC,$C0,$39,$68,$87,$90,$11,$A5,$74,$5A,$C5, $B,$2B,$4D,$B5
		.BYTE $34,$AA,$DF,  8,$C0,$CF,$39,$C2,$36,$A5,$D8,$E3,$69,$BD,$99,$C6
		.BYTE $EB,  3,$F1,  5,$1D,$84,$30,$E3,$99,$74,$49,$A3,$40,$A8,$80,$44
		.BYTE $8D,$11,$77,$AC,$AC,$F5,$E7,$1F,$F8,$90,$B0,$72,$23,$27,$3F,$11
		.BYTE $CF,$DD,$3A,$76,$10,$2F,$3E,$B0,$E2,$1E,$4B,$3C,$29,$97,$23,$EA
		.BYTE $44,  8,$EE,$95,	2,$38,$AF,$C9,$36,$E1,	4,$9A,$3C,$82,$4F,$28
		.BYTE $B6,$C4,$81,$9E,$54,$AE,$90,$4D,$63,$C8, $F,$22,$96,$CE,$22,$35
		.BYTE $2C,$17,$FD,$4C,$A6,$19,$51,$31,$88,$C6,$50
_mapA7:
		.BYTE $22,$22,$DE,$38,	0,$12,$16,$11,$10,  1,$65,$94,$94,$69,$7C,$94
					; DATA XREF: BANK7:8232-o
		.BYTE $28,$58,$B0, $B,$2C,$A0, $B,$2F,$9E,$1E,$F7,$A6,$E9, $A,$36,$93
		.BYTE $C0,$E5,$90,  0,$15,$B6,	1,$EE,	0,$5A,$F9,$E5,$13,$3A,$54,$7B
		.BYTE $AD,$F0,$F2,$F2,	9,$6C,$27,$1A,$20,$99,$E5,$34,$7C,$71,	0,$47
		.BYTE $29,$9D,$FB,$1D,	5,$20,$60,  4,	4,$81,$47,$1C,$F0,$15,$6C,$72
		.BYTE $57,$82,	9, $A,$F2,$73,$A2,$8A,$15,$16,$85,$5B,$3C,$1C,$D5,$84
		.BYTE $B6,$38,$AB,$4B,$25,$53,$21,$7D,$C7,$54,	1,$59,$F7,$3E,$C1,$98
		.BYTE $F7,$B8,$28,$E0,$2A,$6D,$58,$B8,$7D,$7B,$CF,$6D,$5C,$60,$6C,$E7
		.BYTE $BC,$41,$73,$C7,$59,$EF,$15,$BC,$81,$FC,$3D,$1E,$4D
_map34:
		.BYTE $30,$40,$D3,  1,$34,$4B,$85,$ED,	8,$69,$B7,$6A,$12,$B6,$51,$E8
					; DATA XREF: BANK7:80DC-o
		.BYTE $B7,$94,$1C,$AE, $D,  7,$CB,$8D,$4C,  8,$D7,$54,$E2,$53,$D5,$B0
		.BYTE $9C,$75,$8A,$28,$FD,$69,$12,$CE,$5A,$3A,$B2,$F6,$8C,$2C,$95,$A2
		.BYTE $6B,$1B,$61,$1A,$4E,$D8,$50,$94,$56,$16,$A5,$3D,$86,$49,$59,$5A
		.BYTE $11,$DE,$56,$7A,$76,$F5,$9C,$1D,$95,$66,$67,$5B,$52,$19,$5E,$D4
		.BYTE $90,$58,$55,$26,$96,$3D,$4A,$45,$99,$4B,$10,$EE,$52,$BA,$3A,$F4
		.BYTE $AC, $E,$95,$2A,$63,$9B,$43,$40,$71,$50,$DA,$1C,$F4,$39,	7,$64
		.BYTE $97,$6F,$18,$A5,$E1, $F,$83,$EE, $E,$78,$97,  1,	2,$29,$B1,$F2
		.BYTE $C7,$F3,$20,$6E,$77,$39,$D2,$E7,$20,$77,$61,  3,$F5, $D,$1E,$70
		.BYTE $82,$4D,$44,$51,$51,$5C,$D1,$D1,$23,$8B,$32,$2D,$78,$52,$44,$B9
		.BYTE $B1,  4,$94,  4,$89,$15,$1D,$77,$D9,$C5,$41,$16,$BC,$48,$41,$11
		.BYTE $DA,$49,$C8, $E,$B0,$23,$ED,$B3,$B1,$72,$23, $D,$B8,  5,$32,$A2
		.BYTE $B9,$20,$22,$D7,$42,  4,$5A,$F1,$AC,$1C,$F8,$E8,$37,$11,$3A,$4C
		.BYTE $48,$36,$C0,$14,$DD,$91,	1,$A0,$4F,$41,$E0,$8C,$56,$60,$75,$35
		.BYTE $FB,$A6,$9D,$86,$C9,$5F,$51,  9,$7E,$CA,$CE,$75,$C3,$B7,$61,$7C
		.BYTE $AA,$1C,$2F,$8A,$30,$C4,$36,$74,$91, $F,$F5,$61,$87,$D1,$5F,$92
		.BYTE $67,$4C,$BF,$C4,$D8,$A4,$B0,$82,$2A,$12,$2E,$EA,$95,$8B,$3E,$62
_mapB3:
		.BYTE $1A,$21,$D3,$98,	0,  0,	2,$77,$25,$82,$10,$4A,$4B,$29,$6C,$10
					; DATA XREF: BANK7:8256-o
		.BYTE $41,$28,$B0,$41,	4,$B4,$B2,$C4,$B5,  4,$36,$3E, $F,$10,$13,$39
		.BYTE $EC,$76,$AE,$6B,	6,$CB,	1,  2,$29,$B9,$EB,$9F,$88,  8,$D2,$BA
		.BYTE $21,$8E,	6,$86,$E7,$3E,$AB,$EB,$52,$DC,$D1,$CB,$DD,$FD,$BB,$FB
		.BYTE $C5,$B2,$9B,$22,$5F,$97,$79,$9F,$BF,$C7,$E3,$21,$21,$29,$4B,$1B
		.BYTE	9,$18,$50,  0,$F3,$24,$10,$40,$D0,$F9,$2D,$35,$72,$C1,$4C,$7F
		.BYTE $29,$18,$51,$14,$52,$55,$85,$1E,$65
_map35:
		.BYTE $2A,$32,$DE,$99,$B4,  0,	5,$3D,$17,$24,$43,$55,$19,$9B,$D6,$58
					; DATA XREF: BANK7:80DF-o
		.BYTE $6D,$93,$63,$7B,$DC,$DE, $B,$65,$4A,$6C,$B1,$6F,$CB,$2C,$6F,$E4
		.BYTE $B6,$79,$67,$9E,$78,$7B,$DE,$9F,$93,$24,$E1,$A4,$80,$5A,$48,$F0
		.BYTE	0,$24,$2C,$77,$80,$4A,$28,$B1,$28,$59,$A9,$29,$4A,$24,$52,$58
		.BYTE $A0,$15,$2C,$A0,	1,$64,$A5, $A,$54,$2C,$82, $D,$B4,$F1,$45,$2C
		.BYTE $88,$3C,$1C,$81,$80,$2C,$A0,$B4,$25,$87,$22,$70,$40,$5A,$4B,$79
		.BYTE $2D,$23,$9D,$3B,	2,  1,$4A,$15,$E3,$F1,$71,$1D,$AB,$F9,$CD,$6E
		.BYTE $8E,$18,$91,$A6,$2D,$35,$2E,$98,$EC,$52,$5C,$38,$B4,$AE,$8E,$35
		.BYTE $65,$E8,$33,$12
_mapBC:
		.BYTE $2C,$1A,$DB,$D8,	0,$12,$15,  0,$11,$66,$86,$5B,$1E,$83,$8B,$70
					; DATA XREF: BANK7:8271-o
		.BYTE $13,$1E,$F2,$62,$73,$9C,$C7,$16,$7E,$9A,$FC,$3C,$4B,$9E,$AB,$9E
		.BYTE $F7,$93,$4E,$82,$B6,$4D,$42,$DD,$25,$1F,$B1,$16,$2C,$25,$4A,$97
		.BYTE $95,$5A,$4A,$94,$B1,$62,$E7,$BF,$4B,$9A,$2F,$D0,$16,$7F,$F4,$53
		.BYTE $A8,$3D,$42,$E9,$60,$10,$19,$8F,$21,$E4,$3C,$30,$3A,$97,$24,$A4
		.BYTE $3C,$A0,$AE,$33,$88,$92,$A2,$D9,$D6,$22,$8B,$C3,$85,$24,$78,$FD
		.BYTE $D1,$8F,$39,$50,$15,$1D,$C6,$1B,$70, $C,$53,$99,$24,$59,$19,$E0
		.BYTE $99,$E3,$C8,$80,	3,$2E,$9B,$C7,$FA,$AC,$27,$4E,$86,$42,$82,$24
		.BYTE $DC,$29,$71,$10
_map36:
		.BYTE $28,$43,$C0,  0,	0,  4,$26, $F,$C4,$E3,$CC,$4E,$41,  4,	0,  0
					; DATA XREF: BANK7:80E2-o
		.BYTE $72,$D5,$21,$D1,$94,$9E,$4D,  5,$D0,$D8,$43,$F9,$75,$D1,$4C,$35
		.BYTE $95,  7,$13,$A5,$46,  4,$AF,$59,$61,$AA,$D7,$98,$7E,$B5,$EB,$9E
		.BYTE $FD,$78,$27,$D5,$59,  9,$A5,$56,$6E,$67,$F5,$7E,$A1,$6D,$87,$C8
		.BYTE $F5,$64,$6A,$79,$DA,$50,$A7,$76,$38,$A5,$75,$31,$83,$BD,$46,$C8
		.BYTE $8B,$62,	1,$C0,$14,  2,$81,$D2,$63,$80,$28,$80,$38,$2E,$10,  2
		.BYTE $52,$94,$B6,$5B,$E4,$C6,$A7,$EC,$67,$32,$3C,$CB,$73,$2D,$FC,$8F
		.BYTE $F1,$9F,$E6,$4B,$34,  1,$F8,$30, $E,$E4,$D3, $C,$4C,$81,	5,$A2
		.BYTE $EC,$65,$EB,$13,$3C,$79,$30,$39,$9E,$64,$B8,$1C,$CA,$10,$3C,$18
		.BYTE $19,$CF,$3E,$EA,$F2,$5B,$E1,$6D,	5,$9C,$A6,$F5,$7B,$35,$81,  2
		.BYTE $29,$B3,$7E,  2,$71,$20,$40,$27,$E8,$33,	8,$7A,$B5,$11,$5A,$16
		.BYTE $24,$26,$BD,$8D,$69,$7F,$65,$CA,$86,$98,$C8,$A3,$94,  2,$94,$ED
		.BYTE $55,$C5,$89,$50,$59,$3B,$C6,$B9,$84,$13,$AC, $C,$DF,$A8,$B0,$13
		.BYTE $FA,$34,$C7,$6E,$44,$A7,$90,$3D,$74,$68,$3D,$32,$85,  9,$FC,$A0
		.BYTE $82,$6C,$15,$41,$14,$DD,$50,$DD,$3F,$C1,$20,$3E,$E2,$77,$C2,$95
		.BYTE $56,$F9,$95,$F0,$6E,$73,$10
_mapBD:
		.BYTE $30,$37,$D3,$98,	0,  0,	2,  0,	8,  0,	0,  0,$A0,  0,	0,$50
					; DATA XREF: BANK7:8274-o
		.BYTE	0,  0,	5,  0,	0,  7,$8F,$CA,$C3,$65,$1D,$EF,	7,$65,$26,$38
		.BYTE $A5,  0, $A,$1F,$27
_mapBE:
		.BYTE $30,$19,$C0,  1,$31,$39,$CE,$56,$98,  2,$94,  0,	2,$80,$50,  0
					; DATA XREF: BANK7:8277-o
		.BYTE  $A,$50,	0,$9C,$76,$94,$9E,$4E,$47,$38,$F1,$6A,$5A,$5D,$E6,  6
		.BYTE $79,$D9,$45,$27,$93,$13,$94,$B5,$18,$23,	8,$58,$53,$DD,$7E,$E9
		.BYTE $35,  9,$A7,$8D,$3D,$69,$F3,$4F,$D9,$5E,$DC,$EE,$E5,$F4,$E8,$3F
		.BYTE $47,$A4,$D9,  1,$2B,$C9,$98,$50,$51,$1F,$C9,  0,$11,$DD,$2F, $B
		.BYTE $3C,$8B
_map37:
		.BYTE $3C,$2E,$DE,$F0,	0,$12,$15,  0, $A,$C7,$3C,$3D,$EF,$40,$21,$80
					; DATA XREF: BANK7:80E5-o
		.BYTE $50,$DA,$26,$1E, $F,  0,$B5,$D4,$A9,$92,$3A,$99,$90,  1,$69,$9E
		.BYTE $3A,$66,$22,$D7,$23,$90,$54,$B2,$25,$BC,	5,$98, $F,$3C,$81,$71
		.BYTE $2B,$95,$15,$AD,$63,$C6,$56,$4B,$2C,$96,$59,  9,$39,$33,$84,$8B
		.BYTE $3C,$AC,$B8,$33,$93,$9C,$2A,$DF,$26,$27,$39,$CD,$50,  2,$A6,$92
		.BYTE $CA,$59,$56,$1C,$C4, $A,$36,$11,$F0,$51,$48,$A1,$60,$58,$59,$66
		.BYTE $8B,$33,$C2,$EB,$CF,$22,$84,$44,$CF,$20,$A0,$A9,$8F,$B3,$2D,$9F
		.BYTE $60,$A6, $A,  2,$52,$CB,$81,$5E,$B8,$78,$B6,$5B,$3C,$5F,$E4,$51
		.BYTE $4E,$41,$B5,$CA,$97,$3C,$98,$AC,$EB,$AD,$40,$ED,$B9,  7,$F2,$B2
		.BYTE $46,$46,$C9,$62,$C5,$B9,$EB,$3C,$AE,$8D,$A5,$48
_mapBF:
		.BYTE $42,$2A,$D3,$98,	0,$12,$16,$53,$C8,$25,$8B,$40,$A8,$14,$10,$41
					; DATA XREF: BANK7:827A-o
		.BYTE $14,$40,$B4,  2,$96,$10,$42,$52,$AC,$20,$84,$A0,	0,$4A,	1, $A
		.BYTE $25,$80,	0,$80,$94,  5,$82,  8,$25,  1,$6C,$A0,$12,$C2,$55,$44
		.BYTE $12,$93,$C9,$61,$CD,$87,$46,$35,$D8,$D6,$62,$47,$88,$E6,$22,$79
		.BYTE  $C,$67,$4D,$A3,$86,$86,$9A,$1D,$66,$EF,$C1,$96,$D4,$BB,$54,$6B
		.BYTE $2D,$AC,$9E,$DB,$9B,$F0,$6F,$B8,$3F,$3F,$F3,$DB,$4A,$8E,$E7,$1C
		.BYTE $71,$C2,$B5,$F5,$1C,$95,	0,  8,$19,$4A,$C1,$C6,$C8,$80,$E1,$3B
		.BYTE $AB,$B8,$F6,$63,$61,$EA,$B4,$D4,$46,$6A,$11,$31,$E1,$48,$EB,$F7
		.BYTE $45,$C8,	0,  2,	0,$E4, $E,$22,$AC,$1C,$56,$CA,	4,$E9,$D6,$40
		.BYTE $39,$F4,$11,$55,$6F,$EF,$78,  2
_mapC0:
		.BYTE $36,$24,$D3,$98,	0,$12,$16,$B1,$10,$40,$40,$94,$25,$4B,$2C,$29
					; DATA XREF: BANK7:827D-o
		.BYTE	0,  4,$B2,$AA,	8,$25,$89,$65,$A0,  4,$B2,$C0,	2, $A,$75,$FC
		.BYTE $40,$59,$65,$28,$B1,$65,$96,$70,$EA,$40,$25,$96,$10,$4B,$2C,$B2
		.BYTE $9E,$40,$4E,$93,$D9,$C6,$CF,  9,$6C,$EB,$73,$E7,$B7,$4C,$3B,$96
		.BYTE $83,$FE,	2,$54,$56,$B5,$AF,$84,$89,$28,$C3,$D1,$5B,$E8,$1B,$47
		.BYTE $C5,$DC,$97,$DF,$25,$9E,$56,$8F,$82,$17,$1F,$42,	7,$8F,$D0,$B8
		.BYTE $F3,$1A, $B,$14,$39,$20,$3B,$90,$8A,$51,$3B,$7A,$54,$AE,$88,  0
		.BYTE $2B,$15, $E,$B2,$88,$59,$65,$AB,$17,$7E,$71,$5E,$44,$B2,$C8,$96
		.BYTE $5E,  5, $A,$72,$48,$94,$5E,$94,$80,  4,$9B,$67,$9D,$9F,$A4,$F0
		.BYTE $22
_map38:
		.BYTE $18,$18,$9E,  1,$C3,$BB,$C1,$92,$82,$55, $A,$D7,$9A,$1F,$2E,$1B
					; DATA XREF: BANK7:80E8-o
		.BYTE $F1,$2C,$B9,$E6,$B7,$E3,$C8,$97,$3D,$BE,$CF,$2D,$F5,$2F,$9F,$86 ;	ind data used at 8000
		.BYTE $A7,$70,$69,$C4
_mapC4:
		.BYTE $18,$1C,$9E,  1,$C3,$BB,$C1,$A2,	1,$10,$D2,$AC,$89,$E0,$55,$31
					; DATA XREF: BANK7:8289-o
		.BYTE $37,$CA,$5C,$67,$DF,$37,$E5,$95,$4D,$8F,$9B,$E4,$24,$F7,$99,  6 ;	ind data used at 8000
		.BYTE $4A,$5B,$38,$39,$52,$D8,$95,$C2,$DA,$96,$4B,$E7,$F3,$69,$D8,$94
		.BYTE $71, $C
_mapC6:
		.BYTE  $E,$1A,$DE,$98,	0,  0,	2,  3,$62,$80, $A, $A,	0,$7E,$E8,  0
					; DATA XREF: BANK7:828F-o
		.BYTE	2,  2,$EE,$1C, $F,$BA,$41,  0,$18,$1B,$AF,$72,$60,$C3,$D0,$61 ;	ind data used at 8000
		.BYTE $5A,$A8,$B5,$20,$B5,$21,$65,$F1,$50,$9E,$4B,$2C,$B2,$CC,$F5,$96
		.BYTE $37,$E1,$2C,$B2,$A6,$7B,$CB,$E2,$DD,$21,$AF,$74,$36,$5E,$10,$12
		.BYTE $C6,$EE,$61,$FD,$34,$79,	8
_map39:
		.BYTE $2E,$2B,$DE,  0,$70,$73,$9E,$BA,	2,$D1,	8,  4,$B3,$28,$40,$68
					; DATA XREF: BANK7:80EB-o
		.BYTE $A0,$D5,$13,$D0,$B1,$18,$FD,$F1,$62,$11,$25,$F4,$3D,$AD,	9,$6B
		.BYTE $F0,$4A,$3C,$D7,$C5,$60,$FA,$20,$B6,$89,$42,$A3,	0,$89,$5E,$10
		.BYTE $12,$1E,$78,$77,$C6,$7B,$91,$DE,$41,$D6,$46,$24,$C7,$EF,$24,$BF
		.BYTE $2A,$75,$52,$5C,$E3,$5A,$F5,  7,$22,  0,$12,$EA,	3,$85, $B,$14
		.BYTE $3C,$8B,$E4,$BD,$2B,$BB,$BD,$CA, $A,$99,$DA,$DA,$1F,$98,$55,  9
		.BYTE  $A,$5A,$55,$B4,$C4,$93,$66,$6E,$D1,$4C,$BA,  0,	0,$83,$76,$12
		.BYTE $A9,$DB,$D3,  0,	4,  1,$E0,$20
_mapA8:
		.BYTE $28,$2A,$DE,  0,$70,$73,$9E,$14,$D2,$47,$19,$49,$46,  2,$91,$A2
					; DATA XREF: BANK7:8235-o
		.BYTE $9B,$52,$3C,$D1,$64,$67,$BF,  4,$25,$B3,$C5,$93,$4A,$34,$F3,$49
		.BYTE $E5,$4F,$4A,$51,$4F,$61,$63,$D5,$11,$60,	8,  9,$A5,$91,$3D,$FD
		.BYTE $70,  5,$55,$15,$7C,$7F,$7A,$70,$AB,$A4,$12,$F2,$FC,$5F,$CA,$B2
		.BYTE $E7, $A,$A0,$1D, $B,$46,$B4,$7A,$1C,$13,$E8,$D7,$1D,$3F,$48,$24
		.BYTE $90,  0,$80,$70,	8,$40,	0,$40,	0,$3B,$2C,$6F,$E6,$70,$92,$AC
		.BYTE $9D,$D8,$D5,$61,$D9,$6D,$60,$44,$40
_map3A:
		.BYTE $12,$32,$87,$70,$10,  0,$23,$43,$F1,$AD,$1D,$4E,$24,$6C,$21,$5B
					; DATA XREF: BANK7:80EE-o
		.BYTE $FB,$83,$6B,$BB,$CE,  9,$20,$51,$80,$14,$2C,$8C,	7,$80,	0,  0
		.BYTE $2A,$C9,$45,  0,$53,$4B,$27,$C8,$55,$92,$8A,$B3,$7E,$4B,$14,  0
		.BYTE  $A,$D7,$C8,$BC,$4E,$8B,$42,$DE,$3E,$62,$59,$64,$96,$5E,$54,$E2
		.BYTE $6F,$CF,$28,$72,$C5,  0,$2A,$45,	0,$A9,$1C,$1A,$2F,$3F, $C,$C7
		.BYTE $C4,$E2,$70,$EF, $A,  8,$C3,$A2,$85,$D5,$C1,$2C,$F2,$8A,$50,  0
		.BYTE $8F,$49,$45, $D,$53,$B1,$72,$40
_mapC7:
		.BYTE $22,$22,$DE,$38,$38,$28,$E0,$29,$B5,$25,$B0,$F9,$2F,$15,$69,$64
					; DATA XREF: BANK7:8292-o
		.BYTE $AA,$64,$2F,$B9,$67,$41,$51,$4B,$53,$17,$DA,$9E,$E1,$87,$2A,  3
		.BYTE $21,$B5,$3C,$AF,$79,$35,$C0,$3E,$D1,$81,$B3,$9C,$E0,$27,$8B,$9E
		.BYTE $3A,$CF,$78,$AD,$E4,$1E,$E3,$BA,$FF,$23,$BA,$DD,$1E,$EA,	0,  3
		.BYTE $4A,  6,$84,$3A,$29,$97,$5A,$69,$92,$8A,$71,$D1,$82,$7A,$10,$78
		.BYTE	0,$12,$16,$68,$58,$54,$25,$96,	0,$25,$96,  0,$25,$96,	1,$62
		.BYTE $C0,$81,$2B,$3C,$3C,$10,$10,$85,$2B,  0,	8,  8,	8,$1E,$3F,$87
		.BYTE $A3,$C9
_map8:
		.BYTE $32,$30,$CA,$98,$A6,$26,$25,$7D,	2,$E8,$97,$40,	2,$1A,$50,  4
					; DATA XREF: BANK7:8058-o
		.BYTE  $C,$30,	0,  0,	5,$22,	1,$56,	4,$B2,$C0,  0,	9,$65,$89,$4B ;	ind data used at 8000
		.BYTE	0,$4D,$2C,$4B,$2C,  0,	0,$96,$58,$12,$AB,$C1,	0,$D0,$14,$14
		.BYTE  $F,$41,$C7,$E0,$94,$15,$65,  0, $B,$29,$65,$D8,$14,$F8,	2,$5C
		.BYTE $A5,$94,	0,$2C,$AA, $A,$FA,  8,$78, $A,$12,$A0,$50,$A1,$E5,$D0
		.BYTE $DA,$2A,$99,$60,$A5,$BC,$C9,$52,$DE,$66,$79,$27,$2C,$F4,$B7,$C2
		.BYTE $51,$BC,$80,$3C,$18,$61,$D9,$45,$7C,$F1,$A0,$6D,$3D,$16,$33,$CC
		.BYTE  $C,$F3,$BB,$C0,$6F,$11,$A9,$76,$A5,$5A,$31,$68,$CD,$9C,$F6,$73
		.BYTE $40,$40,$8A,$6C,$FC,$B4,$BA,$D7,$D3,$4D,$6D,  3,$88,  8,$D2,$B9
		.BYTE $6A, $B,$45,$CC,$77,$89,$C3,$4E,$8F,$37, $D,$30,$89,$6C,$4F,$2D
		.BYTE $88,$98,$EC,$86,$B1,$FF,$DD,$13,$76,$11,$C4
_mapC9:
		.BYTE $1E,$38,$C0,  1,$36,$5E,$55,$72,$62,$73,$9D,$3D,$B2,  0,$49,  8
					; DATA XREF: BANK7:8298-o
		.BYTE $10,$A0,$40,$40,$29,  2,$12,$40,	8,$20,	0,$FC,$7F, $F,$C7,$FE ;	ind data used at 8000
		.BYTE $8A,$F5,$B3,$AE,$7E,$88,$74,$84,$76,$47,$34,$90,$38,$C2,$9A,$47
		.BYTE	6,$B8,$8A,$9E,$B9,$8A,$BE,$80,$63,$3A,	0,  9,$2F,$22,$81,$10
		.BYTE $32,$1E,$53,$CD,$45,$4A,$14,$95,$41,$19,$D8,$FD,$65,$48,$CA
_mapCA:
		.BYTE $1A,$30,$DE,$99,$D9,$54,$C5,$49,$CC,  1,$39,$40,$42,$D9,$42,$5C
					; DATA XREF: BANK7:829B-o
		.BYTE $51,$F5,$C7,$FB,$58,$B2,$53,$3D,$B1,$7C,$E3,$21,$88,$5A,$71,$AC ;	ind data used at 8000
		.BYTE $5C,$65,$54,$B3,$8A,$E0,$9A,$9E,$E2,$8C,$9A,$81,$F2,$7E,$B2,$74
		.BYTE $BA,$72,$53,$D0,$8E,$29,$70,$90,$50,$E3,$B8,$13,$41,$43,$E7,$1A
		.BYTE $48,$25,	5,$B3,$7C,$B2,$C5,$92,$C5,$D4,$5D,$F4,$F9,$52,$16,$58
		.BYTE $8D,$F4,$E3,$8A,$83,$8B,$D6,$CF,$3F,$3C,$A7,$87,$BD,$E8,$83,$46
		.BYTE $F8,$6F,$85,$11,	2,$82,$E8,$7A,$84,$24,$A5,$14,$B1,$84,	5,$A0
		.BYTE $90,$1E,$41,$46,$F8,$6F,$9C,$45,$B3,$88,$76,$7E,$5D,$32,$F1,$97
		.BYTE $CC,$F3,$67,$8B,$3B,$D9,$DA,$D2,$26,$92,$34,$99,$AB,$6D,$58,$6A
		.BYTE $A8,  0,	9, $B,	1,$88,$4B,$60,	0,$81,$55,  2,	2,  4,$55,  8
		.BYTE	0,$25,$B0,$84,$15,$6C,$20,$84,$B5,$44,$78,$EC,$2D,$71,$48,$7F
		.BYTE $13,$C7,$90
_mapCB:
		.BYTE $2A,$2C,$D3,$98,	0,  0,	2,$7F,$10,$63,$EC,$6B,$C8,$22,$C1,$14
					; DATA XREF: BANK7:829E-o
		.BYTE $2C,$B0,$45,$95,	4,$50,$A4,$23,$29,$80,$F5,$C2,$11,$42,$CA, $B ;	ind data used at 8000
		.BYTE $14, $C,$40,$F2,$8B,$14,$45,$2C,$A2,$C5,	2,$AC,$78,$AF,$B5,  4
		.BYTE	1, $A,$B0,$16,	4,  9,$40,$38,$83,$46,$FA,$68,$F3,$C5,$B8,$23
		.BYTE $44,$8F,$E6,$FE,$B9,$C7,$67, $C,$EF,$9A,$8E,$94,$A0,$61,$79,$A4
		.BYTE	1,$46,$A5,$41,$6C,$AB,$E2,$3D,$B2,$63,$10,$B5, $B,$6C,$B5,$73
		.BYTE $9A,$AD,$A2,$9D,$91,$E0,$B4,$84,$83,$97,$B1,$CC,$31,$18,$79,$E4
		.BYTE $95
_mapCC:
		.BYTE $2C,$38,$C3,$19,$34,$16,$89,$25,$63,$28,$21,$5A,$A2, $F,$50,$76
					; DATA XREF: BANK7:82A1-o
		.BYTE $26,$54,$43,$9A,	4,$1A,$86, $C,$EE,$2C,$4E,$6B,$53,$B1,$E1,$56 ;	ind data used at 8000
		.BYTE $F0,$77,$F0,$20,$45,$34,$9C,  8,$3C,$48,$50,$C7,$29,$C2, $F,  0
		.BYTE	0,  0,$4A,$89,	4,  3,	7,$E9,$AF,$96,$58,$4B,$2C,$25,$94,  0
		.BYTE $59,$61,$2C,$B0,$96,$50, $B,$2C,$25,$96,$12,$CA,	0,$2C,$B0,$96
		.BYTE $58,$4D,$94,$F2,$50,  1,$AF,$2C,$B2,$CA,	5,$96,$59,$5A,$F0,$D2
		.BYTE $A6,$92,$9E, $D,$2C,$3D,$15,$E7,$A5,$97,$A4, $E,$55,$F0,	0,  4
		.BYTE $24,$F4,$70,$AA,$78,$C0,$D6,$36,$8A,$D0,$F2,$62,$73,$7F,$20,$A4
		.BYTE	4,$69,$5D,$E9,$71,$75,$CB,$8B,$2C,$83,	3,$3C,$EE,$2D,$18,$C1
		.BYTE $6D,$D0,$3B,$80,$B2,$51,$AB,$A0,$F1,$68,$E6,$98,$10,$B2,	0
_mapCD:
		.BYTE $18,$22,$D3,$98,	0,  0,	2,$C2,	5,$96,$58,$B0,$12,$A5,$96,$58
					; DATA XREF: BANK7:82A4-o
		.BYTE $E0,$36,$59,$65,$8B,  1,$2A,$59,$65,$8F,	1,$51,$E1, $C,$8F,$A2 ;	ind data used at 8000
		.BYTE $20,$A4,$C3,$DE,	0,  2,$D7,$C6,$6C,$38,$C3,$DC,$6F,$10,$12,$C6
		.BYTE $F2,$26,$F2,$6C,$26,$92,$66,$26,$68,$E9,$8E,$C8,$EF,$8F,$28,$93
		.BYTE	1,$99,$77,$B7,$69,$35,$73,$45,$33,$33,$32,$34,$43,$56,$36,$83
		.BYTE $79,$CC, $C,$F3,$BB,$D4,$64,$6B,$BE,$DE,$B1,$D1,$62,$25,$89,$67
		.BYTE $8F,$EF,$41,$E6,$14,$F0,$8F,$92,$4A,$9C,$46,$4B,$29, $D,$AF,$84
		.BYTE	8,$C9,$89,$4E,$A0,$C6,$14,$94,$A9,$71,$23,$A9,$80,$8F,$1A,$1C
		.BYTE $88,$89,$AF,$9E,$24
_mapD0:
		.BYTE $24,$24,$C0,  0,	0,$30,$1E,$65,$80,$E4,$12, $E,$30,$31,$C9,$5A
					; DATA XREF: BANK7:82AD-o
		.BYTE $1E, $C, $C,$E7,$89,$9A,$3C,$9C,$84,$35,$AA,$14,$14,$2A,$DE,$6E
		.BYTE $F8,  0,$12,$C3,$3D,$E6,$E6,$A4,	0,$1A,$8F,$8A,$F2,  2,$34,$AE
		.BYTE $68,$48,$89,$56,$D9,$A2,$10,$12,$C6,$EB,$F0,$7E,$A4,  7,$91
_mapD1:
		.BYTE $2C,$2E,$C0,  0,$A6,$4A,$DC,$E6,$60,$5A,$36,$41,$DB,$C6,$57,$59
					; DATA XREF: BANK7:82B0-o
		.BYTE $14,$CB,$27,$94,$B5,$AA,$44,$BE,$AB,$64,$D4,$28,$B2,$69,$F4,$45 ;	ind data used at 8000
		.BYTE $AA,$75,$96,$4D, $C,$A8,$AA,$87,$98,$92,$B5,$C7,$49,$64,$74,$EC
		.BYTE $87,$56,$50,$74,$87,$C7,$2A,  4,$72,$4D,	7,$1D,$48,$79,$9A,$C6
		.BYTE $69,$73,$CA,$95,$29,$29,$E6,$2D,$72,$3B,	5,$8E,$B6,$EB,$AD,$D8
		.BYTE $DF,$75,$35,$17,$A4,$1C,$9C,$9C,$84,$BC,$70,$84,$B3,$8E,$2A,$E2
		.BYTE $DE,$A5,$E3,$5B,$2C,$BC,$A2,$F5,$E4,  6,$39,$2C,$CC,$F7,$49,$A9
		.BYTE $67,$54,$75,$BE,$99,$FA,$BE,$FE,$C5,  1,$E5,$A0,$FF,$9E,$8F,$24
_map3B:
		.BYTE $2E,$30,$CA,$50,	0,  0,	1,  0,	8,$43,	0,  0,$94,$41,$31,$87
					; DATA XREF: BANK7:80F1-o
		.BYTE	7,$CE,$79,$34,$33,  6,$DD,$23,$E7,$D1,$56,$69,$95,$55,$B4,$66 ;	ind data used at 8000
		.BYTE $F8,$55,$70,$8A,	1,$2A,$AB,$84,$E3,$22,$25,  2,	0,$20,$18,$FA
		.BYTE $2C,$37,$E3,$7D,$1A,  0,$94,$B8,	0,$21,$72,$FD,$67,$AC,$96,$7A
		.BYTE $9E,$9C,$C1,$F8,	2,$52,$E0,  7,$A9,$E3,	3,$58,$DD,$FF,$81,$F0
		.BYTE $57,$C1,$70,$7E,$17,$38,$59,$3D,$30,$22,$E3,$AF,$DE,$5F,$2E,$6C
		.BYTE $DC,$33,$FA,$D7,$27,$5E,$4C,$3A,$E1,$2A,$5E,$3F, $D,$1C,$42,$48
		.BYTE	8,$D2,$B9,$DD,$8E,$E1,$14,$71,	0
_mapD2:
		.BYTE $28,$28,$DB,  1,$39,$FC,$20,  0,	3,$40,	0,  4,$AA,$B8,	1,$A0
					; DATA XREF: BANK7:82B3-o
		.BYTE  $D,  0,$FC,  0,$30,$1E,	0,$60,	2,  0,$4A,$AA,$FA,  0,$68, $F ;	ind data used at 8000
		.BYTE	0,$58,$88,$F0, $F,  0,$F7,$C0,	4,  0,$B1,$34,	1,$80,	0,  3
		.BYTE $C0,$7A,$68, $F,$78,$FE,$C8,$97,$EB,$E0,$EC,$61,$E2,$B8,$71,$1F
_mapD3:
		.BYTE $1E,$1E,$DB,  1,$38,$B7,	8,$89,$49,$40,$51,$B2,$22,$3E,	6,$14
					; DATA XREF: BANK7:82B6-o
		.BYTE $D9,$F2,$FD,$45,$12,$97,	5,$46,$82,$6D,$55,$78,$A0,$58,$4A,$AA ;	ind data used at 8000
		.BYTE $F1, $D,$9F,$2F,$AE,  0,$5D,  0,$CF,$7C, $A,$81,	2,  4,$4A,$90
		.BYTE $9F,$E6,$92,$14,$C4,$1D,$DB,$E3,$F2,$BF,$26,$8B,$C5,$22,$F0,  0
		.BYTE $60,$3E,$BA,$6B,$B8,$10,$22,$9B,$4E,$86,	6,$B1,$BA,$EC,$30,$9C
_mapD4:
		.BYTE $18,$18,$DE,  1,$34,$DF,$70,$14,$99,$79,$4C,$97,$5A,$16,$F1,$61
					; DATA XREF: BANK7:82B9-o
		.BYTE $61,$29,$29,$FB,$D6,$2F,$6D,$B5,$B7,$49,$73,$7B,$3A,$74,$CB,$5E
		.BYTE $B7,  4,$76,$39,$E3,$20,$FD,$EC,$35,$2C,$19,$51,$49, $A,$8A,$91
		.BYTE $51,$49, $A,$8A,$F2,$EA,$54,$BA,$98,$19,$E7,$75, $C,$40,$4B,$1B
		.BYTE $93,$62,	8
_mapD5:
		.BYTE  $E, $E,$DE,  1,$39,$43,$4A,$14,$2A,$7A,$5A,$B4,$20,$25,$8D,$D9
					; DATA XREF: BANK7:82BC-o
		.BYTE $8B,$E7,$83,$F5,$11,$DC,$98,$E2,$1B
_mapD6:
		.BYTE $18, $E,$DB,$D9,$61,$2B,$4A,$78,$4B,$AF,$56,$54,$B2,$FB,$C9, $B
					; DATA XREF: BANK7:82BF-o
		.BYTE $4A,$D4,$1A,$4C,$7A,$36,$2C,$B3,$DE,$74,$76,$52,$A6,$18,$62,$35
		.BYTE $7D,$EF,$38,$39,$6B,$4F,$64,$1C,$9E,$C7, $E,$CF,$37,$3C,	2,$2A
		.BYTE $2A,$2A,$2A,$38,$1A,$91,$51,$51,$51,$51,$E5,$B7,$B6,$98,$D3,$FC
		.BYTE	4,$76,$86,$1C,$4B
_map58:
		.BYTE $11,$15,$D3,$98,	9,$8D,	4,  6,$D0,$7C,$1C,$19,$14,$28,$33,$D2
					; DATA XREF: BANK7:8148-o
		.BYTE $B3,$D2,$99,$41,$40,  0,$64,  0,	1,$F4,$36, $D,$86,$C0,$28,$F7
		.BYTE $BD,$EF,$1C,$9F,$98,$84,$C0,$66,$5C,$91,$93,$8D,$82,$CE,$79,$7C
		.BYTE $DA,$28,$2F,$80,	0,$B5,$E0,$22,$E0,$4A,$F3,  3,$3C,$EE,$3A,$32
		.BYTE $35,$DF,$63,$B1,$FB,$9C,$79,$4A,	3,$31,$26,$84,$B2,$9A,$6D,$AD
		.BYTE $DB,$21,$34
_map33:
		.BYTE $22,$28,$D3,$99,$24,$59,$1A,$A5,$14,$24,$B5,$18,$A5,$40,$14,$A9
					; DATA XREF: BANK7:80D9-o
		.BYTE $40,$16,$80,$40,	0,$18,$34,$F9, $F,  0,$41,$83,$EE,$8F,$4B,$BF
		.BYTE $2E,$FC,$BB,$E8,	9,$81,$F6,$67,$D9,$9F,$66,$7A,$89,$82,$8F,  0
		.BYTE $41,$87,$DA,$20,	0,$10,	5,$A0,$3A,$84,$E2,$D1,$42,$8B,$A7,$BC
		.BYTE $7F,$31,$4C,$67,$18,$CE,$71,$CD,$67,$20,$E6,$7A, $E,$E7,$A4,$F6
		.BYTE $7A,$80,$E8,$AF,$45,$E1,$74,$9B,$A5,$11,$5A,  6,$D0,$78,$BD,  8
		.BYTE $68,$1C,$10,$19,$8F,$9C,$2C,$E5,$88,  9,$63,$76,$75,$B4, $E,  3
		.BYTE $70,$30,$80,$8D,$2B,$C9,$12,  4
_map3C:
		.BYTE $1E,$28,$C8,$98,$80,$84,$22,  0,$5A,$F4,$38,$94,$28,$82, $A,$17
					; DATA XREF: BANK7:80F4-o
		.BYTE $82,$C0,$A0,$3C,	0,  9, $B,$44,$89,$D2,	0,$74,$40,$91,$2C,$B1 ;	ind data used at 8000
		.BYTE	4,$AA,$A9,$6C,$20,$84,$B5,$A2,	8,$33,$D6,$84,$4B,$2C,$45,$5B
		.BYTE $38,  9,$49,$6A,$A2,$59,$62,  5,$B2,$D8,$41,  9,$69,$6C,$20,$84
		.BYTE $B6,$2A,$AC,$11,$2C,$B1,$3D,$E6,	6,$79,$D9,$E6,	8,$9F,$A4,$8C
		.BYTE $24,$61,$30,$58,$5A,$D7,$40,$60,$82,$3C,$5C,$B0,$A2,$D0,	2,$85
		.BYTE $6D,$84,$F0,  5,$2D,$4F,$1F,$9B,$F1,$DC,$65,$CF,$29,$78,$D4,$27
		.BYTE $96,$CD,$49,$63, $A,  0,$1C,$19,$25,  9,$2B,$82,	2,$89, $A,$4B
		.BYTE $12,$7A,$98,$1B,$D8,$10
_mapD7:
		.BYTE $1C,$24,$C9,$98,	0,$12,$16,$84,$15,$14,$6F,$A2,$4A,$2A,$CB,$2A
					; DATA XREF: BANK7:82C2-o
		.BYTE $C9,$4B,$25,$59,$65,$51,$64,$4B,$25,$28,$A5,$92,$86,$FA,	2,$24 ;	ind data used at 8000
		.BYTE $A2,$8A,$2C,$84,$94,$51,$45,$93,$FD,$83,$BC,$3A,	0,$48,$4A,$53
		.BYTE	7,  2,$70,$30,$A7,$73,$52,$77,$75,$A7,$8F,$E6,$FC,$4D,$1D,$AD
		.BYTE $24,$B3,$18,$91,$85,  0,$33,$54,$12,$45,$C0,  1, $A,$42,$F0,  5
		.BYTE $AF,$82,$90,$43,$A4,$A3,$10,$D9,$B1,$D6,$7E,$67
_mapD8:
		.BYTE $1C,$24,$C9,$48,	0,$12,$15,  0,$3E,$F2,$62,$73,$9D,$AB,$6B,$45
					; DATA XREF: BANK7:82C5-o
		.BYTE $96,$28,$1A,$9A,$B8,$95,$66,$92,$D6,$FC,$F4,$AB,$28,$15,$2C,$F1 ;	ind data used at 8000
		.BYTE $64,$67,$DF,$19,$F6,$67,$94, $A,$4C,$FD,$7B,$DC,$76,  4,$8F,$12
		.BYTE $12,$94,$C1,$C0,$9C, $C,$29,$DC,$D4,$9D,$DD,$69,$E3,$BE,$8F,$1F
		.BYTE $C9,$67,$6F,$66, $F,$F5,$7E,$C7,$1E,$61,$71,$AF,$95,  0,$10,$54
		.BYTE $12,$45,$CD,$81,$B0,$B2,$5F,$CC,	4,$1B,$72,$FB,$6E,$CC,$2C, $C
_mapD9:
		.BYTE $12,$18,$C9,$98,	0,$12,$16,$93, $B,  4,$B1,$2C,$12,$F9,$78,$C4
					; DATA XREF: BANK7:82C8-o
		.BYTE $BC,$A0,$AE,$33,$CA,  7,$6F, $E,$C6,$24,$25,$29,$AF,$12,$76,$3B ;	ind data used at 8000
		.BYTE $4E,$12,	9,$C0,$E5,$3C,$49, $A
_mapEE:
		.BYTE  $C, $C,$CA,$98,	0,  0,	2,  0,$81,$42,$85,$1E,$4C,$4F,$5B,$C9
					; DATA XREF: BANK7:8307-o
		.BYTE $B4,$A3,$3A,  1,$8D,  4,$7E,$8A,$3C,$80 ;	ind data used at 8000
_map3D:
		.BYTE $34,$22,$C8,$98,	0,$12,$16,$1A,	1,$11,$51, $A,$D9,$F2,$8B,$8A
					; DATA XREF: BANK7:80F7-o
		.BYTE $41,$40,$29,$A3,$61,$6F,$89,$E8,$92,$94,$52,$C8,$D9,$F1,$45,$37
		.BYTE $E5,$9C,$A8,$B4,$B8,$51,$58,$92,$94,$52,$C8,$82,$8B,$15,$A1,$F2
		.BYTE $FA,$FB,$D7,$9D,$84,$AB,	8,$AA,$86,$52,$CF,$BB,$2A,$2A,$A2,$C8
		.BYTE $AB,$E4,$25,$F1,	1,  8,$44,$82,	2,$6F,$96,$15,$8F,$A5,$AE,$47
		.BYTE $40,$28,$2D,  8,$74,$AA,$81,  1,$20,$53,$A3,$C4, $B,$49, $B,$4F
		.BYTE	6,  6,$73,$CC,$21,$73,$DA,$DE,$30,$31,$8C,$DB,$50,$CD,$81,$6C
		.BYTE $13,$6D,$BB,$D5,$E0,$3F,	1,$77,$39,$B3,$41,$BB,$92,$C8,$A6,$E1
		.BYTE $3C,$B8,$4B,$CD,$83,$F8,$B3,$B5,$9D,$42,$ED,$2F, $D,$78,$81,$DE
		.BYTE $F8,$F3,$85,$4E,$11,$25,$B7,$1B,	5,$AC,$9B,$65,	3,$86,$44,$AA
		.BYTE $8C,$8D,$2D,$BE,$D8,$A0,	0,  9,$4A,$28,$CF,$27,$ED,$10,	6
_mapDC:
		.BYTE $2C,$1C,$C9,$31,$34,$2E, $E,$34,$37, $F,$54,$BE,$47,$35, $F,$3B
					; DATA XREF: BANK7:82D1-o
		.BYTE $75,$74,$31,$55,	9,$3A,$31,$28,	8,$1E,$20,  0,$48,$58,	4,$62
		.BYTE $94,$BC,	5,$11, $D,$25,$25,$8B,$12,$A5,$84,$56,$7A,$E0,$4B,$2C
		.BYTE $4B,$2C, $D,$52,$7C,$B9,$E6,$FA, $F,$29,$FC,$6E,$A4,$A2,$CA,$B2
		.BYTE $8B,$2F,$99,$C2,$F9,$E8,$30,$20,	0,$F3,$18,$6E,$25,$B0,	0,$72
		.BYTE $FB,$56,$54,$B2,$C9,$62,$59,$52,$C7,$8E,$D7,$D6,$38,$37,$43,$C6
		.BYTE $8C,$BE,$63,$D7,$62,$A3,$F8,$33,$BE,$7D,	1,$E7,$77,$5A,$DA,$15
		.BYTE  $F,$22,$48,$96,$54,$B3,$C3,$4D,$89,$14,$2B,$6C,$27,$BC,$31,$4A
		.BYTE $72,$20,$7A,$87,$9D,$CA,$9D,$1A,$89,$20
_mapDD:
		.BYTE $28,$16,$C9,$98,$90,$94,$A6,$3F,$35,$17,$9F,$E0,$91,$DA,$12,$70
					; DATA XREF: BANK7:82D4-o
		.BYTE $4D,$9E,$25,  0, $E,$16,$80,$D8,$40,  0,$90,$B1,$E1,  5,$95,$65
		.BYTE $16,$55,$E6,$D1,$41, $B,	8,$A1,$2C,$B1,$2C,$B0,$2A,$13,$48,$79
		.BYTE $60,$9B,$E6, $D,$F9,$EF,$1D,$98,$59,$CF,$D3,$FD,$95,$B8,$D9,$EA
		.BYTE $3F,$81,$49,$78,$A6,$36,$12,$23
_mapDE:
		.BYTE $2A, $E,$C9,$98,$90,$94,$A6,  0,$20,$28,$36,$C1,$2E,$7D,$7B,$A1
					; DATA XREF: BANK7:82D7-o
		.BYTE $44,$DB,	4,$BA,$F8,$27,$85,$F0,	0,$24,$2C,$68,$44,$B1,$2C,$4B
		.BYTE $13,$85,$48,$2C,$AB,$28,$B2,$AF,$83,$90,$D1,$2A,$59,$50,$89,$52
		.BYTE $CF, $F,$27,  2,$54,$B2,$A5,$F1,$F8,$B3,$99,$A3,$B6,$7C,$71,  5
_mapDF:
		.BYTE $28,$1A,$C9,$49,$34,$29,$1B,$F5,$9A,$3A,$D4,$60,$18,$D3,$19,$38
					; DATA XREF: BANK7:82DA-o
		.BYTE $3C,$92,	2,$6E,$67,$23,$E0,  0,$48,$58,$54, $B,$2A,$CA,$2C,$AB
		.BYTE $2F,$2E,$28,$55,$2F,$15,$E5,$2A,$CA,$B2,$AC,$F1,$D9,$3D,$C2,$AE
		.BYTE $EB,$49,$6C,$D0,$7E,$6F,$47,$91
_map3E:
		.BYTE $1A,$2C,$C8,$98,$80,$84,$22,$8A,$88,$53,$6B,$C2,$C9,$40,	2,$80
					; DATA XREF: BANK7:80FA-o
		.BYTE  $A,  0,$16,$4A,	5,$D3,$C7,$80,	1,$21,$68,$9C,$29, $B,$CC,$39
		.BYTE $52,$CB,	4,$AB,	4,$B0,$4A,$B0,$4B,  4,$AB,  4,$B3,$4B,$E2,$55
		.BYTE $8E,$8A,$42,$14,$9C,$37,$94,$10,$41,$2D,$50,$50,$50,$57,$94,$15
		.BYTE $C6,$71,$51,$A4,$8C,$9E,$65,$30,$78,$7B,$DF,$94,$42,$60,$53,$36
		.BYTE $DF,$36,$29,$B1,$BD,$C1,$ED,$33,$69,$62,$E7,$33,$A4,$A2,$DA,$16
		.BYTE $D0,$B6,$9E,$2C,$A5,$1B,	7,$2C,$98
_mapE5:
		.BYTE $1A,$1A,$C9,$98,$94,  0,$A2,$D0,$62,$A3,$40,$A0,$A4,  0,	9, $B
					; DATA XREF: BANK7:82EC-o
		.BYTE $1D,  0,$B2,$96,$14,$44,$94,$52,$CA,$58,$51,$12,$51,$4B,$28,$1A
		.BYTE $25,$AA,$21,$E2,$CA,$58,$51,$12,$53,$C7,	7,$39,$DA,$88,$3F, $E
		.BYTE $C7,$98,$50,  0,$F3,$5B, $A,$8C,$90,$41,	3,$5A, $A,$4C,$88
_mapE6:
		.BYTE $18,$18,$C9,$48,	0,$12,$15,  0,$23,$F0,$E8,$C8,$ED,$93,$13,$9C
					; DATA XREF: BANK7:82EF-o
		.BYTE $E6, $A,$59,$79,$F0,$56,$5E,$29,	5,$97,$83,$6D,$65,$F2,$69,$F4
		.BYTE $A2,$89,	9,$4A,$63,$C2,$74,$34,$B9,$36,$1C,  6,$6F,$C0, $E,$10
		.BYTE $E2,$6C,$16,$29,$85,$78,$BB,$85,$38,$3F,$83,$B8,$97,$AD,$7A,$FA
		.BYTE $3F,$82,$F7,$FF,$2F,$70,$DC,$76,$1A,$12,$12,$94,$B4,$4C,$91,  4
_mapE7:
		.BYTE $14,$14,$C9,$48,$74,$7F,$50,$27,$4A,$24,$B3,$25,$FB,  0,$22,$CA
					; DATA XREF: BANK7:82F2-o
		.BYTE $DA,$9F,	0,$22,$CB,$B6,$3D,  0,$22,$CB,$B6,$7A,	0,$3C,	0,  9
		.BYTE  $B,$54,$24,  2,$58,  4,$B0,  9,$60,$1E,$53, $C,$E1,$BC,$3B,$87
		.BYTE $F1,  8,$FC,$6E,$3B,$30,$F6,$3E,$B1,$8B,	7,$13
_mapE8:
		.BYTE $14,$14,$C9,$38,	0,$12,$16,$B5, $B,  0,$97,$82,$12,$C0,$25,$F0
					; DATA XREF: BANK7:82F5-o
		.BYTE	0,$28,$2D,$6C,$41,$C0,$EC,$1E,$4E,$29,$22,$C0,	9,$76,$CA,  0
		.BYTE $BE,$74,$F7,$2C,$B0,$67,$BA,$B7,$9D,$2F,$17,$CD,$CF,$30,$18,$60
		.BYTE $FB,$81,$AF,$80,$69,$9F,$40,$C6,$FC,  1,$EF,$3C,$F3,$CD,$48,$2C
		.BYTE $2E,$3D,$A1,$2B,$D1,$D0,$84,$94,$2E,$16,$7A,$8F,$37,$CC,$8D,$68
		.BYTE $73,$BA,$23,$80,$71,$2D,$85,$AA,$F4,$1E,$FB,$E4,$7C,$2B,$5D,$69
		.BYTE $23,$9A,$3F,$5B,$F0,$7E,$3D,$BD,$B5,$36,$7E,$D7,$FC,$3F,$7F,$68
		.BYTE $62,$F9,$83,$2F,$64,$7C,$85,$94,$CB,$71,$BE,$8D,$D2,$F9,$D7,$3C
		.BYTE $25,$D8,$FA,$C7,$2E,$12,$12,$94,$F6,$8C,	1,$84,$BB,$D0,$EC,$6E
		.BYTE $38,$9C
_map3F:
		.BYTE $22,$24,$C8,$98,	0,$12,$16,$3F,$82,$C5,$96,$54,$BB,$16,$59,$65
					; DATA XREF: BANK7:80FD-o
		.BYTE $3E,$51,$62,$CB,$2C,$A9,$42,$C5,$8A,$95,$29,$62,$C5,$96,$56,$C5 ;	ind data used at a000
		.BYTE $32,$E1,$2F,$92,$FD,$94,$DF,$89,$65,$97,$E5,$F1,	1,  8,$44,  2
		.BYTE $B0,$5D,$3D,$AF,$6F,$9D,$23,$B0,$4C,$3D,$2D,$8E,$6A,$10,$26,$1E
		.BYTE $C7,$A5,$B1,$C0,$59,  4,$C1,$EC,$7B,$3C,$F2,$5B,$6F,$1F,$B6,$51
		.BYTE $E4
_mapE9:
		.BYTE $1E,$20,$C9,$98,	0,$12,$16,$13,$24,$B2,$CA,$CA,$BF,$44,	6,$25
					; DATA XREF: BANK7:82F8-o
		.BYTE $97,$ED,$C5,$F0,$83, $F,$BA,$25,$1E,$59,$65,$97,$C4,$84,$A5,$37 ;	ind data used at a000
		.BYTE $30,$85,$6D,$9E,$77,$15,$88,$C9,$7C,$E3,$C0,  8,$C9,$7C,$E0,$51
		.BYTE	8,$C9,$7D,$E3,$F5,$1C,$77,$61,$8E,$31,$8F,$EB,$79,$2E,$9E,$D1
		.BYTE $ED,$3C,$50,$AA,$2D,$1E,$42,$AA,$74,  5,$14,$6A,$9B,$5F,$27,$BC
		.BYTE $42,$B2,$F8,$85,$A0,$12,	0,$DA, $C,$9B,$E5,$92,$FB,$DE,$24
_mapEA:
		.BYTE $20,$1E,$C9,$98,$90,$94,$A6,$40,	0,$8C,$97,$C0,	1,$19,$2F,$BA
					; DATA XREF: BANK7:82FB-o
		.BYTE $9E,$82,$32,$5F,$3B,$88,$C2,$32,$5F,$78,	0,$12,$16,$12,$15,$82 ;	ind data used at a000
		.BYTE	4,  6,$27,$DB,$8B,$E0,$83,$11,$F6,$E2,$CB,$3C,	3,$12,$CB,$16
		.BYTE $FB,$C9,$64,$B0,$FD,$10,$1D,$D2,$C3,$8C,$28, $C,$B9,$92,$C3,$56
		.BYTE $66,$82,$95,$E8,	0,$20,$59,$13,$3D,$60,$CF,$25,$4C,$F2,$C0,$94
		.BYTE $98,$5F,$2C,  9,$A9,$EF,	2
_mapEC:
		.BYTE $18,$1A,$C9,$98,$31,$33,$CF,$3D,$B5,$5B,$56,$F3,$EC,  0,	9, $B
					; DATA XREF: BANK7:8301-o
		.BYTE $3C,$C2,$CB,  9,$65,$89,$65,$84,$B2,$F9,$41,$5C,$67,$7A, $D,$4B ;	ind data used at a000
		.BYTE $80,$24,$3C,$76,$6D,$8F,$CC,$91,$34,$BF,$80,$98,$1E,$61,$23,$D2
		.BYTE $D8,$E2,$A0,  1,$30,$3C,$C2,$47,$A5,$B1,$C0,$82,$4B,$60,$98,$55
		.BYTE $B2,$1E,	7,$38,$F1,$2D,$82,$32,$55,$B2,$78,$C8,$F3,$C4,$94,$8F
		.BYTE $3D,$42,$59,$4B,$2C,$AB,$2C,$A5,$96,$79,$4C,$47,$54,$9C
_mapED:
		.BYTE  $E,$10,$C9,$49,$35,$52,$2D,$20,$BF,  0,	2,$42,$C7, $A,$CB,$12
					; DATA XREF: BANK7:8304-o
		.BYTE $CB,$D3,$1A,$CB,$12,$CB,$E1,  1,$40,$1D,$FB,$8A,$20,$21,$39,$EC ;	ind data used at a000
		.BYTE $1A,$A1,$61,$7B,$DB,$68,$2F,$B3,$EF,  3,$FB,$D1,$D9,$18,$E2,  5
_mapEF:
		.BYTE  $E,$10,$C9,$48,	0,$12,$16,$1E,$92,$96,$59,$56,$59,$4B,$2C,$AB
					; DATA XREF: BANK7:830A-o
		.BYTE $E2,$60,$44,$1E,$4D,$13,$BE,$59,$65,$81,	9,$9A,$74,$8C,$F2,$60 ;	ind data used at a000
		.BYTE $53,$35,$27,$3C,$77,$7A,$4B,$4F,$D2,$8D,$53,$DA,$2C,$21,$5A,$BE
		.BYTE $E3,$28,$56,$AF,$A1,$2A,$79,$A2,	0
_map40:
		.BYTE $24,$2E,$C8,$41,$34,$6E,$59,$B6,$89,$5C,$B6,$96,$5E,$54,$56,$16
					; DATA XREF: BANK7:8100-o
		.BYTE $54,$49,$14,$B0,	0,$24,$2D,$47,$82,$C2,$5A,$B2,$96,$58,$96,$58
		.BYTE $96,$58,$96,$52,$C1,$29,$65,$89,$65,$89,$65,  2,$CB,$12,$CB,$12
		.BYTE $CB,$12,$CA,  5,$96,$5B,$2C,$BA,$20,$41,$9F,$6C,$B1,$2C,$12,$96
		.BYTE $58,$96,$58,$96,$58,$96,$52,$CA,$B6,$12,$BD,$E0,	0,$61,$1A,$B3
		.BYTE $45,$2B,$C0,$81,$44,$D5,$67,$8E,$BF,$41,$FB,$72,$26,  5,$33,$6B
		.BYTE $88,  8,$11,$4D,$AD,$FD,$B7,$8C, $D,$63,$6B,$F2,$3C,$D8,$DE,$F7
		.BYTE $44,$60,$84,$79,$41,$5C,$67,$AD,$3B,$71,$D9,$C6,$3A,$36,$34,$3F
		.BYTE $B9,$78,$97,$25,$A5, $D,$29,$97,$97,$FA,$39,$84,$A3,$CB,$9C,$48
		.BYTE	0,$86,$E1,$61,$C6,$2F,$46,$C2,$29,$44,$90,$BF,$42,$60,$75,$1A
		.BYTE $96,$21,$A9,$14,	4,$9F,$57,$F5,$1D,$40,	0,$11,$D2,$92,$D8,  9
		.BYTE $6C,$EB,$85,$25,$82,$59,$42,$CB,	4,$B3,$A4,  0,$96,$C0,$4B,$67
		.BYTE $81,$37,$92,$ED,$9A,$D8,$84,  4
_mapF1:
		.BYTE $24,$2A,$C9,$98,$90,$94,$A6,  0,$5A,$82,$C9,$41,$64,$A0,$A0,  6
					; DATA XREF: BANK7:8310-o
		.BYTE $D0,$F0,$28,$2C,$94,$16,$4A, $A,	0,$6D,$CF,$19,$EF,$78,	0,$12
		.BYTE $16,$14,$CA,$CB,$12,$CB,$12,$CB,$12,$CA,	5,$96,$32,$CB,$12,$CB
		.BYTE $12,$CB,$C2,$81,$7D,$D4,$B9,$F5,$2C,  9,$65,$C9,$7C,$96,	9,$4B
		.BYTE $2C,$4B,$2C,$4B,$28,$16,$58,$96,$58,$96,$52,$CE,$64,$52,$52,$CA
		.BYTE	5,$94,$B9,$F5,$2C,  9,$67,$A5,$F3,$6A,$4C,$58,$6B,$24,$73,$64
		.BYTE $84,$A5,$2D,$EE,$E7,$94,$EC,$B4,$90,$72,$74,$6C,$8A,$93,$98,$12
		.BYTE $E5,$C8,$B9,$A6,	9,$15,$D5,  8,$24,$73,$10,$41,$E7,$25,$E3,$83
		.BYTE $93,$B8,$B7,$95,$E8,$B7,$96,$FE,$E6,$13,$B9,$95,$EB,$79,$B8,$EB
		.BYTE $4E,$5E,$C8,$3A,$A4,$85,$AE,$1C,$D2,$DE,$1D,$92,$DF,$1D,$84,$FE
		.BYTE $C1, $F,$D2,$EE,$3E,$47,$94,$A7,$E9,$F6,$A6,$EA,$16,$A5,$D2,$39
		.BYTE $92
_mapF2:
		.BYTE $24,$2A,$C9,$98,$90,$94,$A6,  0,$5A,$82,$C9,$41,$64,$A0,$A0,  6
					; DATA XREF: BANK7:8313-o
		.BYTE $D0,$F0,$28,$2C,$94,$16,$4A, $B,$C0,$63,	3,$6C,$B6,$1E,$F0,  0
		.BYTE $24,$2C,$27,$34,$B2,$AC,$B2,$AC,$B0,$94,$58,$4B,$2A,$CB,$2A,$CB
		.BYTE	0,$96,$55,$96,$55,$96,$12,$8B,$2A,$CA,$2C,$25,$89,$28,	2,$85
		.BYTE	0,$59,$12,$C2,$51,$61,$2C, $A,$DF,$8B,$2C,$4B,$2C,$4B,$2C,$4B
		.BYTE $2C,$F3,$B9,  3,$C7,  1,$C8,$73,$22,$43,$C9,$61,$3C,$7F,$66,$71
		.BYTE $F2,$3B, $C,$BA,$5D,  0,$26,$49,$D1,$22,$78,$10,	2,$92,$92,$63
		.BYTE $C0,$9C,$28,  0,$3D,$23,$40,$B1,$F7,$22,$6E,$91,$AA,$EC,$A1,$69
		.BYTE $52,$E9,$1C,$CA,$68
_mapF3:
		.BYTE $24,$2A,$C9,$98,$90,$94,$A6,  0,$5A,$82,$C9,$41,$64,$A0,$A0,  6
					; DATA XREF: BANK7:8316-o
		.BYTE $D4,$B6,$3C, $A, $B,$25,	5,$92,$82,$80,$1B,$43,$DE,$79,$2E,$51
		.BYTE $D4,$9C,$BA,$15,$50,  0,$A1,$40,	2,$A8,	1,$20,$3C,  0,	9, $B
		.BYTE $52,$44,$96,$55,$96,$55,$96,$12,$8B,$2B,$7E,$45,$96,$55,$96,$55
		.BYTE $96,  1,$2C,$AB,$2C,$AB,$2C,$AD,$96,  1,$2F,$CC,$59,$45,$84,$B2
		.BYTE $AC,$B2,$AC,$B1,$E0,$16,$50,$2C,$A7,$92,$D8,$11,$D9,$70,$24,$8F
		.BYTE $39,$30,$94,$B5,$E3,$BB,$31,$86,$51,$F8,$4F,$1E,$52,$89,	2,$CE
		.BYTE $84,$A3,$2E,$80,$43,$BA,$86,  3,$5A,$81,$A3,$E6,$4A
_mapF0:
		.BYTE $24,$2A,$C9,$48,$B4,$4A,$55,$34,$6D,$11,$D4,$27,$58,$36,$65,$50
					; DATA XREF: BANK7:830D-o
		.BYTE $D4,$32,$59,$90,	0,$24,$2D,$25,$12,$CA,	0,$B2,$81,$65,	0,$59
		.BYTE $42,$D3,$9B,$70,	8,$43,$1E,$47,$52,$8C,	5,$96,$25,$96,$25,$94
		.BYTE $B0,$4A,$59,$62,$59,$62,$59,$40,$B2,$C4,$B2,$C4,$B2,$96,	9,$4B
		.BYTE $2C,$4B,$2C,$4B,$E4,$C4,$E7,$39,$95,$EC,$4B,$57,$DE,$4E,$8D,$A0
		.BYTE $28,$80,	1,  0,$20,  0,$41,$43,$C5,$D1,$1A,$74,$91,$96,$F4,$71
		.BYTE $1E,$69,$95,$34,$61,$97,$F4,$B9,$19,$E4,$F9,$17,$24,$A0,$50,$52
		.BYTE $95,$8D,$EC,$7A,$73,$93,$99,$C5,	5,$71,$9D,$B8,$83,$13,$3C,$F4
		.BYTE $E6,$3B,	9,$E3,$88
_b7_d2:
		.BYTE $43,$A5		; DATA XREF: BANK7:8004-o
_b7_d1:
		.BYTE	0,  1,$20,  8,$54,  2,$8D,  5,$55,$D5,$D4,$3F,$51,$74,$75,$3C
					; DATA XREF: BANK7:8002-o
		.BYTE	1,  0,$FC,  0,$3F,$55,$7F,$C0,$2F,$D5,$FF,$77,	9,$B0,$2D,$30
		.BYTE $10,$14,$30,$11,$21,$26,$37,$15,$10,  0,$15,$29,$1A,$27,$30,$11
		.BYTE $21,$27,$37,$15,$10,  0,$15,$29,$1A,$27,$21, $F,	1,  6,$17,  5
		.BYTE	0, $F,	5, $C,	9,  7,$21, $F,	1,$17,$27,  6,	0, $F,	6,$19
		.BYTE  $A,$17,$30,$11,$21,$17,$27,$15,$17,$27,$10,$17,$27,$11,$21, $F
		.BYTE	1,  7,$17,  5,	7,$17,	0,  7,$17, $F,$30,  0,$10,$10,	0,$18
		.BYTE $26,$37,$17,$10,	0,$17,$2B, $B,$1B,$10,	0,$17,$30,  1,$11,$10
		.BYTE $28,$18,$30,$11,$21,$37,	0,$10,	1,  0,$10,$30,	0,$10,$30, $B
		.BYTE $26,$10,	0,$18,	1,  0,$10,$30,	1,$11,$10,  0,$18,$37,$26,$17
		.BYTE $10,  0,$17,$2A,$1A,$17,$30,  0,$10,$27,$17,  7,$10,  0,$18,$30
		.BYTE	1,$11,	1,  0,$10,$30,$15,$26,$15,  0,$10,  7,$16,$26,$30,$37
		.BYTE $27,$10,	0,$17,$10,  0,$17,$30,$10,  0,$37,  0,$10,$30, $F,$17
		.BYTE $2A,$1A,$17,$37,$27,$17,$30,$27,$21,$30,$27,  1,$27,$17,	7,$27
		.BYTE $16,  6,$37,$26,$17,$10,	0,$15,$10,  0,$1C,$37,	0,$26,$30,  0
		.BYTE $21,$30,	0,  1,$30,  0,$2A,$30,	0, $A,$10,$28,$18,$37,$26,$15
		.BYTE $37,$27,$1C,$30,$11,$21,$30,$11,	1,$37,$26,$21,$37,$26,	1,$2A
		.BYTE $1A,$15
_b7_d3:
		.BYTE	1,$23,$40,$15,$40,$18,$40,$16,$40,$13,$80,$13,$80,$15,$70,$19
					; DATA XREF: BANK7:8006-o
		.BYTE $70,$16,$20,$10,$62,$43,$62,$45,$12,$40,$40,$15,$20,$16,$20,$13
		.BYTE	6,$14,$37,$14,$32,$1C,$50,$14,$52,$13,$80,$16,$90,$16,$8A,$1B
		.BYTE $9A,$1B,$30,$78,$40,$78,$30,$7A,$40,$7B,$30,$72,$40,$72,$31,$79
		.BYTE $41,$79,$31,$7A,$41,$7B,$31,$7C,$41,$7D,$50,$7A,$60,$7B,$50,$7E
		.BYTE $60,$7E,$51,$7A,$61,$7B,$50,$72,$60,$72
_b7_d4:
		.BYTE	4, $E, $E,  0,	0, $C, $B,  3,	5, $D,	5, $E,$14,$14,$12,$15
					; DATA XREF: BANK7:8008-o
		.BYTE $27,$29,$2B,$29,$25,  2,	3,$11,	4,  5,	5,  4, $E, $E, $F,  0
		.BYTE $14, $B, $B, $C, $C,$1B, $E, $E, $E, $E, $E,  6,	5,  5,	5,  6
		.BYTE  $D, $D, $D, $D, $D,  5,	8, $E, $E,  7,	7,  2,$14,$14,$11,  0
		.BYTE	1,  1,	5,  5,	8,  2,	2,  2,$13,$15,$15,$15,$15,$13,$17,$19
		.BYTE $19,$19,$19,$19,$21,$21,$21,$21,$21,$23,$1D,$1D,$1D,$1D,$1D,$1D
		.BYTE $19,$21,$21,$21,$21,$1F,	9,$21,$1B,$1B,$1B,$1B,$1B
_b7_d5:
		.BYTE $48,$54,$54,$54,$54,$54,$72,$87,$87,$9C,$9C,$9C,$54,$C3,$C3,$C3
					; DATA XREF: BANK7:800A-o

; =============== S U B	R O U T	I N E =======================================
_b7_s19:				; CODE XREF: sub_1750D0+13E-P
					; DATA XREF: BANK7:8032-o
		BRK
		.BYTE $22, $2F		; _syscall12
		LDA		#5		; code used at a000
		STA		word_3C		; code used at a000
loc_B2711:				; CODE XREF: _b7_s19+C-j
		BRK
		.BYTE $65, 7		; ofs 0x0003800c, -> dst _b2_s6_screen_damage_shake
		DEC		word_3C		; code used at a000
		BNE		loc_B2711	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $A8, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE $18, $2F		; _syscall12
		LDA		#0		; code used at a000
		STA		word_3C		; code used at a000
loc_B272B:				; CODE XREF: _b7_s19+3E-j
		LDA		word_3C		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAX				; code used at a000
		LDA		byte_B27AA,X	; code used at a000
		STA		byte_6DF	; code used at a000
		BRK
		.BYTE $88, 7		; ofs 0x00098010, -> dst _b6_s8
		JSR		sub_1742BA	; code used at a000
		LDX		#$C		; code used at a000
		JSR		_vblank_count	; code used at a000
		INC		word_3C		; code used at a000
		LDA		word_3C		; code used at a000
		CMP		#$18		; code used at a000
		BNE		loc_B272B	; code used at a000
		LDA		byte_60CB	; code used at a000
		ORA		#$20       ; code used at a000
		STA		byte_60CB	; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		ASL		; code used at a000
		STA		word_40		; code used at a000
		LDX		#0		; code used at a000
		STX		word_40+1	; code used at a000
loc_B275E:				; CODE XREF: _b7_s19+89-j
		LDA		byte_73D,X	; code used at a000
		BMI		loc_B278A	; code used at a000
		ORA		#$80       ; code used at a000
		STA		byte_73D,X	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		LSR		; code used at a000
		STA		byte_D2		; code used at a000
		LDA		byte_80		; code used at a000
		PHA				; code used at a000
		LDA		byte_81		; code used at a000
		PHA				; code used at a000
		BRK
		.BYTE $24, $17		; ofs 0x00158020, -> dst _bE_s10
		PLA				; code used at a000
		STA		byte_81		; code used at a000
		PLA				; code used at a000
		STA		byte_80		; code used at a000
		LDA		word_40+1	; code used at a000
		BNE		loc_B2785	; code used at a000
		JSR		sub_174CCF	; code used at a000
		INC		word_40+1	; code used at a000
loc_B2785:				; CODE XREF: _b7_s19+74-j
		BRK
		.BYTE $A6, $77		; _msg_m00_arg1
		PLA				; code used at a000
		TAX				; code used at a000
loc_B278A:				; CODE XREF: _b7_s19+57-j
		LDA		#$80       ; code used at a000
		STA		byte_73D,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		CPX		word_40		; code used at a000
		BNE		loc_B275E	; code used at a000
		BRK
		.BYTE $55, $17		; ofs 0x000080a8, -> dst _b0_s54
		BRK
		.BYTE $8B, $17		; ofs 0x00140022, -> dst _bD_s11
		BRK
		.BYTE $D4, 7		; ofs 0x00068034, -> dst _b4_s1A
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		LDA		#$40       ; code used at a000
		STA		byte_6DF	; code used at a000
locret_B27A9:				; CODE XREF: _b7_s1A+3-j _b7_s1A+9-j
					; _b7_s1A+F-j
		RTS				; code used at a000
byte_B27AA:
		.BYTE	0,$1E,$3C	; DATA XREF: _b7_s19+27-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s1A:				; CODE XREF: sub_12B9A1-P
					; DATA XREF: BANK7:8034-o
		LDA		byte_60C5	; code used at a000
		BPL		locret_B27A9	; code used at a000
		LDA		byte_30		; code used at a000
		CMP		#$A		; code used at a000
		BNE		locret_B27A9	; code used at a000
		LDA		byte_31		; code used at a000
		CMP		#5		; code used at a000
		BNE		locret_B27A9	; code used at a000
		JSR		sub_174CCF	; code used at a000
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		BRK
		.BYTE $7D, $17		; ofs 0x00140016, -> dst _bD_sB
		BRK
		.BYTE $9E, $77		; _msg_m00_arg1
		BRK
		.BYTE $9F, $77		; _msg_m00_arg1
		BRK
		.BYTE $A0, $77		; _msg_m00_arg1
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#8		; code used at a000
		LDX		#$18		; code used at a000
loc_B27D7:				; CODE XREF: _b7_s1A+33-j
		STA		byte_102,X	; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		INX				; code used at a000
		CPX		#$38       ; code used at a000
		BCC		loc_B27D7	; code used at a000
		BRK
		.BYTE $71, $17		; ofs 0x00128040, -> dst _bC_s20
		BRK
		.BYTE 2, $2F		; _syscall12
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		LDA		#2		; code used at a000
		BRK
		.BYTE $97, 7		; ofs 0x00128000, -> dst _bC_s0
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s1B:				; DATA XREF: BANK7:8036-o
		BRK
		.BYTE $F0, 7		; ofs 0x00020020, -> dst _b1_s10
		JSR		sub_B2806	; code used at a000
		BRK
		.BYTE $1F, $2F		; _syscall12
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		BRK
		.BYTE $70, $17		; ofs 0x0012805c, -> dst _bC_s2E_vblank_count_50_wait_50_or_skip
		JMP		_b7_s1E		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2806:				; CODE XREF: _b7_s1B+3-p
		LDA		#$F		; code used at a000
		STA		byte_6AC9	; code used at a000
		LDX		#$C		; code used at a000
		JSR		sub_B2821	; code used at a000
		LDX		#8		; code used at a000
		JSR		sub_B2821	; code used at a000
		LDX		#4		; code used at a000
		JSR		sub_B2821	; code used at a000
		LDA		#$1E		; code used at a000
		STA		byte_6AC9	; code used at a000
		LDX		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2821:				; CODE XREF: sub_B2806+7-p sub_B2806+C-p
					; sub_B2806+11-p
		STX		word_6C		; code used at a000
		LDA		byte_100,X	; code used at a000
		BMI		locret_B285F	; code used at a000
		TXA				; code used at a000
		AND		#4		; code used at a000
		BEQ		loc_B2838	; code used at a000
		JSR		loc_B2830	; code used at a000
loc_B2830:				; code used at a000
		LDX		word_6C
		JSR		sub_B2846	; code used at a000
		JMP		loc_B2840	; code used at a000
loc_B2838:				; CODE XREF: sub_B2821+A-j
		JSR		loc_B283B	; code used at a000
loc_B283B:				; code used at a000
		LDX		word_6C
		JSR		sub_B2860	; code used at a000
loc_B2840:				; CODE XREF: sub_B2821+14-j
		LDX		byte_6AC9	; code used at a000
		JMP		_vblank_count	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2846:				; CODE XREF: sub_B2821+11-p
		LDA		byte_103,X	; code used at a000
		AND		#3		; code used at a000
		BNE		loc_B2859	; code used at a000
		LDA		byte_103,X	; code used at a000
		AND		#$FC       ; code used at a000
		ORA		#3		; code used at a000
		STA		byte_103,X	; code used at a000
		BNE		loc_B285C	; code used at a000
loc_B2859:				; CODE XREF: sub_B2846+5-j
		DEC		byte_103,X	; code used at a000
loc_B285C:				; CODE XREF: sub_B2846+11-j
					; sub_B2860+3-j
		BRK
		.BYTE $33, $17		; ofs 0x00140032, -> dst _bD_s19
locret_B285F:				; CODE XREF: sub_B2821+5-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2860:				; CODE XREF: sub_B2821+1C-p
		INC		byte_103,X	; code used at a000
		BNE		loc_B285C	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_sA_sram_test_and_init:		; CODE XREF: sub_174BB3+29-P
					; DATA XREF: BANK7:8014-o
		JSR		__render_on_flag10_clear_reinit	; code used at a000
		LDX		#$C		; code used at a000
loc_B286A:				; CODE XREF: _b7_sA_sram_test_and_init+13-j
		LDA		_txt_manabu_yamana,X	; code used at a000
		CMP		_sram_signature0,X ; code used at a000
		BEQ		loc_B2877	; code used at a000
		CMP		_sram_signature1,X ; code used at a000
		BNE		loc_B287C	; code used at a000
loc_B2877:				; CODE XREF: _b7_sA_sram_test_and_init+B-j
		DEX				; code used at a000
		BPL		loc_B286A	; code used at a000
		BMI		loc_B28B5	; code used at a000
loc_B287C:				; CODE XREF: _b7_sA_sram_test_and_init+10-j
		LDY		#<[byte_6000] ; code	used at	a000
		STY		byte_6A3E	; code used at a000
		STY		word_3C		; code used at a000
		LDA		#>[byte_6000] ; code used at a000
		STA		word_3C+1	; code used at a000
loc_B2887:				; CODE XREF: _b7_sA_sram_test_and_init+2C-j
					; _b7_sA_sram_test_and_init+30-j
					; _b7_sA_sram_test_and_init+36-j
		LDA		#0		; code used at a000
		STA		(word_3C),Y	; code used at a000
		INY				; code used as ind data	at a000
		CPY		#<[byte_693E] ; code	used at	a000
		BEQ		loc_B2897	; code used as ind data	at a000
		TYA				; code used at a000
		BNE		loc_B2887	; code used at a000
		INC		word_3C+1	; code used at a000
		BNE		loc_B2887	; code used at a000
loc_B2897:				; CODE XREF: _b7_sA_sram_test_and_init+29-j
		LDA		word_3C+1	; code used at a000
		CMP		#>[byte_693E] ; code used at a000
		BCC		loc_B2887	; code used at a000
		LDX		#$C		; code used at a000
loc_B289F:				; CODE XREF: _b7_sA_sram_test_and_init+44-j
		LDA		_txt_manabu_yamana,X	; code used at a000
		STA		_sram_signature0,X ; code used at a000
		STA		_sram_signature1,X ; code used at a000
		DEX				; code used at a000
		BPL		loc_B289F	; code used at a000
		LDX		#2		; code used at a000
		LDA		#$FF		; code used at a000
loc_B28AF:				; CODE XREF: _b7_sA_sram_test_and_init+4E-j
		STA		word_6A2F,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_B28AF	; code used at a000
loc_B28B5:				; CODE XREF: _b7_sA_sram_test_and_init+15-j
		JSR		sub_B2BF5	; code used at a000
		JSR		_pal_fade_in	; code used at a000
		JSR		sub_B2C66	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_6A3E	; code used at a000
		BRK
		.BYTE $28, $2F		; _syscall12

; =============== S U B	R O U T	I N E =======================================
sub_B28C6:				; CODE XREF: sub_B28C6+F-j
					; sub_B2ABA+35-j
		JSR		sub_B2BF5	; code used at a000
		JSR		sub_B2BCE	; code used at a000
		JSR		sub_B2AF2	; code used at a000
		JSR		sub_B2ABA	; code used at a000
		JSR		sub_B28D8	; code used at a000
		JMP		sub_B28C6	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B28D8:				; CODE XREF: sub_B28C6+C-p
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_B2D2B,X	; code used at a000
		STA		word_3C		; code used at a000
		LDA		off_B2D2B+1,X	; code used at a000
		STA		word_3C+1	; code used at a000
		JMP		(word_3C)	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B28E7:				; DATA XREF: BANK7:off_B2D2B-o
		JSR		sub_B2B48	; ind code used	at a000
		JSR		sub_B2917	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B28ED:				; CODE XREF: _begin_new_quest+A7-j
		JSR		_b7_s14		; code used at a000
		JSR		sub_174369	; code used at a000
		JSR		_ppu_screen_clear ; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6A58	; code used at a000
		LDA		byte_60C7	; code used at a000
		BMI		loc_B2914	; code used at a000
		LDA		#$41       ; code used at a000
		STA		byte_8B		; code used at a000
		LDA		#4		; code used at a000
		STA		byte_30		; code used at a000
		LDA		#6		; code used at a000
		STA		byte_31		; code used at a000
		LDA		#$B3       ; code used at a000
		STA		byte_2A		; code used at a000
		LDA		#$DA       ; code used at a000
		STA		byte_2B		; code used at a000
loc_B2914:				; CODE XREF: sub_B28ED+11-j
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2917:				; CODE XREF: sub_B28E7+3-p sub_B295B+3-p
					; _begin_new_quest+3-p
		JSR		sub_B2B98	; code used at a000
		BEQ		locret_B295A	; code used at a000
		STA		byte_6A6E	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDA		off_B2D37	; code used at a000
		STA		word_3E		; code used at a000
		LDA		off_B2D37+1	; code used at a000
		STA		word_3E+1	; code used at a000
		JSR		sub_B2B31	; code used at a000
		LDY		#0		; code used at a000
loc_B2931:				; CODE XREF: sub_B2917+2A-j
					; sub_B2917+30-j
		LDA		(word_3C),Y	; code used at a000
		PHA				; code used as ind data	at a000
		LDA		(word_3E),Y	; code used as ind data	at a000
		STA		(word_3C),Y	; code used at a000
		PLA				; code used as ind data	at a000
		STA		(word_3E),Y	; code used as ind data	at a000
		JSR		sub_B2B3C	; code used as ind data	at a000
		BEQ		loc_B2949	; code used as ind data	at a000
		INY				; code used at a000
		BNE		loc_B2931	; code used at a000
		INC		word_3C+1	; code used at a000
		INC		word_3E+1	; code used at a000
		BNE		loc_B2931	; code used at a000
loc_B2949:				; CODE XREF: sub_B2917+27-j
		LDX		byte_6A6E	; code used at a000
		LDA		word_6A2F,X	; code used at a000
		PHA				; code used at a000
		LDA		word_6A2F	; code used at a000
		STA		word_6A2F,X	; code used at a000
		PLA				; code used at a000
		STA		word_6A2F	; code used at a000
locret_B295A:				; CODE XREF: sub_B2917+3-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B295B:				; DATA XREF: BANK7:AD2D-o
		JSR		sub_B2B48	; ind code used	at a000
		JSR		sub_B2917	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2961:				; CODE XREF: _begin_new_quest+96-p
		LDA		byte_63E7	; code used at a000
		STA		byte_6DD	; code used at a000
		BRK
		.BYTE $57, $E7		; _syscall0E
		CMP		#$FF		; code used at a000
		BEQ		locret_B2974	; code used at a000
		STA		byte_63E7	; code used at a000
		JSR		_b7_s1D		; code used at a000
locret_B2974:				; CODE XREF: sub_B2961+B-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_begin_new_quest:			; DATA XREF: BANK7:AD2F-o
		JSR		loc_B2B51	; ind code used	at a000
		JSR		sub_B2917	; code used at a000
		LDX		#0		; code used at a000
		JSR		sub_B2BB5	; code used at a000
		JSR		sub_B2A9D	; code used at a000
		LDX		#$7F       ; code used at a000
loc_B2985:				; CODE XREF: _begin_new_quest+16-j
		LDA		#$FF		; code used at a000
		STA		byte_631F,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_B2985	; code used at a000
loc_B298D:				; CODE XREF: _begin_new_quest+29-j
		BRK
		.BYTE $41, $E7		; _syscall0E
		BRK
		.BYTE $61, $17		; ofs 0x00098028, -> dst _b6_s14_name_entry_screen
		BRK				; TEST FOR "ERDRICK" in	any cases
		.BYTE $9A, $17		; ofs 0x00098040, -> dst _b6_s20_player_name_veryfy
		BNE		loc_B29A1	; code used at a000
		BRK
		.BYTE $58, $E7		; _syscall0E
		JSR		__pause_or_skip	; code used at a000
		JMP		loc_B298D	; code used at a000
loc_B29A1:				; CODE XREF: _begin_new_quest+21-j
		LDX		#7		; code used at a000
loc_B29A3:				; CODE XREF: _begin_new_quest+32-j
		LDA		byte_9,X	; code used at a000
		PHA				; code used at a000
		DEX				; code used at a000
		BPL		loc_B29A3	; code used at a000
		BRK
		.BYTE $42, $E7		; _syscall0E
		STA		word_4		; code used at a000
		LDX		#0		; code used at a000
loc_B29B0:				; CODE XREF: _begin_new_quest+41-j
		PLA				; code used at a000
		STA		byte_9,X	; code used at a000
		INX				; code used at a000
		CPX		#8		; code used at a000
		BNE		loc_B29B0	; code used at a000
		LDA		word_4		; code used at a000
		CMP		#2		; code used at a000
		BCS		loc_B2A1F	; code used at a000
		STA		byte_CE		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_CF		; code used at a000
		JSR		_player_data_initialize	; code used at a000
		LDA		#$82       ; code used at a000
		STA		byte_624A	; code used at a000
		LDA		#$A2       ; code used at a000
		STA		byte_624B	; code used at a000
		LDX		#0		; code used at a000
loc_B29D3:				; CODE XREF: _begin_new_quest+91-j
		TXA				; code used at a000
		PHA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		word_4		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_CE		; code used at a000
		LDA		byte_B2D3F,X	; code used at a000
		STA		byte_CF		; code used at a000
		JSR		sub_1743B8	; code used at a000
		AND		#3		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ADC		word_4		; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_B29F2:				; CODE XREF: _begin_new_quest+87-j
		LDA		_default_character_names,X ; code used at a000
		STA		byte_9,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		CPY		#8		; code used at a000
		BNE		loc_B29F2	; code used at a000
		JSR		_player_data_initialize	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#3		; code used at a000
		BNE		loc_B29D3	; code used at a000
		STX		byte_63E7	; code used at a000
		JSR		sub_B2961	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_6310	; code used at a000
		STA		byte_6311	; code used at a000
		STA		byte_6312	; code used at a000
		JSR		_b7_s1D		; code used at a000
		JMP		sub_B28ED	; code used at a000
loc_B2A1F:				; CODE XREF: _begin_new_quest+47-j
		LDX		#0		; code used at a000
		TXA				; code used at a000
loc_B2A22:				; CODE XREF: _begin_new_quest+B1-j
		STA		byte_60D6,X	; code used at a000
		INX				; code used at a000
		BNE		loc_B2A22	; code used at a000
locret_B2A28:				; code used at a000
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_B2A29:				; DATA XREF: BANK7:AD31-o
		JSR		sub_B2B48	; ind code used	at a000
		JSR		sub_B2B98	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDA		word_3C		; code used at a000
		STA		word_3E		; code used at a000
		LDA		word_3C+1	; code used at a000
		STA		word_3E+1	; code used at a000
		JSR		loc_B2B51	; code used at a000
		JSR		sub_B2B98	; code used at a000
		PHA				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		JSR		sub_B2B31	; code used at a000
		LDX		#word_40	; code used at a000
		LDA		#3		; code used at a000
		JSR		_add_8_to_neg16	; code used at a000
		LDY		#0		; code used at a000
loc_B2A50:				; CODE XREF: sub_B2A29+31-j
					; sub_B2A29+37-j
		LDA		(word_3E),Y	; code used at a000
		STA		(word_3C),Y	; code used at a000
		JSR		sub_B2B3C	; code used at a000
		BEQ		loc_B2A62	; code used at a000
		INY				; code used at a000
		BNE		loc_B2A50	; code used at a000
		INC		word_3C+1	; code used at a000
		INC		word_3E+1	; code used at a000
		BNE		loc_B2A50	; code used at a000
loc_B2A62:				; CODE XREF: sub_B2A29+2E-j
		PLA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B2CD0	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDA		off_B2D3B	; code used at a000
		LDY		off_B2D3B+1	; code used at a000
		LDX		#word_3C	; code used at a000
		JSR		_add_16_to_16	; code used at a000
		LDY		#0		; code used at a000
		LDA		byte_1C		; code used at a000
		STA		(word_3C),Y	; code used at a000
		INY				; code used at a000
		LDA		byte_1D		; code used at a000
		STA		(word_3C),Y	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2A83:				; DATA XREF: BANK7:AD33-o
		JSR		sub_B2B48	; ind code used	at a000
		STA		byte_CE		; code used at a000
		JSR		sub_B2B98	; code used at a000
		LDA		#$FE       ; code used at a000
		STA		word_6A2F,X	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		BRK
		.BYTE $59, $E7		; _syscall0E
		BRK
		.BYTE $1D, $E7		; _syscall0E
		CMP		#0		; code used at a000
		BNE		locret_B2AB9	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2A9D:				; CODE XREF: _begin_new_quest+B-p
					; sub_B2C66+5F-p
		JSR		sub_B2B31	; code used at a000
		LDA		#3		; code used at a000
		LDX		#word_40	; code used at a000
		JSR		_add_8_to_neg16	; code used at a000
		LDY		#0		; code used at a000
loc_B2AA9:				; CODE XREF: sub_B2A9D+16-j
					; sub_B2A9D+1A-j
		LDA		#0		; code used as ind data	at a000
		STA		(word_3C),Y	; code used as ind data	at a000
		JSR		sub_B2B3C	; code used as ind data	at a000
		BEQ		locret_B2AB9	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		BNE		loc_B2AA9	; code used as ind data	at a000
		INC		word_3C+1	; code used at a000
		BNE		loc_B2AA9	; code used at a000
locret_B2AB9:				; CODE XREF: sub_B2A83+18-j
					; sub_B2A9D+13-j
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2ABA:				; CODE XREF: sub_B28C6+9-p
		LDA		byte_6A69	; code used at a000
		AND		#7		; code used at a000
		BEQ		loc_B2AC9	; code used at a000
		CMP		#7		; code used at a000
		BEQ		loc_B2ACD	; code used at a000
		LDA		#$61       ; code used at a000
		BNE		loc_B2ACF	; code used at a000
loc_B2AC9:				; CODE XREF: sub_B2ABA+5-j
		LDA		#$63       ; code used at a000
		BNE		loc_B2ACF	; code used at a000
loc_B2ACD:				; CODE XREF: sub_B2ABA+9-j
		LDA		#$62       ; code used at a000
loc_B2ACF:				; CODE XREF: sub_B2ABA+D-j
					; sub_B2ABA+11-j
		PHA				; code used at a000
		SEC				; code used at a000
		SBC		#$61       ; code used at a000
		STA		byte_42		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ADC		byte_42		; code used at a000
		STA		byte_42		; code used at a000
		PLA				; code used at a000
		BRK
		.BYTE 0, 7		; ofs 0x00158000, -> dst _bE_s0
		CMP		#$FF		; code used at a000
		BEQ		loc_B2AED	; code used at a000
		CLC				; code used at a000
		ADC		byte_42		; code used at a000
		TAX				; code used at a000
		LDA		byte_B2D0B,X	; code used at a000
		STA		byte_42		; code used at a000
		RTS				; code used at a000
loc_B2AED:				; CODE XREF: sub_B2ABA+27-j
		PLA				; code used at a000
		PLA				; code used at a000
		JMP		sub_B28C6	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2AF2:				; CODE XREF: sub_B28C6+6-p
		LDX		#0		; code used at a000
		STX		byte_6A69	; code used at a000
		STX		byte_42		; code used at a000
loc_B2AF9:				; CODE XREF: sub_B2AF2+33-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B2B98	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDA		#0		; code used at a000
		STA		word_4		; code used at a000
		TAY				; code used at a000
loc_B2B06:				; CODE XREF: sub_B2AF2+1D-j
		LDA		(word_3C),Y	; code used at a000
		ORA		word_4		; code used at a000
		STA		word_4		; code used at a000
		INY				; code used at a000
		CPY		#$C		; code used at a000
		BNE		loc_B2B06	; code used at a000
		LDA		word_4		; code used at a000
		BEQ		loc_B2B20	; code used at a000
		PLA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B2B28	; code used at a000
		ORA		byte_6A69	; code used at a000
		STA		byte_6A69	; code used at a000
loc_B2B20:				; CODE XREF: sub_B2AF2+21-j
		PLA				; code used at a000
loc_B2B21:				; code used at a000
		TAX
		INX				; code used at a000
		CPX		#3		; code used at a000
		BNE		loc_B2AF9	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2B28:				; CODE XREF: sub_B2AF2+25-p
		TAX				; code used at a000
		LDA		#0		; code used at a000
		SEC				; code used at a000
loc_B2B2C:				; CODE XREF: sub_B2B28+6-j
		ROL		; code used at a000
		DEX				; code used at a000
		BPL		loc_B2B2C	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2B31:				; CODE XREF: sub_B2917+15-p
					; sub_B2A29+1B-p sub_B2A9D-p
					; sub_B2CD0+4-p
		LDA		off_B2D35	; code used at a000
		STA		word_40		; code used at a000
		LDA		off_B2D35+1	; code used at a000
		STA		word_40+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2B3C:				; CODE XREF: sub_B2917+24-p
					; sub_B2A29+2B-p sub_B2A9D+10-p
					; sub_B2CD0+21-p
		LDX		#word_40	; code used as ind data	at a000
		LDA		#1		; code used as ind data	at a000
		JSR		_add_8_to_neg16	; code used as ind data	at a000
		LDA		word_40		; code used as ind data	at a000
		ORA		word_40+1	; code used as ind data	at a000
		RTS				; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2B48:				; CODE XREF: sub_B28E7-p sub_B295B-p
					; sub_B2A29-p sub_B2A83-p
		LDA		#$FF		; code used at a000
		JSR		sub_B2B73	; code used at a000
		ADC		#$5A       ; code used at a000
		BNE		loc_B2B58	; code used at a000
loc_B2B51:				; CODE XREF: _begin_new_quest-p
					; sub_B2A29+11-p
		LDA		#0		; code used at a000
		JSR		sub_B2B73	; code used at a000
		ADC		#$50       ; code used at a000
loc_B2B58:				; CODE XREF: sub_B2B48+7-j
		BRK
		.BYTE 0, 7		; ofs 0x00158000, -> dst _bE_s0
		CMP		#$FF		; code used at a000
		BEQ		loc_B2B70	; code used at a000
		PHA				; code used at a000
		LDA		byte_42		; code used at a000
		ASL		; code used at a000
		ADC		byte_42		; code used at a000
		STA		byte_42		; code used at a000
		PLA				; code used at a000
		CLC				; code used at a000
		ADC		byte_42		; code used at a000
		TAX				; code used at a000
		LDA		byte_B2D16,X	; code used at a000
		RTS				; code used at a000
loc_B2B70:				; CODE XREF: sub_B2B48+15-j
		PLA				; code used at a000
		PLA				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2B73:				; CODE XREF: sub_B2B48+2-p sub_B2B48+B-p
		EOR		byte_6A69	; code used at a000
		STA		word_4		; code used at a000
		LDX		#1		; code used at a000
		STX		word_4+1	; code used at a000
		DEX				; code used at a000
		STX		word_6		; code used at a000
		LDX		#3		; code used at a000
loc_B2B81:				; CODE XREF: sub_B2B73+1B-j
		LSR		word_4		; code used at a000
		BCS		loc_B2B8B	; code used at a000
		LDA		word_4+1	; code used at a000
		ADC		word_6		; code used at a000
		STA		word_6		; code used at a000
loc_B2B8B:				; CODE XREF: sub_B2B73+10-j
		ASL		word_4+1	; code used at a000
		DEX				; code used at a000
		BNE		loc_B2B81	; code used at a000
		DEC		word_6		; code used at a000
		LDA		word_6		; code used at a000
		STA		byte_42		; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2B98:				; CODE XREF: sub_B2917-p sub_B2A29+3-p
					; sub_B2A29+14-p sub_B2A83+5-p
					; sub_B2AF2+9-p	_b7_sE+2-p _b7_sF+2-p
		STA		word_4		; code used at a000
		LDX		#0		; code used at a000
loc_B2B9C:				; CODE XREF: sub_B2B98+15-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		JSR		sub_B2C46	; code used at a000
		CMP		word_4		; code used at a000
		BEQ		loc_B2BB2	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#3		; code used at a000
		BNE		loc_B2B9C	; code used at a000
		DEX
		TXA
		RTS
loc_B2BB2:				; CODE XREF: sub_B2B98+E-j
		PLA				; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2BB5:				; CODE XREF: sub_B2917+8-p
					; _begin_new_quest+8-p sub_B2A29+6-p
					; sub_B2A29+18-p sub_B2A29+40-p
					; sub_B2A83+D-p	sub_B2AF2+C-p
					; sub_B2B98+6-p	sub_B2BF5+13-p
					; sub_B2C26+4-p	sub_B2C66+A-p
					; sub_B2C66+30-p sub_B2C66+5C-p
					; sub_B2CD0+1-p	_b7_sE+5-p _b7_sF+5-p
		LDA		off_B2D35	; code used at a000
		STA		word_3C		; code used at a000
		LDA		off_B2D35+1	; code used at a000
		STA		word_3C+1	; code used at a000
		TXA				; code used at a000
		LDX		#word_3C	; code used at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		off_B2D37	; code used at a000
		LDY		off_B2D37+1	; code used at a000
		JMP		_add_16_to_16	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2BCE:				; CODE XREF: sub_B28C6+3-p
		LDX		#$6F       ; code used at a000
		LDA		#0		; code used at a000
loc_B2BD2:				; CODE XREF: sub_B2BCE+8-j
		STA		byte_400,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_B2BD2	; code used at a000
		LDA		#$1F		; code used at a000
		STA		byte_471	; code used at a000
		LDA		#$D1       ; code used at a000
		STA		byte_42		; code used at a000
loc_B2BE1:				; CODE XREF: sub_B2BCE+24-j
		LDA		byte_42		; code used at a000
		STA		byte_470	; code used at a000
		JSR		sub_17474C	; code used at a000
		SEC				; code used at a000
		LDA		byte_42		; code used at a000
		SBC		#$10		; code used at a000
		STA		byte_42		; code used at a000
		AND		#$F0       ; code used at a000
		BNE		loc_B2BE1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2BF5:				; CODE XREF: _b7_sA_sram_test_and_init:loc_B28B5-p
					; sub_B28C6-p
		LDX		#0		; code used at a000
		STX		word_6		; code used at a000
loc_B2BF9:				; CODE XREF: sub_B2BF5+2E-j
		TXA				; code used at a000
		PHA				; code used at a000
		STA		word_4		; code used at a000
		JSR		sub_B2C26	; code used at a000
		BCS		loc_B2C1E	; code used at a000
loc_B2C02:				; CODE XREF: sub_B2BF5+1E-j
		LDX		word_6		; code used at a000
		CPX		#3		; code used at a000
		BCS		loc_B2C1E	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_3C),Y	; code used at a000
		BEQ		loc_B2C15	; code used at a000
		INC		word_6		; code used at a000
		BNE		loc_B2C02	; code used at a000
loc_B2C15:				; CODE XREF: sub_B2BF5+1A-j
		JSR		sub_B2C46	; code used at a000
		PLA				; code used at a000
		PHA				; code used at a000
		STA		(word_3C),Y	; code used at a000
		INC		word_6		; code used at a000
loc_B2C1E:				; CODE XREF: sub_B2BF5+B-j
					; sub_B2BF5+11-j
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#3		; code used at a000
		BNE		loc_B2BF9	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2C26:				; CODE XREF: sub_B2BF5+8-p
		LDX		#0		; code used at a000
loc_B2C28:				; CODE XREF: sub_B2C26+19-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_3C),Y	; code used at a000
		BEQ		loc_B2C3A	; code used at a000
		JSR		sub_B2C46	; code used at a000
		CMP		word_4		; code used at a000
		BEQ		loc_B2C43	; code used at a000
loc_B2C3A:				; CODE XREF: sub_B2C26+B-j
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#3		; code used at a000
		BNE		loc_B2C28	; code used at a000
		CLC				; code used at a000
		RTS				; code used at a000
loc_B2C43:				; CODE XREF: sub_B2C26+12-j
		PLA				; code used at a000
		SEC				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2C46:				; CODE XREF: sub_B2B98+9-p
					; sub_B2BF5:loc_B2C15-p	sub_B2C26+D-p
					; sub_B2C66+33-p
		LDX		#word_3C	; code used at a000
		LDA		off_B2D3D	; code used at a000
		LDY		off_B2D3D+1	; code used at a000
		JSR		_add_16_to_16	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_3C),Y	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s1D:				; CODE XREF: sub_B2961+10-p
					; _begin_new_quest+A4-p
					; sub_B2DBE:loc_B2F86-p	_b7_sD+6D-p
					; _b7_s11+19-p _b7_s12+31-j _b7_s13+29-j
					; sub_B36A2+D-P
					; DATA XREF: BANK7:803A-o
		LDA		#0		; code used at a000
		JSR		sub_B2CD0	; code used at a000
		LDA		byte_1C		; code used at a000
		STA		byte_63E9	; code used at a000
		LDA		byte_1D		; code used at a000
		STA		byte_63EA	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2C66:				; CODE XREF: _b7_sA_sram_test_and_init+56-p
		LDX		#0		; code used at a000
loc_B2C68:				; CODE XREF: sub_B2C66+67-j
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B2CD0	; code used at a000
		PLA				; code used at a000
		PHA				; code used at a000
		TAX				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDY		#0		; code used at a000
		LDA		(word_3C),Y	; code used at a000
		BEQ		loc_B2CC8	; code used at a000
		LDA		off_B2D3B	; code used at a000
		LDY		off_B2D3B+1	; code used at a000
		LDX		#word_3C	; code used at a000
		JSR		_add_16_to_16	; code used at a000
		LDY		#0		; code used at a000
		LDA		byte_1C		; code used at a000
		CMP		(word_3C),Y	; code used at a000
		BNE		loc_B2C93	; code used at a000
		INY				; code used at a000
		LDA		byte_1D		; code used at a000
		CMP		(word_3C),Y	; code used at a000
		BEQ		loc_B2CC8	; code used at a000
loc_B2C93:				; CODE XREF: sub_B2C66+24-j
		PLA				; code used at a000
		PHA				; code used at a000
		TAX				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		JSR		sub_B2C46	; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		STX		byte_63F	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6A3E	; code used at a000
		STA		byte_640	; code used at a000
		STA		byte_641	; code used at a000
		LDA		#$17		; code used at a000
		BRK
		.BYTE $A0, 7		; ofs 0x00020006, -> dst _b1_s3_far_apu_load
		BRK
		.BYTE $3E, $E7		; _syscall0E
		BRK
		.BYTE $61, $67		; _msg_m00_arg0
		JSR		__pause_or_skip	; code used at a000
		PLA				; code used at a000
		PHA				; code used at a000
		TAX				; code used at a000
		LDA		#$FD       ; code used at a000
		STA		word_6A2F,X	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		JSR		sub_B2A9D	; code used at a000
loc_B2CC8:				; CODE XREF: sub_B2C66+11-j
					; sub_B2C66+2B-j
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#3		; code used at a000
		BNE		loc_B2C68	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2CD0:				; CODE XREF: sub_B2A29+3B-p _b7_s1D+2-p
					; sub_B2C66+4-p
		TAX				; code used at a000
		JSR		sub_B2BB5	; code used at a000
		JSR		sub_B2B31	; code used at a000
		LDA		#2		; code used at a000
		LDX		#word_40	; code used at a000
		JSR		_add_8_to_neg16	; code used at a000
		LDA		#$3A       ; code used at a000
		STA		byte_1C		; code used at a000
		STA		byte_1D		; code used at a000
		LDY		#0		; code used at a000
loc_B2CE6:				; CODE XREF: sub_B2CD0+27-j
					; sub_B2CD0+2B-j
		LDA		(word_3C),Y	; code used as ind data	at a000
		STA		_tmp21		; code used as ind data	at a000
		TYA				; code used as ind data	at a000
		PHA				; code used as ind data	at a000
		JSR		sub_1743D2	; code used as ind data	at a000
		PLA				; code used as ind data	at a000
		TAY				; code used as ind data	at a000
		JSR		sub_B2B3C	; code used as ind data	at a000
		BEQ		locret_B2CFD	; code used as ind data	at a000
		INY				; code used as ind data	at a000
		BNE		loc_B2CE6	; code used as ind data	at a000
		INC		word_3C+1	; code used at a000
		BNE		loc_B2CE6	; code used at a000
locret_B2CFD:				; CODE XREF: sub_B2CD0+24-j
		RTS				; code used at a000
_txt_manabu_yamana:
		.BYTE "MANABU YAMANA"   ; DATA XREF: _b7_sA_sram_test_and_init:loc_B286A-r
					; _b7_sA_sram_test_and_init:loc_B289F-r
					; data used at a000
byte_B2D0B:
		.BYTE	0,  2,	3,  4,	1,  0,	4,  1,	0,  0,	2 ; DATA XREF: sub_B2ABA+2D-r
					; data used at a000
byte_B2D16:
		.BYTE	0,  0,	0,  1,	0,  0,	0,  1,	0,  2,	0,  0,	0,  2,	0,  1
					; DATA XREF: sub_B2B48+24-r
		.BYTE	2,  0,	0,  1,	2 ; data used at a000
off_B2D2B:
		.WORD sub_B28E7		; DATA XREF: sub_B28D8+2-r sub_B28D8+7-r
					; data used at a000
		.WORD sub_B295B		; data used at a000
		.WORD _begin_new_quest	; data used at a000
		.WORD sub_B2A29		; data used at a000
		.WORD sub_B2A83		; data used at a000
off_B2D35:
		.WORD byte_315		; DATA XREF: sub_B2B31-r sub_B2BB5-r
					; sub_B2B31+5-r	sub_B2BB5+5-r
					; data used at a000
off_B2D37:
		.WORD byte_60D6		; DATA XREF: sub_B2917+B-r
					; sub_B2BB5+10-r sub_B2917+10-r
					; sub_B2BB5+13-r
					; data used at a000
		.WORD byte_311
off_B2D3B:
		.WORD byte_313		; DATA XREF: sub_B2A29+43-r
					; sub_B2C66+13-r sub_B2A29+46-r
					; sub_B2C66+16-r
					; data used at a000
off_B2D3D:
		.WORD byte_312		; DATA XREF: sub_B2C46+2-r sub_B2C46+5-r
					; data used at a000
byte_B2D3F:
		.BYTE	4,  1,	2	; DATA XREF: _begin_new_quest+6B-r
					; data used at a000
_default_character_names:
		.BYTE $26,$1C,$13,$18,	$E, $B,$1C,  0
					; DATA XREF: _begin_new_quest:loc_B29F2-r
		.BYTE $36, $B,$11,$18, $B,$1C,	0,  0 ;	data used at a000
		.BYTE $25, $E, $B,$18,	0,  0,	0,  0
		.BYTE $2B,$16, $F,$18,$18, $B,$1C, $E
		.BYTE $38,$12, $F,$1C,$19,$18,	0,  0
		.BYTE $29,$16,$1F, $D,$13, $E,$1F,$1D
		.BYTE $2C, $B,$1C,$16, $F,$23,	0,  0
		.BYTE $31, $B,$1E,$12,$13, $B,$1D,  0
		.BYTE $37, $B,$1C,$1E,$1C,$13,$1D,  0
		.BYTE $34, $F,$1E,$1C,$1F,$1D,	0,  0
		.BYTE $2C,$13,$1C, $B,$17,  0,	0,  0
		.BYTE $3A,$13,$1C,$19,$18,  0,	0,  0
		.BYTE	0,$20

; =============== S U B	R O U T	I N E =======================================
_player_data_initialize:		; CODE XREF: _begin_new_quest+4F-p
					; _begin_new_quest+89-p
		LDA		off_B3214	; code used at a000
		STA		word_40		; code used at a000
		LDA		off_B3214+1	; code used at a000
		STA		word_40+1	; code used at a000
		LDA		#$FF		; code used at a000
		BNE		sub_B2DBE	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s10:				; CODE XREF: sub_9BB26+74-P
					; DATA XREF: BANK7:8020-o
		LDA		off_B3212	; code used at a000
		STA		word_40		; code used at a000
		LDA		off_B3212+1	; code used at a000
		STA		word_40+1	; code used at a000
		LDA		#0		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B2DBE:				; CODE XREF: _player_data_initialize+C-j
		STA		byte_11		; code used at a000
		LDA		byte_630D	; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_630E	; code used at a000
		STA		word_4+1	; code used at a000
		LDX		#1		; code used at a000
		STX		word_6		; code used at a000
		DEX				; code used at a000
		STX		word_6+1	; code used at a000
loc_B2DD1:				; CODE XREF: sub_B2DBE+1E-j
		LSR		word_4+1	; code used at a000
		ROR		word_4		; code used at a000
		BCC		loc_B2DDE	; code used at a000
		ASL		word_6		; code used at a000
		ROL		word_6+1	; code used at a000
		INX				; code used at a000
		BNE		loc_B2DD1	; code used at a000
loc_B2DDE:				; CODE XREF: sub_B2DBE+17-j
		STX		byte_D0		; code used at a000
		LDA		word_6		; code used at a000
		ORA		byte_630D	; code used at a000
		STA		byte_630D	; code used at a000
		LDA		word_6+1	; code used at a000
		ORA		byte_630E	; code used at a000
		STA		byte_630E	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_B2DF7:				; CODE XREF: sub_B2DBE+43-j
		LDA		byte_9,Y	; code used at a000
		STA		_character_names,X ; code used at a000
		INY				; code used at a000
		INX				; code used at a000
		CPY		#8		; code used at a000
		BNE		loc_B2DF7	; code used at a000
		LDA		byte_CE		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ORA		byte_CF		; code used at a000
		LDX		byte_D0		; code used at a000
		STA		byte_611E,X	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_60D6,X	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		#$80       ; code used at a000
		STA		byte_618A,X	; code used at a000
		STA		byte_618B,X	; code used at a000
		TXA				; code used at a000
		CLC				; code used at a000
		ADC		byte_D0		; code used at a000
		TAX				; code used at a000
		LDA		#0		; code used at a000
		STA		byte_61A2,X	; code used at a000
		STA		byte_61A3,X	; code used at a000
		STA		byte_61A4,X	; code used at a000
		STA		byte_61C7,X	; code used at a000
		STA		byte_61C8,X	; code used at a000
		LDA		#1		; code used at a000
		STA		byte_61C6,X	; code used at a000
		LDY		#0		; code used at a000
loc_B2E3C:				; CODE XREF: sub_B2DBE+A0-j
		TYA				; code used at a000
		PHA				; code used at a000
		STA		word_4		; code used at a000
		LDA		(word_40),Y	; code used at a000
		STA		word_3C		; code used at a000
		INY				; code used at a000
		LDA		(word_40),Y	; code used at a000
		STA		word_3C+1	; code used at a000
		INY				; code used at a000
		LDA		(word_40),Y	; code used at a000
		STA		word_3E		; code used at a000
		INY				; code used at a000
		LDA		(word_40),Y	; code used at a000
		STA		word_3E+1	; code used at a000
		INY				; code used at a000
		JSR		sub_B31D7	; code used at a000
		PLA				; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		TAY				; code used at a000
		CPY		#$14		; code used at a000
		BCC		loc_B2E3C	; code used at a000
		LDA		byte_11		; code used at a000
		BNE		loc_B2E95	; code used at a000
		LDA		#5		; code used at a000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		CLC				; code used at a000
		ADC		#2		; code used at a000
		STA		byte_E		; code used at a000
loc_B2E6E:				; CODE XREF: sub_B2DBE+D3-j
		LDA		#5		; code used at a000
		BRK
		.BYTE $7C, 7		; ofs 0x0006801e, -> dst _b4_sF
		CMP		#5		; code used at a000
		BCC		loc_B2E79	; code used at a000
		LDA		#0
loc_B2E79:				; CODE XREF: sub_B2DBE+B7-j
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		off_B3216,Y	; code used at a000
		STA		word_3C		; code used at a000
		LDA		off_B3216+1,Y	; code used at a000
		STA		word_3C+1	; code used at a000
		LDY		byte_D0		; code used at a000
		LDA		(word_3C),Y	; code used at a000
		CLC				; code used at a000
		ADC		#1		; code used at a000
		STA		(word_3C),Y	; code used at a000
		DEC		byte_E		; code used at a000
		BNE		loc_B2E6E	; code used at a000
		BEQ		loc_B2EB8	; code used at a000
loc_B2E95:				; CODE XREF: sub_B2DBE+A4-j
		LDX		#4		; code used at a000
loc_B2E97:				; CODE XREF: sub_B2DBE+F8-j
		TXA				; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		off_B3216,Y	; code used at a000
		STA		word_3C		; code used at a000
		LDA		off_B3216+1,Y	; code used at a000
		STA		word_3C+1	; code used at a000
		JSR		sub_1743B8	; code used at a000
		AND		#1		; code used at a000
		BEQ		loc_B2EB5	; code used at a000
		LDY		byte_D0		; code used at a000
		LDA		(word_3C),Y	; code used at a000
		CLC				; code used at a000
		ADC		#1		; code used at a000
		STA		(word_3C),Y	; code used as ind data	at a000
loc_B2EB5:				; CODE XREF: sub_B2DBE+EC-j
		DEX				; code used at a000
		BPL		loc_B2E97	; code used at a000
loc_B2EB8:				; CODE XREF: sub_B2DBE+D5-j
		LDA		byte_D0		; code used at a000
		TAX				; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_6112,X	; code used at a000
		ASL		; code used at a000
		ADC		byte_6112,X	; code used at a000
		LSR		; code used at a000
		CLC				; code used at a000
		ADC		#5		; code used at a000
		STA		byte_6142,Y	; code used at a000
		STA		byte_612A,Y	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6143,Y	; code used at a000
		STA		byte_612B,Y	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6173,Y	; code used at a000
		STA		byte_6172,Y	; code used as ind data	at a000
		STA		byte_615A,Y	; code used at a000
		STA		byte_615B,Y	; code used at a000
		JSR		sub_B31E2	; code used at a000
		CMP		#3		; code used at a000
		BCS		loc_B2F01	; code used at a000
		LDA		byte_D0		; code used at a000
		TAX				; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		byte_60FA,X	; code used at a000
		STA		byte_6172,Y	; code used at a000
		STA		byte_615A,Y	; code used at a000
		LDA		#0		; code used at a000
loc_B2EFB:				; code used at a000
		STA		byte_6173,Y
		STA		byte_615B,Y	; code used at a000
loc_B2F01:				; CODE XREF: sub_B2DBE+12B-j
		LDA		byte_D0		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		PHA				; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_B2F0A:				; CODE XREF: sub_B2DBE+1A5-j
		LDA		#0		; code used at a000
		STA		byte_62AA,X	; code used at a000
		LDA		#$FF		; code used as ind data	at a000
		CPY		#0		; code used at a000
		BNE		loc_B2F5C	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B31E2	; code used at a000
		CMP		#2		; code used at a000
		BEQ		loc_B2F28	; code used at a000
		CMP		#4		; code used at a000
		BEQ		loc_B2F2E	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		#$A0       ; code used at a000
		BNE		loc_B2F32	; code used at a000
loc_B2F28:				; CODE XREF: sub_B2DBE+15E-j
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		#$B0       ; code used at a000
		BNE		loc_B2F32	; code used at a000
loc_B2F2E:				; CODE XREF: sub_B2DBE+162-j
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		#$A2       ; code used at a000
loc_B2F32:				; CODE XREF: sub_B2DBE+168-j
					; sub_B2DBE+16E-j
		STA		byte_624B,X	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		sub_B31E2	; code used at a000
		CMP		#1		; code used at a000
		BEQ		loc_B2F48	; code used at a000
		CMP		#6		; code used at a000
		BCS		loc_B2F4E	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		#$81       ; code used at a000
		BNE		loc_B2F56	; code used at a000
loc_B2F48:				; CODE XREF: sub_B2DBE+17E-j
					; sub_B2DBE+192-j
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		#$80       ; code used at a000
		BNE		loc_B2F56	; code used at a000
loc_B2F4E:				; CODE XREF: sub_B2DBE+182-j
		CMP		#7		; code used at a000
		BEQ		loc_B2F48	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		#$FF		; code used at a000
loc_B2F56:				; CODE XREF: sub_B2DBE+188-j
					; sub_B2DBE+18E-j
		STA		byte_624A,X	; code used at a000
		INX				; code used at a000
		BNE		loc_B2F5F	; code used at a000
loc_B2F5C:				; CODE XREF: sub_B2DBE+155-j
		STA		byte_624A,X	; code used at a000
loc_B2F5F:				; CODE XREF: sub_B2DBE+19C-j
		INX				; code used at a000
		INY				; code used as ind data	at a000
		CPY		#8		; code used at a000
		BNE		loc_B2F0A	; code used at a000
		DEX				; code used at a000
		PLA				; code used at a000
		TAY				; code used at a000
		JSR		sub_B31E2	; code used at a000
		CMP		#3		; code used at a000
		BCS		loc_B2F86	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		CMP		#4		; code used at a000
		BNE		loc_B2F7A	; code used at a000
		TYA				; code used at a000
		CLC				; code used at a000
		ADC		#4		; code used at a000
		TAY				; code used at a000
loc_B2F7A:				; CODE XREF: sub_B2DBE+1B5-j
		LDA		byte_B3266,X	; code used at a000
		STA		byte_62AA,Y	; code used at a000
		LDA		byte_B3267,X	; code used at a000
		STA		byte_62AD,Y	; code used at a000
loc_B2F86:				; CODE XREF: sub_B2DBE+1AF-j
		JSR		_b7_s1D		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s14:				; CODE XREF: sub_9BAB9+5-P
					; sub_9BAB9+1B-P sub_9BADD+C-P
					; sub_9BADD+19-P sub_9BADD+24-P
					; sub_9BB17+5-P	sub_9BB26+82-P
					; sub_9BB26+99-P sub_B28ED-p
					; _b7_s11+16-p _b7_s12+2E-p _b7_s13+26-p
					; sub_142E69+3A-P sub_142E69+51-P
					; DATA XREF: BANK7:8028-o
		LDX		#0		; code used at a000
loc_B2F8C:				; CODE XREF: _b7_s14+A-j
		LDA		#0		; code used as ind data	at a000
		STA		byte_700,X	; code used at a000
		INX				; code used as ind data	at a000
		CPX		#$B5       ; code used at a000
		BNE		loc_B2F8C	; code used at a000
		LDX		#0		; code used at a000
loc_B2F98:				; CODE XREF: _b7_s14+17-j
		LDA		byte_6313,X	; code used at a000
		STA		byte_6001,X	; code used at a000
		INX				; code used at a000
		CPX		#$D4       ; code used at a000
		BNE		loc_B2F98	; code used at a000
		LDX		#0		; code used at a000
loc_B2FA5:				; CODE XREF: _b7_s14+24-j
		LDA		byte_630A,X	; code used at a000
		STA		byte_7BC,X	; code used at a000
		INX				; code used at a000
		CPX		#9		; code used at a000
		BNE		loc_B2FA5	; code used at a000
		LDX		#3		; code used at a000
loc_B2FB2:				; CODE XREF: _b7_s14+2E-j
		LDA		#5		; code used at a000
		STA		byte_6A4B,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_B2FB2	; code used at a000
		LDA		byte_63E7	; code used at a000
		STA		byte_6DD	; code used at a000
		LDX		#0		; code used at a000
loc_B2FC2:				; CODE XREF: _b7_s14+4B-j
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		byte_630F,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_B2FD0	; code used at a000
		AND		#$F		; code used at a000
		JSR		sub_B304F	; code used at a000
loc_B2FD0:				; CODE XREF: _b7_s14+3F-j
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_B2FC2	; code used at a000
		BRK
		.BYTE $AA, 7		; ofs 0x0000808e, -> dst _b0_s47
		BRK
		.BYTE $49, $17		; ofs 0x000080a0, -> dst _b0_s50
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_sD:					; CODE XREF: sub_9BA66+8-P _b7_s15-p
					; sub_1420EE+8-P
					; _npc_hndl47:loc_143B80-P
					; DATA XREF: BANK7:801A-o
		LDX		#3		; code used at a000
loc_B2FE0:				; CODE XREF: _b7_sD+17-j
		LDA		byte_7C1,X	; code used at a000
		BPL		loc_B2FF4	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_B2FF4	; code used at a000
		TXA
		ASL
		TAY
		LDA		#$80 
		STA		byte_73C,Y
		STA		byte_73D,Y
loc_B2FF4:				; CODE XREF: _b7_sD+5-j	_b7_sD+9-j
		DEX				; code used at a000
		BPL		loc_B2FE0	; code used at a000
		LDX		#0		; code used at a000
loc_B2FF9:				; CODE XREF: _b7_sD+24-j
		LDA		byte_6001,X	; code used at a000
		STA		byte_6313,X	; code used at a000
		INX				; code used at a000
		CPX		#$D4       ; code used at a000
		BNE		loc_B2FF9	; code used at a000
		LDX		#0		; code used at a000
loc_B3006:				; CODE XREF: _b7_sD+31-j
		LDA		byte_7BC,X	; code used at a000
loc_B3009:				; code used at a000
		STA		byte_630A,X
		INX				; code used at a000
		CPX		#9		; code used at a000
		BNE		loc_B3006	; code used at a000
		LDA		byte_6DD	; code used at a000
		STA		byte_63E7	; code used at a000
		LDX		#0		; code used at a000
loc_B3019:				; CODE XREF: _b7_sD+4E-j
		TXA				; code used at a000
		PHA				; code used at a000
		LDA		byte_630F,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_B3027	; code used at a000
		AND		#$F		; code used at a000
		JSR		loc_B305D	; code used at a000
loc_B3027:				; CODE XREF: _b7_sD+42-j
		PLA				; code used at a000
		TAX				; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_B3019	; code used at a000
		LDX		#3		; code used at a000
loc_B3030:				; CODE XREF: _b7_sD+6B-j
		LDA		byte_630F,X	; code used at a000
		BPL		loc_B3048	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_630F,X	; code used at a000
		STA		byte_7C1,X	; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		TAY				; code used at a000
		LDA		#0		; code used at a000
		STA		byte_73C,Y	; code used at a000
		STA		byte_73D,Y	; code used at a000
loc_B3048:				; CODE XREF: _b7_sD+55-j
		DEX				; code used at a000
		BPL		loc_B3030	; code used at a000
		JSR		_b7_s1D		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B304F:				; CODE XREF: _b7_s14+43-p
		PHA				; code used at a000
		LDA		off_B32A3	; code used at a000
		LDX		off_B32A3+1	; code used at a000
		JSR		sub_B31FB	; code used at a000
		PLA				; code used at a000
		JMP		loc_B3068	; code used at a000
loc_B305D:				; CODE XREF: _b7_sD+46-p
		PHA				; code used at a000
		LDA		off_B32A5	; code used at a000
		LDX		off_B32A5+1	; code used at a000
		JSR		sub_B31FB	; code used at a000
		PLA				; code used at a000
loc_B3068:				; CODE XREF: sub_B304F+B-j
		STA		byte_48		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_42		; code used at a000
loc_B306E:				; CODE XREF: sub_B304F+83-j
		LDX		byte_42		; code used at a000
		LDA		byte_B3299,X	; code used at a000
		STA		byte_43		; code used at a000
		LDA		byte_B329E,X	; code used at a000
		STA		byte_44		; code used at a000
		TXA				; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		off_B3285,X	; code used at a000
		STA		word_3C		; code used at a000
		LDA		off_B3285+1,X	; code used at a000
		STA		word_3C+1	; code used at a000
		LDA		off_B328F,X	; code used at a000
		STA		word_3E		; code used at a000
		LDA		off_B328F+1,X	; code used at a000
		STA		word_3E+1	; code used at a000
		LDX		#3		; code used at a000
loc_B3093:				; CODE XREF: sub_B304F+52-j
		LDA		byte_630F,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_B30A0	; code used as ind data	at a000
		AND		#$F		; code used at a000
		CMP		byte_48		; code used at a000
		BEQ		loc_B30A4	; code used at a000
loc_B30A0:				; CODE XREF: sub_B304F+49-j
		DEX				; code used at a000
		BPL		loc_B3093	; code used at a000
		RTS
loc_B30A4:				; CODE XREF: sub_B304F+4F-j
		STX		byte_47		; code used at a000
		TXA				; code used at a000
		JSR		sub_B31EA	; code used at a000
		STA		byte_45		; code used at a000
		LDA		byte_48		; code used at a000
		JSR		sub_B31EA	; code used at a000
		STA		byte_46		; code used at a000
loc_B30B3:				; CODE XREF: sub_B304F+7B-j
		JSR		sub_B30D5	; code used at a000
		LDA		#4		; code used as ind data	at a000
		JSR		sub_B31EA	; code used at a000
		ADC		byte_45		; code used as ind data	at a000
		STA		byte_45		; code used at a000
		LDA		#$C		; code used at a000
		JSR		sub_B31EA	; code used at a000
		ADC		byte_46		; code used at a000
		STA		byte_46		; code used at a000
		DEC		byte_43		; code used at a000
		BNE		loc_B30B3	; code used at a000
		INC		byte_42		; code used at a000
		LDA		byte_42		; code used at a000
		CMP		#5		; code used at a000
		BNE		loc_B306E	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B30D5:				; CODE XREF: sub_B304F:loc_B30B3-p
		LDA		byte_45		; code used at a000
		STA		word_4		; code used at a000
		LDA		byte_46		; code used at a000
		STA		word_4+1	; code used at a000
		LDX		byte_44		; code used at a000
loc_B30DF:				; CODE XREF: sub_B30D5+12-j
		JSR		_indirect_jump_4A ; code used as ind data at a000
		INC		word_4		; code used at a000
		INC		word_4+1	; code used as ind data	at a000
		DEX				; code used as ind data	at a000
		BNE		loc_B30DF	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_indirect_jump_4A:			; CODE XREF: sub_B30D5:loc_B30DF-p
		JMP		(word_4A)	; code used as ind data	at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s11:				; CODE XREF: sub_142CE7+6F-P
					; DATA XREF: BANK7:8022-o
		LDX		#0		; code used at a000
loc_B30EF:				; CODE XREF: _b7_s11+C-j
		LDA		byte_630F,X	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_B30FC	; code used at a000
		INX				; code used at a000
		CPX		#4		; code used at a000
		BNE		loc_B30EF	; code used at a000
		RTS
loc_B30FC:				; CODE XREF: _b7_s11+7-j
		LDA		byte_CE		; code used at a000
		STA		byte_630F,X	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		_b7_s14		; code used at a000
		JSR		_b7_s1D		; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s12:				; CODE XREF: _b7_s15+2A-p
					; sub_142CE7+12C-P
					; DATA XREF: BANK7:8024-o
		JSR		_sram_b0_s31	; code used at a000
		LDA		word_4		; code used at a000
		STA		byte_55		; code used at a000
		LDA		byte_CE		; code used at a000
		STA		byte_CF		; code used at a000
loc_B3117:				; CODE XREF: _b7_s12+19-j
		LDX		byte_CF		; code used at a000
		INX				; code used at a000
		CPX		byte_55		; code used at a000
		BEQ		loc_B3127	; code used at a000
		STX		byte_D0		; code used at a000
		JSR		_sram_bank0_sub3A ; code used at a000
		INC		byte_CF		; code used at a000
		BNE		loc_B3117	; code used at a000
loc_B3127:				; CODE XREF: _b7_s12+10-j
		LDX		byte_55		; code used at a000
		DEX				; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_7C1,X	; code used at a000
		LDX		#3		; code used at a000
loc_B3131:				; CODE XREF: _b7_s12+2C-j
		LDA		byte_7C1,X	; code used at a000
		STA		byte_630F,X	; code used at a000
		DEX				; code used at a000
		BPL		loc_B3131	; code used at a000
		JSR		_b7_s14		; code used at a000
		JMP		_b7_s1D		; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s13:				; CODE XREF: sub_9BADD+2B-P
					; sub_9BB26+AA-P _b7_s15+30-j
					; DATA XREF: BANK7:8026-o
		LDX		#1
		STX		word_4
		DEX
		STX		word_4+1
		LDX		byte_CE
loc_B3149:				; CODE XREF: _b7_s13+10-j
		DEX
		BMI		loc_B3152
		ASL		word_4
		ROL		word_4+1
		BCC		loc_B3149
loc_B3152:				; CODE XREF: _b7_s13+A-j
		LDA		word_4
		EOR		#$FF
		AND		byte_630D
		STA		byte_630D
		LDA		word_4+1
		EOR		#$FF
		AND		byte_630E
		STA		byte_630E
		JSR		_b7_s14
		JMP		_b7_s1D

; =============== S U B	R O U T	I N E =======================================
_b7_s15:				; CODE XREF: sub_9BC74+6-P
					; DATA XREF: BANK7:802A-o
		JSR		_b7_sD
		LDX		#0
loc_B3171:				; CODE XREF: _b7_s15+21-j
		LDA		byte_7C1,X
		BMI		loc_B318A
		TXA
		ASL
		TAY
		LDA		byte_73C,Y
		AND		byte_73D,Y
		BPL		loc_B318A
		LDA		byte_718,X
		AND		#7
		CMP		#5
		BEQ		loc_B3190
loc_B318A:				; CODE XREF: _b7_s15+8-j _b7_s15+13-j
		INX
		CPX		#4
		BNE		loc_B3171
		RTS
loc_B3190:				; CODE XREF: _b7_s15+1C-j
		STX		byte_CE
		LDA		byte_7C1,X
		PHA
		JSR		_b7_s12
		PLA
		STA		byte_CE
		JMP		_b7_s13

; =============== S U B	R O U T	I N E =======================================
_b7_sE:					; CODE XREF: sub_15881A+15F-P
					; DATA XREF: BANK7:801C-o
		LDA		byte_CE		; code used at a000
		JSR		sub_B2B98	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDA		off_B32A7	; code used at a000
		LDY		off_B32A7+1	; code used at a000
		JSR		_add_16_to_16	; code used at a000
		LDY		#0		; code used at a000
loc_B31B2:				; CODE XREF: _b7_sE+1B-j
		LDA		(word_3C),Y	; code used at a000
		STA		word_4,Y	; code used at a000
		INY				; code used at a000
		CPY		#8		; code used at a000
		BNE		loc_B31B2	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_sF:					; DATA XREF: BANK7:801E-o
		LDA		byte_CE		; code used at a000
		JSR		sub_B2B98	; code used at a000
		JSR		sub_B2BB5	; code used at a000
		LDA		word_B32A9	; code used at a000
		LDY		word_B32A9+1	; code used at a000
		JSR		_add_16_to_16	; code used at a000
		LDY		#0		; code used at a000
		STY		word_4+1	; code used at a000
		LDA		(word_3C),Y	; code used at a000
		STA		word_4		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B31D7:				; CODE XREF: sub_B2DBE+96-p
		JSR		sub_B31E2	; code used at a000
		TAY				; code used at a000
		LDA		(word_3E),Y	; code used at a000
		LDY		byte_D0		; code used at a000
		STA		(word_3C),Y	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B31E2:				; CODE XREF: sub_B2DBE+126-p
					; sub_B2DBE+159-p sub_B2DBE+179-p
					; sub_B2DBE+1AA-p sub_B31D7-p
		LDX		byte_D0		; code used at a000
		LDA		byte_611E,X	; code used at a000
		AND		#7		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B31EA:				; CODE XREF: sub_B304F+58-p
					; sub_B304F+5F-p sub_B304F+69-p
					; sub_B304F+72-p
		STA		word_40		; code used as ind data	at a000
		LDA		#0		; code used as ind data	at a000
		STA		word_40+1	; code used as ind data	at a000
		LDA		byte_44		; code used as ind data	at a000
		LDX		#word_40	; code used as ind data	at a000
		JSR		_mul16_to_8	; code used at a000
		LDA		word_40		; code used as ind data	at a000
		CLC				; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B31FB:				; CODE XREF: sub_B304F+7-p
					; sub_B304F+15-p
		STA		word_4A		; code used at a000
		STX		word_4A+1	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3200:				; DATA XREF: BANK7:off_B32A3-o
		LDY		word_4+1	; ind code used	as ind data at a000
		LDA		(word_3C),Y	; code used at a000
		LDY		word_4		; code used at a000
		STA		(word_3E),Y	; code used as ind data	at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3209:				; DATA XREF: BANK7:off_B32A5-o
		LDY		word_4		; ind code used	as ind data at a000
		LDA		(word_3E),Y	; code used as ind data	at a000
		LDY		word_4+1	; code used as ind data	at a000
		STA		(word_3C),Y	; code used at a000
		RTS				; code used as ind data	at a000
off_B3212:
		.WORD off_B3216		; DATA XREF: _b7_s10-r _b7_s10+5-r
					; data used at a000
off_B3214:
		.WORD off_B322A		; DATA XREF: _player_data_initialize-r
					; _player_data_initialize+5-r
					; data used at a000
off_B3216:
		.WORD byte_60E2		; DATA XREF: sub_B2DBE+BE-r
					; sub_B2DBE+DD-r BANK7:off_B3212-o
					; sub_B2DBE+C3-r sub_B2DBE+E2-r
					; data used at a000
		.WORD byte_B323E	; ind data used	at a000
		.WORD byte_60EE		; data used at a000
		.WORD byte_B3246	; ind data used	at a000
		.WORD byte_6112		; data used at a000
		.WORD byte_B324E	; ind data used	at a000
		.WORD byte_60FA		; data used at a000
		.WORD byte_B3256	; ind data used	at a000
		.WORD byte_6106		; data used at a000
		.WORD byte_B325E	; ind data used	at a000
off_B322A:
		.WORD byte_60E2		; DATA XREF: BANK7:off_B3214-o
					; ind data used	at a000
		.WORD byte_B326C	; ind data used	at a000
		.WORD byte_60EE		; ind data used	at a000
		.WORD byte_B3271	; ind data used	at a000
		.WORD byte_6112		; ind data used	at a000
		.WORD byte_B3276	; ind data used	at a000
		.WORD byte_60FA		; ind data used	at a000
		.WORD byte_B327B	; ind data used	at a000
		.WORD byte_6106		; ind data used	at a000
		.WORD byte_B3280	; ind data used	at a000
byte_B323E:
		.BYTE	7,  1,	3,  0,	7,  4, $F,  3 ;	DATA XREF: BANK7:B218-o
byte_B3246:
		.BYTE	5,  4,	4,  0,	2,  1,	8,  2 ;	DATA XREF: BANK7:B21C-o
byte_B324E:
		.BYTE	7,  2,	3,  0,	7,  4,	5,  4 ;	DATA XREF: BANK7:B220-o
byte_B3256:
		.BYTE	6,  8,	7,  0,	1,  5,	4,  1 ;	DATA XREF: BANK7:B224-o
byte_B325E:
		.BYTE	4,  2,	2,  0,	2,  3,	1,  8 ;	DATA XREF: BANK7:B228-o
byte_B3266:
		.BYTE	0		; DATA XREF: sub_B2DBE:loc_B2F7A-r
					; data used at a000
byte_B3267:
		.BYTE	0,  1,	0,  2,	1 ; DATA XREF: sub_B2DBE+1C2-r
					; data used at a000
byte_B326C:
		.BYTE	7,  1,	3,  0,	9 ; DATA XREF: BANK7:B22C-o
					; ind data used	at a000
byte_B3271:
		.BYTE	5,  4,	4,  0,	2 ; DATA XREF: BANK7:B230-o
					; ind data used	at a000
byte_B3276:
		.BYTE	7,  2,	3,  0,	7 ; DATA XREF: BANK7:B234-o
					; ind data used	at a000
byte_B327B:
		.BYTE	6,  9,	8,  0,	1 ; DATA XREF: BANK7:B238-o
					; ind data used	at a000
byte_B3280:
		.BYTE	4,  2,	3,  0,	2 ; DATA XREF: BANK7:B23C-o
					; ind data used	at a000
off_B3285:
		.WORD byte_60D6		; DATA XREF: sub_B304F+2E-r
					; sub_B304F+33-r
					; data used at a000
		.WORD byte_612A		; data used at a000
		.WORD byte_61A2		; data used at a000
		.WORD _character_names	; data used at a000
		.WORD byte_62AA		; data used at a000
off_B328F:
		.WORD byte_700		; DATA XREF: sub_B304F+38-r
					; sub_B304F+3D-r
					; data used at a000
		.WORD byte_71C		; data used at a000
		.WORD byte_744		; data used at a000
		.WORD byte_75C		; data used at a000
		.WORD byte_79C		; data used at a000
byte_B3299:
		.BYTE	7,  5,	2,  2,	1 ; DATA XREF: sub_B304F+21-r
					; data used at a000
byte_B329E:
		.BYTE	1,  2,	3,  8,	8 ; DATA XREF: sub_B304F+26-r
					; data used at a000
off_B32A3:
		.WORD sub_B3200		; DATA XREF: sub_B304F+1-r sub_B304F+4-r
					; data used at a000
off_B32A5:
		.WORD sub_B3209		; DATA XREF: sub_B304F+F-r
					; sub_B304F+12-r
					; data used at a000
off_B32A7:
		.WORD byte_114		; DATA XREF: _b7_sE+8-r	_b7_sE+B-r
					; data used at a000
word_B32A9:
		.WORD 0			; DATA XREF: _b7_sF+8-r	_b7_sF+B-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s8:					; CODE XREF: sub_174BB3+26-P
					; DATA XREF: BANK7:8010-o
		JSR		_ppu_screen_clear ; code used at a000
		JSR		sub_1743B5	; code used at a000
		JSR		_vblank_and_render_off_flag10_set ; code used at a000
		LDA		_PPU_STATUS	; code used at a000
		LDA		#$23       ; code used at a000
		STA		_PPU_ADDR	; code used at a000
		LDA		#$C0       ; code used at a000
		STA		_PPU_ADDR	; code used at a000
		LDX		#0		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6A36	; code used at a000
loc_B32C8:				; CODE XREF: _b7_s8+23-j
		STA		_PPU_DATA	; code used at a000
		INX				; code used at a000
		CPX		#$40       ; code used at a000
		BNE		loc_B32C8	; code used at a000
		JSR		sub_17673A	; code used at a000
		BRK
		.BYTE $22, $17		; ofs 0x000080c2, -> dst _b0_s61_sram_b0_syscall_shortcuts_load
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B32D7:
		JMP		sub_1742BA

; =============== S U B	R O U T	I N E =======================================
sub_B32DA:
		LDX		#$78 
		JMP		_vblank_count
		.BYTE  $E,$1C, $B,$11,$19,$18,	0,$21, $B,$1C,$1C,$13,$19,$1C,	0,$13
		.BYTE $13,$13

; =============== S U B	R O U T	I N E =======================================
sub_B32F1:				; CODE XREF: _b7_s1E-p
		LDA		#0		; code used at a000
		STA		byte_6ADD	; code used at a000
loc_B32F6:				; CODE XREF: sub_B32F1+37-j
		JSR		sub_174369	; code used at a000
		LDA		byte_6ADD	; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		byte_B332B,X	; code used at a000
		STA		byte_8B		; code used at a000
		LDA		byte_B332B+1,X	; code used at a000
		STA		byte_30		; code used at a000
		LDA		byte_B332B+2,X	; code used at a000
		STA		byte_31		; code used at a000
		LDA		byte_B332B+3,X	; code used at a000
		STA		byte_644	; code used at a000
		STA		byte_6BC	; code used at a000
		JSR		sub_174CE2	; code used at a000
		JSR		sub_B333B	; code used at a000
		JSR		sub_B333B	; code used at a000
		INC		byte_6ADD	; code used at a000
		LDA		byte_6ADD	; code used at a000
		CMP		#4		; code used at a000
		BNE		loc_B32F6	; code used at a000
		RTS				; code used at a000
byte_B332B:
		.BYTE $6B, $A,	9,  0	; DATA XREF: sub_B32F1+E-r
					; sub_B32F1+13-r sub_B32F1+18-r
					; sub_B32F1+1D-r
		.BYTE $69, $B, $C,  2	; data used at a000
		.BYTE	7,$2A,	9,  3
		.BYTE	7,$17, $E,  3

; =============== S U B	R O U T	I N E =======================================
sub_B333B:				; CODE XREF: sub_B32F1+29-p
					; sub_B32F1+2C-p
		JSR		loc_B333E	; code used at a000
loc_B333E:				; code used at a000
		LDX		#$42 
		JMP		_vblank_count	; code used at a000

; =============== S U B	R O U T	I N E =======================================
_b7_s1C:				; CODE XREF: sub_174CE2+9-P
					; DATA XREF: BANK7:8038-o
		LDA		byte_6ADD	; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDY		#0		; code used at a000
loc_B334F:				; CODE XREF: _b7_s1C+16-j
		LDA		byte_B3382,X	; code used at a000
		STA		byte_110,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		CPY		#$30       ; code used at a000
		BNE		loc_B334F	; code used at a000
		TXA				; code used at a000
		PHA				; code used at a000
		JSR		_sram_b0_s31	; code used at a000
		PLA				; code used at a000
		TAX				; code used at a000
		LDA		word_4		; code used at a000
		ASL		; code used at a000
		ASL		; code used at a000
		STA		word_4		; code used at a000
		LDY		#0		; code used at a000
loc_B336A:				; CODE XREF: _b7_s1C+37-j
		LDA		#$F0       ; code used at a000
		CPY		word_4		; code used at a000
		BCS		loc_B3373	; code used at a000
		LDA		byte_B3382,X	; code used at a000
loc_B3373:				; CODE XREF: _b7_s1C+2B-j
		STA		byte_140,Y	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		CPY		#$10		; code used at a000
		BCC		loc_B336A	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_174	; code used at a000
		RTS				; code used at a000
byte_B3382:
		.BYTE  $A,  4,	5,  2, $B,  5,	4,  2,	8,  6,	8,  1, $C,  6,	8,  3
					; DATA XREF: _b7_s1C:loc_B334F-r
					; _b7_s1C+2D-r
		.BYTE	9,  7,	7,  2, $A,  7,	7,  2, $B,  7,	7,  2,	7,  8,	6,  1 ;	data used at a000
		.BYTE  $D,  8,	6,  3,	8, $D, $B,  0, $A, $D,	9,  0, $C, $D, $A,  0
		.BYTE  $A, $B,	0,  0,	9, $B,	1,  0, $B, $B,	2,  0,	8, $B,	3,  0
		.BYTE  $A,  9,	4,  2,	9, $A,	5,  1,	9, $B,	6,  1,	9, $C,	7,  1
		.BYTE	9, $D,	8,  1,	9, $E,	9,  1, $B,  9, $A,  2, $C, $A,	9,  3
		.BYTE  $C, $B,	8,  3, $C, $C,	7,  3, $C, $D,	6,  3, $C, $E,	5,  3
		.BYTE  $B, $E,	0,  1, $A, $D,	1,  3, $B, $C,	2,  1, $A, $B,	3,  3
		.BYTE $2D,  6,	4,  1,$2F,  7,	5,  3,$2D,  8,	6,  2,$2F,  8,	7,  3
		.BYTE $2C, $A,	8,  0,$2B,  8,	9,  2,$2A, $A, $A,  0,$29,  8,	4,  2
		.BYTE $27, $A,	5,  1,$27, $B,	6,  1,$29, $D,	7,  3,$28, $E,	8,  0
		.BYTE $28, $B,	0,  3,$29,  9,	1,  0,$2C,  9,	2,  2,$2E,  7,	3,  1
		.BYTE $16,$14,	4,  0,$12, $C,	5,  2,$17,$14,	6,  0,$14, $C,	7,  2
		.BYTE $13, $B,	8,  2,$16, $C,	9,  2,$15, $F, $A,  0,$16, $F,	4,  0
		.BYTE $17, $F,	5,  0,$18, $C,	6,  2,$19, $F,	7,  0,$17, $B,	8,  2
		.BYTE $12, $D,	0,  0,$15, $E,	1,  2,$16, $D,	2,  0,$19, $E,	3,  2

; =============== S U B	R O U T	I N E =======================================
_b7_s1E:				; CODE XREF: _b7_s1B+12-j
					; DATA XREF: BANK7:803C-o
		JSR		sub_B32F1	; code used at a000
		BRK
		.BYTE $A8, $17		; ofs 0x000f802c, -> dst _bA_s16
		BRK
		.BYTE $A1, 7		; ofs 0x00020008, -> dst _b1_s4
		JSR		sub_174369	; code used at a000
		JSR		_vblank_and_render_off_flag10_set ; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6D1	; code used at a000
		STA		byte_9A		; code used at a000
		JSR		sub_1762FC	; code used at a000
		JSR		__render_on_flag10_clear_reinit	; code used at a000
		JSR		_ppu_screen_clear ; code used at a000
		JSR		sub_B36C8	; code used at a000
		LDX		#$3C       ; code used at a000
		JSR		_vblank_count	; code used at a000
		BRK
		.BYTE $19, $2F		; _syscall12
		JSR		_pal_fade_in	; code used at a000
		LDX		#$64       ; code used at a000
		JSR		_vblank_count	; code used at a000
		BRK
		.BYTE $A9, $17		; ofs 0x000f802e, -> dst _bA_s17
		JSR		_vblank_and_render_off ; code used at a000
		JSR		sub_174369	; code used at a000
		JSR		sub_17443A	; code used at a000
		JSR		sub_1743B5	; code used at a000
		JSR		sub_B3687	; code used at a000
		JSR		sub_174CFF	; code used at a000
		JSR		sub_B367D	; code used at a000
		JSR		sub_B34E4	; code used at a000
		JSR		sub_B36B5	; code used at a000
loc_B34D2:				; CODE XREF: _b7_s1E+55-j
		LDA		byte_47F	; code used as ind data	at a000
		AND		#$1F		; code used as ind data	at a000
		BNE		loc_B34D2	; code used as ind data	at a000
		LDX		#$3C       ; code used at a000
		JSR		_vblank_count	; code used at a000
		JSR		sub_174369	; code used at a000
		JMP		sub_B36A2	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B34E4:				; CODE XREF: _b7_s1E+4A-p sub_B34E4+51-j
		JSR		_ppu_screen_clear ; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6D0	; code used at a000
		STA		byte_6D1	; code used at a000
		LDA		word_40+1	; code used at a000
		ASL		; code used at a000
		TAX				; code used at a000
		LDA		_staff_data_lib,X ; code used at a000
		STA		word_3E+1	; code used at a000
		LDA		_staff_data_lib+1,X ; code used	at a000
		STA		word_40		; code used at a000
		JSR		sub_B35BF	; code used at a000
		JSR		sub_B3538	; code used at a000
		BRK
		.BYTE $5B, $17		; ofs 0x00128034, -> dst _bC_s1A
		JSR		_pal_fade_in	; code used at a000
		LDA		#$12		; code used at a000
		STA		byte_43		; code used at a000
		LDA		word_40+1	; code used at a000
		LSR		; code used at a000
		BCC		loc_B3518	; code used at a000
		JSR		sub_B3648	; code used at a000
		JMP		loc_B351B	; code used at a000
loc_B3518:				; CODE XREF: sub_B34E4+2C-j
		JSR		sub_B3657	; code used at a000
loc_B351B:				; CODE XREF: sub_B34E4+31-j
		JSR		sub_B36EF	; code used at a000
		LDA		word_40+1	; code used at a000
		LSR		; code used at a000
		BCC		loc_B3529	; code used at a000
		JSR		sub_B362B	; code used at a000
		JMP		loc_B352C	; code used at a000
loc_B3529:				; CODE XREF: sub_B34E4+3D-j
		JSR		sub_B361F	; code used at a000
loc_B352C:				; CODE XREF: sub_B34E4+42-j
		JSR		sub_174369	; code used at a000
		INC		word_40+1	; code used at a000
		LDA		word_40+1	; code used at a000
		CMP		#$19		; code used at a000
		BNE		sub_B34E4	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3538:				; CODE XREF: sub_B34E4+1C-p
		LDX		#$30       ; code used at a000
		LDA		word_40+1	; code used at a000
		LSR		; code used at a000
		BCC		loc_B3541	; code used at a000
		LDX		#$D0       ; code used at a000
loc_B3541:				; CODE XREF: sub_B3538+5-j
		TXA				; code used at a000
		CLC				; code used at a000
		ADC		byte_6D1	; code used at a000
		STA		byte_6D1	; code used at a000
		LDA		word_40+1	; code used at a000
		ASL		; code used at a000
		CLC				; code used at a000
		ADC		word_40+1	; code used at a000
		TAX				; code used at a000
		LDA		word_B3574,X	; code used at a000
		STA		byte_2A		; code used at a000
		LDA		word_B3574+1,X	; code used at a000
		STA		byte_2B		; code used at a000
		LDA		byte_B3576,X	; code used at a000
		STA		byte_2F		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_9A		; code used at a000
		JSR		sub_1762FC	; code used at a000
		BRK
		.BYTE $79, $17		; ofs 0x00080010, -> dst _b5_s8
		LDA		byte_6D3	; code used at a000
		EOR		#1		; code used at a000
		STA		byte_6D3	; code used at a000
		JMP		_vblank		; code used at a000
word_B3574:
		.WORD $C8B1		; DATA XREF: sub_B3538+18-r
					; sub_B3538+1D-r
					; data used at a000
byte_B3576:
		.BYTE 0			; DATA XREF: sub_B3538+22-r
					; data used at a000
		.WORD $ACD4		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $1917		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $9377		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $772A		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $731		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $7EA1		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $BD30		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $372A		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $2577		; data used at a000
		.BYTE 2			; data used at a000
		.WORD $2446		; data used at a000
		.BYTE 2			; data used at a000
		.WORD $6376		; data used at a000
		.BYTE 2			; data used at a000
		.WORD $5D61		; data used at a000
		.BYTE 2			; data used at a000
		.WORD $272B		; data used at a000
		.BYTE 2			; data used at a000
		.WORD $3ADB		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $5CD		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $C66D		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $4264		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $5C5B		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $DDDC		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $4639		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $5A54		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $2A23		; data used at a000
		.BYTE 0			; data used at a000
		.WORD $7429		; data used at a000
		.BYTE 2			; data used at a000
		.WORD $521E		; data used at a000
		.BYTE 0			; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B35BF:				; CODE XREF: sub_B34E4+19-p
					; sub_B36B5+D-p
		LDY		#0		; code used at a000
		LDA		(word_3E+1),Y	; code used at a000
		STA		byte_42		; code used at a000
		JSR		sub_B35E8	; code used at a000
loc_B35C8:				; CODE XREF: sub_B35BF+11-j
		JSR		sub_B35E1	; code used at a000
		JSR		sub_B35E1	; code used at a000
		DEC		byte_42		; code used at a000
		BNE		loc_B35C8	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B35D3:
		JSR		_pal_fade_in
		LDY		#2
loc_B35D8:				; CODE XREF: sub_B35D3+B-j
		LDX		#$6B 
		JSR		_vblank_count
		DEY
		BNE		loc_B35D8
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_B35E1:				; CODE XREF: sub_B35BF:loc_B35C8-p
					; sub_B35BF+C-p
		JSR		sub_B370E	; code used at a000
		LDY		#0		; code used at a000
		BEQ		sub_B35ED	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B35E8:				; CODE XREF: sub_B35BF+6-p
		JSR		sub_B370E	; code used at a000
		LDY		#1		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B35ED:				; CODE XREF: sub_B35E1+5-j
		LDA		(word_3E+1),Y	; code used at a000
		STA		byte_470	; code used at a000
		LDX		#0		; code used at a000
		INY				; code used at a000
loc_B35F5:				; CODE XREF: sub_B35ED+13-j
		LDA		(word_3E+1),Y	; code used at a000
		CMP		#$FF		; code used at a000
		BEQ		loc_B3602	; code used at a000
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		INY				; code used at a000
		BNE		loc_B35F5	; code used at a000
loc_B3602:				; CODE XREF: sub_B35ED+C-j
		INY				; code used at a000
		TYA				; code used at a000
		CLC				; code used at a000
		ADC		word_3E+1	; code used at a000
		STA		word_3E+1	; code used at a000
		BCC		loc_B360D	; code used at a000
		INC		word_40		; code used at a000
loc_B360D:				; CODE XREF: sub_B35ED+1C-j
		LDA		#0		; code used at a000
loc_B360F:				; CODE XREF: sub_B35ED+28-j
		STA		byte_400,X	; code used at a000
		INX				; code used at a000
		CPX		#$20       ; code used at a000
		BNE		loc_B360F	; code used at a000
		LDA		#$18		; code used at a000
		STA		byte_471	; code used at a000
		JMP		sub_17474C	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B361F:				; CODE XREF: sub_B34E4:loc_B3529-p
		LDA		byte_6D3	; code used at a000
		EOR		#1		; code used at a000
		STA		byte_6D3	; code used at a000
		LDY		#$FF		; code used at a000
		BNE		sub_B362D	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B362B:				; CODE XREF: sub_B34E4+3F-p
		LDY		#1		; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B362D:				; CODE XREF: sub_B361F+A-j
		LDX		#$80       ; code used at a000
loc_B362F:				; CODE XREF: sub_B362D+E-j
		TYA				; code used at a000
		CLC				; code used at a000
		ADC		byte_6D0	; code used at a000
		STA		byte_6D0	; code used at a000
		JSR		_vblank		; code used at a000
		DEX				; code used at a000
		BNE		loc_B362F	; code used at a000
		LDY		#2		; code used at a000
loc_B363F:				; CODE XREF: sub_B362D+18-j
		LDX		#$91       ; code used at a000
		JSR		_vblank_count	; code used at a000
		DEY				; code used at a000
		BNE		loc_B363F	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3648:				; CODE XREF: sub_B34E4+2E-p
		LDA		#0		; code used at a000
		STA		byte_644	; code used at a000
loc_B364D:				; CODE XREF: sub_B3648+C-j
		DEC		byte_2B		; code used at a000
		JSR		sub_B3666	; code used at a000
		DEC		byte_43		; code used at a000
		BNE		loc_B364D	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3657:				; CODE XREF: sub_B34E4:loc_B3518-p
		LDA		#2		; code used at a000
		STA		byte_644	; code used at a000
loc_B365C:				; CODE XREF: sub_B3657+C-j
		INC		byte_2B		; code used at a000
		JSR		sub_B3666	; code used at a000
		DEC		byte_43		; code used at a000
		BNE		loc_B365C	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3666:				; CODE XREF: sub_B3648+7-p sub_B3657+7-p
		LDA		#$10		; code used at a000
		STA		byte_87		; code used at a000
		LDA		#0		; code used at a000
		STA		byte_85		; code used at a000
loc_B366E:				; CODE XREF: sub_B3666+10-j
		JSR		sub_175B03	; code used at a000
		JSR		_vblank		; code used at a000
		LDA		byte_87		; code used at a000
		BNE		loc_B366E	; code used at a000
		LDA		#$FF		; code used at a000
		STA		byte_86		; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B367D:				; CODE XREF: _b7_s1E+47-p
		LDA		#0		; code used at a000
		STA		word_40+1	; code used at a000
		STA		byte_2F		; code used at a000
		STA		byte_6ACD	; code used at a000
		RTS				; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3687:				; CODE XREF: _b7_s1E+41-p
		LDX		#0		; code used at a000
loc_B3689:				; CODE XREF: sub_B3687+B-j
		LDA		byte_B3695,X	; code used at a000
		STA		_ram_pal_buf,X	; code used at a000
		INX				; code used at a000
		CPX		#$D		; code used at a000
		BNE		loc_B3689	; code used at a000
		RTS				; code used at a000
byte_B3695:
		.BYTE  $F,$30,$1C,$2C,$27,$37,$2A,$10,	0,$2A,$2A,$1A,$27
					; DATA XREF: sub_B3687:loc_B3689-r
					; data used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B36A2:				; CODE XREF: _b7_s1E+5F-j
		LDA		byte_63C9	; code used at a000
		ORA		#1		; code used at a000
		STA		byte_63C9	; code used at a000
		LDA		#0		; code used at a000
		STA		byte_6A3E	; code used at a000
		BRK
		.BYTE $95, $17		; ofs 0x000b003a, -> dst _b7_s1D
		BRK
		.BYTE 0, $AF		; ofs 0x0027c000, -> dst _b1A_s0

; =============== S U B	R O U T	I N E =======================================
sub_B36B5:				; CODE XREF: _b7_s1E+4D-p
		LDX		_staff_copyrights_ofs ;	code used at a000
		LDY		_staff_copyrights_ofs+1	; code used at a000
		STX		word_3E+1	; code used at a000
		STY		word_40		; code used at a000
		JSR		_ppu_screen_clear ; code used at a000
		JSR		sub_B35BF	; code used at a000
		JMP		_pal_fade_in	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B36C8:				; CODE XREF: _b7_s1E+1F-p
		LDY		#0		; code used at a000
		LDA		#$72       ; code used at a000
		STA		byte_470	; code used at a000
		LDA		#$1D		; code used at a000
		STA		byte_471	; code used at a000
		LDX		#0		; code used at a000
		TXA				; code used at a000
loc_B36D7:				; CODE XREF: sub_B36C8+15-j
		STA		byte_460,X	; code used at a000
		INX				; code used at a000
		CPX		#$D		; code used at a000
		BNE		loc_B36D7	; code used at a000
		TAX				; code used at a000
loc_B36E0:				; CODE XREF: sub_B36C8+22-j
		LDA		_txt_thus_legend_was_born,Y ; code used	at a000
		STA		byte_400,X	; code used at a000
		INY				; code used at a000
		INX				; code used at a000
		CPX		#$34       ; code used at a000
		BNE		loc_B36E0	; code used at a000
		JMP		sub_17474C	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B36EF:				; CODE XREF: sub_B34E4:loc_B351B-p
		JSR		sub_B3735	; code used at a000
		LDA		#$81       ; code used at a000
		STA		byte_471	; code used at a000
		LDA		#0		; code used at a000
		JSR		loc_B3708	; code used at a000
		LDA		#$80       ; code used at a000
		JSR		loc_B3708	; code used at a000
		LDA		#$F		; code used at a000
		JSR		loc_B3708	; code used at a000
		LDA		#$8F       ; code used at a000
loc_B3708:				; CODE XREF: sub_B36EF+A-p sub_B36EF+F-p
					; sub_B36EF+14-p
		STA		byte_470	; code used at a000
		JMP		sub_174748	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B370E:				; CODE XREF: sub_B35E1-p sub_B35E8-p
		LDA		byte_6ACD	; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAX				; code used at a000
		LDA		byte_B3781,X	; code used at a000
		STA		byte_45		; code used at a000
		LDA		byte_6ACD	; code used at a000
		AND		#3		; code used at a000
		BEQ		loc_B3728	; code used at a000
		TAX				; code used at a000
loc_B3721:				; CODE XREF: sub_B370E+18-j
		ASL		byte_45		; code used at a000
		ASL		byte_45		; code used at a000
		DEX				; code used at a000
		BNE		loc_B3721	; code used at a000
loc_B3728:				; CODE XREF: sub_B370E+10-j
		LDA		byte_45		; code used at a000
		AND		#$C0       ; code used at a000
		CLC				; code used at a000
		ROL		; code used at a000
		ROL		; code used at a000
		ROL		; code used at a000
		STA		byte_45		; code used at a000
		INC		byte_6ACD	; code used at a000

; =============== S U B	R O U T	I N E =======================================
sub_B3735:				; CODE XREF: sub_B36EF-p
		LDX		#0		; code used at a000
		LDY		#0		; code used at a000
loc_B3739:				; CODE XREF: sub_B3735+15-j
		LDA		#0		; code used at a000
		STA		byte_400,X	; code used at a000
		LDA		byte_45		; code used at a000
		STA		byte_460,Y	; code used at a000
		INX				; code used at a000
		TXA				; code used at a000
		LSR		; code used at a000
		LSR		; code used at a000
		TAY				; code used at a000
		CPX		#$20       ; code used at a000
		BNE		loc_B3739	; code used at a000
		RTS				; code used at a000
_txt_thus_legend_was_born:
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
					; DATA XREF: sub_B36C8:loc_B36E0-r
		.BYTE	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,$38,$12,$1F,$1D,$6A,  0 ;	data used at a000
		.BYTE $1E,$12, $F,  0,$16, $F,$11, $F,$18, $E,	0,$21, $B,$1D,	0, $C
		.BYTE $19,$1C,$18,$6C
byte_B3781:
		.BYTE	0,$14, $F,  1,$40,$FF,	1,$41,$7F,$C1,$40,$F0,$14,$3F,$FF,$C5
					; DATA XREF: sub_B370E+6-r
		.BYTE $3C,$50, $F,$FF,	5,$54,$FF,$15,$4F,  5,$54,$3F,$F1,$4F,$15,$54 ;	data used at a000
		.BYTE $3D,$4F,$FC,$3F
_staff_data_lib:
		.WORD _staff_txt_block0	; DATA XREF: sub_B34E4+F-r
					; sub_B34E4+14-r
					; data used at a000
		.WORD _staff_txt_block1	; data used at a000
		.WORD _staff_txt_block2	; data used at a000
		.WORD _staff_txt_block3	; data used at a000
		.WORD _staff_txt_block4	; data used at a000
		.WORD _staff_txt_block5	; data used at a000
		.WORD _staff_txt_block6	; data used at a000
		.WORD _staff_txt_block7	; data used at a000
		.WORD _staff_txt_block8	; data used at a000
		.WORD _staff_txt_block9	; data used at a000
		.WORD _staff_txt_blockA	; data used at a000
		.WORD _staff_txt_blockB	; data used at a000
		.WORD _staff_txt_blockC	; data used at a000
		.WORD _staff_txt_blockD	; data used at a000
		.WORD _staff_txt_blockE	; data used at a000
		.WORD _staff_txt_blockF	; data used at a000
		.WORD _staff_txt_block10 ; data	used at	a000
		.WORD _staff_txt_block11 ; data	used at	a000
		.WORD _staff_txt_block12 ; data	used at	a000
		.WORD _staff_txt_block13 ; data	used at	a000
		.WORD _staff_txt_block14 ; data	used at	a000
		.WORD _staff_txt_block15 ; data	used at	a000
		.WORD _staff_txt_block16 ; data	used at	a000
		.WORD _staff_txt_block17 ; data	used at	a000
		.WORD _staff_txt_block18 ; data	used at	a000
_staff_copyrights_ofs:
		.WORD _staff_copyrights ;	DATA XREF: sub_B36B5-r
					; sub_B36B5+3-r
					; data used at a000
_staff_txt_block0:
		.BYTE	  1,$B9, $E,$1C, $B,$11,$19,$18,  0,$1B,$1F, $F,$1D,$1E
					; DATA XREF: BANK7:_staff_data_lib-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CB,  0,$13,$13,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DB,$1D,$1E, $B,$10,$10 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block1:
		.BYTE	  2,  2,$1D, $D, $F,$18, $B,$1C,$13,$19	; DATA XREF: BANK7:B7A7-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $12,  0,$21,$1C,$13,$1E, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$23,$1F,$14,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,  0,$12,$19,$1C,$13,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block2:
		.BYTE	  2,$B9,  0, $D,$12, $B,$1C, $B, $D,$1E, $F,$1C
					; DATA XREF: BANK7:B7A9-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CA, $E, $F,$1D,$13,$11,$18, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EA,  0, $B,$15,$13,$1C, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FA,$1E,$19,$1C,$13,$23, $B,$17, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE	0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block3:
		.BYTE	  2,  2,  0,$17,$1F,$1D,$13, $D	; DATA XREF: BANK7:B7AB-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $12, $D,$19,$17,$1A,$19,$1D, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,  0,$15,$19,$13, $D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,$1D,$1F,$11,$13,$23, $B,$17, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block4:
		.BYTE	  3,$9A,$1D, $D, $F,$18, $B,$1C,$13,$19	; DATA XREF: BANK7:B7AD-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $A9,  0, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CA,$12,$13,$1C,$19,$1D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,$17,$13,$23, $B,$19,$15, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE  $A,  0,$15, $F,$18,$14,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $19,  0,$23, $B,$18, $B,$11,$13,$1D, $B,$21, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block5:
		.BYTE	  2,  2,  0, $D,$12,$13, $F,$10	; DATA XREF: BANK7:B7AF-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $11,  0,$1A,$1C,$19,$11,$1C, $B,$17,$17, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33,$15, $B,$18	; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,  0,$18, $B,$13,$1E,$19,$12 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block6:
		.BYTE	  3,$89,  0,$1A,$1C,$19,$11,$1C, $B,$17,$17, $F,$1C
					; DATA XREF: BANK7:B7B1-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $AA,  0,$17, $B,$18, $B, $C,$1F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $BA,  0,$23, $B,$17, $B,$18, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EB,$1E,$19,$11,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FA,  0,$18, $B,$1C,$13,$1E, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2A,  0,$17, $B,$1D, $B, $B,$15,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3B,$19,$15, $B,$18,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block7:
		.BYTE	  2,  1,  0, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E
					; DATA XREF: BANK7:B7B3-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $11,  0,$1A,$1C,$19,$11,$1C, $B,$17,$17, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,  0,$17, $B,$1D,$1F,$17,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,$1E, $B,$15,$13,$17,$19,$1E,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block8:
		.BYTE	  2,$BA,$11,$1C, $B,$1A,$12,$13, $D,  0	; DATA XREF: BANK7:B7B5-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CA, $E, $F,$1D,$13,$11,$18, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EA,$1E, $B,$15, $B,$1D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FA,  0,$23, $B,$1D,$1F,$18,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE	0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block9:
		.BYTE	  2,  3,$1D,$19,$1F,$18, $E ; DATA XREF: BANK7:B7B7-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $12,$1A,$1C,$19,$11,$1C, $B,$17,$17, $F,$1C ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,  0,$1E, $B, $E, $B,$1D,$12,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,  0,$10,$1F,$15,$1F,$24, $B,$21, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_blockA:
		.BYTE	  4,$7A, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E ; DATA XREF: BANK7:B7B9-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $9A,  0,$15, $F,$13,$13, $D,$12,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $AB,  0,$12, $B,$1C, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CB,$15, $B,$24,$1F,$23, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DB, $B,$1D, $B,$18,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE  $B,  0,$1C,$13,$15, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $1B,$1D,$1F,$24,$1F,$15,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $3A,  0,$1D, $B,$1E,$19,$1D,$12,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $4B,$10,$1F, $E, $B, $C, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_blockB:
		.BYTE	  1,  2, $E,$13,$1C, $F, $D,$1E,$19,$1C	; DATA XREF: BANK7:B7BB-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $22,  0,$15,$19,$13, $D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,$18, $B,$15, $B,$17,$1F,$1C, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_blockC:
		.BYTE	  1,$BA,$1A,$1C,$19, $E,$1F, $D, $F,$1C	; DATA XREF: BANK7:B7BD-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,$23,$1F,$15,$13,$18,$19, $C,$1F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EB, $D,$12,$13, $E, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_blockD:
		.BYTE	  1,  2,$1A,$1F, $C,$16,$13,$1D,$12, $F,$1C ; DATA XREF: BANK7:B7BF-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $22,$23, $B,$1D,$1F,$12,$13,$1C,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,$10,$1F,$15,$1F,$1D,$12,$13,$17, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_copyrights:
		.BYTE	  8,$14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
					; DATA XREF: BANK7:_staff_copyrights_ofs-o
		.BYTE	0,  0, $D,$19,$1A,$23,$1C,$13,$11,$12,$1E,  0 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $19,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0,$25,	0,  2, $A, $A,	2
		.BYTE $FF		; ind data used	at a000
		.BYTE $24,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0, $F,$18,$13,$22
		.BYTE $FF		; ind data used	at a000
		.BYTE $26,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0,  0, $D,$19,$1C,$1A,$19,$1C, $B,$1E,$13,$19,$18
		.BYTE $FF		; ind data used	at a000
		.BYTE $41,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0,  0, $C, $B,$1D, $F, $E,  0,$1F,$1A,$19,$18,	0, $E,$1C
		.BYTE $FF		; ind data used	at a000
		.BYTE $48,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0, $B,$11,$19,$18,  0,$1B,$1F, $F,$1D,$1E,  0,$13,$13,$13
		.BYTE $FF		; ind data used	at a000
		.BYTE $64, $D,$19,$1A,$23,$1C,$13,$11,$12,$1E,	0,$25,	0,  2, $A,  9 ;	ind data used at a000
		.BYTE	9
		.BYTE $FF		; ind data used	at a000
		.BYTE $73,  0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $74,  0, $B,$1C,$17,$19,$1C,  0,$1A,$1C,$19,$14, $F, $D,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $85, $C,$13,$1C, $E,  0,$1D,$1E,$1F, $E,$13,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $95,  0, $D,$12,$1F,$18,	0,$1D,$19,$10,$1E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $A4, $F,$18,$13,$22,  0, $D,$19,$1C,$1A,$19,$1C, $B,$1E,$13,$19 ;	ind data used at a000
		.BYTE $18
		.BYTE $FF		; ind data used	at a000
		.BYTE $B3,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0,$17,$1F,$1D,$13, $D,	0, $D,$19,$1A,$23,$1C,$13,$11,$12,$1E
		.BYTE $FF		; ind data used	at a000
		.BYTE $BB,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0,$25,	0,  2, $A,  9,	9
		.BYTE $FF		; ind data used	at a000
		.BYTE $C3,  0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $C4,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0,	0,  0 ;	ind data used at a000
		.BYTE	0,$15,$19,$13, $D,$12,$13,  0,$1D,$1F,$11,$13,$23, $B,$17, $B
		.BYTE $FF		; ind data used	at a000
		.BYTE $D0,  0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_blockE:
		.BYTE	  1,$BA, $E,$1C, $B,$11,$19,$18	; DATA XREF: BANK7:B7C1-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $C9,$21, $B,$1C,$1C,$13,$19,$1C,	0,$13,$13,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,  0,$1D,$1E, $B,$10,$10 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_blockF:
		.BYTE	  3,$D1,  0,$1D, $D,$1C, $F, $F,$18,  0,$1E, $F,$22,$1E
					; DATA XREF: BANK7:B7C3-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE	3,$14,$1F,$16,$13, $B,$18 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $12,  0,$1D,$6C,$1E, $B,$18, $F, $E, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $21,$6D,$1D,$1E,$1F, $E,$13,$19,	0, $C,$1F, $C,$19,$19,$6E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $43,$16, $B,$1C,$1C,$23 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $52,  0,$1E,$23,$1C,$1C, $F,$16,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $61,$6D,$1D,$1E,$1F, $E,$13,$19,	0, $C,$1F, $C,$19,$19,$6E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block10:
		.BYTE   3,$9B,$1E, $F,$22,$1E ; DATA	XREF: BANK7:B7C5-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $AA, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CB,$1A, $B,$1F,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,  0, $C,$19,$21,$16, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE  $B,$1A, $B,$1F,$16 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $1A,$12, $B,$18, $E,$16, $F,$17, $B,$18 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE	0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block11:
		.BYTE   2,$E1,  0,$1A,$1C,$19,$11,$1C, $B,$17,$17, $F,$1C
					; DATA XREF: BANK7:B7C7-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $12,$17, $B,$1D, $B,$23,$1F,$15,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $22,$15, $B,$21, $B,$17,$19,$1E,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,  0,$17, $B,$1D,$1F,$17,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $52,$1E, $B,$15,$13,$17,$19,$1E,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block12:
		.BYTE   2,$A9, $D,$11,  0, $E, $F,$1D,$13,$11,$18, $F,$1C
					; DATA XREF: BANK7:B7C9-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CA,$1D, $B,$1E,$19,$1D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,  0,$10,$1F, $E, $B, $C, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE  $A,$14,$1F,$18,$13, $D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $1B,$11,$19, $E, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block13:
		.BYTE   1,  2, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E
					; DATA XREF: BANK7:B7CB-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $23, $E, $B,$13,$24,$19 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $32,$1D,$12,$13,$17, $B,$17,$1F,$1C, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block14:
		.BYTE   3,$9A, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E
					; DATA XREF: BANK7:B7CD-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $AA,  0, $E,$13,$1C, $F, $D,$1E,$19,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CB,$1E,$19,$11,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,  0,$18, $B,$1C,$13,$1E, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE  $A,  0,$15, $F,$18,$13, $D,$12,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $1A,  0,$17, $B,$1D,$1F,$1E, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE	0		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block15:
		.BYTE   3,$D2, $B,$1D,$1D,$13,$1D,$1E, $B,$18,$1E
					; DATA XREF: BANK7:B7CF-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $E2,  0,$1A,$1C,$19, $E,$1F, $D, $F,$1C ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $12,  0,$1D,$12,$13,$18,$23, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $22,$18,$13,$1D,$12,$13,$11, $B,$15,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $42,$23,$19,$1D,$12,$13,$18,$19,$1C,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $52,$23, $B,$17, $B,$11,$13,$1D,$12,$13 ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EF		; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block16:
		.BYTE   1,$BA, $E,$13,$1C, $F, $D,$1E,$19,$1C ; DATA	XREF: BANK7:B7D1-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $DA,  0,$17, $B,$18, $B, $C,$1F ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EA,  0,$23, $B,$17, $B,$18, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block17:
		.BYTE   1,  2,$1A,$1C,$19, $E,$1F, $D, $F,$1C ; DATA	XREF: BANK7:B7D3-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $22,$23,$1F,$15,$13,$18,$19, $C,$1F ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $33, $D,$12,$13, $E, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
_staff_txt_block18:
		.BYTE   3,$99,  0,$1A,$1F, $C,$16,$13,$1D,$12, $F,$1C
					; DATA XREF: BANK7:B7D5-o
					; ind data used	at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $BA,$23, $B,$1D,$1F,$12,$13,$1C,$19 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $CA,$10,$1F,$15,$1F,$1D,$12,$13,$17, $B ;	ind data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $EA,  0,$15, $F,$13,$14,$13 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $FA,  0,$12,$19,$18, $E, $B ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $19,  0,$6D, $F,$18,$13,$22 ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000
		.BYTE $2B, $B,$17, $F,$1C,$13, $D, $B,$6E ; ind	data used at a000
		.BYTE $FF		; ind data used	at a000

		ECHO "bank 07 size", [.-$8000], "free space", [$BFD8-.]

		ORG $BFD8
		SEI
		INC	$BFDF
		JMP	_RESET
		.BYTE $80
		.BYTE "DRAGON WARRIOR "
		.BYTE $33
		.WORD $6CFE
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
