.section .data

base:
	.int 3
height:
	.int 4
	
.section .text
	.global getArea2
	
getArea2:

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
