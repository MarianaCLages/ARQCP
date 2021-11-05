.section .data
	.global s

.section .text
	.global swapBytes
	
swapBytes:
		movw s(%rip), %bx
		movb %bl, %ah
		movb %bh, %al
		
		ret
