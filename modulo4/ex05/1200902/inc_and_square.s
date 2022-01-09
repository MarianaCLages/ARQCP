.section .text
	.global inc_and_square

inc_and_square: # %rdi: *v1 / %esi: v2
	incq (%rdi)
	
	movl %esi, %eax
	imull %esi
	
	ret
	
