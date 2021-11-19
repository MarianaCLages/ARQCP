.section .data
	.global a
	.global b
	.global c
	.global d
	
.section .text
	.global compute
	
compute:

	movl a(%rip), %eax
	movl b(%rip), %ecx
	
	imull %ecx
	
	addl c(%rip), %eax
	
	movl d(%rip), %ecx
	
	idivl %ecx
	
	ret
