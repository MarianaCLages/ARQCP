.section .data
	.global base
	.global height
	
.section .text
	.global getArea
	
getArea:

	movl base(%rip), %eax
	movl height(%rip), %ecx
	
	imull %ecx
	
	movl $2, %ecx
	
	idivl %ecx
	
	ret
