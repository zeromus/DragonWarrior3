
		ORG $8000

		ECHO "bank 1E free space", [SAFE_STUB_ORG-.]

		.BYTE $FF
		
		ORG SAFE_STUB_ORG
		SAFE_STUB