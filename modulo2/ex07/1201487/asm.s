.section .data

.global s1
.global s2

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
