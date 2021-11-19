.section .data
	
.global number

.section .text
	.global check_num
	
check_num:

	movl $0, %ecx

	movl number(%rip), %eax
	cmpl %ecx, %eax
	
	jg number_positive
	jl number_negative
	
	
number_positive:

	movl $2, %ecx
	
	cltd
	
	idivl %ecx
	
	cmpl $0, %edx
	
	je even_positive
	jg odd_positive


number_negative:

	movl $2, %ecx
	
	cltd
	
	idivl %ecx
	
	cmpl $0, %eax
	
	je even_negative
	jg odd_negative



even_positive:

	movl $3, %eax
	jmp end


odd_positive:

	movl $4, %eax
	jmp end


even_negative:

	movl $1, %eax
	jmp end

odd_negative:

	movl $2, %eax
	jmp end
	
end:

	ret
