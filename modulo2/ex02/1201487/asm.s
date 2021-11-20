.section .data
	.global op1
	.global op2

.section .text
	.global sum 
	
sum:
	movl op1(%rip), %eax
	movl op2(%rip), %ecx
		
	addl %ecx, %eax
		
ret
