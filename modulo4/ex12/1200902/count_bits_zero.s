.section .data

.section .text
	.global count_bits_zero
	
count_bits_zero: # %edi: x
	movb $0, %r9b
	movb $32, %cl
	
	movl $0, %eax
	
loop:
	cmpb %cl, %r9b
	je end
	
	sall %edi
	jae aum_count
	
	incb %r9b
	
	jmp loop
	
aum_count:
	incb %r9b
	incl %eax
	
	jmp loop
	
end:
	ret
