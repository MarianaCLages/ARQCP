.section .text
	.global greatest
	
greatest: # %edi: a / %esi: b / %edx: c
	movl $0, %eax
	
a_and_b:
	cmpl %edi, %esi
	jg b_and_c
	jl a_and_c
	je a_and_c
	
b_and_c:
	cmpl %esi, %edx
	jg c_greatest
	jl b_greatest
	je a_and_b
	
a_and_c:
	cmpl %edi, %edx
	jg c_greatest
	jl a_greatest
	je a_and_b
	
a_greatest:
	movl %edi, %eax
	ret
	
b_greatest:
	movl %esi, %eax
	ret
	
c_greatest:
	movl %edx, %eax
	ret
