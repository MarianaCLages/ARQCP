.section .data
	
.global desired
.global current


.section .text
	.global needed_time
	
needed_time:
	movl $0, %edx

	movswl desired(%rip), %eax
	movswl current(%rip), %ecx
	cmpl %eax, %ecx

	je end
	jl aum_current
	jg dec_current
	

aum_current:
		cmpl %eax, %ecx
		je end
		
		addl $2, %edx
		incl %ecx
		
		jmp aum_current
		

dec_current:
		cmpl %eax, %ecx
		je end
		
		addl $3, %edx
		decl %ecx
		
		jmp dec_current
	
	
	
end:	
	movl %edx, %eax
	
	movl $60, %edx
	
	imull %edx

	ret
