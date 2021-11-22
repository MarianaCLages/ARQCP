.section .data
.global A
.global B
.global C
.global D

.section .text
.global compute

compute:
	movl A(%rip), %eax
	movl B(%rip), %ecx
	
	imull %ecx
	
	addl C(%rip), %eax
	
	movl D(%rip), %ecx
	
	idivl %ecx
	
	ret
