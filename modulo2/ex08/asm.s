.section .data

s1:
	.word 1020

s2:
	.word 2010

.section .text

.global crossSumBytes 

crossSumBytes:
		movq $0, %rax
		movq $0, %rcx
		
		movw s1(%rip), %ax
		movw s2(%rip), %cx
		
		addb %ch, %al
		addb %cl, %ah

   ret   
