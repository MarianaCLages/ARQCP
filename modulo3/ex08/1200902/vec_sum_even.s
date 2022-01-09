.section .data
	.global ptrvec
	.global num

.section .text
	.global vec_sum_even

vec_sum_even:
	movq ptrvec(%rip), %r9
	movq num(%rip), %r8
	movq $2, %rcx
	movq $0, %r10
	movq $0, %r11
	
loop:
	cmpq %r10, %r8
	je end_sum
	
	movq (%r9), %rax
	cqo
	idivq %rcx
	
	cmpq $0, %rdx
	je even
	
	addq $4, %r9
	incq %r10
	
	jmp loop
	
even:
	addq (%r9), %r11
	
	jmp loop
	
end_sum:
	movq %r11, %rax
	ret
