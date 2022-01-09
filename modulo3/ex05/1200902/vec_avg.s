.section .data
	.global sum
	.global num

.section .text
	.global vec_avg
	
vec_avg:
	movl sum(%rip), %eax
	
	cltd
	
	movl num(%rip), %ecx

	idivl %ecx
	
	ret
