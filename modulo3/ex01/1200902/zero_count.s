.section .data
	.global ptr1

.section .text
	.global zero_count
	
zero_count:
	movq ptr1(%rip), %rcx
	movl $0, %eax
	
ciclo:
	cmpb $0, (%rcx)
	je end

	cmpb $'0', (%rcx)
	je count_zeros
	
	incq %rcx
	
	jmp ciclo
	
count_zeros:
	incq %rcx
	incl %eax
	
	jmp ciclo
	
end:
	ret
