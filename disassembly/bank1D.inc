
		ORG $8000

		ECHO "bank 1D free space", [$BFD8-.]

		.BYTE $FF

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
