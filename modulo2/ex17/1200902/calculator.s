.section .data
	.global a
	.global b
	
.section .text
	.global sum
	.global subtraction
	.global multiplication
	.global division
	.global modulus
	.global power2
	.global power3
	
sum:
	movl a(%rip), %eax
	
	addl b(%rip), %eax
	
	jmp end
	
subtraction:
	movl a(%rip), %eax
	
	subl b(%rip), %eax
	
	jmp end
	
multiplication:
	movl a(%rip), %eax
	movl b(%rip), %ecx
	
	imull %ecx
	
	jmp end
	
division:
	movl a(%rip), %eax
	
	movl $0, %edx
	movl b(%rip), %ecx
	idivl %ecx
	
	jmp end
	
modulus:
	movl a(%rip), %eax
	
	movl $0, %edx
	movl b(%rip), %ecx
	idivl %ecx
	
	movl %edx, %eax
	
	jmp end
	
power2:
	movl a(%rip), %eax
	
	imull a(%rip), %eax
	
	jmp end
	
power3:
	movl a(%rip), %eax
	
	imull a(%rip), %eax
	imull a(%rip), %eax
	
	jmp end

end:
	ret
