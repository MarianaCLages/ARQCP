.section .data
	.global ptrvec
	.global num
	.global x
	
.section .text
	.global vec_search
	
vec_search:
	movq ptrvec(%rip), %rcx
	movq num(%rip), %r8
	movw x(%rip), %r9w
	movq $0, %r10
	
loop:
	cmpq %r10, %r8
	je end
	
	cmpw (%rcx), %r9w
	je word_found
	
	addq $2, %rcx
	incq %r10
	
	jmp loop
	
word_found:
	movq (%rcx), %rax
	ret
	
end:
	ret
