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

	cmpl %ecx, %eax
	je f_equals
	
	addl %ecx, %eax
	decl %eax
	
	jmp end
	
f_equals:
	subl %ecx, %eax
	incl %eax
	
	jmp end
	
f2:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	cmpl %ecx, %eax
	jg f2_greater
	
	incl %ecx
	
	imull %ecx
	
	jmp end
	
f2_greater:
	decl %eax
	
	imull %ecx
	
	jmp end
	
f3:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	cmpl %ecx, %eax
	jge f3_greatequal
	
	addl %ecx, %eax
	
	movl %eax, %r8d
	addl $2, %r8d
	
	movl %eax, %r9d
	movl %r8d, %eax
	movl %r9d, %r8d
	
	cltd

	idivl %r8d
	
	jmp end
	
f3_greatequal:
	movl %eax, %r8d
	
	imull %ecx
	
	addl $1, %r8d
	
	movl %eax, %r9d
	movl %r8d, %eax
	movl %r9d, %r8d
	
	cltd

	idivl %r8d
	
	jmp end
	
f4:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	addl %ecx, %eax
	
	cmpl $10, %eax
	jl f4_less
	
	movl %ecx, %eax
	
	imull %ecx
	
	movl $0, %edx
	
	movl $3, %ecx
	idivl %ecx
	
	jmp end
	
f4_less:
	imull %eax
	
	movl $4, %ecx
	
	imull %ecx
	
	jmp end

end:
	ret
