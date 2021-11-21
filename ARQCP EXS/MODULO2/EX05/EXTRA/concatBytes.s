.section .data

.global op1
.global op2
		
.section .text
	.global concatBytes
	
concatBytes:
		
		movb op1(%rip),%al
		movb op2(%rip),%ah
		
ret
		
		
