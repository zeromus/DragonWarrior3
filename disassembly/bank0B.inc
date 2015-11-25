
		ORG $8000

; =======================
; == SOUND ENGINE BANK ==
; =======================

_bB_s2_apu_init_ptr:
		.WORD	_bB_s2_apu_init
_bB_s3_apu_load_ptr:
		.WORD	_bB_s3_apu_load
_bB_s4_ptr:
		.WORD	_bB_s4
_bB_s5_ptr:
		.WORD	_bB_s5
_bB_s6_ptr:
		.WORD	_bB_s6
_bB_s7_ptr:
		.WORD	_bB_s7

_apu_music_lib:
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,_chnl_stop
		.WORD	byte_2DCE17,byte_2DCE28,_chnl_stop,_chnl_stop
		.WORD	byte_2DC63E,byte_2DC719,_chnl_stop,_chnl_stop
		.WORD	byte_2DC7D3,byte_2DC89E,byte_2DC96B,_chnl_stop
		.WORD	byte_2DC9F9,byte_2DCABC,byte_2DCB3A,_chnl_stop
		.WORD	byte_2DCB8B,byte_2DCBC3,byte_2DCBFD,_chnl_stop
		.WORD	byte_2DCCAA,byte_2DCD3A,byte_2DCDD2,_chnl_stop
		.WORD	byte_2DD409,byte_2DD49C,byte_2DD531,_chnl_stop
		.WORD	byte_2DD5E1,byte_2DD677,byte_2DD6DF,_chnl_stop
		.WORD	byte_2DD73E,byte_2DD7D8,byte_2DD800,_chnl_stop
		.WORD	byte_2DD824,byte_2DD84A,byte_2DD871,_chnl_stop
		.WORD	byte_2DD8D1,byte_2DD9B5,byte_2DDA6D,_chnl_stop
		.WORD	byte_2DD8B5,byte_2DD99C,byte_2DDA5C,_chnl_stop
		.WORD	byte_2DE832,byte_2DE8E7,byte_2DE97D,_chnl_stop
		.WORD	byte_2DEA64,byte_2DEAE7,byte_2DEA13,_chnl_stop
		.WORD	byte_2DEB6B,byte_2DEC28,byte_2DEC9E,_chnl_stop
		.WORD	byte_2DED16,byte_2DEDC7,byte_2DEEA1,byte_2DEF20
		.WORD	byte_2DEF63,byte_2DEFCE,byte_2DF019,byte_2DF051
		.WORD	byte_2DF065,byte_2DF221,byte_2DF11A,_chnl_stop
		.WORD	byte_2DF2CE,byte_2DF2F9,byte_2DF321,_chnl_stop
		.WORD	byte_2DCE33,byte_2DCE43,_chnl_stop,_chnl_stop
		.WORD	byte_2DCE4E,byte_2DCE65,byte_2DCE71,_chnl_stop
		.WORD	byte_2DCE83,byte_2DCE7B,_chnl_stop,_chnl_stop
		.WORD	byte_2DCE9D,_chnl_stop,_chnl_stop,_chnl_stop
		.WORD	byte_2DCC35,byte_2DCC71,byte_2DCCA0,_chnl_stop
		.WORD	byte_2DDB7F,byte_2DDF19,byte_2DE2C1,byte_2DE576
		.WORD	byte_2DCEB2,byte_2DCEE0,_chnl_stop,_chnl_stop
		.WORD	byte_2DCEFC,byte_2DCEFF,_chnl_stop,_chnl_stop
		.WORD	_chnl_empty,_chnl_stop,byte_2DCF54,_chnl_stop
		.WORD	byte_2DCF8E,byte_2DCFB4,byte_2DCF7E,_chnl_stop
		.WORD	byte_2DCFC4,byte_2DCFD0,byte_2DCFDB,_chnl_stop
		.WORD	byte_2DC690,byte_2DC73E,byte_2DC785,_chnl_stop
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,byte_2DCFE4
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,byte_2DCFEC
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,byte_2DCFF1
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,byte_2DCFFE
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,byte_2DD044
		.WORD	_chnl_empty,_chnl_stop,_chnl_stop,byte_2DD055
		.WORD	byte_2DDB19,byte_2DDB41,byte_2DDB71,_chnl_stop
		.WORD	byte_2DFA59,byte_2DFABF,byte_2DFB25,_chnl_stop
		.WORD	byte_2DE5FF,byte_2DE65B,byte_2DE6B6,_chnl_stop
		.WORD	byte_2DE70F,byte_2DE78A,byte_2DE7F1,_chnl_stop
		.WORD	byte_2DDB7F,byte_2DDF19,byte_2DE2C1,byte_2DE576
_chnl_empty:
		.BYTE	$FF
_chnl_stop:
		.WORD	$94
off_2DC16B:
		.WORD	byte_2DC308
		.WORD	byte_2DC306
		.WORD	byte_2DC302
		.WORD	byte_2DC319
		.WORD	byte_2DC32B
		.WORD	byte_2DC33E
		.WORD	byte_2DC35B
		.WORD	byte_2DC341
		.WORD	byte_2DC367
		.WORD	byte_2DC37A
		.WORD	byte_2DC385
		.WORD	byte_2DC39B
		.WORD	byte_2DC3AD
		.WORD	byte_2DC3D4
		.WORD	byte_2DC3C6
		.WORD	byte_2DC3BE
		.WORD	byte_2DC3EA
		.WORD	byte_2DC410
		.WORD	byte_2DC3FD
		.WORD	byte_2DC41B
		.WORD	byte_2DC429
		.WORD	byte_2DC437
		.WORD	byte_2DC437
		.WORD	byte_2DC44D
		.WORD	byte_2DC461
		.WORD	byte_2DC48E
		.WORD	byte_2DC464
		.WORD	byte_2DC499
		.WORD	byte_2DC49A
		.WORD	byte_2DC4A0
		.WORD	byte_2DC4B8
		.WORD	byte_2DC4C1
		.WORD	byte_2DC4D9
		.WORD	byte_2DC4E9
		.WORD	byte_2DC44D
		.WORD	byte_2DC516
		.WORD	byte_2DC495
		.WORD	byte_2DC4F7
		.WORD	byte_2DC4F7
		.WORD	byte_2DC504
		.WORD	byte_2DC504
		.WORD	byte_2DC527
		.WORD	byte_2DC39B
		.WORD	byte_2DC380
		.WORD	byte_2DC549
		.WORD	byte_2DC54D
		.WORD	byte_2DC55C
		.WORD	byte_2DC56B
		.WORD	byte_2DC575
		.WORD	byte_2DC58B
		.WORD	byte_2DC59E
		.WORD	byte_2DC5B0
		.WORD	byte_2DC5B0
		.WORD	byte_2DC5CA
		.WORD	byte_2DC5BD
		.WORD	byte_2DC59E
		.WORD	byte_2DC5B0
		.WORD	byte_2DC5A6
		.WORD	byte_2DC5D4
		.WORD	byte_2DC5F8
		.WORD	byte_2DC529
		.WORD	byte_2DC52B
		.WORD	byte_2DC52D
		.WORD	byte_2DC52F
		.WORD	byte_2DC532
		.WORD	byte_2DC535
		.WORD	byte_2DC538
		.WORD	byte_2DC53B
		.WORD	byte_2DC53E
		.WORD	byte_2DC541
		.WORD	byte_2DC544
		.WORD	byte_2DC547
		.WORD	byte_2DC4AD
		.WORD	byte_2DC2EA
		.WORD	byte_2DC2AA
		.WORD	byte_2DC2D1
		.WORD	byte_2DC292
		.WORD	byte_2DC295
		.WORD	byte_2DC26E
		.WORD	byte_2DC23A
		.WORD	byte_2DC477
		.WORD	byte_2DC211
		.WORD	byte_2DC231
byte_2DC211:
		.BYTE	$BA,$BC,$BD,$BE,$BE,$BE,$BD,$BD,$BD,$BC,$BC,$BC,$BB,$BB,$BB,$BA
		.BYTE	$BA,$BA,$B9,$B9,$B9,$B8,$B8,$B8,$B8,$B7,$B7,$B7,$B7,$B7,$B6,$1E
byte_2DC231:
		.BYTE	$B5,$B5,$B4,$B4,$B3,$B2,$B1,$B1,  7
byte_2DC23A:
		.BYTE	$7F,$7F,$7F,$7F,$7F,$7E,$7E,$7E,$7E,$7E,$7D,$7C,$7C,$7C,$7C,$7C
		.BYTE	$7C,$7C,$7C,$7C,$7C,$7B,$7B,$7B,$7B,$7B,$7B,$7B,$7B,$7B,$7B,$7C
		.BYTE	$7C,$7C,$7C,$7C,$7C,$7C,$7C,$7C,$7C,$7D,$7D,$7D,$7D,$7D,$7D,$7D
		.BYTE	$7D,$7D,$7D, $B
byte_2DC26E:
		.BYTE	$7F,$7C,$79,$77,$75,$74,$73,$72,$71,$78,$76,$75,$74,$73,$72,$72
		.BYTE	$71,$71,$75,$74,$73,$73,$72,$72,$71,$71,$71,$73,$72,$72,$72,$71
		.BYTE	$71,$71,$71,$1B
byte_2DC292:
		.BYTE	$3E,$37,  0
byte_2DC295:
		.BYTE	$3D,$37,$3C,$37,$3B,$36,$3A,$36,$39,$35,$38,$34,$37,$34,$36,$33
		.BYTE	$35,$32,$34,$31,$12
byte_2DC2AA:
		.BYTE	$3E,$3D,$3E,$3C,$3E,$3B,$3E,$3A,$3E,$39,$3E,$38,$3E,$37,$3E,$36
		.BYTE	$3E,$35,$3E,$34,$3D,$34,$3C,$34,$3B,$34,$3A,$34,$39,$34,$38,$34
		.BYTE	$37,$34,$36,$33,$36,$32,$24
byte_2DC2D1:
		.BYTE	$B5,$B6,$B7,$B8,$B9,$BA,$BB,$BC,$BC,$BD,$BD,$BC,$BC,$BB,$BB,$BA
		.BYTE	$BA,$B9,$B8,$B7,$B5,$B3,$B1,$B0,$17
byte_2DC2EA:
		.BYTE	$B3,$B5,$B7,$B9,$BB,$BD,$BF,$BF,$BE,$BE,$BD,$BC,$BB,$BA,$B9,$B8
		.BYTE	$B7,$B6,$B4,$B3,$B2,$B1,$B0,$16
byte_2DC302:
		.BYTE	$3F,$7E,$BE,  0
byte_2DC306:
		.BYTE	$7D,  2
byte_2DC308:
		.BYTE	$7F,$7E,$7E,$7E,$7E,$7D,$7C,$7B,$7B,$7A,$79,$78,$78,$79,$7A,$7B
		.BYTE	  9
byte_2DC319:
		.BYTE	$3A,$3F,$3F,$3E,$3E,$3D,$3D,$3C,$3C,$3B,$3B,$3A,$39,$38,$38,$39
		.BYTE	$3A,  9
byte_2DC32B:
		.BYTE	$75,$79,$7D,$7F,$7E,$7E,$7E,$7E,$7D,$7C,$7B,$7A,$79,$78,$78,$79
		.BYTE	$7A,$7B, $A
byte_2DC33E:
		.BYTE	$BA,$BF,  5
byte_2DC341:
		.BYTE	$7F,$7E,$BD,$BC,$BC,$BB,$BB,$BA,$BA,$BA,$B9,$B9,$B9,$B8,$B8,$B8
		.BYTE	$B8,$B9,$BA,$BB,$BC,$BC,$BB,$BA,$B9, $D
byte_2DC35B:
		.BYTE	$3F,$3D,$3C,$3B,$3A,$3A,$39,$39,$38,$38,$37, $A
byte_2DC367:
		.BYTE	$B8,$B9,$BA,$BB,$BC,$BD,$7E,$7D,$7C,$7B,$7B,$7A,$79,$78,$78,$79
		.BYTE	$7A,$7B, $A
byte_2DC37A:
		.BYTE	$B6,$B6,$B5,$B5,$B4,  4
byte_2DC380:
		.BYTE	$BA,$BC,$BD,$B0,  3
byte_2DC385:
		.BYTE	$77,$79,$7A,$7B,$7C,$7D,$7D,$7C,$7B,$7B,$7A,$7A,$79,$79,$78,$78
		.BYTE	$79,$79,$7A,$7A,$7B,  8
byte_2DC39B:
		.BYTE	$7A,$7A,$79,$79,$78,$78,$77,$77,$76,$76,$75,$75,$74,$74,$73,$73
		.BYTE	$72,$10
byte_2DC3AD:
		.BYTE	$7A,$79,$78,$77,$76,$76,$75,$75,$74,$74,$73,$73,$72,$72,$72,$71
		.BYTE	 $F
byte_2DC3BE:
		.BYTE	$3A,$3D,$3F,$3F,$3E,$3E,$3D,  6
byte_2DC3C6:
		.BYTE	$B7,$B9,$BB,$BC,$BD,$BD,$BC,$BB,$BB,$BA,$B9,$B9,$B8, $C
byte_2DC3D4:
		.BYTE	$3F,$3E,$3D,$3C,$3B,$3A,$39,$39,$38,$38,$37,$37,$36,$36,$35,$35
		.BYTE	$34,$34,$33,$33,$32,$14
byte_2DC3EA:
		.BYTE	$B6,$B8,$BB,$BB,$BA,$BA,$B9,$B9,$B8,$B7,$B6,$B5,$B5,$B5,$B6,$B7
		.BYTE	$B7,$B8,  8
byte_2DC3FD:
		.BYTE	$B6,$B9,$BD,$BD,$BC,$BC,$BB,$BB,$BA,$B9,$B8,$B7,$B6,$B6,$B7,$B8
		.BYTE	$B9,$BA,  8
byte_2DC410:
		.BYTE	$B5,$B6,$B7,$B8,$B9,$BA,$BB,$BC,$BB,$BA,  9
byte_2DC41B:
		.BYTE	$39,$3B,$7D,$7F,$7F,$7E,$7E,$7D,$7D,$7C,$7C,$7B,$7B, $B
byte_2DC429:
		.BYTE	$B3,$B6,$B7,$B8,$B9,$B8,$B7,$B6,$B5,$B4,$B5,$B6,$B7,  5
byte_2DC437:
		.BYTE	$B8,$B9,$BA,$BB,$BD,$BE,$BE,$BD,$BC,$BB,$BA,$BA,$B9,$B9,$B8,$B8
		.BYTE	$B9,$B9,$BA,$BA,$BB,  9
byte_2DC44D:
		.BYTE	$BC,$BC,$BB,$BB,$BA,$BA,$B9,$B9,$B9,$B8,$B8,$B8,$B7,$B7,$B7,$B6
		.BYTE	$B6,$B6,$B5,$12
byte_2DC461:
		.BYTE	$B6,$B8,$BA
byte_2DC464:
		.BYTE	$BC,$BE,$BE,$BD,$BD,$BC,$BC,$BC,$BB,$BB,$BB,$BA,$BA,$BA,$B9,$B9
		.BYTE	$B9,$B8,$14
byte_2DC477:
		.BYTE	$B6,$B8,$BA,$BB,$BB,$BB,$BA,$BA,$BA,$B9,$B9,$B9,$B8,$B8,$B8,$B7
		.BYTE	$B7,$B7,$B6,$B6,$B6,$B5,$15
byte_2DC48E:
		.BYTE	$B5,$B7,$B9,$BA,$B9,$B8,  3
byte_2DC495:
		.BYTE	$3F,$37,$30,  2
byte_2DC499:
		.BYTE	$3F
byte_2DC49A:
		.BYTE	$3B,$37,$33,$30,$30,  4
byte_2DC4A0:
		.BYTE	$BF,$BE,$BD,$BC,$BB,$BA,$B9,$B8,$B7,$B6,$B5,$B4, $B
byte_2DC4AD:
		.BYTE	$BB,$BA,$B9,$B8,$B7,$B6,$B5,$B4,$B3,$B2,  9
byte_2DC4B8:
		.BYTE	$B6,$BC,$BE,$BD,$BC,$BB,$BA,$B9,  7
byte_2DC4C1:
		.BYTE	$77,$B9,$BB,$BD,$BE,$BE,$BD,$BD,$BC,$BC,$BB,$BB,$BA,$BA,$BA,$B9
		.BYTE	$B9,$B9,$B8,$B8,$B7,$B7,$B6,$16
byte_2DC4D9:
		.BYTE	$75,$B7,$B9,$BB,$BB,$BB,$BB,$BA,$B9,$B9,$B8,$B8,$B7,$B7,$B6, $E
byte_2DC4E9:
		.BYTE	$34,$34,$35,$75,$76,$75,$75,$74,$74,$73,$73,$74,$74,  5
byte_2DC4F7:
		.BYTE	$B7,$B9,$B9,$B8,$B8,$B7,$B7,$B6,$B6,$B5,$B5,$B4, $B
byte_2DC504:
		.BYTE	$BA,$BE,$BD,$BC,$BB,$BA,$B9,$B9,$B8,$B8,$B7,$B7,$B6,$B6,$B5,$B5
		.BYTE	$B4,$1D
byte_2DC516:
		.BYTE	$B3,$B6,$B6,$B7,$B7,$B8,$B9,$B8,$B7,$B6,$B6,$B5,$B5,$B4,$B4,$B3
		.BYTE	 $F
byte_2DC527:
		.BYTE	$3F,  0
byte_2DC529:
		.BYTE	$B1,  0
byte_2DC52B:
		.BYTE	$B2,  0
byte_2DC52D:
		.BYTE	$B3,  0
byte_2DC52F:
		.BYTE	$B4,$73,  0
byte_2DC532:
		.BYTE	$B5,$74,  0
byte_2DC535:
		.BYTE	$B6,$75,  0
byte_2DC538:
		.BYTE	$B7,$75,  0
byte_2DC53B:
		.BYTE	$B8,$35,  0
byte_2DC53E:
		.BYTE	$BA,$35,  0
byte_2DC541:
		.BYTE	$7C,$35,  0
byte_2DC544:
		.BYTE	$7E,$35,  0
byte_2DC547:
		.BYTE	$BF,  0
byte_2DC549:
		.BYTE	$3F,$3F,$7F,  2
byte_2DC54D:
		.BYTE	$BD,$BC,$BB,$BA,$B9,$B9,$B8,$B7,$B7,$B6,$B5,$B5,$B4,$B3, $D
byte_2DC55C:
		.BYTE	$B5,$BA,$BF,$BE,$BD,$BD,$BC,$BC,$BB,$BB,$BA,$BA,$B9,$B8, $A
byte_2DC56B:
		.BYTE	$B9,$B7,$B6,$B5,$B4,$B4,$B3,$B3,$B2,  8
byte_2DC575:
		.BYTE	$75,$7A,$7C,$7E,$7F,$7F,$7F,$7E,$7E,$7D,$7D,$7C,$7C,$7B,$7B,$7B
		.BYTE	$7B,$7A,$7A,$7A,$7A, $D
byte_2DC58B:
		.BYTE	$7A,$7A,$7A,$7A,$7A,$7A,$7A,$79,$79,$78,$78,$77,$76,$76,$75,$74
		.BYTE	$73,$72,$11
byte_2DC59E:
		.BYTE	$3A,$3F,$3E,$3E,$3D,$3D,$3C,  6
byte_2DC5A6:
		.BYTE	$BA,$BC,$BF,$BF,$BE,$BE,$BD,$BD,$BC,  8
byte_2DC5B0:
		.BYTE	$36,$7C,$7B,$7B,$7A,$7A,$79,$79,$79,$78,$78,$77, $B
byte_2DC5BD:
		.BYTE	$77,$79,$7B,$7A,$7A,$79,$79,$78,$78,$77,$77,$76, $B
byte_2DC5CA:
		.BYTE	$7B,$7A,$79,$78,$77,$76,$75,$74,$73,  8
byte_2DC5D4:
		.BYTE	$3F,$3D,$3B,$3A,$39,$39,$38,$38,$37,$37,$37,$36,$36,$36,$35,$35
		.BYTE	$35,$35,$34,$34,$34,$34,$34,$33,$33,$33,$33,$33,$32,$32,$32,$32
		.BYTE	$32,$32,$31,$22
byte_2DC5F8:
		.BYTE	$7F,$7E,$7E,$7D,$7D,$7C,$7C,$7B,$7B,$7A,$7A,$79,$79,$78,$78,$77
		.BYTE	$77,$76,$76,$75,$13
off_2DC60D:
		.WORD	byte_2DC611
		.WORD	byte_2DC62C
byte_2DC611:
		.BYTE	  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8,$14
		.BYTE	$1C,$1C,$14,  8,$88,$94,$9C,$9C,$94,$88,$1D
byte_2DC62C:
		.BYTE	  0,  0,  0,  0,  0,  0,$10,$1C,$24,$1C,$10,  0,$90,$9C,$A4,$9C
		.BYTE	$90,  5
byte_2DC63E:
		.BYTE	$87,$E1,  6,$FB,  5,$67,$95,  8,$67,  3,$67,$8C, $B,$FF,$8A,$B0
		.BYTE	  5,$1A,$1A,$FF,$8B,$AE,  8,$B0,  6,$1C,$B3, $B,$B2,  7,$1A,$B2
		.BYTE	  8,$B3,  6,$1F,$B7,  7,$24,$21,$FF,$89,$1F,$1D,$1C,$FF,$82,$65
		.BYTE	$95,  8,$65,  3,$65,$8C,  0,$FF,$7F,$67,$95,  8,$67,  3,$67,$8C
		.BYTE	 $B,$FF,$7D,$B2,  0,$FF,$73,$18,$1C,$FF,$6E,$65,$F0,$60,$94,  8
		.BYTE	$94,  0
