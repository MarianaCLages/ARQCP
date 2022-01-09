.section .data
	.global ptrvec #char
	.global num
	
.section .text
	.global vec_add_one
	
vec_add_one:
	movq ptrvec(%rip), %rax
	movq num(%rip), %rcx
	movq $0, %rdx
	
loop:
	cmpq %rdx, %rcx
	je end

	incq (%rax)
	addq $8, %rax
	incq %rdx
	
	jmp loop

end:
	ret
