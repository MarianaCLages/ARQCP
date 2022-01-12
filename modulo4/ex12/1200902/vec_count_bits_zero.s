.section .text
	.global vec_count_bits_zero
	
vec_count_bits_zero: # %rdi: *ptr / %esi: num
	movl $0, %r9d
	movq %rdi, %rcx
	
	movl $0, %r10d	# count
	
loop:
	cmpl %r9d, %esi
	je end
	
	movl (%rcx, %r9, 4), %edi
	
	pushq %rcx
	pushq %r9
	pushq %r10
	
	call count_bits_zero
	
	popq %r10
	popq %r9
	popq %rcx
	
	addl %eax, %r10d
	incl %r9d
	
	jmp loop
	
end:
	movl %r10d, %eax
	ret
