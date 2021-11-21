.section .data
	.global num
	
.section .text
	.global steps
	
steps:

	movq num(%rip), %rax
	
	imulq $3, %rax # alinea a
	
	addq $6, %rax # alinea b
	
	movq $0, %rdx # preparar o dividendo
	movq $3, %rcx
	idivq %rcx # alinea c
	
	addq $12, %rax # alinea d
	
	subq num(%rip), %rax # alinea e
	
	subq $1, %rax # alinea f
	
	ret
