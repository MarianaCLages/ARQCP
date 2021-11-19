.section .data
	.global base
	.global height
	
.section .text
	.global getArea
	
getArea:

	movl base(%rip), %eax
	movl height(%rip), %ecx
	
	imull %ecx
	
	movl $2, %ecx
	
	cmpl $0, %eax
	je zero_condition
	
	idivl %ecx
	jmp end
	
zero_condition:
	movl $0, %eax
	
end:
	ret
