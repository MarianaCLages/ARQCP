.section .data

.global s

.section .text

.global swapBytes 

swapBytes:
		movq $0, %rax
		movq $0, %rcx
		
		movw s(%rip), %ax
		
		movb %al, %cl
		movb %ah, %al
		movb %cl, %ah

ret   
