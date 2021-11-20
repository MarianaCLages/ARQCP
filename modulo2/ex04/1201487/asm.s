.section .data
	.global op1
	.global op2
	
	.equ CONSTANT, 15
	
op3:
	.quad 20
	
op4:
	.quad 30

.section .text
	.global sum 
	.global sum_v2
	.global sum_v3
	
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

sum_v3:
	movq op4(%rip), %rax
	movq op3(%rip), %rcx
	addq %rcx, %rax
	
	movslq op2(%rip), %rcx
	subq %rcx, %rax
	
	movslq op1(%rip), %rcx
	addq %rcx, %rax	

ret

	

