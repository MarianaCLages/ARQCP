.section .data
	.global op1
	.global op2
	
CONST:
	.int 15

.section .text
	.global sum_v2
	
sum_v2:
		movl op1(%rip), %eax
		movl op2(%rip), %ecx
		
		subl %eax, CONST(%rip)
		subl %ecx, CONST(%rip)
		
		subl %ecx, %eax
		
		ret
