
		ORG SYSTEM_SHARED_ORG

		INCLUDE "system_shared.inc"

		INCLUDE "system_bank0F_only.inc"

		ECHO "bank 0F free space", [SYSTEM_FOOTER_ORG-.]

		ORG SYSTEM_FOOTER_ORG

		INCLUDE "system_footer.inc"

		ORG $FFE0

		.BYTE "DRAGON WARRIOR "
		.BYTE $33
		.WORD $2BA1
		.WORD 0
		.BYTE $48
		.BYTE 4
		.BYTE 1
		.BYTE $F
		.BYTE 7
		.BYTE $9D
		.WORD NMI
		.WORD RESET
		.WORD _FAR_CALL_HANDLER
