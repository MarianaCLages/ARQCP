.section .data
	.global A
	.global B
	
.section .text
	.global isMultiple
	
isMultiple:

	movl A(%rip), %eax
	movl B(%rip), %ecx
	
	cltd
	
	idiv %ecx
	
	cmpl $0, %edx
	je multiple_detected
	
	movl $0, %eax
	jmp end
	
multiple_detected:
	movl $1, %eax
	
end:
	ret
