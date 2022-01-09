.section .data
	.global ptr1
	.global ptr2
	.global ptr3
	
.section .text
	.global str_cat
	
str_cat:
	movq ptr3(%rip), %rax
	movq ptr2(%rip), %rcx
	movq ptr1(%rip), %r9
	
first_string:
	movb (%r9), %cl
	cmpb $0, %cl
	je second_string
	
	movb %cl, (%rax)
	
	incq %r9
	incq %rax
	
	jmp first_string
	
second_string:
	movb (%rcx), %cl
	cmpb $0, %cl
	je end
	
	movb %cl, (%rax)
	
	incq %rcx
	incq %rax
	
	jmp second_string
	
end:
	movb $0, (%rax)
	ret
	
