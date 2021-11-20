.section .data

.global s

.section .text

.global swapBytes 

swapBytes:
		movq $0, %rax
		movq $0, %rcx
		
		movw s(%rip), %ax
		
		movb %ah, %cl
		movb %al, %ah
		movb %cl, %ah

ret   