byte_2DC690:
		.BYTE	$6E,$FB,  5,$E1,  8,$6A,$94, $C,$6A,  4
byte_2DC69A:
		.BYTE	$FF,$7D,$6F,$98,$15,$26,$28,$BF,  0,$76,$18,$30,$4A,$7A,$94, $C
		.BYTE	$78,$84,  0,$78,$24,$76, $C,$49,$C0, $A,$2A,$2D,$76,$98,  0,$73
		.BYTE	$30,$67,$94,$12,$67,  4,$67,$98,$16,$1C,$1E,$B6,  0,$6C,$30,$94
		.BYTE	 $C,$B7, $A,$23,$24,$71,$B0,  0,$94, $C,$B7, $A,$21,$24,$6F,$98
		.BYTE	$16,$23,$21,$B5,  0,$73,$3C,$74, $C,$28,$26,$6F,$B0,$2E,$6C,$98
		.BYTE	$16,$24,$71,$BC,  0,$73, $C,$26,$24,$6F,$B0,$2E,$6E,$98,$16,$1F
		.BYTE	$76,$BC,  0,$73,$8C, $A,$29,$2B,$78,$BC,  0,$6C,$8C, $A,$23,$24
		.BYTE	$74,$B0,$2E,$28,$6F,$C8,$3C,$6A,$94, $C,$6A,  4,$FE
		.WORD	byte_2DC69A
byte_2DC719:
		.BYTE	$E1,  6,$F7,$18,$18,$18,$13,$13,$13,$10,$13,$18,$1A,$18,$13,$18
		.BYTE	$1A,$1C,$1D,$21,$1D,$1C,$1A,$18,$13,$13,$13,$18,$18,$18,$18,$10
		.BYTE	$18,$13,$49,$94,  0
byte_2DC73E:
		.BYTE	$E1,  8,$F7
byte_2DC741:
		.BYTE	$1D,$1D,$1C,$1F,$24,$24,$6F,$B0,$2E,$6F,$B0,$2E,$29,$28,$49,$27
		.BYTE	$27,$2A,$28,$6F,$C8,$30,$14,$14,$15,$17,$18,$49,$18,$1A,$1C,$21
		.BYTE	$49,$1E,$1E,$21,$21,$1F,$1D,$1D,$20,$20,$20,$20,$21,$1C,$1C,$21
		.BYTE	$1E,$1E,$1E,$1D,$1D,$1D,$25,$25,$26,$28,$29,$1D,$1F,$21,$21,$23
		.BYTE	$1C,$FE
		.WORD	byte_2DC741
byte_2DC785:
		.BYTE	$94,$18
byte_2DC787:
		.BYTE	$63,$98,$16,$17,$16,$15,$5B,$B0,$2E,$11,$63,$98,$16,$13, $C,$18
		.BYTE	$18,$10,$13,$18,$5B,$B0,$2E,$10,$60,$98,$16,$10,$18,$15,$12,$15
		.BYTE	$1A, $E,$5E,$B0,$2E,$5E,$98,$16,$17,$10,$14,$17,$10,$15,$17,$18
		.BYTE	$15,$12,$15,$1A, $E,$13,$13,$1A,$1D,$1C,$19,$15,$10, $E,$10,$11
		.BYTE	 $E,$1A,$13,$1D,$13,$18,$13,$18,$49,$FE
		.WORD	byte_2DC787
byte_2DC7D3:
		.BYTE	$5D,$E1,$14
byte_2DC7D6:
		.BYTE	$6F,$8C,  6,$28,$2B,$7B,$98,$12,$7A,$86,$80,$2D,$2B,$29,$28,$26
		.BYTE	$28,$29,$2B,$28,$26,$28,$29,$26,$25,$26,$28,$25,$6C,$8C,  6,$21
		.BYTE	$26,$29,$2D,$7D,$98,$12,$7D,$86,$80,$30,$2F,$30,$2F,$2D,$2C,$2D
		.BYTE	$2F,$2C,$73,$8C,  6,$2C,$78,$B0,$24,$75,$8C,  6,$2A,$2A,$2A,$76
		.BYTE	$B0,$24,$73,$8C,  6,$28,$28,$28,$74,$B0,$24,$71,$8C,  6,$26,$26
		.BYTE	$26,$73,$86,  5,$2A,$77,$8C,  9,$78,$86,  5,$2F,$7B,$8C,  9,$7D
		.BYTE	$8C,  6,$71,$86,  5,$28,$75,$8C,  6,$26,$76,$B0,$2A,$FB,  3,$94
		.BYTE	$60,$49,$71,$8C,  6,$29,$2D,$7D,$98,$12,$7C,  6,$32,$34,$32,$31
		.BYTE	$34,$32,$30,$2F,$2D,$2B,$29,$28,$26,$73,$8C,  6,$6F,$98,$12,$6A
		.BYTE	$8C,$80,$6A,$B0,$2A,$70,$98,$12,$74,  6,$28,$26,$25,$71,$8C,  6
		.BYTE	$21,$1D,$1A,$17,$20,$1C,$20,$21,$FA,  8,$FC,$23,$23,$23,$23,$24
		.BYTE	$24,$24,$24,$25,$25,$25,$25,$26,$26,$26,$26,$27,$27,$27,$27,$73
		.BYTE	$98, $C,$49,$FB,  0,$FE
		.WORD	byte_2DC7D6
byte_2DC89E:
		.BYTE	$E1,$14,$67,$8C,  6,$94,$30,$71,$86,$80,$24,$23,$21,$1F,$23,$24
		.BYTE	$26,$28,$24,$6A,$8C,  9,$23,$67,$86,$80,$1D,$1F,$1C,$64,$8C,  9
		.BYTE	$1C,$1D,$94,$30,$F7,$29,$28,$26,$28,$26,$24,$23,$24,$26,$23,$20
		.BYTE	$26,$24,$21,$21,$24,$24,$23,$25,$25,$1F,$1F,$21,$1D,$1D,$21,$21
		.BYTE	$20,$21,$23,$24,$26,$28,$2D,$F8,$6C,$8C,  6,$24,$24,$6F,$98,$80
		.BYTE	$B9,$12,$60,$8C,  6,$18,$1C,$6C,$98,$12,$6B,  6,$21,$23,$21,$20
		.BYTE	$23,$21,$22,$21,$1F,$1D,$1C,$1A,$19,$65,$8C,  6,$60,$98,$12,$68
		.BYTE	$8C,$80,$68,$B0,$2A,$6C,$98,$12,$70,  6,$23,$21,$1F,$68,$8C,  6
		.BYTE	$1A,$17,$13,$18,$1C,$1F,$1C,$19,$67,$98,$12,$1C,$67,$8C,  9,$B0
		.BYTE	  6,$1F,$21,$1A,$5E,  3,$15,$FA,  4,$FA,$94, $C,$62,  6,$18,$1A
		.BYTE	$18,$17,$1A,$18,$1C,$FA,  4,$FB,$1A,$1D,$FA,  4,$FB,$1A,$20,$FA
		.BYTE	  4,$FB,$1C,$21,$FA,  4,$FB,$1C,$1F,$FA,  4,$FB,$1D,$21,$FA,  4
		.BYTE	$FB,$1E,$23,$FA,  4,$FB,$6B,$98, $C,$49,$FE
		.WORD	byte_2DC89E
byte_2DC96B:
		.BYTE	$63,$8C,  9,$49,$94,$98,$12,$1F,$13,$63,$8C,  9,$24,$23,$1F,$21
		.BYTE	$1C,$15,$19,$1A,$49,$94,$98,$12,$1F,$13,$67,$A4,$1E,$67,$8C,  9
		.BYTE	$21,$1C,$18,$15,$65,$B0,$2A,$5E,$86,  6,$15,$17,$18,$1A,$1C,$1D
		.BYTE	$1F,$6C,$8C,  9,$1C,$19,$15,$65,  6,$1C,$1D,$1F,$21,$23,$24,$26
		.BYTE	$6E,$98,$12,$17,$67,$8C,  9,$73,  6,$26,$24,$23,$21,$1F,$69,$98
		.BYTE	$12,$65,$8C,  9,$1E,$6A,$B0,$2A,$94,$60,$49,$49,$49,$60,$8C,  6
		.BYTE	$19,$1C,$6A,$98,$12,$6C,  6,$22,$21,$1F,$1D,$1C,$1D,$1F,$1D,$1C
		.BYTE	$1A,$17,$17,$15,$5F,$8C,  6,$5B,$98,$12,$67, $C,$6C,$98, $A,$FA
		.BYTE	 $E,$FA,$5B,  6,$12,$14,$15,$17,$19,$1A,$1C,$FE
		.WORD	byte_2DC96B
byte_2DC9F9:
		.BYTE	$78,$E1, $C
byte_2DC9FC:
		.BYTE	$67,$88,  6,$1C,$1C,$6C,$A8,$1E,$6E,$84,  3,$24,$6E,$A8,$1E,$6F
		.BYTE	$84,  3,$26,$6F,$A8,$1E,$6E,$84,  3,$21,$6E,$98,  9,$67,$90,  6
		.BYTE	$67,  8,$21,$25,$28,$76,$B0,$24,$76,$88,  6,$29,$28,$71,$C8,$30
		.BYTE	$71,$88,  6,$26,$28,$74,$C8,$30,$6E,$88,  6,$28,$26,$6F,$C8,$30
		.BYTE	$6F,$88,  6,$24,$28,$71,$98, $C,$6C,$88,  6,$21,$21,$6C,$98,$12
		.BYTE	$24,$6F,$B0,$24,$6E,$98,$12,$28,$74,$C8,$30,$6C,$98,$12,$6E,$B0
		.BYTE	$30,$95,$10,$78,$88,  6,$76,$90, $C,$74,$88,  6,$73,$C8,$30,$6A
		.BYTE	$98,$12,$6C,$B0,$30,$95,$10,$6E,$88,  6,$6F,$90, $C,$71,$88,  6
		.BYTE	$28,$24,$24,$71,$10,$6F,  8,$FA,  3,$F6,$2D,$24,$24,$71,$10,$6F
		.BYTE	  8,$6F,$10,$6F,  8,$6E,$98,$15,$6E,$90,  6,$6E,  8,$6C,$98,$15
		.BYTE	$6C,$90,  6,$6C,  8,$6A,$98,$15,$6A,$90,  6,$6A,  8,$68,$98,$12
		.BYTE	$67,$A8,$18,$67,$84,  3,$1C,$FA,  3,$F6,$67,$98,  9,$FE
		.WORD	byte_2DC9FC
byte_2DCABC:
		.BYTE	$E1, $C
byte_2DCABE:
		.BYTE	$94,$98,$12,$18,$18,$1C,$1C,$1C,$1C,$1C,$1A,$19,$1A,$1C,$19,$68
		.BYTE	$8C,  6,$6C,$84,  3,$21,$21,$6D,$88,  6,$22,$22,$23,$23,$23,$22
		.BYTE	$22,$22,$6C,$C8,$30,$6B,$98,$12,$F7,$1C,$1C,$1C,$1F,$21,$1A,$1A
		.BYTE	$1A,$1E,$1E,$1D,$1C,$20,$F8,$94,$18,$60,$88,  6,$15,$15,$60,$98
		.BYTE	$12,$49,$49,$65,$88,  6,$1A,$1A,$65,$90, $C,$F7,$1D,$1C,$1A,$F8
		.BYTE	$63,$98,$12,$5E,$88,  6,$13,$13,$5E,$98,$12,$49,$49,$63,$88,  6
		.BYTE	$18,$18,$63,$98,$12,$49,$6C,$B0,$24,$20,$1F,$1E,$1D,$1C,$1B,$1A
		.BYTE	$94,$98,$12,$62,$30,$17,$62,$18,$17,$FE
		.WORD	byte_2DCABE
byte_2DCB3A:
		.BYTE	$F7,$49,$15,$21,$20,$14,$F9,$FA,$15,$17,$19,$15,$1A,$29,$FA, $C
		.BYTE	$FC,$F8,$6C,$98,$12,$26,$1A,$1C,$15,$21,$1F,$1F,$1E,$1E,$1A,$1A
		.BYTE	$1F,$1F,$20,$1C,$F7,$49,$1A,$1A,$1A,$1A,$49,$49,$1F,$1F,$1F,$F8
		.BYTE	$6A,$98,$12,$49,$49,$F7,$18,$18,$18,$18,$49,$49,$1D,$1D,$1D,$1D
		.BYTE	$49,$2A,$29,$28,$27,$26,$25,$24,$23,$49,$21,$20,$21,$20,$FE
		.WORD	byte_2DCB3A
byte_2DCB8B:
		.BYTE	$69,$E1,$16
byte_2DCB8E:
		.BYTE	$59,$90,$10,$15,$1D, $E,$17,$1F, $E,$18,$21, $E,$16,$1D,  9,$10
		.BYTE	$18, $E,$15,$1E, $E,$13,$1A,$1E,$1E,$15, $E,$15,$1D, $E,$17,$1F
		.BYTE	 $E,$17,$1F, $E,$16,$20,$15,$1C,$25,$15,$1C,$26,$21,$28,$28,$28
		.BYTE	$21,$19,$FE
		.WORD	byte_2DCB8E
byte_2DCBC3:
		.BYTE	$E1,$16
byte_2DCBC5:
		.BYTE	$94,  8,$5C,$90,$10,$1A,$21,$13,$1A,$23,$15,$1A,$24,$11,$1A,$1A
		.BYTE	 $C,$15,$1C,$12,$1A,$21,$10,$16,$1C,$21,$1A,$12,$11,$1A,$21,$13
		.BYTE	$1A,$23,$13,$1A,$23,$14,$1A,$22,$19,$21,$28,$1A,$21,$28,$25,$2B
		.BYTE	$2B,$25,$1C,$60,  8,$FE
		.WORD	byte_2DCBC5
byte_2DCBFD:
		.BYTE	$7D,$98,$16,$39,$82,$C8,$46,$80,$8C, $B,$34,$7D,$98,$16,$7B,$8C
		.BYTE	 $B,$2E,$30,$2D,$7F,$98,$16,$7D,$B0,$30,$7D,$E0,$5D,$84,$98,$16
		.BYTE	$3C,$86,$C8,$45,$82,$8C, $B,$35,$7F,$98,$16,$80,$8C, $B,$37,$84
		.BYTE	$E0,$60,$84,$E0,$5C,$FE
		.WORD	byte_2DCBFD
byte_2DCC35:
		.BYTE	$69,$E1,$16,$7D,$90,$60,$32,$29,$29,$29,$22,$6D, $C,$1C,$1F,$1A
		.BYTE	$1C,$16,$65,  8,$13, $E,  9,$15,$1C,$15,$1C,$21,$6C, $C,$28,$78
		.BYTE	$18,$94,  8,$FF,$62,$71,$10,$FF,$5B,$2B,$FF,$54,$21,$FF,$4D,$22
		.BYTE	$FF,$46,$28,$FF,$3F,$6C, $C,$FF,$69,$FE
		.WORD	byte_2DCB8E
byte_2DCC71:
		.BYTE	$E1,$16,$94,  8,$78,$90,$60,$2D,$2D,$26,$26,$71, $E,$6A, $C,$1A
		.BYTE	$1C,$16,$1A,$5E, $A,$61,  8,$10, $A,$10,$18,$1F,$18,$1F,$6F, $A
		.BYTE	$71, $C,$76,$1E,$78,$10,$22,$24,$29,$1F,$6F,$14,$FE
		.WORD	byte_2DCBC5
byte_2DCCA0:
		.BYTE	$94,$60,$49,$49,$49,$94,  4,$FE
		.WORD	byte_2DCBFD
byte_2DCCAA:
		.BYTE	$5F,$E1,$1E
byte_2DCCAD:
		.BYTE	$F2,$DE,$6A,$8C,$80,$6C,$E0,$80,$95,$98,$12,$26,$6E,$83,  2,$24
		.BYTE	$6E,$92, $F,$6D,$83,  2,$25,$6D,$92, $F,$6C,$8C,  6,$F2,$DE,$6A
		.BYTE	$8C,$80,$6C,$C8,$80,$95,$E0,$54,$F2,$DE,$71,$8C,$80,$73,$D4,$48
		.BYTE	$73,$92,$12,$71,$86,  4,$76,$92,$12,$73,$86,  4,$78,$92,$12,$73
		.BYTE	$86,  4,$71,$92,$12,$73,$86,  4,$76,$92,$12,$73,$86,  4,$71,$92
		.BYTE	$12,$73,$86,  4,$6E,$92,$12,$71,$86,  4,$6E,$8D, $A,$F2,$D5,$6D
		.BYTE	$8B,$80,$F2,$DE,$6A, $C,$6C,$D4,$48,$69,$AA,$2A,$6C,  6,$69,$8C
		.BYTE	 $A,$F2,$B5,$6C,$8C,$80,$68,$98,$12,$67,$E0,$54,$73,$98,$18,$71
		.BYTE	$8C,  6,$28,$76,$98,$12,$22,$6C,$D4,$3C,$FE
		.WORD	byte_2DCCAD
byte_2DCD3A:
		.BYTE	$94, $C,$E1,$1A
byte_2DCD3E:
		.BYTE	$94,$98,$12,$10,$59,$8C,  9,$10,$5E,$98,$12,$9F,  9,$E1,$1C,$61
		.BYTE	$8C,  7,$19,$16,$19,$15,$19,$94,$98,$12,$E1,$1A,$15,$5E,$8C,  9
		.BYTE	$15,$54,$98,$12,$60,$8C,  9,$5E,$86,  4,$14,$60,$8C,  9,  9,$E1
		.BYTE	$1C,$94,$8C,  6,$19,$16,$19,$1D,$68,$18,$1D,$1D,$68, $C,$16,$61
		.BYTE	$18,$16,$16,$61, $C,$10,$5B,$18,$10,$10,$5B, $C,$15,$60,$18,$60
		.BYTE	 $C,$E1,$1A,$5E,$86, $C,$5E,  3,$14,$60, $C,  9,$15,$E1,$1C,$AD
		.BYTE	  6,$62,$18,$17,$17,$61, $C,$15,$15,$E1,$1A,$5B,$98,$15,$59,$8C
		.BYTE	  9,$10,$5E,$98,$12,$E1,$1C,$60,$8C,  6,$60,$18,$60, $C,$10,$5B
		.BYTE	$18,$5B, $C,$E1,$1A,$54,$98,  9,$AB,$12,$5E,$8C,  9,$15,$54,$98
		.BYTE	$12,$FE
		.WORD	byte_2DCD3E
byte_2DCDD2:
		.BYTE	$94,$8C,  6
byte_2DCDD5:
		.BYTE	$26,$28,$FA,  7,$FB,$25,$27,$26,$28,$FA,  8,$FB,$2D,$78,$18,$2D
		.BYTE	$2D,$78, $C,$26,$71,$18,$26,$26,$71, $C,$F9,$F7,$25,$70,$18,$25
		.BYTE	$25,$70, $C,$25,$70,$18,$25,$25,$6F, $C,$23,$23,$21,$23,$21,$23
		.BYTE	$21,$23,$29,$29,$49,$29,$26,$26,$49,$26,$26,$28,$FA,  4,$FB,$FE
		.WORD	byte_2DCDD5
byte_2DCE17:
		.BYTE	$50,$E1,  0,$74,$84,  4,$29,$29,$74,  8,$27,$2B,$74,$A4,$18,$94
		.BYTE	  0
byte_2DCE28:
		.BYTE	$E1,  2,$F7,$24,$23,$22,$21,$1F,$22,$21,$49
byte_2DCE33:
		.BYTE	$78,$E1, $A,$7D, $C,$31,$30,$2F,$C3,  4,$26,$7D,$A4,$18,$94,  0
byte_2DCE43:
		.BYTE	$E1, $A,$F7,$2A,$29,$28,$26,$24,$1E,$2A,$49
byte_2DCE4E:
		.BYTE	$3C,$E1,$12,$67,$8C, $C,$1F,$24,$73,  9,$E1,$10,$68,$9A,$80,$65
		.BYTE	$96,  0,$67,$CB,$3F,$94,  0
byte_2DCE65:
		.BYTE	$E1,$10,$94,$AE,$60,$6C,$30,$6A,$CA,$3E,$94,  0
byte_2DCE71:
		.BYTE	$67,$8C,$6C,$1F,$24,$28,$7B,$6C,$94,  0
byte_2DCE7B:
		.BYTE	$E1, $A,$94,$81,  2,$FE
		.WORD	byte_2DCE86
byte_2DCE83:
		.BYTE	$78,$E1, $A
byte_2DCE86:
		.BYTE	$57,  7,$5E,  6,$18,$65,  1,$1C,$1D,$1F,$21,$22,$24,$26,$28,$29
		.BYTE	$2B,$2D,$2E,$7B,$1E,$94,  0
byte_2DCE9D:
		.BYTE	$96,$E1,  0,$57,  6,$17, $B,$16,$FA,  4,$F8,$5B,$14,$5C,  2,$12
		.BYTE	$55,$98, $C,$94,  0
byte_2DCEB2:
		.BYTE	$3C,$E1,$76,$57,$11,$62, $D,$59,  9,$63,  6,$FF,$46,$10,$1A,$FF
		.BYTE	$50,$11,$1C,$FF,$5A,  7,$13,$FF,$64,$1C,$24,$FF,$5A,$2D,$35,$FF
		.BYTE	$50,$2F,$28,$FF,$46,$1F,$17,$57, $C,$EF,$95,$30,$94,  0
