.section .data

base:
	.int 3
height:
	.int 4
	
.section .text
	.global getArea2
	
getArea2:

	movl base(%rip), %eax
	movl height(%rip), %ecx
	
	imull %ecx
	
	movl $2, %ecx
	
	idivl %ecx
	
	ret
