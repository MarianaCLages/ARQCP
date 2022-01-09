.section .text
	.global test_equal

test_equal:	# %rdi: *a / %rsi: *b
	cmpq %rdi, %rsi
	je equals
	jne not_equals
	
equals:
	movl $1, %eax
	ret
	
not_equals:
	movl $0, %eax
	ret