byte_2DCEE0:
		.BYTE	$E1,$76,$94,  9,$5E, $F,$67, $B,$60,  7,$68,  6,$17,$1F,$18,$21
		.BYTE	 $E,$18,$21,$29,$30,$34,$2B,$23,$1C,$13,$94,  0
byte_2DCEFC:
		.BYTE	$32,$94,  3
byte_2DCEFF:
		.BYTE	$E1,$76,$84,$86,$60,$80,  5,$7D,  4,$7A,  3,$FF,$3C,$35,$32,$2F
		.BYTE	$2D,$FF,$46,$32,$2F,$2D,$29,$FF,$50,$2D,$29,$26,$23,$FF,$5A,$29
		.BYTE	$26,$23,$21,$FF,$64,$26,$23,$21,$1D,$FF,$6E,$21,$1D,$1A,$17,$FF
		.BYTE	$78,$1D,$1A,$17,$15,$FF,$82,$1A,$17,$15,$11,$FF,$8C,  7, $E,$11
		.BYTE	$15,$17,$1A,$17,$1A,$1D,$21,$23,$26,$23,$26,$29,$2D,$2F,$26,$82
		.BYTE	$18,$EF,$4A,$94,  0
byte_2DCF54:
		.BYTE	$FF,$6E,$76,$98,$30,$78,  3,$2F,$30,$32,$34,$35,$37,$39,$3B,$3C
		.BYTE	$3E,$40,$41,$8E,$90,  6,$43,$43,$8E,$82,$30,$45,$FA,  9,$F9,$8E
		.BYTE	 $D,$41,$89,  8,$3B,$39,$82,$3C,$94,  0
byte_2DCF7E:
		.BYTE	$76,$8C,$60,$2D,$37,$7F,$1E,$94,$4E,$76,$12,$37,$7F,$24,$94,  0
byte_2DCF8E:
		.BYTE	$64,$E1, $A,$94,  2,$6A,$98,  3,$76,$2E,$E1,$12,$6A,$8C,  0,$21
		.BYTE	$2B,$73,$A6,$1E,$E1, $A,$6A,$A4,  3,$73,$22,$E1,$12,$6A,$92,  0
		.BYTE	$2B,$73,$A4,$1E,$94,  0
byte_2DCFB4:
		.BYTE	$E1, $A,$94, $E,$6C,$98,  3,$73,$6C,$95,$12,$2B,$95,$6C,$94,  0
byte_2DCFC4:
		.BYTE	$64,$E1, $A,$94,  2,$6A,$98,  3,$76,$30,$94,  0
byte_2DCFD0:
		.BYTE	$E1, $A,$94, $E,$6C,$98,  3,$73,$24,$94,  0
byte_2DCFDB:
		.BYTE	$76,$8C,$60,$2D,$37,$7F,$1E,$94,  0
byte_2DCFE4:
		.BYTE	$E1,$7E
byte_2DCFE6:
		.BYTE	$FE
		.WORD	byte_2DCFF6
		.BYTE	$FE
		.WORD	byte_2DCFE6
byte_2DCFEC:
		.BYTE	$E1,$86,$FE
		.WORD	byte_2DCFE6
byte_2DCFF1:
		.BYTE	$E1,$8A,$FE
		.WORD	byte_2DCFE6
byte_2DCFF6:
		.BYTE	$59,$82,$80, $C, $D, $C, $D,$FD
byte_2DCFFE:
		.BYTE	$E1,$8A,$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$E1,$88,$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$E1,$86,$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$E1,$82,$FE
		.WORD	byte_2DD03B
		.BYTE	$FE
		.WORD	byte_2DD03B
		.BYTE	$E1,$7E,$FE
		.WORD	byte_2DD03B
		.BYTE	$E1,$7A,$FE
		.WORD	byte_2DD03B
		.BYTE	$94,$18,$94,  0
byte_2DD03B:
		.BYTE	$4E,  2,  5,  4,  6,$FA, $A,$F8,$FD
byte_2DD044:
		.BYTE	$E1,$7E,$51,$B0,$30,$E1,$82,  6,$E1,$86,  6,$E1,$82,  6,$FE
		.WORD	byte_2DD044
byte_2DD055:
		.BYTE	$E1,$82,$51,$60,  7,$E1,$7E,  8,  9,$E1,$7A, $A, $B,$94,  0,$69
		.BYTE	$81
off_2DD066:
		.WORD	byte_2DD1CE-$8000
		.WORD	byte_2DD1E5-$8000
		.WORD	byte_2DD1F5-$8000
		.WORD	byte_2DD207-$8000
		.WORD	byte_2DD20E
		.WORD	byte_2DD214
		.WORD	byte_2DD21D-$8000
		.WORD	byte_2DD228-$8000
		.WORD	byte_2DD237
		.WORD	byte_2DD241-$8000
		.WORD	byte_2DD24C
		.WORD	byte_2DD256
		.WORD	byte_2DD25E
		.WORD	byte_2DD266
		.WORD	byte_2DD272
		.WORD	byte_2DD27B
		.WORD	byte_2DD1BC-$8000
		.WORD	byte_2DD1A2
		.WORD	byte_2DD28C
		.WORD	byte_2DD2AB
		.WORD	byte_2DD294-$8000
		.WORD	byte_2DD2A5
		.WORD	byte_2DD326-$8000
		.WORD	byte_2DD351-$8000
		.WORD	byte_2DD35D-$8000
		.WORD	byte_2DD365
		.WORD	byte_2DD380-$8000
		.WORD	byte_2DD38C-$8000
		.WORD	byte_2DD3D1-$8000
		.WORD	byte_2DD3B7-$8000
		.WORD	byte_2DD3A0
		.WORD	byte_2DD3C4
		.WORD	byte_2DD3E2
		.WORD	byte_2DD3EE
		.WORD	byte_2DD3F7-$8000
		.WORD	byte_2DD0CD-$8000
		.WORD	byte_2DD0D3-$8000
		.WORD	byte_2DD12E-$8000
		.WORD	byte_2DD0F4-$8000
		.WORD	byte_2DD0E1-$8000
		.WORD	byte_2DD0D9-$8000
		.WORD	byte_2DD0BE
		.WORD	byte_2DD1C4-$8000
		.WORD	byte_2DD0BE-$8000
byte_2DD0BE:
		.BYTE	$E1,$98,$55,  4, $B, $C, $D,$59,$60,$E1,$9A,$59,$18,$94,  0
byte_2DD0CD:
		.BYTE	$E1,$96,$57,$18,$94,  0
byte_2DD0D3:
		.BYTE	$E1,$94,$58,$30,$94,  0
byte_2DD0D9:
		.BYTE	$E1,$86,$59,  2,$55,  5,$94,  0
byte_2DD0E1:
		.BYTE	$E1,$92,$56,$81,$80, $A, $A,  9,  9,  8,  8,$52,  3,$51,  4,$50
		.BYTE	  5,$94,  0
byte_2DD0F4:
		.BYTE	$E1,$8A,$58,  3,$E1,$88, $D,$E1,$7E, $D,$E1,$86, $D,$E1,$7E, $D
		.BYTE	$E1,$82, $E,$FA, $C,$F7,$E1,$7C, $D,$E1,$80, $E,$FA, $C,$F7,$E1
		.BYTE	$7A, $D,$E1,$7E, $E,$FA, $C,$F7,$E1,$78, $D,$E1,$7C, $E,$FA, $C
		.BYTE	$F7,$E1,$7A, $D,$49,$FA, $C,$F9,$94,  0
byte_2DD12E:
		.BYTE	$E1,$88,$4E,  3,$E1,$8E,$4F,  1,$E1,$86,  5,$E1,$8A,  6,$E1,$82
		.BYTE	  7,$E1,$8C,  8,$E1,$7E,  9,$E1,$8C,  8,$FA,  2,$F1,$E1,$86,  9
		.BYTE	$E1,$88, $B,$E1,$82, $A,$E1,$8A, $C,$FA,  2,$F1,$E1,$88, $B,$E1
		.BYTE	$7E, $B,$E1,$86, $B,$E1,$82, $C,$FA,  3,$F1,$E1,$88, $C,$E1,$82
		.BYTE	 $C,$E1,$7A, $D,$E1,$7E, $D,$FA,  4,$F1,$E1,$7E, $D,$E1,$86, $E
		.BYTE	$E1,$7A,$59,  2,$FA,  4,$F3,$E1,$82, $E,$E1,$7E, $E,$FA,  5,$F7
		.BYTE	$E1,$7A, $F,$E1,$82, $F,$FA,  5,$F7,$E1,$7E, $F,$E1,$7A, $F,$FA
		.BYTE	  6,$F7,$94,  0
byte_2DD1A2:
		.BYTE	$E1,  4,$F2,$8C,$57,$10,$F2,$8D,$4A,$F2,$86,$95, $C,$F2,$8C,$57
		.BYTE	$10,$F2,$8D,$4A,$F2,$86,$95, $C,$94,  0
byte_2DD1BC:
		.BYTE	$E1, $A,$58, $C,$59,$30,$94,  0
byte_2DD1C4:
		.BYTE	$E1, $A,$58, $C,$59,$60,$59,$30,$94,  0
byte_2DD1CE:
		.BYTE	$E1
		.BYTE	 $A,$52,  4,  8,  9,$94,  0,$E1,  4,$6F,  4,$27,$2A,$2D,$32,$2F
		.BYTE	$2C,$29,$F9,$F5,$94,  0
byte_2DD1E5:
		.BYTE	$E1
		.BYTE	 $C,$59,  2, $D,$94, $C,$58,  2, $C,$94, $C,$F9,$F4,$94,  0
byte_2DD1F5:
		.BYTE	$E1
		.BYTE	 $C,$59,  2, $D,$49, $D, $C,$49,$F9,$F7, $D, $C,$49, $C, $B,$94
		.BYTE	  0
byte_2DD207:
		.BYTE	$E1
		.BYTE	 $C,$5A,  6, $D,$94,  0
byte_2DD20E:
		.BYTE	$E1, $E,$90,  4,$94,  0
byte_2DD214:
		.BYTE	$E1, $E,$87,  4,$42,$3C,$42,$94,  0
byte_2DD21D:
		.BYTE	$E1
		.BYTE	 $C,$55,  2, $B, $C, $D, $E, $F,$94,  0
byte_2DD228:
		.BYTE	$E1, $C,$53,  2,  9, $A, $B,$F9,$F9, $A,  9,  8,  7,$94,  0
byte_2DD237:
		.BYTE	$E1, $E,$82,  2,$38,$36,$F9,$FA,$94,  0
byte_2DD241:
		.BYTE	$E1, $C,$5A,  2, $E, $D, $C, $B, $A,$94,  0
byte_2DD24C:
		.BYTE	$E1,  0,$71,  2,$23,$27,$F9,$FA,$94,  0
byte_2DD256:
		.BYTE	$E1,  4,$78,  4,$2B,$27,$94,  0
byte_2DD25E:
		.BYTE	$E1,  4,$7A,  4,$2D,$29,$94,  0
byte_2DD266:
		.BYTE	$E1,  4,$6F,  6,$27,$25,$28,$26,$29,$2A,$94,  0
byte_2DD272:
		.BYTE	$E1, $E,$75,  3,$18,$13,$19,$94,  0
byte_2DD27B:
		.BYTE	$E1,  0,$7B,  2,$25,$32,$27,$73,  6,$71,  2,$33,$28,$80,  6,$94
		.BYTE	  0
byte_2DD28C:
		.BYTE	$E1, $E,$F2,$95,$87,$32,$94,  0
byte_2DD294:
		.BYTE	$E1,$52,$5A,  4, $E,$55,  2, $B, $C, $D, $E,$E1,$54,$5A,$18,$94
		.BYTE	  0
byte_2DD2A5:
		.BYTE	$E1,$56,$78,  2,$94,  0
byte_2DD2AB:
		.BYTE	$E1,$7A,$F4,$F4,$6F,$83,$80,$27,$FA,  8,$F9,$E1,$7E,$F4,$F4,$24
		.BYTE	$27,$FA,  8,$FB,$E1,$82,$F4,$F4,$24,$27,$FA,  8,$FB,$E1,$86,$F4
		.BYTE	$F4,$24,$27,$FA,  8,$FB,$E1,$88,$F4,$F4,$25,$27,$FA,  8,$FB,$E1
		.BYTE	$8A,$F4,$F4,$25,$28,$FA,  8,$FB,$E1,$8C,$F4,$25,$28,$FA,$18,$FB
		.BYTE	$F5,$E1,$8A,$F5,$F5,$25,$28,$FA,  8,$FB,$E1,$88,$F5,$F5,$26,$28
		.BYTE	$FA,  8,$FB,$E1,$86,$F5,$F5,$26,$29,$FA,  8,$FB,$E1,$82,$F5,$F5
		.BYTE	$26,$29,$FA,  8,$FB,$E1,$7E,$F5,$F5,$26,$29,$FA,  8,$FB,$E1,$7A
		.BYTE	$F5,$F5,$26,$29,$FA,  8,$FB,$F6,$10,$94,  0
byte_2DD326:
		.BYTE	$E1,  4,$59,$82,$60, $D, $C, $B, $A,  9,  8,  7,  6,  5,  4,  3
		.BYTE	  2,  3,  4,  5,  6,  7,  8,$54,  8, $B, $D, $A, $C, $E, $B, $D
		.BYTE	 $E, $C,$FA,  3,$F2,$58,$18, $E, $F,$94,  0
byte_2DD351:
		.BYTE	$E1,  4,$58,$84,  4, $B, $A, $B, $C, $D,$94,  0
byte_2DD35D:
		.BYTE	$E1,  4,$55,  3,$4E, $C,$94,  0
byte_2DD365:
		.BYTE	$E1,  4,$74,  3,$E1,$8C,$4A,$E1,$8A,$4A,$E1,$88,$4A,$E1,$86,$4A
		.BYTE	$E1,$82,$4A,$E1,$7E,$4A,$E1,$7A,$4A,$94,  0
byte_2DD380:
		.BYTE	$E1, $C,$5A,  3,$59,  2,$58,  1,$57,  2,$94,  0
byte_2DD38C:
		.BYTE	$E1,  4,$5A, $C, $E, $D, $C, $B, $A,  9,  8,  7,  6,  5,  4,  3
		.BYTE	  2,  1,$94,  0
byte_2DD3A0:
		.BYTE	$E1,$8C,$F2,$A6,$76,$18,$E1,$8A,$F2,$A6,$2B,$E1,$86,$F2,$A6,$2B
		.BYTE	$E1,$7E,$F2,$A6,$2B,$94,  0
byte_2DD3B7:
		.BYTE	$E1,$8C,$54,$86,  3,  7,  5,$94,$12,$F9,$F7,$94,  0
byte_2DD3C4:
		.BYTE	$E1,$8C,$F2,$AC,$71,$92,$60,$49,$FA,  3,$F7,$94,  0
byte_2DD3D1:
		.BYTE	$E1, $C,$54,  2,  8,  7,  6,  5,  4,  3,  3,  4,  5,  6,  7,$94
		.BYTE	  0
byte_2DD3E2:
		.BYTE	$E1, $C,$F2,$A2,$87,$8C,$80,$FA,  5,$F8,$94,  0
byte_2DD3EE:
		.BYTE	$E1,$8E,$5A,$83,  3, $E, $C,$94,  0
byte_2DD3F7:
		.BYTE	$E1,$8C,$94,$30,$53,$84,$80, $B,$FA,  9,$F9,$E1,$90,$54,$B0,$30
		.BYTE	$94,  0
byte_2DD409:
		.BYTE	$64,$E1,$20,$5C,$83,  3,$12,$13,$14,$15,$16,$17,$18,$19,$1A,$1B
		.BYTE	$1C,$1D,$1E,$1F,$20
byte_2DD41E:
		.BYTE	$6C,$B0,$30,$65, $C,$1C,$1D,$21,$6B,$B0,$30,$67,$98,$15,$67, $C
		.BYTE	$1D,$6A,$B0,$30,$63, $C,$1A,$1B,$1F,$69,$98,$18,$65,$C8,$42,$68
		.BYTE	$B0,$30,$60, $C,$16,$18,$1A,$67,$98,$18,$17,$6A,$90, $D,$1D,$1C
		.BYTE	$66,$B0,$30,$5E, $C,$15,$16,$18,$65,$E0,$54,$6F,$92, $C,$6F,$92
		.BYTE	  6,$6F,$98,$12,$6D,$8C,  9,$22,$24,$6C,$E0,$54,$F9,$ED,$FE
		.WORD	byte_2DD490
		.BYTE	$27,$26,$25,$24,$23,$22,$21,$FE
		.WORD	byte_2DD490
		.BYTE	$29,$2A,$2B,$2C,$2D,$2E,$2F,$79,$86,  4,$2E,$79, $C,$C2,  6,$79
		.BYTE	$BC,$30,$F9,$F3,$FE
		.WORD	byte_2DD41E
byte_2DD490:
		.BYTE	$6B,$86,  4,$21,$22,$23,$24,$25,$26,$27,$28,$FD
byte_2DD49C:
		.BYTE	$E1,$22,$54,$83,  3, $A, $B, $C, $D, $E, $F,$10,$11,$12,$13,$14
		.BYTE	$15,$16,$17,$18
byte_2DD4B0:
		.BYTE	$74,$83,  2,$2D,$26,$2D,$FA,  8,$F7,$28,$2C,$25,$2C,$FA,  8,$F9
		.BYTE	$27,$2B,$24,$2B,$FA,  8,$F9,$26,$2A,$21,$2A,$FA,  8,$F9,$26,$29
		.BYTE	$21,$29,$FA,  8,$F9,$23,$28,$20,$28,$FA,  8,$F9,$22,$27,$1F,$27
		.BYTE	$FA,  8,$F9,$21,$26,$1E,$26,$FA,  8,$F9,$FE
		.WORD	byte_2DD510
		.BYTE	$FE
		.WORD	byte_2DD510
		.BYTE	$FE
		.WORD	byte_2DD527
		.BYTE	$1F,$1E,$1D,$1C,$1B,$1A,$19,$FE
		.WORD	byte_2DD527
		.BYTE	$21,$22,$23,$24,$25,$26,$27,$F7,$26,$26,$26,$24,$26,$F9,$F9,$F8
		.BYTE	$FE
		.WORD	byte_2DD4B0
byte_2DD510:
		.BYTE	$6A,$86,  4,$67, $C,$6A,$12,$6A,$98,$12,$68,$8C,  9,$1D,$1F,$67
		.BYTE	$86,  5,$1D,$FA,  8,$F9,$FD
byte_2DD527:
		.BYTE	$18,$19,$1A,$1B,$1C,$1D,$1E,$1F,$20,$FD
byte_2DD531:
		.BYTE	$94,$30
byte_2DD533:
		.BYTE	$FE
		.WORD	byte_2DD5C4
		.BYTE	$65,$86,  4,$1A,$14,$FE
		.WORD	byte_2DD5D7
		.BYTE	$FE
		.WORD	byte_2DD5C4
		.BYTE	$65,$86,  4,$1A,$15,$FE
		.WORD	byte_2DD5D7
		.BYTE	$FE
		.WORD	byte_2DD5C4
		.BYTE	$65,$86,  4,$1A,$17,$FE
		.WORD	byte_2DD5D7
		.BYTE	$65,$86,  4,$1A,$13,$49,$65,$8C,  9,$94,$18,$65,$8C,  6,$A9, $C
		.BYTE	$B0,  6,$65,$86,  4,$1A,$15,$FE
		.WORD	byte_2DD5D7
		.BYTE	$70,$86,  4,$15,$49,$25,$60,$8C,  9,$25,$13,$6E,$86,  5,$1F,$6E
		.BYTE	$8C,  9,$25,$65,$98,$12,$24,$94, $C,$6E,$86,  5,$24,$65,$98,$12
		.BYTE	$F9,$DE,$69,$92, $C,$69,  6,$94,$24,$69,$A4, $C,$F9,$F4,$6E,$86
		.BYTE	  4,$23,$23,$49,$6C,$8C,  6,$6E,$98,$12,$67,$86,  6,$49,$1B,$1C
		.BYTE	$16,$49,$6E,$86,  4,$23,$23,$49,$6C,$8C,  6,$6E,$98,$12,$67,$8C
		.BYTE	  6,$1C,$1B,$FE
		.WORD	byte_2DD533
byte_2DD5C4:
		.BYTE	$65,$86,  4,$1A,$18,$49,$65,$8C,  9,$94,$18,$65,$8C,  6,$AE, $C
		.BYTE	$B0,  6,$FD
byte_2DD5D7:
		.BYTE	$49,$65,$8C,  9,$49,$49,$1A,$49,$1A,$FD
byte_2DD5E1:
		.BYTE	$6E,$FB,  2,$E1,$24
byte_2DD5E6:
		.BYTE	$64,$84,  3,$1C,$1F,$6F,$B0,$2A,$6C,$8C,  4,$21,$24,$FA,  7,$FB
		.BYTE	$20,$23,$20,$23,$21,$24,$21,$24,$21,$24,$22,$25,$21,$24,$FA,  4
		.BYTE	$FB,$94,$8C,  6,$2C,$77,$18,$77,$86,  4,$77,$12,$76,$98,  6,$94
		.BYTE	 $C,$2A,$75,$18,$75,$86,  4,$75,$12,$74,$98,  6,$94,$3C,$6C,$8C
		.BYTE	  4,$21,$24,$21,$24,$21,$24,$24,$21,$24,$72,$98,$12,$6B,$8C,  6
		.BYTE	$27,$20,$72,$98,$12,$27,$6B,$8C,  6,$27,$20,$70,$98,$12,$69,$8C
		.BYTE	  6,$25,$1E,$70,$98,$12,$25,$69,$8C,  6,$25,$1E,$6E,$98,$12,$67
		.BYTE	$8C,  6,$23,$1C,$6E,$98,$12,$23,$67,$8C,  6,$23,$1C,$66,$C8,$54
		.BYTE	$6D, $C,$B1,  4,$65,$BC,$30,$65,$8C,  4,$BC, $C,$B0,  4,$FE
		.WORD	byte_2DD5E6
