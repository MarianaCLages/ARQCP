.section .data

.global s
.global byte1
.global byte2

.section .text

.global swapBytes 
.global concatBytes

swapBytes:
		movq $0, %rax
		movq $0, %rcx
		
		movw s(%rip), %ax
		
		movb %ah, %cl
		movb %al, %ah
		movb %cl, %ah

ret   

concatBytes:
		movq $0, %rax
		
		movb byte1(%rip), %al
		movb byte2(%rip), %ah
		
ret
