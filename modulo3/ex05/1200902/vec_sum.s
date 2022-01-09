.section .data
	.global ptrvec
	.global num

.section .text
	.global vec_sum
	
vec_sum:
	movq ptrvec(%rip), %r9
	movw num(%rip), %cx
	movw $0, %dx
	movl $0, %eax
	
loop:
	cmpw %dx, %cx
	je end
	
	addl (%r9), %eax
	addq $4, %r9
	incq %rdx
	
	jmp loop
	
end:
	ret