byte_2DD677:
		.BYTE	$E1,$24
byte_2DD679:
		.BYTE	$94, $C,$5E,$84,  3,$16,$19,$69,$A4,$2A,$F7,$1D,$1D,$20,$FA,  9
		.BYTE	$FB,$1D,$21,$1D,$21,$1D,$21,$1F,$22,$1D,$21,$FA,  4,$FB,$49,$27
		.BYTE	$27,$27,$27,$26,$49,$25,$25,$25,$25,$24,$F8,$94, $C,$5E,$84,  3
		.BYTE	$16,$19,$69,$A4,$2A,$F7,$1D,$1D,$20,$1D,$20,$1D,$20,$20,$1D,$20
		.BYTE	$23,$1C,$23,$1C,$23,$23,$1C,$23,$1C,$21,$1A,$21,$1A,$21,$21,$1A
		.BYTE	$21,$1A,$1F,$18,$1F,$18,$1F,$1F,$18,$1F,$18,$17,$1E,$17,$16,$16
		.BYTE	$22,$16,$F8,$FE
		.WORD	byte_2DD679
byte_2DD6DF:
		.BYTE	$94,$60,$72,$B0,$24,$26,$72,$98,$12,$26,$70,$B0,$24,$6F,$88,  6
		.BYTE	$1D,$1B,$63,$B0,$24,$66,$98,$12,$63,$E0,$54,$68,$8C,  9,$2D,$2D
		.BYTE	$1D,$78,$86,  4,$2D,$68,$8C,  9,$2C,$1C,$1B,$2B,$2B,$1B,$76,$86
		.BYTE	  4,$2B,$66,$8C,  9,$2A,$1A,$64,$84,  3,$1C,$1F,$6F,$D4,$48,$70
		.BYTE	$8C, $C,$49,$25,$49,$25,$49,$25,$49,$1E,$49,$1E,$49,$49,$1E,$49
		.BYTE	$1E,$49,$1E,$49,$FA,  3,$F1,$49,$1E,$FA,  8,$FB,$FE
		.WORD	byte_2DD6DF
byte_2DD73E:
		.BYTE	$73,$E1,$26
byte_2DD741:
		.BYTE	$6C,$E0,$80,$95,$B0,$2E,$6C,  3,$6D,  4,$70,  3,$71,  4,$73,  3
		.BYTE	$74,  4,$77,  3,$2D,$77,  4,$74,  3,$73,  4,$71,  3,$70,  4,$6D
		.BYTE	  3,$6C,$E0,$80,$E0,$54,$6C,$86,$60,$22,$70, $C,$26,$25,$6D,  6
		.BYTE	$21,$68, $C,$21,$22,$70,  6,$26,$28,$29,$28,$26,$25,$22,$21,$20
		.BYTE	$68, $C,$20,$21,$70,  6,$26,$28,$29,$2B,$2C,$2B,$29,$73, $C,$71
		.BYTE	  3,$28,$71,  6,$70, $C,$6D,  3,$25,$6D,  6,$6C,$48,$6C,  4,$20
		.BYTE	$1D,$1A,$1D,$20,$6C,$E0,$54,$78,$B0,$2E,$78,  4,$2E,$31,$32,$31
		.BYTE	$2E,$2D,$2C,$29,$26,$29,$2C,$78,$E0,$60,$74,$8C,  9,$74,$18,$29
		.BYTE	$29,$74,$8C, $C,$75,$E0,$54,$68,$8C,  9,$68,$18,$1D,$1D,$68,$8C
		.BYTE	 $C,$69,$E0,$54,$FE
		.WORD	byte_2DD741
byte_2DD7D8:
		.BYTE	$E1,$1C
byte_2DD7DA:
		.BYTE	$65,$8C,  9,$19,$1A,$14,$FA,$16,$F7,$1B,$66,$18,$1B,$1B,$66, $C
		.BYTE	$1A,$19,$1A,$14,$F9,$FA, $F,$5A,$18, $F, $F,$5A, $C, $E, $D, $E
		.BYTE	$14,$F9,$FA,$FE
		.WORD	byte_2DD7DA
byte_2DD800:
		.BYTE	$74,$8C,  9,$49,$FA,$2C,$F9,$2D,$2D,$49,$2D,$49,$2D,$49,$C3, $C
		.BYTE	$78,$E0,$54,$6C,$8C,  9,$21,$49,$21,$49,$21,$49,$B7, $C,$6C,$E0
		.BYTE	$54,$FE
		.WORD	byte_2DD800
byte_2DD824:
		.BYTE	$5A,$E1,$28
byte_2DD827:
		.BYTE	$6C,$B0,$2E,$1F,$1D,$1C,$1A,$18,$62,$E0,$5D,$68,$B0,$2E,$1E,$1F
		.BYTE	$1E,$B3,$30,$67,$18,$B1,$17,$65,$8C, $B,$18,$17,$15,$5F,$B0,$2E
		.BYTE	$FE
		.WORD	byte_2DD827
byte_2DD84A:
		.BYTE	$E1,$28
byte_2DD84C:
		.BYTE	$68,$B0,$2E,$1C,$1A,$65,$18,$AE,$16,$62,$B0,$2E,$15,$60,$18,$5F
		.BYTE	 $C,$12,$5F,$30,$1A,$1B,$1C,$1B,$F7,$1A,$19,$18,$17,$15,$14,$12
		.BYTE	$10,$F8,$FE
		.WORD	byte_2DD84C
byte_2DD871:
		.BYTE	$F0,  2
byte_2DD873:
		.BYTE	$7F,$98,$60,$7D, $C,$30,$7D,$18,$2F,$7B, $C,$2F,$2D,$2B,$78,$B0
		.BYTE	$2C,$78,$98,$60,$76, $C,$29,$76,$18,$74, $C,$2B,$73,$48,$7A,$18
		.BYTE	$C6,$17,$C6,$60,$7D, $C,$30,$2F,$2D,$2F,$30,$32,$34,$7D,$18,$7B
		.BYTE	 $C,$2F,$78,$18,$7A, $C,$30,$2F,$2D,$2B,$2D,$73,$48,$7A,$18,$FE
		.WORD	byte_2DD873
byte_2DD8B5:
		.BYTE	$96,$E1,  0,$67,$98,$60,$67,$24,$68, $C,$67,$18,$21,$1F,$1D,$67
		.BYTE	$48,$66,$83,$80,$1E,$FA,  4,$F9,$66,$B0, $C,$FF
byte_2DD8D1:
		.BYTE	$8A,$E1,$2A
byte_2DD8D4:
		.BYTE	$FE
		.WORD	byte_2DD8E2
		.BYTE	$B7,$60,$6E,$18,$24,$28,$71,$C8,$80,$E0,$3C
byte_2DD8E2:
		.BYTE	$6A,$98,$60,$21,$24,$78,$48,$C1,$80,$BE,$42,$6A,$18,$21,$24,$78
		.BYTE	$C8,$60,$76,$30,$74,$18,$71,$C8,$42,$6C,$18,$23,$26,$29,$2D,$2F
		.BYTE	$76,$24,$75, $C,$74,$18,$71,$C8,$42,$F9,$CA,$B7,$60,$23,$6F,$E0
		.BYTE	$54,$94,$30,$7B,$8C,  6,$30,$7B,$98,  9,$2F,$79,$8C,  6,$2E,$79
		.BYTE	$98,  9,$2F,$7B,$48,$49,$FB,  5,$FE
		.WORD	byte_2DD942
		.BYTE	$6E,$98, $C,$62, $C,$1B,$1E,$23,$6C,$18,$60, $C,$1A,$1D,$6C,$A4
		.BYTE	$24,$6A,$18,$B3,$15
byte_2DD942:
		.BYTE	$67,$C8,$45,$1C,$67,$18,$21,$1F,$67,$24,$64, $C,$1A,$1C,$6A,$30
		.BYTE	$B3,$2D,$6A,$98,$15,$1D,$6A,$B0,$5D,$68,$60,$6C,$C8,$45,$21,$6C
		.BYTE	$18,$28,$26,$23,$6C,$24,$6E, $C,$6A,$98, $C,$63, $C,$1C,$1F,$24
		.BYTE	$F9,$B9,$6C,$18,$60, $C,$19,$1C,$21,$6A,$18,$FF,$AD,$60, $C,$FF
		.BYTE	$A6,$18,$FF,$9F,$1A,$FF,$98,$1F,$FF,$91,$69,$98,$18,$FF,$8A,$1C
		.BYTE	$FF,$83,$1A,$FF,$8A,$FB,  0,$FE
		.WORD	byte_2DD8E2
byte_2DD99C:
		.BYTE	$E1, $A,$94,$98,$60,$FE
		.WORD	byte_2DDA51
		.BYTE	$1D,$15,$1C,$15,$1A,$15,$FE
		.WORD	byte_2DDA51
		.BYTE	$F7,$15,$18,$FA,  4,$FB,$15,$F8
byte_2DD9B5:
		.BYTE	$E1,$2C
byte_2DD9B7:
		.BYTE	$94,$48,$5E,$8C,  9,$FF,$91,$15,$FF,$98,$17,$FF,$9F,$1A,$FF,$A6
		.BYTE	$1D,$FF,$AD,$21,$FF,$B4,$FE
		.WORD	byte_2DDA18
		.BYTE	$49,$1A,$1A,$49,$18,$18,$23,$B7,$18,$1F,$1D,$1C,$1A,$94,$48,$5E
		.BYTE	$8C,  9,$15,$17,$1A,$1D,$21,$FE
		.WORD	byte_2DDA18
		.BYTE	$49,$1A,$1A,$49,$1F,$1F,$F7,$1C,$49,$28,$FA,  8,$FC,$F8,$73,$96
		.BYTE	  7,$62,  2,$63,$98, $C,$63,$16,$62,  2,$63,$18,$63,$18,$18,$FE
		.WORD	byte_2DDA33
		.BYTE	$12,$11,$17,$FE
		.WORD	byte_2DDA33
		.BYTE	$13, $E,$18,$FE
		.WORD	byte_2DD9B7
byte_2DDA18:
		.BYTE	$94,$98, $C,$1F,$1F,$49,$1F,$1F,$94,$48,$5E,$8C,  9,$15,$17,$1A
		.BYTE	$1D,$21,$94,$98, $C,$1F,$1F,$FA,  6,$F8,$FD
byte_2DDA33:
		.BYTE	$94,$98, $C,$13,$13,$49,$14,$14,$49,$13,$13,$49,$13,$13,$49,$15
		.BYTE	$15,$FA,  4,$FA,$49,$17,$17,$FA,  4,$FA,$5B,$C8,$42,$FD
byte_2DDA51:
		.BYTE	$63,  6,$17,$18,$17,$63,$A4, $C,$63, $C,$FD
byte_2DDA5C:
		.BYTE	$F7,$49,$FE
		.WORD	byte_2DDB12
		.BYTE	$65,$48,$FE
		.WORD	byte_2DDB12
		.BYTE	$18,$1B,$FA,  4,$FB,$18,$F8
byte_2DDA6D:
		.BYTE	$FE
		.WORD	byte_2DDAAF
		.BYTE	$B0,$18,$B4, $C,$1E,$B5,$18,$29,$28,$26,$24,$23,$FE
		.WORD	byte_2DDAAF
		.BYTE	$B5,$18,$BF, $C,$29,$24,$1F,$1C,$63,$8C,  9,$1A,$1C,$1F,$21,$24
		.BYTE	$F7,$2B,$FA,  8,$FC,$F8,$76,$98,  9,$94,$30,$94,$48,$FE
		.WORD	byte_2DDADD
		.BYTE	$1B,$1A,$13,$FE
		.WORD	byte_2DDADD
		.BYTE	$19, $E,$65,$98,$17,$1C,$1E,$FE
		.WORD	byte_2DDA6D
byte_2DDAAF:
		.BYTE	$94,$48,$49,$63,$98,$18,$BE, $C,$28,$B5,$18,$BE, $C,$28,$94,$48
		.BYTE	$49,$6E,$98,$18,$BF, $C,$29,$B5,$18,$BF, $C,$29,$B0,$18,$BF, $C
		.BYTE	$29,$B5,$18,$BF, $C,$29,$F9,$F4,$B4,$18,$BA, $C,$24,$FD
byte_2DDADD:
		.BYTE	$63,$98,$18,$B2, $C,$1C,$AD,$18,$B2, $C,$1C,$AB,$18,$AF, $C,$19
		.BYTE	$AB,$18,$AF, $C,$19,$B0,$18,$B3, $C,$1D,$AF,$18,$B3, $C,$1D,$AE
		.BYTE	$18,$B3, $C,$1D,$AD,$18,$B3, $C,$1D,$A9,$18,$B3, $C,$1D,$FA,  4
		.BYTE	$F8,$63,$C8,$42,$FD
byte_2DDB12:
		.BYTE	$21,$20,$21,$20,$21,$21,$FD
byte_2DDB19:
		.BYTE	$64,$E1,$2A,$7F,$88,  7,$30,$30,$2D,$2D,$29,$32,$2F,$2F,$2B,$2B
		.BYTE	$28,$2D,$29,$26,$24,$23,$21,$20,$67,  3,$6B,  2,$6E,  3,$73,$A0
		.BYTE	$60,$71,$30,$FF,$88,$FE
		.WORD	byte_2DD8D4
byte_2DDB41:
		.BYTE	$E1,$2A,$7B,$88,  7,$2D,$2D,$29,$29,$26,$2F,$2B,$2B,$28,$28,$23
		.BYTE	$29,$26,$6C,$90,$60,$1E,$23,$6B,  8,$21,$23,$20,$FF,$5F,$6C,  4
		.BYTE	$1D,$1A,$17,$FF,$5A,$15,$17,$1A,$1D,$FF,$55,$6C,$10,$FE
		.WORD	byte_2DD9B5
byte_2DDB71:
		.BYTE	$65,$B0,$60,$1C,$68,$20,$66,$10,$67,$30,$1F,$FE
		.WORD	byte_2DDA6D
byte_2DDB7F:
		.BYTE	$69,$FE
		.WORD	byte_2DDDD2
		.BYTE	$FE
		.WORD	byte_2DDEDE
		.BYTE	$E1,$5A,$95,$E0,$60,$FE
		.WORD	byte_2DDDFD
		.BYTE	$6F,$E0,$80,$E1,$5E,$95,$B0,$30,$49,$FE
		.WORD	byte_2DDE5C
		.BYTE	$6C, $C,$23,$24,$71,$36,$E1,$62,$71,  6,$E1,$60,$73, $C,$29,$2B
		.BYTE	$FB,  4,$FE
		.WORD	byte_2DDE5C
		.BYTE	$6F, $C,$26,$28,$FB,  0,$79,$BC,$60,$E1,$5E,$95,$8C,$60,$E1,$60
		.BYTE	$79,$88,  5,$2E,$2E,$7B,$E0,$54,$FE
		.WORD	byte_2DDDFD
		.BYTE	$6F,$E0,$80,$95,$54,$E1,$5E,$95, $C,$F9,$C2,$FF,$96,$E1,$64,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,$FD,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  4,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,$FD,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FF,$8C,$6F,$86,  4,$24,$24,$24,$FF,$82,$6F,$8C,  4,$24,$FF,$78
		.BYTE	$BA,  6,$24,$FF,$69,$FE
		.WORD	byte_2DDDD2
		.BYTE	$FE
		.WORD	byte_2DDEDE
		.BYTE	$FF,$69,$E1,$16,$82,$8C,$61,$28,$24,$1F,$1C,$18,$13,$10,$E1,$18
		.BYTE	$FB,$FE
		.WORD	byte_2DEAFE
		.BYTE	$9E,$FE
		.WORD	byte_2DDEC5
		.BYTE	$FE
		.WORD	byte_2DDEAA
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDDFD
		.BYTE	$6F,$E0,$80,$E1,$5E,$95,$B0,$30,$49,$FE
		.WORD	byte_2DDE5C
		.BYTE	$6C, $C,$23,$24,$71,$36,$E1,$62,$71,  6,$E1,$60,$73, $C,$29,$2B
		.BYTE	$FB,  4,$FE
		.WORD	byte_2DDE5C
		.BYTE	$6F, $C,$26,$28,$FB,  0,$79,$BC,$60,$E1,$5E,$95,$8C,$60,$E1,$60
		.BYTE	$79,$88,  5,$2E,$2E,$7B,$E0,$54,$FE
		.WORD	byte_2DDDFD
		.BYTE	$6F,$E0,$80,$95,$54,$E1,$5E,$95, $C,$F9,$C2,$FF,$96,$E1,$64,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,$FD,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  4,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,$FD,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDE8F
		.BYTE	$FF,$8C,$6F,$86,  4,$24,$24,$24,$FF,$82,$6F,$8C,  4,$24,$FF,$78
		.BYTE	$BA,  6,$24,$FF,$69,$FE
		.WORD	byte_2DDDD2
		.BYTE	$E1,$5C,$76,$98,$36,$78,$30,$7A,$18,$7B, $C,$32,$76,$3C,$67,$8C
		.BYTE	 $B,$1D,$1F,$6C,$88,  7,$1F,$1D,$23,$21,$1F,$24,$23,$21,$26,$24
		.BYTE	$26,$E1,$66,$72,$8C,  4,$6D,$84,  2,$27,$29,$79,$C8,$42,$66,$8C
		.BYTE	  4,$61,$84,  2,$1B,$1D,$6D,$C8,$42,$F9,$F3,$66,$8C,  4,$61,$84
		.BYTE	  2,$1B,$1D,$6D,$98,$12,$6D,$8C,  4,$66,$84,  2,$1D,$22,$6F,$98
		.BYTE	$12,$6C,$8C,  4,$6C,$84,  2,$21,$21,$69,$98,$12,$6B,$8C,  4,$6B
		.BYTE	$84,  2,$20,$20,$68,$98,$12,$65,$8C,  4,$65,$84,  2,$65,$88,  4
		.BYTE	$F9,$F5,$66,$8C,  4,$66,$84,  2,$66,$88,  4,$F9,$F5,$67,$8C,  4
		.BYTE	$67,$84,  2,$67,$88,  4,$F9,$F5,$68,$8C,  4,$68,$84,  2,$68,$88
		.BYTE	  4,$F9,$F5,$FE
		.WORD	byte_2DDEA0
		.BYTE	$FB,  1,$FE
		.WORD	byte_2DDEA0
		.BYTE	$FB,  2,$FE
		.WORD	byte_2DDEA0
		.BYTE	$FB,  3,$FE
		.WORD	byte_2DDEA0
		.BYTE	$FB,  4,$FE
		.WORD	byte_2DDEA0
		.BYTE	$FE
		.WORD	byte_2DDEA0
		.BYTE	$FB,  5,$FE
		.WORD	byte_2DDEA0
		.BYTE	$FB,  0,$FE
		.WORD	byte_2DDDD2
		.BYTE	$76,$98,$30,$78,$2A,$FE
		.WORD	byte_2DDF0B
		.BYTE	$7A,$18,$7B, $C,$7D, $C,$7E,$A4,$60,$FE
		.WORD	byte_2DDF12
		.BYTE	$80,$12,$FE
		.WORD	byte_2DDF0B
		.BYTE	$80,$12,$FE
		.WORD	byte_2DDF0B
		.BYTE	$82,$3C,$FE
		.WORD	byte_2DDF12
		.BYTE	$80,  6,$FE
		.WORD	byte_2DDF0B
		.BYTE	$80,  6,$FE
		.WORD	byte_2DDF0B
		.BYTE	$82,$3C,$FE
		.WORD	byte_2DDF12
		.BYTE	$6D,  6,$FE
		.WORD	byte_2DDF0B
		.BYTE	$6D,  6,$FE
		.WORD	byte_2DDF0B
		.BYTE	$6F,$E0,$80,$95,$A4,$60,$FE
		.WORD	byte_2DDF12
		.BYTE	$6D,$12,$FE
		.WORD	byte_2DDF0B
		.BYTE	$6D,$12,$FE
		.WORD	byte_2DDF0B
		.BYTE	$6F,$E0,$80,$95,$8C,$60,$FE
		.WORD	byte_2DDF12
		.BYTE	$63,$C8,$80,$95,$18,$EF,$95,$60,$94,  0
byte_2DDDD2:
		.BYTE	$E1,$9E,$6A,$88,  5,$24,$26,$76,$C8,$36,$74,$88,  5,$29,$2D,$76
		.BYTE	$C8,$36,$6A,$88,  5,$24,$26,$76,$8C,  4,$30,$79,$B0,$1E,$78,$88
		.BYTE	  5,$2B,$29,$73,$84,  3,$29,$76,$C0,$2C,$FD
byte_2DDDFD:
		.BYTE	$E1,$5C,$6F,$98,$60,$2B,$29,$2E,$76,$B6,$60,$E1,$5E,$76,$92,$60
		.BYTE	$E1,$5C,$72,$18,$74, $C,$2B,$72,$18,$26,$22,$6F,$DA,$60,$E1,$5E
		.BYTE	$95,$9E,$60,$E1,$5C,$79,$98,$60,$78, $C,$29,$6F,$98,$60,$E1,$5E
		.BYTE	$6F,$98,$60,$E1,$5C,$79,$18,$78, $C,$29,$76,$92,$60,$E1,$5E,$76
		.BYTE	$86,$60,$E1,$5C,$7D, $C,$33,$30,$2E,$76,$98,$30,$74, $C,$2B,$26
		.BYTE	$27,$71,$1E,$E1,$5E,$71,  6,$E1,$5C,$6F, $C,$6D,$98,$60,$FD
