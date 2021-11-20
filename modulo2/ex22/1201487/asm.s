.section .data
	
.global i
.global j

.section .text
	.global f
	.global f2
	.global f3
	.global f4
	
f:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	cmpl %ecx,%eax
	je f_equals
	
	addl %ecx, %eax
	subl $1, %eax

	jmp f_end
	
	
f_equals:
	addl %ecx, %eax
	addl $1, %eax
	
	jmp f_end

f_end:
	ret
	
f2:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	cmpl %ecx, %eax
	jg f2_greater
	
	incl %ecx
	
	imull %ecx

	jmp f2_end


f2_greater:
	decl %eax
	
	imull %ecx

	jmp f2_end
	
f2_end:
	ret

f3:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	cmpl %ecx,%eax
	jge f3_ge
	
	addl %ecx, %eax
	
	movl %eax, %r8d
	addl $2, %r8d
	
	jmp f3_main
	
f3_ge:
	movl %eax, %r8d
	
	imull %ecx
	
	addl $1, %r8d
		
	
	jmp f3_main
	
f3_main:

	movl %eax, %r9d
	movl %r8d, %eax
	movl %r9d, %r8d
	
	cltd

	idivl %r8d

	jmp f3_end
	

f3_end:
	ret
	
f4:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	addl %ecx, %eax
	
	cmpl $10, %eax
	jl f4_less
	
	movl %ecx, %eax
	
	imull %ecx
	
	movl $3, %ecx
	
	idivl %ecx
	
	jmp f4_end


f4_less:
	imull %eax
	
	movl $4, %ecx
	
	imull %ecx
	
	jmp f4_end

	
f4_end:
	ret
	
