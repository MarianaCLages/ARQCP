.section .data
	.global op1
	.global op2
	
	.equ CONSTANT, 15

.section .text
	.global sum 
	.global sum_v2
	
sum:
	movl op1(%rip), %eax
	movl op2(%rip), %ecx
		
	addl %ecx, %eax
		
ret

sum_v2:

	movl $CONSTANT, %eax
	movl $CONSTANT, %ecx
	
	subl op1(%rip), %eax
	
	subl op2(%rip), %ecx
	
	subl %ecx, %eax
	
ret

	