byte_2DDE5C:
		.BYTE	$E1,$60,$73,$8C,$60,$71,  6,$24,$6E,$12,$E1,$62,$6E,$12,$E1,$60
		.BYTE	$6C, $C,$23,$24,$28,$71,  6,$24,$6E,$12,$E1,$62,$6E,$12,$E1,$60
		.BYTE	$6F, $C,$26,$2B,$73,$8C,$60,$71,  6,$24,$6E,$12,$E1,$62,$6E,$12
		.BYTE	$E1,$60,$FD
byte_2DDE8F:
		.BYTE	$6D,$86,  3,$22,$22,$22,$6D,$8C,  4,$6D,$18,$B8,$16,$6D,$8C,  4
		.BYTE	$FD
byte_2DDEA0:
		.BYTE	$69,$8C,  4,$69,$84,  2,$69,$88,  4,$FD
byte_2DDEAA:
		.BYTE	$59,$90,$10,$15,$1D, $E,$17,$1F, $E,$18,$21, $E,$16,$1D,  9,$10
		.BYTE	$18, $E,$15,$1E, $E,$13,$1A,$1E,$1E,$15,$FD
byte_2DDEC5:
		.BYTE	 $E,$15,$1D, $E,$17,$1F, $E,$17,$1F, $E,$16,$20,$15,$1C,$25,$15
		.BYTE	$1C,$26,$21,$28,$28,$28,$21,$19,$FD
byte_2DDEDE:
		.BYTE	$76,$98,$30,$78,$24,$E1,$5A,$95, $C,$E1,$58,$7A,$18,$7B, $C,$7D
		.BYTE	 $C,$7E,$24,$E1,$5A,$95, $C,$E1,$58,$80,$12,$E1,$5A,$95,  6,$E1
		.BYTE	$58,$80,$12,$E1,$5A,$95,  6,$E1,$58,$82,$E0,$80,$FD
byte_2DDF0B:
		.BYTE	$E1,$5A,$95,  6,$E1,$58,$FD
byte_2DDF12:
		.BYTE	$E1,$5A,$95, $C,$E1,$58,$FD
byte_2DDF19:
		.BYTE	$94,$18,$FE
		.WORD	byte_2DE10B
		.BYTE	$FE
		.WORD	byte_2DE27B
		.BYTE	$6F,$18,$18,$18,$18,$E1,$6A,$63,  8,$1B,$1F,$F9,$FA,$16,$1A,$1D
		.BYTE	$F9,$FB,$16,$1B,$1F,$F9,$FB,$15,$1B,$1F,$15,$18,$1F,$14,$18,$1D
		.BYTE	$F9,$FB,$13,$16,$1D,$13,$1A,$1D,$1C,$1F,$1C,$1F,$28,$2B,$28,$1F
		.BYTE	$1C,$1F,$1C,$18,$FE
		.WORD	byte_2DE131
		.BYTE	$1C,$18,$1C,$1F,$22,$26,$2B,$2E,$32,$2E,$2B,$28,$26,$22,$1F,$1C
		.BYTE	$FE
		.WORD	byte_2DE16E
		.BYTE	$FE
		.WORD	byte_2DE131
		.BYTE	$1C,$18,$1C,$1F,$FA,  4,$F9,$FE
		.WORD	byte_2DE16E
		.BYTE	$FE
		.WORD	byte_2DE131
		.BYTE	$1C,$18,$1C,$1F,$FA,  4,$F9,$E1,$6E,$F7,$1D,$FA,$38,$FC,$1F,$FA
		.BYTE	  9,$FC,$F8,$94,$10,$FE
		.WORD	byte_2DE10B
		.BYTE	$FE
		.WORD	byte_2DE27B
		.BYTE	$E1,$16,$6F,$8C,$61,$24,$1F,$1C,$18,$13,$10, $C,$E1,$18,$FB,$FE
		.BYTE	$FE
		.WORD	byte_2DE23F
		.BYTE	$FE
		.WORD	byte_2DE25F
		.BYTE	$FE
		.WORD	byte_2DE23F
		.BYTE	$FB,  0,$E1,$6A,$63,  8,$1B,$1F,$F9,$FA,$16,$1A,$1D,$F9,$FB,$16
		.BYTE	$1B,$1F,$F9,$FB,$15,$1B,$1F,$15,$18,$1F,$14,$18,$1D,$F9,$FB,$13
		.BYTE	$16,$1D,$13,$1A,$1D,$1C,$1F,$1C,$1F,$28,$2B,$28,$1F,$1C,$1F,$1C
		.BYTE	$18,$FE
		.WORD	byte_2DE131
		.BYTE	$1C,$18,$1C,$1F,$22,$26,$2B,$2E,$32,$2E,$2B,$28,$26,$22,$1F,$1C
		.BYTE	$FE
		.WORD	byte_2DE16E
		.BYTE	$FE
		.WORD	byte_2DE131
		.BYTE	$1C,$18,$1C,$1F,$FA,  4,$F9,$FE
		.WORD	byte_2DE16E
		.BYTE	$FE
		.WORD	byte_2DE131
		.BYTE	$1C,$18,$1C,$1F,$FA,  4,$F9,$E1,$6E,$F7,$1D,$FA,$38,$FC,$1F,$FA
		.BYTE	  9,$FC,$F8,$94,$10,$FE
		.WORD	byte_2DE10B
		.BYTE	$E1,$6C,$60,  8,$18,$1D,$21,$24,$29,$17,$1A,$1F,$23,$26,$2B,$13
		.BYTE	$17,$1A,$1F,$23,$26,$25,$10,$13,$15,$19,$1C,$18,$17,$15,$1A,$18
		.BYTE	$17,$21,$1F,$1D,$20,$20,$1D,$E1,$70,$69,$B0,$2A,$72,$8C,  4,$72
		.BYTE	$84,  2,$27,$27,$70,$C8,$42,$63,$8C,  4,$63,$84,  2,$18,$18,$62
		.BYTE	$C8,$42,$61,$8C,  4,$61,$84,  2,$16,$16,$5F,$B0,$2A,$69,$8C,  4
		.BYTE	$69,$84,  2,$1E,$1E,$66,$98,$12,$6A,$8C,  4,$6A,$84,  2,$1F,$1F
		.BYTE	$67,$98,$12,$66,$8C,  4,$66,$84,  2,$1B,$1B,$66,$98,$12,$63,$8C
		.BYTE	  4,$63,$84,  2,$18,$18,$F7,$15,$FA,  6,$FC,$16,$FA,  6,$FC,$17
		.BYTE	$FA,  6,$FC,$18,$FA,  6,$FC,$19,$FA,$15,$FC,$1F,$F8,$94,$10,$FE
		.WORD	byte_2DE10B
		.BYTE	$E1,$68,$60,  8,$18,$1D,$21,$24,$29,$17,$1A,$1F,$23,$26,$2B,$27
		.BYTE	$23,$1E,$1B,$1E,$23,$29,$26,$22,$1D,$22,$26,$76,$88,  8,$28,$24
		.BYTE	$1F,$1C,$1F,$24,$1F,$1C,$65,$8C,  6,$1A,$F9,$EF,$67,  6,$1F,$18
		.BYTE	$1C,$1F,$1C,$18,$1F,$FA,  3,$F4,$1F,$16,$1B,$1F,$1B,$16,$1F,$1B
		.BYTE	$57,$8C,  6,  7,$57,$8C,  6,  7,$57,$8C,  6,  7,$57,$8C,  6,  7
		.BYTE	$57,$98, $C,$57,$C8,$49,$95,$B0,$18,$94,  0
byte_2DE10B:
		.BYTE	$E1,$72,$94,$18,$57,$88,  6, $C, $C,$57, $C, $C,$94,$18,$F9,$F0
		.BYTE	$49,$5A,  8, $F, $F,$5A, $C, $F,$94,$18,$49,$57,  8, $C, $C,$57
		.BYTE	 $C, $C,$94,$98,$60,$FD
byte_2DE131:
		.BYTE	$6A,  6,$22,$27,$22,$1F,$22,$27,$22,$21,$24,$21,$1D,$21,$1D,$18
		.BYTE	$1D,$F9,$ED,$66, $C,$6A,  6,$22,$1A,$22,$1F,$1B,$63, $C,$66,  6
		.BYTE	$1F,$18,$1F,$1B,$18,$1E,$18,$1B,$1E,$22,$1E,$1B,$18,$16,$1D,$1A
		.BYTE	$1D,$1A,$1D,$1A,$16,$1C,$18,$1C,$1F,$FA,  4,$F9,$FD
byte_2DE16E:
		.BYTE	$E1,$6C,$21,$18,$1C,$21,$1C,$18,$15,$18,$15,$18,$1C,$1D,$1C,$18
		.BYTE	$15,$18,$1F,$17,$1A,$1F,$1A,$17,$13,$17,$1F,$17,$1A,$1F,$1A,$17
		.BYTE	$1A,$1F,$1D,$15,$18,$1D,$18,$15,$18,$1D,$F9,$F6,$23,$1A,$1F,$23
		.BYTE	$1F,$1A,$17,$1A,$1F,$17,$1A,$1F,$23,$1F,$1A,$1F,$1D,$15,$18,$1C
		.BYTE	$1D,$1C,$18,$15,$F9,$F6,$1F,$17,$1A,$1F,$1F,$17,$1A,$17,$F9,$F6
		.BYTE	$21,$15,$18,$1C,$18,$15,$18,$1C,$F9,$F6,$1F,$22,$1B,$1F,$22,$1F
		.BYTE	$1B,$22,$1F,$22,$1B,$1F,$6D,  8,$1F,$1F,$28,$24,$28,$1F,$24,$28
		.BYTE	$2B,$28,$24,$1F,$1C,$18,$66,  4, $F,$13,$18,$1B,$1F,$27,$24,$1F
		.BYTE	$24,$1F,$1B,$1A, $E,$11,$16,$1A,$1D,$26,$22,$1D,$22,$1D,$1A,$1B
		.BYTE	 $F,$13,$16,$1B,$1F,$27,$22,$1F,$22,$1F,$1C,$18, $C, $F,$21,$18
		.BYTE	$1B,$24,$1F,$1B,$1F,$18,$15,$18, $C,$11,$14,$18,$1D,$24,$20,$1D
		.BYTE	$20,$1D,$18,$22,$1F,$1D,$1A,$16,$13, $E,$13,$16,$1A,$1F,$1D,$1C
		.BYTE	$1F,$FA,  6,$FB,$13,$14,$15,$16,$17,$18,$19,$1A,$1B,$1C,$1D,$1E
		.BYTE	$FD
byte_2DE23F:
		.BYTE	$E1,$16,$94,  8,$5C,$90,$10,$1A,$21,$13,$1A,$23,$15,$1A,$24,$11
		.BYTE	$1A,$1A, $C,$15,$1C,$12,$1A,$21,$10,$16,$1C,$21,$1A,$5D,  8,$FD
byte_2DE25F:
		.BYTE	$4A,$5C,$10,$1A,$21,$13,$1A,$23,$13,$1A,$23,$14,$1A,$22,$19,$21
		.BYTE	$28,$1A,$21,$28,$25,$2B,$2B,$25,$1C,$60,  8,$FD
byte_2DE27B:
		.BYTE	$E1,$68,$63,$86,$12,$1D,$21,$24,$29,$24,$21,$1D,$1A,$1F,$23,$26
		.BYTE	$2B,$26,$23,$1F,$69,  4,$23,$27,$2A,$2F,$2A,$27,$23,$1E,$1B,$17
		.BYTE	$1B,$1A,$1D,$22,$26,$29,$2E,$32,$2E,$29,$26,$22,$1D,$1C,$1F,$1C
		.BYTE	$1F,$24,$28,$2B,$30,$34,$30,$2B,$28,$2B,$28,$24,$28,$24,$1F,$24
		.BYTE	$1F,$1C,$18,$1C,$1F,$FD
byte_2DE2C1:
		.BYTE	$94,$18,$FE
		.WORD	byte_2DE40D
		.BYTE	$FE
		.WORD	byte_2DE533
		.BYTE	$F8,$73,$98,$18,$94,$48,$94,$60,$94,$60,$94,$60,$63,$88,  8,$1C
		.BYTE	$1F,$28,$24,$28,$2B,$28,$24,$28,$24,$1F,$FE
		.WORD	byte_2DE427
		.BYTE	$18,$1F,$24,$28,$2B,$2E,$34,$37,$3A,$37,$34,$30,$2E,$2B,$28,$24
		.BYTE	$FE
		.WORD	byte_2DE45D
		.BYTE	$FE
		.WORD	byte_2DE427
		.BYTE	$FE
		.WORD	byte_2DE4F1
		.BYTE	$FE
		.WORD	byte_2DE45D
		.BYTE	$FE
		.WORD	byte_2DE427
		.BYTE	$FE
		.WORD	byte_2DE4F1
		.BYTE	$F7,$27,$FA,$18,$FC,$26,$FA,  8,$FC,$27,$FA,$18,$FC,$28,$FA,  9
		.BYTE	$FC,$F8,$94,$10,$FE
		.WORD	byte_2DE40D
		.BYTE	$FE
		.WORD	byte_2DE533
		.BYTE	$94,$60,$FE
		.WORD	byte_2DE4FC
		.BYTE	$FE
		.WORD	byte_2DE51A
		.BYTE	$FE
		.WORD	byte_2DE4FC
		.BYTE	$94,$60,$94,$60,$94,$60,$63,$88,  8,$1C,$1F,$28,$24,$28,$2B,$28
		.BYTE	$24,$28,$24,$1F,$FE
		.WORD	byte_2DE427
		.BYTE	$18,$1F,$24,$28,$2B,$2E,$34,$37,$3A,$37,$34,$30,$2E,$2B,$28,$24
		.BYTE	$FE
		.WORD	byte_2DE45D
		.BYTE	$FE
		.WORD	byte_2DE427
		.BYTE	$FE
		.WORD	byte_2DE4F1
		.BYTE	$FE
		.WORD	byte_2DE45D
		.BYTE	$FE
		.WORD	byte_2DE427
		.BYTE	$FE
		.WORD	byte_2DE4F1
		.BYTE	$F7,$27,$FA,$18,$FC,$26,$FA,  8,$FC,$27,$FA,$18,$FC,$28,$FA,  9
		.BYTE	$FC,$F8,$94,$10,$FE
		.WORD	byte_2DE40D
		.BYTE	$68,$30,$1D,$1C,$15,$68,$98,$12,$1C,$1A,$22,$F7,$23,$1F,$1F,$1F
		.BYTE	$1F,$1D,$1C,$1C,$1C,$1C,$1B,$1A,$1A,$1A,$1A,$18,$25,$25,$25,$25
		.BYTE	$1F,$28,$28,$28,$28,$25,$23,$23,$23,$23,$24,$21,$21,$21,$21,$1F
		.BYTE	$FA, $C,$FC,$21,$FA, $C,$FC,$23,$FA,$15,$FC,$29,$F8,$94,$10,$FE
		.WORD	byte_2DE40D
		.BYTE	$68,$30,$1D,$F7,$17,$1B,$1E,$23,$27,$2A,$16,$1D,$22,$26,$29,$2E
		.BYTE	$18,$1F,$24,$28,$24,$28,$2B,$28,$24,$22,$22,$18,$1F,$24,$28,$24
		.BYTE	$28,$2B,$28,$24,$1D,$1D,$18,$1C,$1F,$24,$28,$24,$1F,$1C,$FA,  3
		.BYTE	$F5,$1B,$1F,$22,$27,$22,$1F,$1B,$1F,$F8,$28,$2B,$FA,  8,$FB,$73
		.BYTE	$98, $C,$67,$83,$80,$1F,$FA, $C,$F9,$67,$E0,$48,$94,  0
byte_2DE40D:
		.BYTE	$F7,$49,$28,$28,$28,$28,$28,$49,$F9,$F7,$49,$2B,$2B,$2B,$2B,$2B
		.BYTE	$49,$49,$28,$28,$28,$28,$28,$49,$F8,$FD
byte_2DE427:
		.BYTE	$66,$8C,  9,$1B,$49,$1B,$FA,  4,$F7,$63,$86,  6,$24,$27,$2B,$2E
		.BYTE	$2B,$27,$24,$15,$21,$24,$27,$2B,$27,$24,$21,$14,$20,$24,$27,$2A
		.BYTE	$27,$24,$20,$13,$1F,$22,$26,$29,$26,$22,$1F,$18,$1F,$24,$28,$24
		.BYTE	$1F,$24,$28,$F9,$F6,$FD
byte_2DE45D:
		.BYTE	$1D,$21,$24,$29,$24,$21,$1D,$21,$1D,$21,$24,$21,$24,$21,$1D,$21
		.BYTE	$1C,$1F,$23,$26,$23,$1F,$1C,$1F,$1C,$1F,$23,$28,$23,$1F,$23,$28
		.BYTE	$1A,$1D,$21,$24,$21,$1D,$21,$24,$F9,$F6,$1F,$23,$26,$2B,$26,$23
		.BYTE	$1F,$23,$1C,$1F,$23,$28,$2B,$28,$23,$1C,$1A,$1D,$21,$24,$26,$24
		.BYTE	$21,$1D,$F9,$F6,$1C,$1F,$23,$26,$28,$26,$23,$1F,$F9,$F6,$11,$1D
		.BYTE	$21,$24,$21,$1D,$21,$24,$F9,$F6,$F7,$1B,$1F,$22,$27,$2B,$27,$22
		.BYTE	$1F,$1B,$1F,$22,$27,$1F,$27,$1B,$18,$1F,$24,$28,$2B,$30,$34,$30
		.BYTE	$2B,$28,$24,$1F,$F8,$63,$B0,$24,$16,$16,$15,$14,$13,$F7,$18,$1C
		.BYTE	$1F,$24,$1F,$1C,$F9,$F8,$1B,$1C,$1D,$1E,$1F,$20,$21,$22,$23,$24
		.BYTE	$25,$26,$F8,$FD
byte_2DE4F1:
		.BYTE	$18,$1F,$24,$28,$24,$1F,$24,$28,$F9,$F6,$FD
byte_2DE4FC:
		.BYTE	$7D,$98,$16,$39,$82,$C8,$46,$80,$8C, $B,$34,$7D,$98,$16,$7B,$8C
		.BYTE	 $B,$2E,$30,$2D,$7F,$98,$16,$7D,$B0,$30,$7D,$E0,$5D,$FD
byte_2DE51A:
		.BYTE	$84,$98,$16,$3C,$86,$C8,$45,$82,$8C, $B,$35,$7F,$98,$16,$80,$8C
		.BYTE	 $B,$37,$84,$E0,$60,$84,$E0,$5C,$FD
byte_2DE533:
		.BYTE	$F7,$1D,$21,$24,$29,$2D,$29,$24,$21,$1D,$23,$26,$2B,$2F,$29,$26
		.BYTE	$1D,$17,$1E,$23,$27,$2A,$33,$2F,$2A,$27,$23,$1E,$23,$16,$26,$29
		.BYTE	$2E,$32,$35,$3A,$35,$32,$2E,$29,$26,$18,$1F,$24,$28,$2B,$30,$34
		.BYTE	$37,$3C,$37,$34,$30,$34,$30,$2B,$30,$2B,$28,$2B,$28,$1F,$1C,$1F
		.BYTE	$24,$F8,$FD
byte_2DE576:
		.BYTE	$E1,$74,$94,$98,$60,$FE
		.WORD	byte_2DE5E0
		.BYTE	$94,$60,$49,$FE
		.WORD	byte_2DE5F8
		.BYTE	$94,$30,$94,$60,$FA,$26,$FB,$94,$60,$FA,$12,$FB,$E1,$74,$94,$E0
		.BYTE	$30,$FE
		.WORD	byte_2DE5E0
		.BYTE	$94,$60,$49,$FE
		.WORD	byte_2DE5F8
		.BYTE	$94,$30,$94,$60,$FA,$32,$FB,$94,$60,$FA,$12,$FB,$E1,$74,$94,$E0
		.BYTE	$30,$FE
		.WORD	byte_2DE5E0
		.BYTE	$94,$60,$FA, $C,$FB,$FE
		.WORD	byte_2DE5E0
		.BYTE	$94,$60,$49,$FE
		.WORD	byte_2DE5F8
		.BYTE	$94,$B0,$60,$FE
		.WORD	byte_2DE5F8
		.BYTE	$94,$B0,$60,$FE
		.WORD	byte_2DE5F8
		.BYTE	$94,$B0,$60,$94,$60,$E1,$48,$58, $C, $E,$FA,  4,$FA,$E1,$74,$FE
		.WORD	byte_2DE5F8
		.BYTE	$94,  0
byte_2DE5E0:
		.BYTE	$50,$86,$80,  4,$4E, $C,$E1,$48,$56,$88,$60, $B, $B,$56, $C, $B
		.BYTE	$94,$18,$E1,$74,$FA,  4,$E9,$FD
byte_2DE5F8:
		.BYTE	$50,$86,$80,  4,$4E,$24,$FD
byte_2DE5FF:
		.BYTE	$91,$E1,$9C
byte_2DE602:
		.BYTE	$FE
		.WORD	byte_2DE637
		.BYTE	$FE
		.WORD	byte_2DE64A
		.BYTE	$FE
		.WORD	byte_2DE637
		.BYTE	$1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F,$1F,$2B,$29,$23,$1F,$19,$4A,$4A
		.BYTE	$FE
		.WORD	byte_2DE637
		.BYTE	$FE
		.WORD	byte_2DE64A
		.BYTE	$FE
		.WORD	byte_2DE637
		.BYTE	$2B,$4A,$4A,$2C,$4A,$4A,$2D,$4A,$4A,$2F,$4A,$4A,$30,$4A,$4A,$4A
		.BYTE	$FE
		.WORD	byte_2DE602
