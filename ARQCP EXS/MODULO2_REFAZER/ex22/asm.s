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
	je f_if
	
	addl %ecx,%eax
	
	subl $1, %eax
	
	jmp f_end
	
f_if:

	subl %ecx, %eax
	
	addl $1, %eax
	
f_end:
	ret

f2:

	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	cmpl %eax, %ecx
	jl f2_if
	
	addl $1, %ecx
	
	jmp f2_end
	
f2_if:

	subl $1, %eax
	
f2_end:
	
	imull %ecx

ret

f3:

	movl i(%rip), %ecx
	movl j(%rip), %eax
	
	cmpl %ecx, %eax
	jle f3_if
	
	addl %ecx, %eax
	movl %eax, %r8d
	
	addl $2, %eax
	
	cltd 
	
	jmp f3_end
	
f3_if:

	imull %ecx
	
	movl %eax, %r8d
	
	movl i(%rip), %eax
	
	addl $1, %eax

f3_end:
	
	idivl %r8d
	
ret

f4:

	movl i(%rip), %eax
	movl j(%rip), %ecx
	
	addl %ecx , %eax
	
	cmpl $10, %eax
	jl f4_if
	
	movl %ecx, %eax
	
	imull %ecx
	
	movl $3, %ecx
	
	idivl %ecx
	
	jmp f4_end
	
f4_if:

	movl i(%rip), %eax
	
	imull %eax
	
	movl $4, %ecx
	
	imull %ecx
		
f4_end:

	ret
