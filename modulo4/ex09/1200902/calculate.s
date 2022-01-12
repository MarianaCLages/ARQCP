.section .text
	.global calculate
	.global print_result
	
calculate: # %edi: a / %esi: b

	#prologue
	pushq %rbp
	movq %rsp, %rbp
	subq $8, %rsp
	
	movl %edi, -4(%rbp)
	addl %esi, -4(%rbp)
	
	movl %edi, %eax
	imull %esi
	movl %eax, -8(%rbp)
	
	movl %edi, %r9d # a
	movl %esi, %r10d # b
	
	movb $'+', %dil
	movl %r9d, %esi
	movl %r10d, %edx
	movl -4(%rbp), %ecx
	
	pushq %rsi
	pushq %rdx
	
	call print_result
	
	popq %rdx
	popq %rsi
	
	movb $'*', %dil
	movl -8(%rbp), %ecx
	
	pushq %rsi
	pushq %rdx
	
	call print_result
	
	popq %rdx
	popq %rsi
	
	movl %esi, %r9d
	movl %edx, %r10d
	
	addl %r9d, %r10d
	
	movl %esi, %eax
	imull %edx
	
	subl %eax, %r10d
	
	movl %r10d, %eax
	
	#epilogue
	movq %rbp, %rsp
	popq %rbp
	
	ret
