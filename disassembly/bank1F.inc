
		ORG SYSTEM_SHARED_ORG
		
		INCBIN "system_shared.bin"

		ORG SYSTEM_DPCM_ORG

_pcm_data:
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$A9,$99,$9A,$9A,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$A9,$56,$AA,$AA,$AA,$AA,$66,$55,$55,$6A,$AA,$AA,$AA,$AA,$A9
		.BYTE $56,$AA,$AA,$AA,$A9,$6A,$95,$55,$6A,$AA,$AA,$AA,$95,$AA,$AA,$AA
		.BYTE $AA,$55,$55,$55,$56,$AA,$AA,$A9,$5A,$AA,$AA,$AA,$95,$55,$55,$55
		.BYTE $AA,$AA,$56,$B4,$AA,$AA,$A9,$55,$55,$55,$5A,$AA,$55,$B5,$2A,$AA
		.BYTE $A9,$2D,$55,$4D,$5A,$A9,$5B,$54,$AA,$AA,$A4,$AD,$55,$55,$5A,$95
		.BYTE $B6,$52,$AA,$AA,$4A,$D5,$55,$55,$A9,$AD,$94,$D2,$AA,$4A,$AC,$AB
		.BYTE $55,$5A,$AD,$A5,$55,$2A,$4A,$AB,$2A,$D5,$56,$AD,$A9,$55,$49,$4A
		.BYTE $AA,$AA,$B5,$56,$B6,$A9,$55,$49,$2A,$AA,$AA,$B5,$5A,$DA,$AA,$95
		.BYTE $24,$A9,$6A,$AA,$AD,$6B,$6C,$AA,$54,$92,$95,$6A,$AA,$B5,$AD,$D4
		.BYTE $A9,$52,$4A,$55,$66,$6A,$D6,$BB,$52,$A9,$49,$25,$55,$5A,$AB,$5B
		.BYTE $6D,$4A,$A5,$22,$55,$55,$9A,$AD,$B6,$B5,$2A,$52,$49,$4D,$56,$6A
		.BYTE $DA,$EB,$A4,$A9,$24,$92,$AD,$59,$AD,$B5,$D6,$94,$94,$89,$29,$B5
		.BYTE $56,$D6,$DD,$6A,$4A,$48,$A1,$56,$D5,$5B,$6D,$BA,$D2,$24,$A2,$23
		.BYTE $37,$55,$B6,$DB,$75,$88,$8A,$44,$2A,$DD,$56,$EB,$6D,$DA,$42,$28
		.BYTE $88,$AB,$6D,$6D,$B6,$B6,$EA,  4,$A4,$22,$5B,$7A,$AD,$DB,$6B,$6A
		.BYTE	2,$A2,	9,$6B,$EA,$B7,$6B,$6B,$B2,  0,$D0,$15,$5E,$F2,$BB,$6B
		.BYTE $5B,$B0,	5,$48,$25,$5F,$D2,$DB,$6D,$5B,$D0,  2,$C1,$14,$DF,$CA
		.BYTE $DD,$6D,$57,$D8,	0,$A1,$24,$BF,$E4,$DB,$6D,$56,$F8,  0,$A1,$24
		.BYTE $B7,$F5,$5B,$5D,$4B,$FC,	0,$14,$52,$2F,$FA,$56,$BB,$92,$FE,$80
		.BYTE	5,$14,$4D,$FE,$A6,$AE,$D2,$BF,$80,  4,$C9,  7,$7F,$AA,$AB,$B4
		.BYTE $AF,$E8,	0,$32,$22,$DF,$EA,$A6,$BB,$2B,$FA,  0, $C,$50,$AF,$FA
		.BYTE $AA,$AD,$AA,$FE,$A0,  0,$A4,$47,$7F,$CA,$9A,$EA,$6F,$F0,	0,$29
		.BYTE $44,$DF,$F5,$29,$B6,$AB,$EE,  0, $A,$51,$37,$FD,$52,$5B,$59,$DF
		.BYTE $C0,  0,$A5, $B,$7F,$E4,$95,$B5,$5F,$F8,	0,  9,$50,$6F,$FE,$49
		.BYTE $5B,$6B,$DF,$80,	0,$54,$2B,$FF,$A8,$95,$D5,$DF,$E0,  0,$15,$21
		.BYTE $FF,$EA,$85,$6D,$5E,$FE,	0,  0,$A8,$AF,$FF,$42,$56,$B5,$F7,$E0
		.BYTE	0, $A,$8A,$FF,$F4,$85,$5A,$BE,$FE,  0,	0,$A8,$AF,$FF,$50,$95
		.BYTE $97,$7F,$E0,  0, $A,$A2,$FF,$F6,$21,$55,$5E,$FF,$80,  0,$2A,$2F
		.BYTE $FF,$A4,$25,$4B,$7F,$FA,	0,  0,$68,$BF,$FF,$20,$52,$9E,$FF,$F0
		.BYTE	0,  1,$4B,$FF,$F5,  1,$25,$7B,$FF,$80,	0, $D,$2F,$FF,$E8,  4
		.BYTE $55,$BF,$FE,  0,	0,$55,$5F,$FF,$A0,  9,$2F,$BF,$FC,  0,	0,$55
		.BYTE $7F,$FF,	0,$12,$BB,$FF,$E0,  0,	3,$55,$FF,$FC,	0,$45,$7F,$FF
		.BYTE $A0,  0,	2,$B7,$FF,$F0,	1, $B,$DF,$FF,$80,  0, $A,$EF,$FF,$D0
		.BYTE	0,$17,$FF,$FE,	0,  0,$2D,$BF,$FF,$40,	0,$5F,$FF,$FA,	0,  0
		.BYTE $35,$BF,$FF,$40,	0,$5F,$FF,$F8,	0,  0,$AD,$FF,$FE,  0,	0,$DF
		.BYTE $FF,$F8,	0,  0,$6D,$FF,$FD,  0,	0,$FF,$FF,$E8,	0,  0,$6F,$FF
		.BYTE $FA,  0,	0,$FF,$FF,$E0,	0,  0,$FF,$FF,$E8,  0,	1,$FF,$FF,$F0
		.BYTE	0,  0,$7F,$FF,$F0,  0,	1,$FF,$FF,$F0,	0,  0,$7F,$FF,$F4,  0
		.BYTE	0,$7F,$FF,$FC,	0,  0,$1F,$FF,$FC,  0,	0,$3F,$FF,$FF,	0,  0
		.BYTE  $F,$FF,$FD,  0,	0,  7,$FF,$FF,$F0,  0,	0,$FF,$FF,$A0,	0,  0
		.BYTE $FF,$FF,$FF,  0,	0,$1F,$FF,$E2,	0,  0,$1F,$FF,$FF,$E0,	0,  3
		.BYTE $FF,$FC,$40,  0,	3,$FF,$FF,$FC,	0,  0,$3F,$FF,$C1,$20,	0,$7F
		.BYTE $FF,$FE,$80,  0,	3,$FF,$FE, $A,	0,  7,$FF,$FF,$D5,  0,	0,$1F
		.BYTE $FF,$E0,$A8,  0,$3F,$FF,$FA,$D1,	0,  0,$7F,$FF,$81,$C0,	0,$FF
		.BYTE $FF,$EA,$C4,  0,	1,$FF,$FE,  7,	0,  5,$FF,$FF,$9B,$40,	0,  7
		.BYTE $FF,$F8,$1D,  0,	7,$FF,$FE,$6D,$10,  0, $F,$FF,$E0,$74,	0,$1F
		.BYTE $FF,$FC,$D4,$48,	0,$1F,$FF,$81,$A8,  0,$5F,$FF,$FB,$48,$A0,  0
		.BYTE $3F,$FF,	3,$A0,	1,$FF,$FF,$CA,$A5,$40,	0,$7F,$FC, $B,$82,$41
		.BYTE $FF,$FF,$8A,$95,	0,  1,$FF,$F8, $E,$82,$81,$FF,$FF,$34,$2A,  0
		.BYTE	3,$FF,$F8, $E, $C,  7,$FF,$FC,$B0,$AA,	0,  3,$FF,$F0,$3A,$18
		.BYTE  $D,$FF,$FC,$C4,$D4,  0,	3,$FF,$F0,$38,$58,  7,$7F,$FF,$42,$D4
		.BYTE	0,  7,$FF,$E0,$34,$68,	7,$FF,$FD,$43,$50,  0, $F,$FF,$E0,$30
		.BYTE $E0,$2D,$FF,$FE,$85,$44,	0, $F,$FF,$D0,$28,$B0,$35,$FF,$FD,$12
		.BYTE $96,  0,	7,$FF,$C0,$68,$E8,$17,$FF,$F9,	6,$AA,	0,  7,$FF,$E0
		.BYTE $2A,$68,$25,$FF,$FD,$42,$A6,  0,	3,$FF,$F0,$1C,$5A,  5,$FF,$FE
		.BYTE $84,$95,$80,  1,$FF,$F8,	6,$5A,	9,$7F,$FF,$81,$55,$40,	0,$FF
		.BYTE $FC,  5,$AA,$81,$6F,$FF,$D0,$2A,$E0,  0,$3F,$FF,	0,$EA,$90,$AF
		.BYTE $FF,$C8,$2B,$36,	0, $F,$FF,  0,$F2,$70,$5A,$FF,$D5, $A,$CD,$C0
		.BYTE	1,$FF,$E0,$1A,$AD, $A,$AF,$EF,$51,$55,$5C,  0, $F,$FF,	1,$CA
		.BYTE $D0,$A5,$7F,$FA,$89,$56,$80,  3,$FF,$E0,$1A,$5C,$2C,$9F,$FF,$90
		.BYTE $89,$D8,	0,$3F,$FE,  1,$A7,$60,$D1,$FF,$F8,$14,$AF,  0,	3,$FF
		.BYTE $E0,$2A,$78,$1D,$2F,$F7,$C2,$49,$D8,  0,$3F,$FE,	1,$A6,$C1,$D9
		.BYTE $EE,$FA,$29,$17,$80,  1,$FF,$F0,$2C,$56,$1B,$D3,$AF,$E9,$21,$3E
		.BYTE	0,  7,$FF,$E0,$11,$B9,$6E,$2F,$5F,$8A,$23,$E8,	0,$3F,$FE,  1
		.BYTE $2F,$45,$D5,$74,$FA,$58,$AB,$C0,	0,$FF,$F0,$15,$5E,$1B,$55,$AB
		.BYTE $EA,$C2,$AE,  0,	7,$FF,$C0,$95,$B4,$AD,$2E,$BE,$AC,$8A,$B8,  0
		.BYTE $1F,$FF,$40,$95,$C5,$6C,$DA,$FA,$A9,$2A,$E0,  0,$7F,$FC, $A,$5D
		.BYTE $16,$D5,$AA,$F9,$C9,$2B,$80,  1,$FF,$F0,$2A,$6C,$5D,$56,$9B,$EB
		.BYTE $42,$AD,	0,  7,$FF,$E0,$26,$B4,$6B,$56,$AF,$AA,$49,$6C,	0,$1F
		.BYTE $FF,$81,$2A,$C5,$76,$A8,$EF,$B4,$24,$DC,	0,$1F,$FF,$80,$A5,$C9
		.BYTE $7A,$64,$EF,$B2,$13,$6C,	0,$3F,$FE,  2,$57,$4A,$D6,$AA,$DB,$64
		.BYTE $55,$68,	0,$7F,$FC,  6,$CB,$51,$DA,$A4,$FB,$A9,$12,$B8,	1,$3F
		.BYTE $FE,  2,$AB,$4A,$B6,$A8,$DB,$BA,$48,$BE,	0, $F,$FF,$81,$46,$C9
		.BYTE $AD,$B0,$B5,$F6,$90,$BB,	0,  7,$FF,$E0,$51,$D1,$6B,$72,$2D,$BE
		.BYTE $8A,$2F,$80,  3,$FF,$F0,	9,$78,$5B,$6C,$2B,$7B,$92,$8B,$E0,  0
		.BYTE $FF,$F8,	9,$5E,$2A,$DA,$8B,$6F,$A4,$A2,$F8,  0,$3F,$FD,	2,$5B
		.BYTE $8A,$AE,$C2,$B7,$E9,$48,$BE,  0, $F,$FF,$80,$95,$D2,$9B,$B2,$55
		.BYTE $F6,$A2,$37,$80,	1,$FF,$F0,$29,$D4,$55,$DD,$15,$6F,$A4,$8B,$E0
		.BYTE	0,$FF,$F8, $A,$6D,$16,$BE,$82,$AF,$F2,$22,$BE,	0, $F,$FF,$80
		.BYTE $97,$62,$AD,$F0,$25,$FF,$24,$2B,$E0,  0,$FF,$F8,	5,$6D,$2A,$BE
		.BYTE $A0,$37,$FC,$42,$B7,$80,	3,$FF,$C0,$A7,$69,$2A,$FA,  2,$FF,$C8
		.BYTE $2A,$DD,	0, $F,$FF,  2,$AD,$A4,$AE,$B9,	3,$BF,$A4,$55,$56,  2
		.BYTE $17,$FF,$20,$AD,$A4,$AB,$B9,  2,$BF,$F2, $A,$D5,$80,$2B,$FF,$21
		.BYTE $2D,$58,$97,$76,$80,$BF,$F4,$42,$D5,$84,$43,$BF,$68,$92,$B5,$4B
		.BYTE $37,$64,	5,$FF,$C8,$8B,$4A,$A0,$A9,$FD,$48,$5A,$B9,$36,$B5,$20
		.BYTE $9F,$F6,$85,$4B,$49,  6,$DE,$D8,$89,$B6,$A5,$5A,$D4,$81,$BF,$F2
		.BYTE $25,$4A,$A8,$92,$BE,$E4,$8A,$DA,$95,$5B,$4A,  5,$FF,$C8,$4A,$AA
		.BYTE $91,$1D,$ED,$44,$9B,$AA,$55,$6D,$48,$2B,$FE,$88,$AA,$D5,$10,$6E
		.BYTE $ED,$24,$AD,$A9,$55,$B5,$20,$AF,$EE,$49,$2D,$2A,$14,$DB,$B2,$A2
		.BYTE $D6,$A9,$56,$AC,$90,$BF,$7A,$29,$4A,$96,$86,$57,$B2,$A2,$D6,$A9
		.BYTE $4D,$B4,$90,$BE,$FC,$14,$AD,$1A,$16,$5E,$CA,$A3,$65,$92,$DA,$B2
		.BYTE $44,$BF,$7A,$14,$AA,$5C,$49,$4F,$AD, $A,$AE,$A5,$4B,$AA,$A0,$BB
		.BYTE $FA,$24,$B5,$23,$27,$53,$95,$65,$69,$69,$55,$6A,$94,$37,$EE,$88
		.BYTE $AB,$51,$92,$CA,$B5,$A9,$69,$65,$2D,$6A,$A9,$16,$EF,$51,$2B,$64
		.BYTE $A4,$B2,$B6,$6A,$55,$5A,$55,$5A,$AA,$25,$7F,$A4,$45,$B6,$85,$25
		.BYTE $CD,$6A,$65,$59,$55,$56,$AA,$92,$5E,$F5,	9,$6D,$A2,$65,$52,$AC
		.BYTE $D6,$6A,$99,$2D,$6A,$A5,$26,$EE,$C8,$A5,$E6,$49,$4A,$B5,$59,$55
		.BYTE $6A,$55,$56,$AA,$52,$B6,$DA,$54,$AD,$54,$A9,$2A,$B5,$55,$55,$A9
		.BYTE $55,$6A,$A9,$52,$BA,$EA,$92,$AD,$52,$55,$55,$52,$AD,$AA,$A9,$55
		.BYTE $6A,$A5,$53,$5A,$D9,$52,$AA,$AA,$A9,$54,$B4,$D6,$59,$56,$96,$56
		.BYTE $AA,$A2,$AB,$B6,$A4,$A5,$AD,$29,$55,$54,$D5,$6A,$AA,$A9,$55,$56
		.BYTE $AA,$94,$AD,$DA,$92,$AA,$AA,$6A,$AA,$2A,$AD,$AA,$9A,$A5,$55,$6A
		.BYTE $AA,$4A,$DB,$6A,$49,$6A,$B2,$A9,$54,$B5,$9A,$56,$AA,$8A,$B6,$AA
		.BYTE $A4,$A5,$BD,$D0,$92,$ED,$4A,$6A,$A4,$6B,$6A,$A9,$56,$55,$56,$AA
		.BYTE $91,$5E,$EA,$92,$56,$D5,$2A,$94,$9B,$56,$A5,$55,$A9,$55,$6A,$A9
		.BYTE $1A,$DB,$AA,$49,$6A,$D4,$AA,$54,$B5,$55,$5A,$AA,$55,$5A,$AA,$4A
		.BYTE $B6,$DA,$4A,$AA,$B4,$AA,$96,$46,$B5,$AA,$A5,$55,$5A,$AA,$52,$AB
		.BYTE $AE,$95,$2A,$AA,$AA,$C9,$2A,$B6,$A9,$55,$A9,$55,$6A,$AA,$2A,$B6
		.BYTE $EA,$94,$AA,$B4,$AA,$A9,$2A,$6E,$AA,$95,$55,$5A,$AA,$52,$AD,$AD
		.BYTE $A8,$AA,$B5,$25,$A6,$92,$9B,$6A,$A9,$55,$5A,$5A,$59,$52,$DA,$E9
		.BYTE $4A,$AA,$CA,$A9,$54,$AD,$5A,$AA,$55,$55,$5A,$A9,$52,$B6,$B5,$55
		.BYTE $2A,$CA,$AA,$64,$AA,$BA,$AA,$55,$55,$5A,$A9,$54,$B5,$B5,$54,$AB
		.BYTE $52,$A5,$94,$AA,$D6,$A9,$55,$59,$A9,$55,$55,$35,$B5,$52,$AD,$64
		.BYTE $95,$52,$AA,$DA,$AA,$4D,$56,$A9,$65,$65,$55,$B5,$54,$AA,$D5,$49
		.BYTE $25,$5D,$AA,$95,$55,$55,$6A,$A9,$4A,$DA,$D5,$2D,$59,$4A,$AA,$88
		.BYTE $B7,$B4,$A4,$B5,$A5,$56,$AA,$8A,$B6,$E9,$29,$BA,$A2,$92,$A5,$AE
		.BYTE $AA,$A4,$D5,$55,$AA,$A9,$25,$BB,$A9,$4A,$AD,$55,$25,$29,$AD,$AA
		.BYTE $A9,$55,$2D,$5A,$AA,$4A,$DB,$64,$A9,$BA,$A5,$12,$4D,$BA,$AA,$55
		.BYTE $55,$35,$6A,$A8,$AA,$F6,$A2,$AB,$69,$2A,$94,$96,$D6,$AA,$55,$55
		.BYTE $55,$AA,$A9,$55,$6D,$54,$AA,$D5,$55,$10,$AD,$ED,$29,$55,$54,$B6
		.BYTE $B4,$A4,$AB,$B6,$52,$AB,$54,$AA,$A8,$55,$BA,$AA,$55,$55,$55,$6A
		.BYTE $A9,$2B,$6D,$52,$AA,$D5,$54,$A9, $A,$DE,$D2,$93,$55,$55,$5A,$A9
		.BYTE $4A,$D6,$D5,$2A,$AD,$53,$49,$49,$6D,$AA,$95,$55,$55,$56,$AA,$94
		.BYTE $D5,$AD,$4A,$AA,$D5,$55,$24,$4D,$BA,$AA,$55,$55,$35,$6A,$AA,$55
		.BYTE $56,$AD,$54,$AA,$AD,$54,$91,$5A,$EA,$95,$5A,$95,$35,$AA,$95,$55
		.BYTE $5A,$AD,$52,$AB,$59,$4A,$49,$6B,$6A,$95,$55,$55,$5A,$AA,$55,$55
		.BYTE $5A,$D5,$51,$6B,$6A,$49,$52,$5A,$DA,$A9,$55,$55,$56,$AA,$95,$55
		.BYTE $55,$AD,$54,$AA,$D5,$32,$95,$2D,$2D,$56,$A5,$55,$55,$AA,$A9,$55
		.BYTE $AA,$56,$AD,$2A,$6B,$55,$25,$55,$2A,$D5,$AA,$95,$55,$5A,$AA,$A5
		.BYTE $55,$AA,$55,$6D,$52,$9A,$B4,$AA,$AA,$92,$AB,$6A,$95,$56,$A5,$56
		.BYTE $AA,$95,$5A,$A9,$56,$B5,$2A,$AA,$AA,$AA,$AA,$4A,$AD,$5A,$A6,$95
		.BYTE $55,$6A,$AA,$55,$56,$55,$5A,$AD,$2A,$AA,$AA,$AA,$AA,$55,$35,$5A
		.BYTE $A5,$55,$55,$59,$AA,$A5,$55,$AA,$55,$6A,$AA,$AA,$AA,$CA,$AA,$AA
		.BYTE $4A,$B6,$AA,$55,$5A,$95,$55,$AA,$A5,$55,$A9,$55,$AA,$AA,$A5,$AB
		.BYTE $52,$96,$AA,$4B,$35,$A9,$55,$5A,$A5,$56,$AA,$AA,$AA,$95,$56,$AA
		.BYTE $AA,$A9,$AA,$D5,$25,$6A,$A9,$55,$5A,$A5,$56,$AA,$95,$5A,$AA,$96
		.BYTE $AA,$55,$56,$AA,$AA,$AA,$9A,$D5,$25,$56,$A5,$4D,$6A,$55,$56,$AA
		.BYTE $55,$5A,$AA,$AA,$A9,$55,$5A,$AA,$AA,$AA,$AB,$4A,$A5,$AA,$A5,$55
		.BYTE $69,$55,$5A,$95,$56,$AA,$55,$AA,$AA,$55,$5A,$AA,$AA,$AA,$AA,$AA
		.BYTE $A5,$6A,$AA,$4D,$5A,$95,$55,$55,$55,$AA,$A5,$5A,$AA,$A9,$55,$5A
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$A5,$55,$59,$55,$55,$55,$6A,$A5,$56
		.BYTE $AA,$AA,$A9,$55,$6A,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$A5,$56,$AA,$52
		.BYTE $B5,$AA,$95,$5A,$AA,$AA,$AA,$A9,$55,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$55,$55,$95,$55,$56,$A9,$55,$AA,$A9,$6A,$AA,$95,$5A,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$96,$AA,$95,$55,$55,$55,$59,$A9,$55,$6A
		.BYTE $AA,$AA,$AA,$66,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$95,$6A,$A5,$55
		.BYTE $55,$55,$6A,$55,$5A,$AA,$56,$AA,$A9,$56,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$95,$5A,$AA,$55,$56,$A5,$55,$55,$55,$AA,$A9,$AA,$AA,$55
		.BYTE $AA,$AA,$6A,$AA,$AA,$AA,$AA,$AA,$AA,$A5,$AA,$AA,$9A,$65,$55,$55
		.BYTE $96,$56,$AA,$55,$AA,$AA,$56,$AA,$AA,$AA,$A9,$56,$AA,$A9,$6A,$AA
		.BYTE $9A,$AA,$A5,$5A,$AA,$56,$A9,$55,$5A,$A9,$55,$AA,$A5,$5A,$AA,$9A
		.BYTE $AA,$55,$AA,$A9,$5A,$AA,$55,$AA,$A9,$56,$AA,$66,$A9,$55,$AA,$A9
		.BYTE $55,$AA,$A5,$56,$AA,$AA,$AA,$5A,$AA,$A5,$6A,$AA,$A6,$AA,$AA,$A6
		.BYTE $AA,$AA,$9A,$AA,$55,$AA,$A5,$56,$A9,$56,$AA,$95,$AA,$A9,$AA,$AA
		.BYTE $95,$AA,$A9,$55,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$95
		.BYTE $6A,$AA,$A6,$AA,$95,$5A,$AA,$AA,$AA,$AA,$AA,$AA,$A6,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$99,$5A,$AA,$AA,$95,$56,$AA,$A6
		.BYTE $AA,$AA,$AA,$AA,$56,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$A5,$5A,$AA,$A5,$5A,$AA,$AA,$6A,$AA,$99,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$A9,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$6A,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$9A,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA
		.BYTE $AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AA,$AE,$FE

		ORG SYSTEM_FOOTER_ORG
	
		INCBIN "system_footer.bin"

		ORG $FFE0

		.BYTE "DRAGON WARRIOR "
		.BYTE $33
		.WORD $2AF5
		.WORD 0
		.BYTE $48
		.BYTE 4
		.BYTE 1
		.BYTE $F
		.BYTE 7
		.BYTE $9D
		.WORD NMI
		.WORD RESET
		.WORD _far_call
