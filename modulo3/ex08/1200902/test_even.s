.section .data
	.global even #long even
	
.section .text
	.global test_even
	
test_even:
	movq even(%rip), %rax
	movq $2, %rcx
	movq $0, %rdx
	
	idivq %rcx
	
	cmpq $0, %rdx
	je is_even
	jne is_odd
	
is_even:
	movq $1, %rax
	jmp end
	
is_odd:
	movq $0, %rax
	jmp end
	
end:
	ret