byte_2DE637:
		.BYTE	$7F,$8C,  0,$32,$4A,$30,$4A,$2F,$2D,$2B,$29,$1D,$21,$24,$28,$24
		.BYTE	$21,$1D,$FD
byte_2DE64A:
		.BYTE	$32,$30,$4A,$2F,$4A,$2D,$2B,$29,$28,$1C,$4A,$1F,$26,$23,$1F,$1C
		.BYTE	$FD
byte_2DE65B:
		.BYTE	$E1,$9C
byte_2DE65D:
		.BYTE	$FE
		.WORD	byte_2DE692
		.BYTE	$FE
		.WORD	byte_2DE6A5
		.BYTE	$FE
		.WORD	byte_2DE692
		.BYTE	$1F,$4A,$4A,$1D,$4A,$4A,$1C,$4A,$1A,$23,$4A,$4A,$4A,$4A,$4A,$4A
		.BYTE	$FE
		.WORD	byte_2DE692
		.BYTE	$FE
		.WORD	byte_2DE6A5
		.BYTE	$FE
		.WORD	byte_2DE692
		.BYTE	$1D,$4A,$4A,$1A,$4A,$4A,$1B,$4A,$4A,$1D,$4A,$4A,$28,$4A,$4A,$4A
		.BYTE	$FE
		.WORD	byte_2DE65D
byte_2DE692:
		.BYTE	$7B,$8C,  0,$2F,$4A,$2D,$4A,$2B,$29,$28,$26,$1A,$1D,$21,$24,$21
		.BYTE	$1D,$1A,$FD
byte_2DE6A5:
		.BYTE	$2F,$2D,$4A,$2B,$4A,$29,$28,$26,$24,$18,$4A,$1C,$23,$1F,$1C,$17
		.BYTE	$FD
byte_2DE6B6:
		.BYTE	$FE
		.WORD	byte_2DE6EB
		.BYTE	$FE
		.WORD	byte_2DE6FE
		.BYTE	$FE
		.WORD	byte_2DE6EB
		.BYTE	$13,$49,$49,$23,$49,$49,$23,$49,$23,$49,$49,$49,$49,$49,$1F,$13
		.BYTE	$FE
		.WORD	byte_2DE6EB
		.BYTE	$FE
		.WORD	byte_2DE6FE
		.BYTE	$FE
		.WORD	byte_2DE6EB
		.BYTE	$23,$1F,$13,$22,$1E,$12,$24,$1D,$11,$25,$1F,$1B,$18,$49,$49,$49
		.BYTE	$FE
		.WORD	byte_2DE6B6
byte_2DE6EB:
		.BYTE	$63,$8C,  6,$1F,$28,$49,$18,$1F,$24,$49,$1A,$24,$26,$29,$2D,$29
		.BYTE	$26,$24,$FD
byte_2DE6FE:
		.BYTE	$13,$1A,$23,$49,$13,$1A,$23,$49,$18,$1F,$24,$49, $C,$1F,$24,$1F
		.BYTE	$FD
byte_2DE70F:
		.BYTE	$91,$E1,$30,$80,$84,  4,$34,$33,$32,$31,$30,$FF,$82,$2F,$2E,$2D
		.BYTE	$FF,$78,$2C,$2B,$2A,$FF,$6E,$29,$FF,$6B,$28,$FF,$67,$27,$FF,$64
		.BYTE	$26,$FF,$61,$25,$FF,$5D,$24,$FF,$5A,$23,$FF,$46,$22,$FF,$32,$21
		.BYTE	$FF,$28,$20,$FF,$1E,$1F,$FF,$14,$1E,$FF,$46
byte_2DE74A:
		.BYTE	$E1,$A0,$63,$B0,  0,$68,$18,$1B,$65,$60,$19,$95,$18,$18,$1F,$18
		.BYTE	$1A,$68,$60,$65, $C,$1C,$68,$18,$20,$6A,$60,$1C,$6D, $C,$21,$22
		.BYTE	$24,$70,$18,$6F, $C,$22,$6B, $C,$1F,$20,$22,$6F,$18,$6D, $C,$21
		.BYTE	$6D, $C,$24,$25,$27,$2B,$29,$28,$29,$74,$48,$73,$18,$FE
		.WORD	byte_2DE74A
byte_2DE78A:
		.BYTE	$E1,$30,$F7,$2D,$2C,$2B,$2A,$29,$28,$27,$26,$25,$24,$23,$22,$21
		.BYTE	$20,$1F,$1E,$1D,$1C,$1B,$1A,$19,$18,$17,$16,$F8
byte_2DE7A6:
		.BYTE	$E1,$A0,$61,$98,  0,$5F,$60,$5C, $C,$13,$5F,$18,$17,$49,$5C, $C
		.BYTE	$13,$5F,$18,$5E, $C,$11,$5B,$60,$5F,$48,$62,$18,$95,$60,$94,$18
		.BYTE	$61, $C,$18,$64,$18,$18,$66, $C,$19,$18,$16,$5F,$18,$13,$5C,$18
		.BYTE	$5C,$30,$5C,$18,$5C,$18,$5C,$30,$5C,$18,$5C,$30,$64,$18,$16,$94
		.BYTE	 $C, $C,$18,$19,$18,$16,$14,$13,$FE
		.WORD	byte_2DE7A6
byte_2DE7F1:
		.BYTE	$94,$60
byte_2DE7F3:
		.BYTE	$74,$B0,$61,$30,$7A,$48,$76,  8,$2C,$2D,$79,$60,$4A,$7A,$30,$38
		.BYTE	$82,$48,$7D,  8,$34,$35,$7F,$48,$76, $C,$2C,$79,$30,$30,$7C, $C
		.BYTE	$30,$31,$33,$80,$18,$7E, $C,$31,$30,$2E,$30,$31,$7E,$18,$7C, $C
		.BYTE	$30,$31,$33,$35,$37,$3A,$38,$37,$38,$83,$30,$37,$FE
		.WORD	byte_2DE7F3
byte_2DE832:
		.BYTE	$7D,$FB,  7,$E1,$4A
byte_2DE837:
		.BYTE	$94,$18,$FE
		.WORD	byte_2DE8C3
		.BYTE	$A7,  8,$AE,$18,$A7,  8,$AD,$18,$A6,  8,$A9,$18,$A6,  8,$AB,$18
		.BYTE	$A6,  8,$AD,$18,$A6,  8,$AB,$18,$FE
		.WORD	byte_2DE8C3
		.BYTE	$A7,  8,$AE,$18,$B4,$80,$B1,$18,$A9,  8,$B0,$18,$A9,  8,$B0,$18
		.BYTE	$E1,$4E,$64,$8C, $C,$E1,$4A,$AC,  4,$13,$E1,$4E,$5B,$98,$16,$64
		.BYTE	$8C, $C,$E1,$4A,$B0,  4,$1C,$A7,  6,$15,$18,$15,$11,$15,$1D,$15
		.BYTE	$11,$13,$17,$13,$11,$17,$1A,$17,$13,$17,$1A,$17,$13,$17,$1F,$17
		.BYTE	$13,$E1,$4E,$B5, $C,$E1,$4A,$B1,  4,$1C,$18,$E1,$4E,$AC, $C,$E1
		.BYTE	$4A,$AD,  4,$19,$60,$98,$18,$11,$15,$11,$14,$11,$14,$11,$17,$11
		.BYTE	 $E,$11,$56, $C, $C, $E,$10,$11,$49,$FE
		.WORD	byte_2DE837
byte_2DE8C3:
		.BYTE	$5B,$98,  8,$A9,$18,$A6,  8,$AB,$18,$A6,  8,$AD,$18,$A6,  8,$AB
		.BYTE	$18,$A7,  8,$B0,$18,$A7,  8,$AF,$18,$A7,  8,$AE,$18,$A7,  8,$AD
		.BYTE	$18,$F9,$F6,$FD
byte_2DE8E7:
		.BYTE	$E1,$4C
byte_2DE8E9:
		.BYTE	$94,$18,$4B,$8C,  5,  7, $C,  7,$FA,  4,$F7,  2,  9, $E,  9,$FA
		.BYTE	  4,$F9,  7, $E,$13, $E,$FA,  4,$F9,  0,  7, $C,  7,$FA,  8,$F9
		.BYTE	  2,  9, $E,  9,$FA,  4,$F9,  7, $E,$13, $E,$F9,$FA,  2,  9, $E
		.BYTE	  9,$4E,$98,$18,$18,$4F,$8C,  5, $B,$10, $B,$F9,$F8,$E1,$50,$9F
		.BYTE	 $C,$E1,$4C,$A9,  4,$10,$E1,$50,$A3, $C,$E1,$4C,$9F,  4,$E1,$50
		.BYTE	$AC, $C,$E1,$4C,$AD,  4,$19,$98,  4,$49,$15,  2,  2,  2,$15,  2
		.BYTE	  7,$49,$11,  7,  7,  7,$17,  7,  4,$49,$17,  4,  4,  4,$17,  4
		.BYTE	  9,$E1,$50,$B2, $C,$E1,$4C,$AE,  4,$19,$15,$E1,$50,$A9, $C,$E1
		.BYTE	$4C,$A6,  4,  9,$59,$E0,$60, $A,$9D,$5A,$52, $C,  9, $B, $C, $E
		.BYTE	$49,$FE
		.WORD	byte_2DE8E9
byte_2DE97D:
		.BYTE	$76,$8C,$16,$29,$FE
		.WORD	byte_2DE9DD
		.BYTE	$C3,$42,$2B,$49,$73,$3C,$73,$48,$76,$8C,$16,$29,$FE
		.WORD	byte_2DE9DD
		.BYTE	$C3,$5A,$2F,$49,$76,$3C,$76,$60,$94,$18,$BF,$18,$78,$8C, $C,$30
		.BYTE	$49,$2F,$7A,$E0,$60,$94,$18,$2B,$7A,$8C, $C,$32,$49,$31,$7C,$B0
		.BYTE	$30,$94, $C,$25,$26,$28,$C1, $C,$BF,  6,$26,$76,$98,$12,$29,$71
		.BYTE	$8C,  6,$F9,$F2,$C1, $C,$BF,  6,$26,$B9, $C,$B9,  6,$B7, $C,$B9
		.BYTE	  6,$28,$6A,$BC,$3C,$94, $C,$FE
		.WORD	byte_2DE97D
byte_2DE9DD:
		.BYTE	$73,$18,$73, $C,$26,$6F,$18,$6F, $C,$26,$73,$18,$73, $C,$2B,$2D
		.BYTE	$C6,  6,$2F,$2B,$C5, $C,$30,$49,$78,$BC,$45,$78,$48,$74,$8C,$16
		.BYTE	$28,$71,$18,$71, $C,$28,$74,$18,$74, $C,$2B,$78,$18,$78, $C,$2F
		.BYTE	$32,$30,$2F,$C3, $A,$FD
byte_2DEA13:
		.BYTE	$FE
		.WORD	byte_2DEA2B
		.BYTE	$34,$32,$32,$30,$7A,$E0,$5A,$FE
		.WORD	byte_2DEA2B
		.BYTE	$2F,$2D,$76,$98,$15,$78,$E0,$5A,$FE
		.WORD	byte_2DEA13
byte_2DEA2B:
		.BYTE	$8B,$B0,$61,$8B,$3C,$89,$8C, $C,$8E,$98,$18,$40,$D1,$14,$84,  8
		.BYTE	$3B,$37,$7F,$B0,$2A,$82,$18,$7F,$E0,$5A,$7A,$8C, $A,$30,$32,$34
		.BYTE	$7A,$9E,$1D,$7B,$86,  5,$32,$34,$7A,$8C, $A,$30,$32,$34,$84,$A4
		.BYTE	$24,$7F,$8C, $A,$34,$32,$32,$30,$FD
byte_2DEA64:
		.BYTE	$5F,$E1,$2E,$60,$8C, $C,$1C,$24,$2D
byte_2DEA6D:
		.BYTE	$FE
		.WORD	byte_2DEAB6
		.BYTE	$11,$1A,$24,$1D,$17,$12,$17,$1E,$FF,$5B,$10,$FF,$53,$17,$FF,$4B
		.BYTE	$1E,$FF,$43,$25,$15,$FF,$47,$1C,$FF,$4F,$24,$FF,$57,$2D,$FF,$5F
		.BYTE	$FE
		.WORD	byte_2DEAB6
		.BYTE	$10,$17,$10,$17,  9, $D,$15,$19,$FF,$5D,$21,$FF,$59,$25,$FF,$55
		.BYTE	$2D,$FF,$51,$19,$15,$FF,$53,$1C,$FF,$57,$24,$FF,$5B,$2D,$FF,$5F
		.BYTE	$FE
		.WORD	byte_2DEA6D
byte_2DEAB6:
		.BYTE	$13,$1C,$23,$2B,$11,$18,$1D,$24,$10,$17,$1C,$23, $E,$15,$1A,$21
		.BYTE	 $A,$14,$1D,$24,$10,$17,$1E,$23,$2A,$28,$26,$23,  9,$10,$18,$21
		.BYTE	  8,$10,$18,$20,  7,$10,$18,$1F,  6,$12,$18,$21,  5,$15,$1C,$1C
		.BYTE	$FD
byte_2DEAE7:
		.BYTE	$E1,$2E,$94,  6,$63,$8C, $C,$21,$28,$28
byte_2DEAF1:
		.BYTE	$FE
		.WORD	byte_2DEB3A
		.BYTE	$16,$20,$20,$1A,$10,$15,$1C,$21,$FF,$57
byte_2DEAFE:
		.BYTE	$14,$FF,$4F,$1A,$FF,$47,$20,$FF,$3F,$28,$FF,$43,$18,$FF,$4B,$21
		.BYTE	$FF,$53,$28,$FF,$5B,$28,$FE
		.WORD	byte_2DEB3A
		.BYTE	$13,$1A,$13,$1A, $B,$10,$17,$1C,$FF,$5B,$23,$FF,$57,$28,$FF,$53
		.BYTE	$1C,$FF,$4F,$17,$FF,$51,$18,$FF,$55,$21,$FF,$59,$28,$FF,$5D,$28
		.BYTE	$FE
		.WORD	byte_2DEAF1
byte_2DEB3A:
		.BYTE	$17,$1F,$28,$28,$15,$1C,$21,$28,$13,$1A,$1F,$26,$11,$18,$1D,$24
		.BYTE	$11,$1A,$20,$26,$14,$1A,$20,$26,$2C,$2A,$28,$26, $C,$15,$1C,$1C
		.BYTE	 $C,$14,$1C,$1C, $C,$13,$1C,$1C, $C,$15,$1C,$1C,$11,$18,$21,$18
		.BYTE	$FD
byte_2DEB6B:
		.BYTE	$82,$FB,$FE
byte_2DEB6E:
		.BYTE	$E1,$44,$76,$86,  4,$2B,$73,$8C,  6,$E1,$46,$6A,  6,$1E,$6A, $C
		.BYTE	$F9,$EE,$E1,$44,$76,$86,  4,$2B,$73,$8C,  9,$2B,$34,$7D,$98,$12
		.BYTE	$30,$2F,$2D,$2B,$29,$73,$8C,  9,$BF,  6,$E1,$46,$6A,  6,$1E,$6A
		.BYTE	 $C,$6A,  6,$1E,$6A, $C,$6A,  6,$1E,$1F,$49,$E1,$44,$74,$86,  4
		.BYTE	$29,$71,$8C,  6,$E1,$46,$68,  6,$1C,$68, $C,$F9,$EE,$E1,$44,$74
		.BYTE	$86,  4,$29,$71,$8C,  9,$29,$32,$7B,$98,$12,$2F,$2D,$2B,$2A,$2A
		.BYTE	$78,$8C,  9,$C1,  6,$E1,$46,$6A,  6,$1E,$6A, $C,$6A,  6,$1E,$6A
		.BYTE	 $C,$49,$E1,$44,$76,$98,$15,$78,$A4,$21,$6E,$8C,  9,$6E,$98,$15
		.BYTE	$2D,$2B,$78,$8C,  9,$2F,$7B,$A4,$21,$73,$8C,  9,$74,$A4,$21,$71
		.BYTE	$8C,  9,$6E,$98,$15,$2D,$78,$B0,$2A,$2B,$73,$A4,$21,$74,$8C,  9
		.BYTE	$73,$98,$15,$26,$24,$71,$8C,  9,$24,$6E,$98,$15,$21,$71,$8C,  6
		.BYTE	$E1,$46,$B5,  6,$FA, $E,$F9,$FE
		.WORD	byte_2DEB6E
byte_2DEC28:
		.BYTE	$E1,$46,$F7,$49,$49,$1F,$1C,$1B,$1C,$F9,$F5,$49,$49,$E1,$44,$24
		.BYTE	$28,$30,$2F,$2D,$2B,$29,$28,$26,$25,$26,$E1,$46,$17,$16,$17,$FA
		.BYTE	  3,$FA,$49,$49,$49,$49,$1A,$19,$1A,$F9,$F8,$49,$49,$E1,$44,$23
		.BYTE	$26,$2F,$2D,$2B,$29,$28,$27,$27,$29,$28,$E1,$46,$1C,$1B,$1C,$1C
		.BYTE	$1B,$1C,$49,$E1,$44,$28,$29,$1D,$1D,$29,$F8,$24,$24,$28,$24,$21
		.BYTE	$1D,$1D,$29,$F7,$29,$28,$E1,$46,$F8,$6B,$8C,  6,$20,$49,$20,$F9
		.BYTE	$F8,$1C,$1C,$49,$1C,$1A,$1A,$49,$1A,$94,$60,$94,$18,$F7,$1D,$1D
		.BYTE	$1C,$1C,$1D,$FE
		.WORD	byte_2DEC28
byte_2DEC9E:
		.BYTE	$94,$8C,  6,$18,$24,$24,$49,$18,$24,$24,$49,$18,$1F,$24,$1F,$FA
		.BYTE	  4,$F9,$1F,$BC,  4,$26,$26,$26,$26,$26,$49,$B5,  6,$23,$23,$49
		.BYTE	$1F,$23,$23,$49,$1F,$2B,$2B,$2B,$FA,  3,$F9,$1F,$1F,$1F,$1F,$18
		.BYTE	$BA,  4,$24,$24,$24,$94,$24,$6A,$8C,  6,$1F,$13,$1F,$F9,$F8,$1C
		.BYTE	$1C,$10,$1C,$21,$21,$15,$21,$1A,$1A, $E,$1A,$1F,$1F,$13,$1F,$24
		.BYTE	$24,$18,$24,$F9,$FA,$B9,  4,$23,$17,$23,$F9,$F9,$21,$21,$15,$1F
		.BYTE	$1E,$1E,$12,$1D,$94,$18,$75,$8C,  6,$2A,$29,$29,$28,$28,$27,$27
		.BYTE	$26,$26,$25,$25,$26,$FE
		.WORD	byte_2DEC9E
byte_2DED16:
		.BYTE	$91,$E1,$30
byte_2DED19:
		.BYTE	$80,$84,  4,$34,$33,$32,$31,$30,$2F,$2E,$2D,$2C,$2B,$2A,$29,$28
		.BYTE	$27,$26,$25,$24,$23,$22,$21,$20,$1F,$1E,$68,$E0,$80,$E0,$54,$FE
		.WORD	byte_2DED3D
		.BYTE	$C4,$54
byte_2DED3D:
		.BYTE	$74,$B0,$2D,$30,$7A,$C8,$45,$76,$8C, $A,$77,  6,$2D,$79,$E0,$80
		.BYTE	$F9,$EC,$95,$C8,$3C,$6D,$86,  5,$25,$2A,$2E,$E1,$34,$FE
		.WORD	byte_2DEDBD
		.BYTE	$FE
		.WORD	byte_2DEDBD
		.BYTE	$94,$18,$F9,$F6,$E1,$30,$68,$98,$15,$6F, $C,$B9, $A,$49,$6A,$98
		.BYTE	 $C,$6D,$C8,$45,$68,  6,$1E,$6A,$8C,  8,$1C,$F9,$E9,$E1,$34,$74
		.BYTE	$86,  4,$29,$29,$29,$74,$8C,  6,$73,$86,  4,$28,$28,$28,$73,$8C
		.BYTE	  6,$72,$86,  4,$27,$27,$27,$72,$8C,  6,$94,$54,$F9,$E1,$E1,$30
		.BYTE	$68,$84,  4,$1E,$1F,$20,$21,$22,$23,$24,$25,$26,$27,$28,$29,$2A
		.BYTE	$2B,$2C,$2D,$2E,$2F,$30,$31,$32,$33,$34,$FE
		.WORD	byte_2DED19
byte_2DEDBD:
		.BYTE	$7B,$86,  4,$30,$30,$30,$7B,$8C,  6,$FD
byte_2DEDC7:
		.BYTE	$E1,$32
byte_2DEDC9:
		.BYTE	$78,$84,  4,$2C,$2B,$2A,$29,$28,$27,$26,$25,$24,$23,$22,$21,$20
		.BYTE	$1F,$1E,$1D,$1C,$1B,$1A,$19,$18,$17,$16,$60,$8C,  6,$17,$FA,  8
		.BYTE	$F9,$FE
		.WORD	byte_2DEE2B
		.BYTE	$25,$2A,$2E,$31,$2E,$1E,$FE
		.WORD	byte_2DEE2B
		.BYTE	$69,$86,  5,$22,$25,$2A,$FE
		.WORD	byte_2DEE66
		.BYTE	$FE
		.WORD	byte_2DEE66
		.BYTE	$FE
		.WORD	byte_2DEE94
		.BYTE	$FE
		.WORD	byte_2DEE94
		.BYTE	$FE
		.WORD	byte_2DEE77
		.BYTE	$FE
		.WORD	byte_2DEE77
		.BYTE	$60,$84,  4,$16,$17,$18,$19,$1A,$1B,$1C,$1D,$1E,$1F,$20,$21,$22
		.BYTE	$23,$24,$25,$26,$27,$28,$29,$2A,$2B,$2C,$FE
		.WORD	byte_2DEDC9
