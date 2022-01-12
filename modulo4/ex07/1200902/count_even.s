.section .text
	.global count_even
	
count_even: # %rdi: *vec / %esi: n
	movl $0, %r9d
	movl $2, %r10d
	movl $0, %r11d # count
	
loop:	
	cmpl %r9d, %esi
	je end
	
	movw (%rdi, %r9, 2), %ax
	cwtd
	
	idivl %r10d
	
	cmpw $0, %dx
	je is_even
	
	incl %r9d
	
	jmp loop
	
is_even:
	incl %r11d
	incl %r9d
	
	jmp loop
	
end:
	movl %r11d, %eax
	ret
