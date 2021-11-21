.section .data
	.global op1
	.global op2
	
.section .text
	.global test_flags
	
test_flags:
	
	movl op1(%rip), %eax
	
	addl op2(%rip), %eax
	
	# jump if carry
	jc carry_detected
	movl $0, %eax
	jmp end
	
carry_detected:
	movl $1, %eax
	
end:
	ret