byte_2DEE2B:
		.BYTE	$6B,$86,  6,$24,$FA,  8,$F9,$1F,$26,$23,$26,$FA,  4,$F9,$82,$84
		.BYTE	  4,$29,$31,$25,$2E,$2B,$35,$25,$2E,$1F,$2B,$1D,$31,$1F,$29,$1D
		.BYTE	$2E,$2B,$2E,$1F,$25,$29,$2B,$2E,$36,$25,$2E,$1E,$25,$2E,$31,$1E
		.BYTE	$25,$2E,$19,$1E,$31,$1E,$2E,$25,$19,$1E,$FD
byte_2DEE66:
		.BYTE	$E1,$34,$F7,$28,$FA, $A,$F9,$F8,$E1,$32,$63,$86,  6,$12,$10, $C
		.BYTE	$FD
byte_2DEE77:
		.BYTE	$F7,$20,$E1,$34,$24,$FA, $D,$FC,$F8,$E1,$32,$6F,$8C,  6,$63,$86
		.BYTE	  3,$18,$63,$8C,  6,$63,$86,  3,$18,$FA,  3,$F6,$FD
byte_2DEE94:
		.BYTE	$5F,$86,  6,$18,$FA,  8,$F9,$16,$19,$FA,  8,$FB,$FD
byte_2DEEA1:
		.BYTE	$94,$60,$69,$8C,  6,$20,$FA,  8,$F9,$FE
		.WORD	byte_2DEED4
		.BYTE	$1D,$22,$36,$3A,$36,$22,$FE
		.WORD	byte_2DEED4
		.BYTE	$94,$18,$FE
		.WORD	byte_2DEF0B
		.BYTE	$FE
		.WORD	byte_2DEF0B
		.BYTE	$68,$8C,  4,$68,$86,  3,$1D,$FA,$10,$F6,$FE
		.WORD	byte_2DEF14
		.BYTE	$FE
		.WORD	byte_2DEF14
		.BYTE	$66,$E0,  3,$FE
		.WORD	byte_2DEEA1
byte_2DEED4:
		.BYTE	$68,$8C,  2,$68,$86,  3,$1D,$FA,  8,$F6,$68,$84,  4,$31,$2B,$29
		.BYTE	$37,$31,$3D,$29,$37,$25,$31,$22,$1D,$22,$31,$25,$37,$29,$37,$22
		.BYTE	$29,$31,$22,$37,$1D,$22,$31,$22,$2A,$36,$3A,$22,$2A,$36,$22,$25
		.BYTE	$1D,$22,$36,$2A,$22,$25,$FD
byte_2DEF0B:
		.BYTE	$F7,$19,$FA, $A,$FC,$F8,$94,$18,$FD
byte_2DEF14:
		.BYTE	$F7,$1D,$2C,$FA, $E,$FC,$18,$FA, $B,$FC,$F8,$FD
byte_2DEF20:
		.BYTE	$94,$60,$E1,$48,$58,$18,$E1,$36,  4,$FA,$14,$F6,$FE
		.WORD	byte_2DEF57
		.BYTE	$FE
		.WORD	byte_2DEF57
		.BYTE	$4F,  6,  4,  4,  4,$F9,$F3,$E1,$48,$58,$18,$E1,$36,  4,$FA,  8
		.BYTE	$F6,$FE
		.WORD	byte_2DEF57
		.BYTE	$FE
		.WORD	byte_2DEF57
		.BYTE	$FE
		.WORD	byte_2DEF57
		.BYTE	$94,$54,$F9,$F3,$E1,$48,$58,$60,$FE
		.WORD	byte_2DEF20
byte_2DEF57:
		.BYTE	$E1,$3A,$4F,  6,$E1,$38,  4,  4,  4,$4F, $C,$FD
byte_2DEF63:
		.BYTE	$55,$E1,$3C
byte_2DEF66:
		.BYTE	$65,$8C,  6,$1A,$78,$98,$18,$77,$8C,  6,$1F,$1E,$74,$98,$18,$94
		.BYTE	$8C,  6,$1A,$1A,$1D,$1A,$1F,$1A,$49,$78,$98,$12,$2D,$78,$8C,  9
		.BYTE	$77,  6,$1F,$69,$8C,  6,$B3,  6,$28,$27,$7D,$B0,$24,$7D,$8C,  6
		.BYTE	$7A,$C8,$80,$F2,$F6,$7A,$98,$12,$65,$8C,  6,$1A,$94,$30,$65, $C
		.BYTE	$1A,$1D,$1A,$1F,$1A,$49,$1D,$1D,$1A,$1F,$1A,$94,$98,$12,$2F,$2F
		.BYTE	$2F,$94,$48,$94,$18,$34,$34,$34,$65,$8C,  6,$1A,$49,$78,$A4,$80
		.BYTE	$F2,$E6,$78,$98,$18,$FE
		.WORD	byte_2DEF66
byte_2DEFCE:
		.BYTE	$E1,$3C
byte_2DEFD0:
		.BYTE	$62,$8C,  6,$17,$71,$98,$18,$94,$48,$F7,$17,$17,$1A,$17,$1C,$17
		.BYTE	$49,$26,$26,$26,$F8,$94,$18,$94,$60,$49,$F7,$17,$17,$49,$17,$17
		.BYTE	$1A,$17,$1C,$17,$49,$1A,$1A,$17,$1C,$17,$49,$28,$28,$28,$F8,$79
		.BYTE	$84,  3,$23,$18, $D,$18,$27,$6C,$BC,$3C,$94, $C,$F7,$1D,$1D,$1D
		.BYTE	$17,$17,$49,$2C,$49,$F8,$FE
		.WORD	byte_2DEFD0
byte_2DF019:
		.BYTE	$F7,$22,$22,$2C,$49,$22,$22,$25,$22,$27,$22,$49,$2C,$2C,$2C,$49
		.BYTE	$49,$49,$22,$22,$49,$22,$22,$25,$22,$27,$22,$49,$25,$25,$22,$27
		.BYTE	$22,$49,$2E,$2E,$2E,$F8,$94,$60,$F7,$2A,$2A,$2A,$22,$22,$49,$F8
		.BYTE	$6D,$A4,$24,$94,$18,$FE
		.WORD	byte_2DF019
byte_2DF051:
		.BYTE	$E1,$90
byte_2DF053:
		.BYTE	$4F,$86, $C,  4,$4F, $C,$E1,$48,  8,$E1,$90,  4,$FA,  3,$F7,$FE
		.WORD	byte_2DF053
byte_2DF065:
		.BYTE	$A5,$E1,$3E,$FB,  5,$6D,$86,  6,$1D,$1A,$1D,$FA,  8,$F7,$94,$98
		.BYTE	$10,$24,$23,$1F,$22,$1E,$94,$8C,  6,$24,$23,$1F,$22,$1E,$F9,$F9
		.BYTE	$63,$86,  5,$FA,$18,$FA,$64,$B0,$80,$65,$60,$95,$E0,$48
byte_2DF093:
		.BYTE	$65,$B0,$2A,$1F,$68,$E0,$60,$94,$30,$6A,$98,$12,$1D,$1C,$1A,$18
		.BYTE	$1C,$65,$B0,$2A,$24,$6C,$E0,$60,$94,$30,$6D,$98,$12,$21,$6A,$B0
		.BYTE	$2A,$68,$98,$12,$1F,$6C,$E0,$80,$E0,$60,$49,$94,$8C,  9,$30,$94
		.BYTE	$18,$7B,$86,  5,$30,$7B,$8C,  9,$94,$18,$7B,$86,  5,$FA,  5,$FA
		.BYTE	$49,$30,$30,$30,$30,$7B,$8C,  9,$49,$49,$94,$60,$49,$94,$18,$70
		.BYTE	$86,  5,$30,$2A,$35,$94,$30,$70,$86,  5,$30,$25,$30,$2A,$35,$94
		.BYTE	$3C,$94,$60,$94,$98,$12,$26,$2B,$29,$28,$26,$24,$28,$26,$2B,$29
		.BYTE	$7B,$B0,$2A,$2F,$76,$98,$12,$29,$2B,$F9,$E8,$73,$E0,$60,$6F,$86
		.BYTE	  5,$FA,$10,$FA,$FE
		.WORD	byte_2DF093
byte_2DF11A:
		.BYTE	$71,$86,  6,$1E,$23,$26,$FA,  8,$F7,$94,$18,$73,$86,  5,$2B,$28
		.BYTE	$2B,$27,$2A,$27,$2A,$23,$26,$23,$26,$26,$29,$26,$29,$22,$25,$22
		.BYTE	$25,$94,$8C,  9,$28,$27,$23,$26,$22,$28,$49,$49,$26,$49,$6A,$86
		.BYTE	  5,$FA,$18,$FA,$94,$30,$6D,$E0,$60,$6D,$E0,$48
byte_2DF156:
		.BYTE	$68,$86,  5,$21,$FA,  4,$F9,$23,$26,$FA,  4,$FB,$22,$26,$FA, $C
		.BYTE	$FB,$23,$26,$23,$26,$22,$26,$22,$26,$21,$24,$21,$24,$1D,$21,$1D
		.BYTE	$21,$1C,$1F,$1C,$1F,$21,$24,$21,$24,$1D,$21,$FA,  4,$FB,$28,$2B
		.BYTE	$FA,  4,$FB,$24,$28,$FA, $C,$FB,$26,$29,$26,$29,$24,$28,$24,$28
		.BYTE	$23,$26,$FA,  4,$FB,$22,$26,$22,$26,$21,$24,$21,$24,$26,$2A,$FA
		.BYTE	$10,$FB,$94,$60,$94,$8C,  9,$31,$94,$18,$7C,$86,  4,$31,$7C,$8C
		.BYTE	  9,$94,$18,$7C,$86,  4,$FA,  5,$FA,$49,$31,$31,$31,$31,$7C,$8C
		.BYTE	  9,$49,$49,$94,$60,$68,$86,  5,$1F,$20,$1F,$FA,  8,$F7,$1D,$1F
		.BYTE	$20,$22,$23,$24,$26,$28,$29,$2B,$2C,$2E,$2F,$31,$32,$34,$35,$37
		.BYTE	$38,$3A,$3B,$3A,$38,$37,$35,$34,$32,$31,$2F,$2E,$2C,$2B,$74,$98
		.BYTE	 $C,$FE
		.WORD	byte_2DF20B
		.BYTE	$94,$18,$FE
		.WORD	byte_2DF20B
		.BYTE	$7C,$E0,$5D,$76,$86,  6,$FA,$10,$FA,$FE
		.WORD	byte_2DF156
byte_2DF20B:
		.BYTE	$74,$98,$12,$2F,$2E,$24,$29,$28,$24,$29,$2F,$2E,$7F,$B0,$2A,$32
		.BYTE	$7A,$98,$12,$2E,$2F,$FD
byte_2DF221:
		.BYTE	$E1,$40,$56,$86,  6, $E,$12,$17,$FA,  8,$F7,$54,$98, $C,$15, $C
		.BYTE	$11, $F,$13,$54,$8C,  6,$15, $C,$11, $F,$13,  9,$49,$49, $F,$49
		.BYTE	$58,$86,  5,$FA,$18,$FA,$94,$30,$5A,$8C,  6,$12, $A,$12,$FA,  4
		.BYTE	$F7
byte_2DF252:
		.BYTE	$59,$8C,  9, $E,$49, $E,$FA,$14,$F7,$FE
		.WORD	byte_2DF2A4
		.BYTE	 $E,$10,$11,$10,$FA,  8,$F9, $E,$10,$11,$13,$14,$16,$17,$19,$1A
		.BYTE	$1C,$1D,$1F,$20,$22,$23,$25,$26,$28,$29,$2B,$2C,$2B,$29,$28,$26
		.BYTE	$19,$17,$16,$14,$13,$11,$10,$FE
		.WORD	byte_2DF2A4
		.BYTE	$FE
		.WORD	byte_2DF2A4
		.BYTE	 $E,$10,$11,$10,$FA,  3,$F9, $E,$10,$11,$13,$15,$16,$15,$14,$FA
		.BYTE	  4,$F9,$19,$FA,$10,$FC,$FE
		.WORD	byte_2DF252
byte_2DF2A4:
		.BYTE	$59,$86,  5,$10,$11,$10,$FA,  8,$F7, $E,$10,$11,$13,$14,$16,$14
		.BYTE	$13,$11,$10, $E, $D, $B, $A, $B, $D, $E,$10,$11,$13,$14,$16,$17
		.BYTE	$16,$14,$13,$11,$10, $E, $D, $B, $D,$FD
byte_2DF2CE:
		.BYTE	$41,$E1,$42
byte_2DF2D1:
		.BYTE	$6C,$8C,$60,$26,$FA,  6,$F9,$20,$25,$FA,  3,$FB,$1E,$23,$FA,  6
		.BYTE	$FB,$1E,$22,$FA,  3,$FB,$1C,$21,$FA,  3,$FB,$20,$23,$FA,  3,$FB
		.BYTE	$68,$18,$FA,  6,$FB,$FE
		.WORD	byte_2DF2D1
byte_2DF2F9:
		.BYTE	$E1,$42,$F7
byte_2DF2FC:
		.BYTE	$1D,$21,$FA,  6,$FB,$1C,$20,$FA,  3,$FB,$1A,$1E,$FA,  6,$FB,$1B
		.BYTE	$1E,$FA,  3,$FB,$18,$1C,$FA,  3,$FB,$1C,$20,$FA,  3,$FB,$1B,$FA
		.BYTE	  6,$FC,$FE
		.WORD	byte_2DF2FC
byte_2DF321:
		.BYTE	$6E,$A4,$60,$70, $C,$23,$25,$73,$24,$71, $C,$25,$23,$22,$23,$25
		.BYTE	$26,$25,$23,$6D,$24,$6B,$18,$6D, $C,$70,$18,$69, $C,$20,$21,$23
		.BYTE	$24,$26,$29,$27,$26,$24,$23,$21,$20,$1E,$20,$21,$6E,$18,$67,$30
		.BYTE	$6D,$98,$17,$FA,  6,$FA,$FE
		.WORD	byte_2DF321
; was split for some reason, reunited
byte_2DFA59:
		.BYTE	$55,$E1,$58,$7B,$84,  4,$2E,$2D,$2B,$29,$28,$26,$24,$22,$21,$1F
		.BYTE	$1D,$E1,$A2,$67,$98,$18,$68,$98,$18
byte_2DFA72:
		.BYTE	$6A,$A4,$60,$E1,$A4,$6A,  6,$E1,$A2,$6A,$86,  4,$6D,$C2,$60,$E1
		.BYTE	$A4,$6D,  6,$E1,$A2,$6D,$88,  6,$21,$1F,$6C,$98,$18,$68,$98,$18
		.BYTE	$6A,$A4,$60,$E1,$A4,$6A,  6,$E1,$A2,$6A,$86,  4,$6D,$C2,$60,$E1
		.BYTE	$A4,$6D,  6,$E1,$A2,$6D,$88,  6,$24,$26,$6F,$98,$18,$6F,$88,  6
		.BYTE	$22,$21,$6D,$98,$18,$21,$1F,$63,$98,$18
		.BYTE	$FE
		.WORD	byte_2DFA72
byte_2DFABF:
		.BYTE	$F7,$E1,$58,$28,$26,$24,$22,$21,$1F,$1D,$1C,$1A,$18,$16,$15,$E1
		.BYTE	$A2,$13,$15
byte_2DFAD2:
		.BYTE	$F8,$61,$98,$18,$65,$8C,$12,$E1,$A4,$65,  6,$E1,$A2,$61,$86,  4
		.BYTE	$65,$98,$18,$68,$98,$18,$65,$92,$18,$E1,$A4,$65,  6,$E1,$A2,$F7
		.BYTE	$1A,$18,$16,$18,$15,$F8,$61,$98,$18,$65,$8C,$12,$E1,$A4,$65,  6
		.BYTE	$E1,$A2,$61,$86,  6,$65,$98,$18,$68,$98,$18,$65,$92,$18,$E1,$A4
		.BYTE	$65,  6,$E1,$A2,$F7,$1A,$1C,$1D,$1C,$1C,$1A,$18,$1A,$18,$16,$49
		.BYTE	$FE
		.WORD	byte_2DFAD2
byte_2DFB25:
		.BYTE	$F7,$2B,$29,$28,$26,$24,$18,$F8,$6F,$8C,  8,$18,$49,$18,$49,$18
byte_2DFB35:
		.BYTE	$63,$98,$10,$18,$18,$63,$98,$12,$63,$98,$10,$18,$18,$63,$98,$12
		.BYTE	$63,$98,$10,$18,$18,$63,$98,$12,$63,$98,$10,$18,$18,$63,$98,$12
		.BYTE	$63,$98,$10,$18,$18,$63,$98,$12,$FE
		.WORD	byte_2DFB35

; =============== S U B	R O U T	I N E =======================================
_bB_s7:
		JSR		_wait_for_nmi_is_over_sync
		LDA		byte_47F
		AND		#$20
		BEQ		_bB_s7
		RTS

; =============== S U B	R O U T	I N E =======================================
_apu_play:
		PHA
		TXA
		PHA
		TYA
		PHA
		LDA		_APU_STATUS
		AND		#$10
		BNE		loc_2DF380
		LDA		#$7E
		STA		_APU_DMC_LOAD
		LDA		#$F
		STA		_APU_STATUS
		LDA		#0
		STA		byte_6A3D
loc_2DF380:
		JSR		__apu_play
		PLA
		TAY
		PLA
		TAX
		PLA
		RTS

; =============== S U B	R O U T	I N E =======================================
__apu_play:
		LDA		byte_6F0
		AND		#1
		BNE		loc_2DF391
		RTS
loc_2DF391:
		JSR		sub_2DF88F
		LDX		#8
		LDY		#0
		JSR		_apu_chan_play
		LDA		byte_47C
		CLC
		ADC		byte_47D
		STA		byte_47C
		BCC		loc_2DF3F2
loc_2DF3A7:
		SBC		#$96
		STA		byte_47C
		LDX		#0
		INY
		JSR		_apu_chan_play
		LDX		#2
		JSR		_apu_chan_play
		LDX		#4
		JSR		_apu_chan_play
		LDX		#6
		DEY
		JSR		_apu_chan_play
		LDA		byte_47C
		CMP		#$6A
		BCC		loc_2DF3A7
		LDX		#6
loc_2DF3CB:
		LDA		(_apu_chan_pc,X)
		EOR		#$FC
		BEQ		loc_2DF3DF
		DEX
		DEX
		BPL		loc_2DF3CB
		LDX		#6
loc_2DF3D7:
		LDA		_apu_chan_active,X
		BNE		loc_2DF3DF
		DEX
		DEX
		BPL		loc_2DF3D7
loc_2DF3DF:
		CMP		#0
		BEQ		loc_2DF3EA
		LDA		#$DF
		AND		byte_47F
		BCS		loc_2DF3EF
loc_2DF3EA:
		LDA		#$20
		ORA		byte_47F
loc_2DF3EF:
		STA		byte_47F
loc_2DF3F2:
		LDX		#0
		LDY		#0
		JSR		sub_2DF71F
		JSR		sub_2DF449
		LDX		#2
		LDY		#4
		LDA		word_EA
		BEQ		loc_2DF416
		LDA		_apu_data3+4
		AND		#$20
		BEQ		loc_2DF416
		JSR		sub_2DF842
		LDY		#$10
		JSR		sub_2DF449
		LDX		#8
		LDY		#4
loc_2DF416:
		JSR		sub_2DF71F
		JSR		sub_2DF449
		LDX		#4
		LDY		#8
		JSR		sub_2DF71F
		LDA		_apu_data3+5
		EOR		#$FF
		AND		#$FE
		STA		_APU_TRI_COUNT
		LDX		#6
		LDY		#$C
		LDA		word_EA
		BEQ		loc_2DF446
		LDA		_apu_data3+4
		AND		#$20
		BNE		loc_2DF446
		JSR		sub_2DF842
		LDY		#$10
		JSR		sub_2DF449
		LDX		#8
		LDY		#$C
loc_2DF446:
		JSR		sub_2DF71F

; =============== S U B	R O U T	I N E =======================================
sub_2DF449:
		STX		byte_6F1
		LDA		_apu_data3+1,X
		BPL		loc_2DF478
		LDX		#$30
		CMP		#$FF
		BEQ		loc_2DF458
		LDX		#$32
loc_2DF458:
		TXA
		LDX		byte_6F1
		CPX		#8
		TAX
		BCS		loc_2DF474
		AND		#$F
		STA		word_E0+1
		LDA		byte_47F
		STA		word_E0
		JSR		sub_2DF854
		STA		word_E0
		TXA
		AND		#$F0
		ORA		word_E0
loc_2DF474:
		STA		_APU_PULSE1_ENV,Y
		RTS
loc_2DF478:
		TYA
		PHA
		LDY		_apu_data3,X
		LDA		off_2DC16B,Y
		STA		word_E0
		LDA		off_2DC16B+1,Y
		STA		word_E0+1
		LDY		_apu_data3+1,X
