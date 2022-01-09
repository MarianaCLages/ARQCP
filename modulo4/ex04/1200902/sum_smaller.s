.section .text
	.global sum_smaller
	
sum_smaller: # %edi: num1 / %esi: num2 / %rdx: *smaller
	movl $0, %eax
	
	cmpl %edi, %esi
	jg num1_smaller
	
	movl %esi, (%rdx)
	
	jmp sum
	
num1_smaller:
	movl %edi, (%rdx)
	
sum:
	addl %esi, %edi
	movl %edi, %eax
	jmp end
	
end:
	ret
