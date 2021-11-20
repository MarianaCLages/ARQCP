.section .data
	.global current
	.global desired
	
.section .text
	.global needed_time
	
needed_time:
	movl $0, %edx
	
	movswl current(%rip), %eax
	movswl desired(%rip), %ecx
	
	cmpl %ecx, %eax
	je end
	jl inc_temp
	jg dec_temp
	
inc_temp:
	cmpl %eax, %ecx
	je end
	
	addl $2, %edx
	incl %eax
	
	jmp inc_temp
	
dec_temp:
	cmpl %eax, %ecx
	je end
	
	addl $3, %edx
	decl %eax
	
	jmp dec_temp
	
end:
	movl %edx, %eax
	ret