loc_2DF488:
		LDA		(word_E0),Y
		CMP		#$30
		BCS		loc_2DF493
		STA		_apu_data3+1,X
		TAY
		BCC		loc_2DF488
loc_2DF493:
		INC		_apu_data3+1,X
		TAX
		PLA
		TAY
		BCS		loc_2DF458

; =============== S U B	R O U T	I N E =======================================
_apu_jsr_exec:
		JSR		_apu_get_stream_byte
		PHA
		JSR		_apu_get_stream_byte
		PHA
		LDA		_apu_chan_pc,X
		STA		_apu_chan_ret_pc,X
		LDA		_apu_chan_pc+1,X
		STA		_apu_chan_ret_pc+1,X
		PLA
		STA		_apu_chan_pc+1,X
		PLA
		STA		_apu_chan_pc,X
		BCS		_apu_cmd_fetch
loc_2DF4B4:
		LDA		_apu_data2,X
		BNE		loc_2DF4CA
		LDA		#2
		BNE		loc_2DF4C7
loc_2DF4BD:
		LDA		_apu_data2,X
		PHP
		JSR		_apu_get_stream_byte
		PLP
		BNE		loc_2DF4CA
loc_2DF4C7:
		STA		_apu_data2,X
loc_2DF4CA:
		JSR		_apu_get_stream_byte
		DEC		_apu_data2,X
		BEQ		loc_2DF4DB
		CLC
		ADC		_apu_chan_pc,X
		STA		_apu_chan_pc,X
		BCS		loc_2DF4DB
		DEC		_apu_chan_pc+1,X
loc_2DF4DB:
		JMP		_apu_cmd_fetch

; =============== S U B	R O U T	I N E =======================================
_apu_chan_play:
		LDA		_apu_chan_active,X
		BNE		loc_2DF4E3
locret_2DF4E2:
		RTS
loc_2DF4E3:
		LDA		_apu_chan_delay,X
		BEQ		loc_2DF4FF
		DEC		_apu_chan_delay,X
		BNE		loc_2DF4FF
		LDA		_apu_data3+1,X
		CMP		#$FF
		BEQ		loc_2DF4FF
		LDA		#$FE
		STA		_apu_data3+1,X
		JSR		sub_2DF707
		BCC		loc_2DF4FF
		LDA		#$FF
		STA		byte_6F4
loc_2DF4FF:
		DEC		_apu_chan_active,X
		BNE		locret_2DF4E2
		CPX		#0
		BEQ		loc_2DF51A
		CPX		#8
		BEQ		loc_2DF513
		CPX		#2
		BNE		_apu_cmd_fetch
		LDA		word_EA
		BNE		_apu_cmd_fetch
loc_2DF513:
		LDA		#8
		STA		_APU_PULSE2_SWEEP
		BNE		_apu_cmd_fetch
loc_2DF51A:
		LDA		#8
		STA		_APU_PULSE1_SWEEP

; =============== S U B	R O U T	I N E =======================================
_apu_cmd_fetch:
		JSR		_apu_get_stream_byte
		CMP		#$FE
		BNE		loc_2DF529
		JMP		_apu_jsr_exec
loc_2DF529:
		BCC		loc_2DF533
		JSR		_apu_get_stream_byte
		STA		byte_47D
		BCS		_apu_cmd_fetch
loc_2DF533:
		CMP		#$FC
		BEQ		_apu_cmd_fetch
		BCC		loc_2DF545
		LDA		_apu_chan_ret_pc,X
		STA		_apu_chan_pc,X
		LDA		_apu_chan_ret_pc+1,X
		STA		_apu_chan_pc+1,X
		BCS		_apu_cmd_fetch
loc_2DF545:
		CMP		#$FA
		BNE		loc_2DF54C
		JMP		loc_2DF4BD
loc_2DF54C:
		BCC		loc_2DF556
		JSR		_apu_get_stream_byte
		STA		byte_47E
		BCS		_apu_cmd_fetch
loc_2DF556:
		CMP		#$F9
		BNE		loc_2DF55D
		JMP		loc_2DF4B4
loc_2DF55D:
		CMP		#$F7
		BCC		loc_2DF57F
		AND		#1
		BEQ		loc_2DF570
		LDA		word_2DF57B-2,X
		ORA		byte_47F
		STA		byte_47F
		BCS		_apu_cmd_fetch
loc_2DF570:
		LDA		word_2DF57B-1,X
		AND		byte_47F
		STA		byte_47F
loc_2DF579:
		BCS		_apu_cmd_fetch
word_2DF57B:
		.WORD	$7F80
		.WORD	$BF40
loc_2DF57F:
		CMP		#$F6
		BNE		loc_2DF58C
		JSR		_apu_get_stream_byte
		JSR		_bB_s6
		JMP		_apu_cmd_fetch
loc_2DF58C:
		CMP		#$F5
		BNE		loc_2DF596
		JSR		sub_2DF6C9
		JMP		_apu_cmd_fetch
loc_2DF596:
		CMP		#$F4
		BNE		loc_2DF5A0
		JSR		sub_2DF6DB
		JMP		_apu_cmd_fetch
loc_2DF5A0:
		CMP		#$F3
		BEQ		loc_2DF5CF
		CMP		#$F2
		BNE		loc_2DF5BB
		JSR		_apu_get_stream_byte
		CPX		#0
		BNE		loc_2DF5B5
		STA		_APU_PULSE1_SWEEP
		JMP		_apu_cmd_fetch
loc_2DF5B5:
		STA		_APU_PULSE2_SWEEP
		JMP		_apu_cmd_fetch
loc_2DF5BB:
		CMP		#$F1
		BNE		loc_2DF5C8
		JSR		_apu_get_stream_byte
		JSR		sub_2DF66F
		JMP		_apu_cmd_fetch
loc_2DF5C8:
		CMP		#$F0
		BNE		loc_2DF5D2
		JSR		sub_2DF688
loc_2DF5CF:
		JMP		_apu_cmd_fetch
loc_2DF5D2:
		CMP		#$EF
		BNE		loc_2DF5E1
		LDA		_apu_data3+4
		AND		#$20
		ORA		#$44
		STA		_apu_data3+4
		JMP		_apu_cmd_fetch
loc_2DF5E1:
		CMP		#$E1
		BCC		loc_2DF5F4
		JSR		_apu_get_stream_byte
		STA		_apu_data3,X
		LDA		_apu_data3+1,X
		BMI		loc_2DF5CF
		LDA		#0
		STA		_apu_data3+1,X
		BEQ		loc_2DF5CF
loc_2DF5F4:
		PHA
		SEC
loc_2DF5F6:
		SBC		#$4B
		BCS		loc_2DF5F6
		ADC		#$4B
		CMP		#$49
		BNE		loc_2DF606
		LDA		#$FF
		STA		_apu_data3+1,X
		BNE		loc_2DF624
loc_2DF606:
		BCS		loc_2DF624
		DEY
		INY
		BEQ		loc_2DF60F
		ADC		byte_47E
loc_2DF60F:
		STA		_apu_data2+1,X
		JSR		sub_2DF707
		BCC		loc_2DF61C
		LDA		#0
		STA		byte_6F4
loc_2DF61C:
		LDA		_apu_chan_delay+1,X
		BMI		loc_2DF624
		LDA		#0
		STA		_apu_data3+1,X
loc_2DF624:
		CPX		#2
		BEQ		loc_2DF62C
		CPX		#4
		BNE		loc_2DF640
loc_2DF62C:
		LDA		loc_2DF579,X
		AND		byte_47F
		BEQ		loc_2DF640
		LDA		word_E0+1,X
		STA		_apu_chan_active+1,X
		LDA		word_EA+1,X
		STA		_apu_chan_delay+1,X
loc_2DF640:
		PLA
		CMP		#$96
		BCC		loc_2DF64D
		JSR		_apu_get_stream_byte
		STA		_apu_chan_delay+1,X
		JMP		loc_2DF661
loc_2DF64D:
		CMP		#$4B
		BCC		loc_2DF661
		JSR		_apu_get_stream_byte
		PHA
		AND		#$7F
		STA		_apu_chan_active+1,X
		PLA
		BPL		loc_2DF661
		JSR		_apu_get_stream_byte
		STA		_apu_chan_delay+1,X
loc_2DF661:
		LDA		_apu_chan_active+1,X
		STA		_apu_chan_active,X
		LDA		_apu_chan_delay+1,X
		AND		#$7F
		JSR		sub_2DF6E4
		STA		_apu_chan_delay,X
locret_2DF66E:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF66F:
		CPX		#6
		BCS		locret_2DF66E
		PHA
		TXA
		LSR
		STA		word_E0
		PLA
		BPL		loc_2DF682
		EOR		#$FC
		CLC
		ADC		#4
		ORA		#$80
loc_2DF682:
		ORA		word_E0
		STA		byte_6F2
locret_2DF687:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF688:
		CPX		#6
		BCS		locret_2DF687
		JSR		_apu_get_stream_byte
		STA		word_E0
		AND		#1
		BNE		loc_2DF6A5
		LDA		word_E0
		STA		byte_6F3
		LDA		#0
		STA		byte_6F4
		TXA
		LSR
		STA		byte_6F2
		RTS
loc_2DF6A5:
		LDA		word_E0
		CMP		#$FF
		BEQ		loc_2DF6B0
loc_2DF6AB:
		LDA		#$FF
		STA		byte_6F3
loc_2DF6B0:
		LDA		#3
		STA		byte_6F2
		RTS

; =============== S U B	R O U T	I N E =======================================
_bB_s6:
		AND		#$1F
		PHA
		LDA		byte_47F
		AND		#$E0
		STA		byte_47F
		PLA
		ORA		byte_47F
		STA		byte_47F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF6C9:
		LDA		byte_47F
		CLC
		ADC		#1
loc_2DF6CF:
		PHA
		AND		#$1F
		CMP		#$11
		PLA
		BCS		locret_2DF706
		STA		byte_47F
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF6DB:
		LDA		byte_47F
		SEC
		SBC		#1
		JMP		loc_2DF6CF

; =============== S U B	R O U T	I N E =======================================
sub_2DF6E4:
		CPX		#4
		BNE		locret_2DF706
		STA		word_E0+1
		LDA		byte_47F
		AND		#$1F
		CMP		#6
		BCS		loc_2DF6F7
		LDA		#0
		BCC		loc_2DF700
loc_2DF6F7:
		STA		word_E0
		JSR		sub_2DF854
		CMP		#0
		BNE		locret_2DF706
loc_2DF700:
		LDA		#$FF
		STA		_apu_data3+1,X
		LDA		#1
locret_2DF706:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF707:
		CPX		#6
		BCS		loc_2DF71D
		LDA		byte_6F3
		CMP		#$FF
		BEQ		loc_2DF71D
		TXA
		LSR
		EOR		byte_6F2
		AND		#3
		BNE		loc_2DF71D
		SEC
		RTS
loc_2DF71D:
		CLC
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF71F:
		JSR		sub_2DF707
		LDA		_apu_data2+1,X
		BCS		loc_2DF729
		BMI		locret_2DF779
loc_2DF729:
		ORA		#$80
		STA		_apu_data2+1,X
		CPY		#$C
		BNE		loc_2DF73D
		AND		#$F
		STA		_APU_NOISE_LOOP
		LDA		#8
		STA		_APU_NOISE_LEN
		RTS
loc_2DF73D:
		ASL
		STX		word_E0
		TAX
		LDA		word_2DF9C7,X
		PHA
		LDA		word_2DF9C7+1,X
		STA		word_E0+1
		LDX		word_E0
		PLA
		STA		word_E0
		JSR		sub_2DF707
		BCC		loc_2DF76D
		LDA		byte_6F3
		AND		#1
		BNE		loc_2DF76A
		LDA		word_E0
		PHA
		LDA		word_E0+1
		PHA
		JSR		sub_2DF77A
		PLA
		STA		word_E0+1
		PLA
		STA		word_E0
loc_2DF76A:
		JSR		sub_2DF7C3
loc_2DF76D:
		LDA		word_E0
		STA		_APU_PULSE1_TIME,Y
		LDA		word_E0+1
		ORA		#8
		STA		_APU_PULSE1_LEN,Y
locret_2DF779:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF77A:
		TXA
		PHA
		TYA
		PHA
		LDX		byte_6F3
		LDA		off_2DC60D,X
		STA		word_E0
		LDA		off_2DC60D+1,X
		STA		word_E0+1
		LDY		byte_6F4
		LDA		#0
		CPY		#$FF
		BEQ		loc_2DF7B2
loc_2DF794:
		LDA		(word_E0),Y
		AND		#3
		BEQ		loc_2DF7AC
		CMP		#2
		BNE		loc_2DF7A5
		PLA
		TAY
		PLA
		TAX
		JMP		loc_2DF6AB
loc_2DF7A5:
		LDA		(word_E0),Y
		LSR
		TAY
		JMP		loc_2DF794
loc_2DF7AC:
		LDA		(word_E0),Y
		INY
		STY		byte_6F4
loc_2DF7B2:
		STA		word_E0
		LDA		byte_6F2
		AND		#3
		ORA		word_E0
		STA		byte_6F2
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF7C3:
		TXA
		PHA
		TYA
		PHA
		LDX		word_E0
		LDY		word_E0+1
		LDA		#$80
		STA		byte_6F5
		STA		byte_6F6
		LSR		word_E0+1
		ROR		word_E0
		ROR		byte_6F5
		LSR		word_E0+1
		ROR		word_E0
		ROR		byte_6F5
		LSR		word_E0+1
		ROR		word_E0
		ROR		byte_6F5
		LSR		word_E0+1
		ROR		word_E0
		ROR		byte_6F5
		LDA		byte_6F2
		ASL
		PHA
		LDA		#5
		STA		byte_6F1
loc_2DF7F9:
		PLA
		LSR		word_E0+1
		ROR		word_E0
		ROR		byte_6F5
		ASL
		PHA
		BCC		loc_2DF833
		LDA		#$80
		AND		byte_6F2
		BNE		loc_2DF821
		SEC
		LDA		byte_6F6
		SBC		byte_6F5
		STA		byte_6F6
		TXA
		SBC		word_E0
		TAX
		TYA
		SBC		word_E0+1
		TAY
		JMP		loc_2DF833
loc_2DF821:
		CLC
		LDA		byte_6F6
		ADC		byte_6F5
		STA		byte_6F6
		TXA
		ADC		word_E0
		TAX
		TYA
		ADC		word_E0+1
		TAY
loc_2DF833:
		DEC		byte_6F1
		BNE		loc_2DF7F9
		PLA
		STX		word_E0
		STY		word_E0+1
		PLA
		TAY
		PLA
		TAX
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF842:
		LDA		_apu_data2+1,X
		AND		#$7F
		STA		_apu_data2+1,X
		RTS

; =============== S U B	R O U T	I N E =======================================
_apu_get_stream_byte:
		LDA		(_apu_chan_pc,X)
		INC		_apu_chan_pc,X
		BNE		locret_2DF853
		INC		_apu_chan_pc+1,X
locret_2DF853:
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF854:
		LDA		word_E0
		EOR		#$FF
		ASL
		ASL
		ASL
		STA		word_E0
		LDA		#0
		ASL		word_E0
		BCS		loc_2DF865
		ADC		word_E0+1
loc_2DF865:
		LSR		word_E0+1
		ASL		word_E0
		BCS		loc_2DF86D
		ADC		word_E0+1
loc_2DF86D:
		LSR		word_E0+1
		ASL		word_E0
		BCS		loc_2DF875
		ADC		word_E0+1
loc_2DF875:
		LSR		word_E0+1
		ASL		word_E0
		BCS		loc_2DF87D
		ADC		word_E0+1
loc_2DF87D:
		LSR		word_E0+1
		ASL		word_E0
		BCS		locret_2DF885
		ADC		word_E0+1
locret_2DF885:
		RTS

; =============== S U B	R O U T	I N E =======================================
_bB_s4:
		LDA		_apu_data3+4
		AND		#$20
		ORA		#$44
		STA		_apu_data3+4
		RTS

; =============== S U B	R O U T	I N E =======================================
sub_2DF88F:
		BIT		_apu_data3+4
		BVC		locret_2DF8BF
		LDA		_apu_data3+4
		SEC
		SBC		#1
		STA		_apu_data3+4
		AND		#$1F
		BNE		locret_2DF8BF
		LDA		_apu_data3+4
		ORA		#4
		STA		_apu_data3+4
		AND		#$80
		BNE		loc_2DF8B3
		JSR		sub_2DF6DB
		LDA		byte_47F
		AND		#$1F
		BEQ		loc_2DF8C0
		RTS
loc_2DF8B3:
		JSR		sub_2DF6C9
		LDA		byte_47F
		AND		#$1F
		CMP		#$10
		BCS		loc_2DF8C0
locret_2DF8BF:
		RTS
loc_2DF8C0:
		LDA		#0
		STA		_apu_data3+4
		RTS

; =============== S U B	R O U T	I N E =======================================
; init APU registers, stop sounds
;
_bB_s2_apu_init:
		SEI
		LDA		#0
		STA		_APU_STATUS
		LDA		#$80
		STA		_PAD1_REG
		LDA		#$F
		STA		_APU_STATUS
		LDA		#8
		STA		_APU_PULSE1_SWEEP
		STA		_APU_PULSE2_SWEEP
		LDA		#$FF
		STA		byte_47C
		LDA		#0
		STA		_apu_data3+4
		JSR		_bB_s3_apu_load
		LDA		#$80
		JSR		_bB_s3_apu_load
		RTS

; =============== S U B	R O U T	I N E =======================================
_bB_s5:
		JSR		sub_2DF9B3
		ASL
		CMP		byte_6F0
		BEQ		loc_2DF96D
		STA		byte_6F0
		PHA
		LDA		byte_47F
		AND		#$3F
		JMP		loc_2DF915

; =============== S U B	R O U T	I N E =======================================
; init music track or sound effect, all data is in the same library, so has
; a common indexes
;
_bB_s3_apu_load:
		JSR		sub_2DF9B3
		ASL
		BCS		loc_2DF970
		CMP		byte_6F0
		BEQ		loc_2DF96D
		STA		byte_6F0
		PHA
		LDA		#$10
loc_2DF915:
		STA		byte_47F
		PLA
		ASL
		ASL
		ORA		#6
		TAX
		LDY		#6
loc_2DF920:
		BCS		loc_2DF931
		LDA		_apu_music_lib+1,X
		STA		_apu_chan_pc+1,Y
		LDA		_apu_music_lib,X
		STA		_apu_chan_pc,Y
		JMP		loc_2DF93D
loc_2DF931:
		LDA		_apu_music_lib+257,X
		STA		_apu_chan_pc+1,Y
		LDA		_apu_music_lib+256,X
		STA		_apu_chan_pc,Y
loc_2DF93D:
		LDA		#1
		STA		_apu_chan_active,Y
		LDA		#0
		STA		_apu_chan_delay+1,Y
		STA		_apu_data2,Y
		DEX
		DEX
		DEY
		DEY
		BPL		loc_2DF920
		STA		byte_47E
		TAX
		JSR		_apu_get_stream_byte
		STA		byte_47D
		LDA		_apu_data3+4
		AND		#$20
		STA		_apu_data3+4
		LDA		#3
		STA		byte_6F2
		LDA		#$FF
		STA		byte_47C
		STA		byte_6F3
loc_2DF96D:
		JMP		sub_2DF9BC
loc_2DF970:
		TAX
		LDA		#0
		STA		_APU_DMC_FREQ
		LDY		#$F
		LDA		byte_6A3D
		BEQ		loc_2DF97F
		LDY		#$1F
loc_2DF97F:
		TYA
		STA		_APU_STATUS
		LDA		byte_6A3D
		LDA		#$DF
		AND		_apu_data3+4
		STA		_apu_data3+4
		LDA		off_2DD066-1,X
		BPL		loc_2DF99B
		PHA
		LDA		#$20
		ORA		_apu_data3+4
		STA		_apu_data3+4
		PLA
loc_2DF99B:
		ORA		#$80
		STA		byte_DF
		LDA		off_2DD066-2,X
		STA		byte_DE
		LDA		#1
		STA		word_EA
		LDA		#0
		STA		word_F4+1
		STA		byte_47A
		JMP		sub_2DF9BC

; =============== S U B	R O U T	I N E =======================================
sub_2DF9B3:
		PHA
		LDA		byte_6F0
		AND		#$FE
		JMP		sub_2DF9C2

; =============== S U B	R O U T	I N E =======================================
sub_2DF9BC:
		PHA
		LDA		byte_6F0
		ORA		#1

; =============== S U B	R O U T	I N E =======================================
sub_2DF9C2:
		STA		byte_6F0
		PLA
		RTS

word_2DF9C7:
		.WORD	 $6AD, $643, $5F3, $59D, $54C, $500, $4B8, $474
		.WORD	 $434, $3F8, $3BF, $389, $356, $326, $2F9, $2CE
		.WORD	 $2A6, $280, $25C, $23A, $21A, $1FB, $1DF, $1C4
		.WORD	 $1AB, $193, $17C, $167, $152, $13F, $12D, $11C
		.WORD	 $10C,  $FD,  $EF,  $E1,  $D5,  $C9,  $BD,  $B3
		.WORD	$A9,  $9F,  $96,  $8E,  $86,  $7E,  $77,  $70
		.WORD	$6A,  $64,  $5E,  $59,  $54,  $4F,  $4B,  $46
		.WORD	$42,  $3F,  $3B,  $38,  $34,  $31,  $2F,  $2C
		.WORD	$29,  $27,  $25,  $23,  $21,  $1F,  $1D,  $1B
		.WORD	 $81A

		ECHO "bank 0B free space", [SAFE_STUB_ORG-.]

		ORG SAFE_STUB_ORG
		SAFE_STUB