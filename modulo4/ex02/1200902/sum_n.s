.section .text
	.global sum_n
	
sum_n:
	movl $0, %eax

loop:
	cmpl $0, %edi
	jle end
	
	addl %edi, %eax
	decl %edi
	
	jmp loop
	
end:
	ret
