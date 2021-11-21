.section .data
	.global num
	
.section .text
	.global check_num
	
check_num:
	movl $0, %ecx

	movl num(%rip), %eax
	
	cmpl %ecx, %eax
	
	jge positive_num
	jl negative_num
	
positive_num:
	movl $2, %ecx
	
	movl $0, %edx
	idivl %ecx
	
	cmpl $0, %edx
	
	je even_positive
	jg odd_negative
	
negative_num:
	movl $2, %ecx
	
	movl $0, %edx
	idivl %ecx
	
	cmpl $0, %edx
	
	je even_negative
	jmp odd_negative
	
even_positive:
	movl $3, %eax
	jmp end
	
even_negative:
	movl $1, %eax
	jmp end
	
odd_positive:
	movl $4, %eax
	jmp end

odd_negative:
	movl $2, %eax
	jmp end
	
end:
	ret
