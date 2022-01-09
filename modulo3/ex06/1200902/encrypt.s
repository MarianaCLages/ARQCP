.section .data
	.global ptr1
	
.section .text
	.global encrypt
	.global decrypt
	
encrypt:
	movq ptr1(%rip), %rcx
	movl $0, %eax
	
loop_encrypt:
	cmpb $0, (%rcx)
	je end
	
	cmpb $'a', (%rcx)
	je next
	
	cmpb $' ', (%rcx)
	je next
	
	addb $2, (%rcx)
	incl %eax
	
	jmp loop_encrypt
	
next:
	addq $1, %rcx
	jmp loop_encrypt
	
decrypt:
	movq ptr1(%rip), %rcx
	movl $0, %eax
	
loop_decrypt:
	cmpb $0, (%rcx)
	je end
	
	cmpb $'a', (%rcx)
	je next
	
	cmpb $' ', (%rcx)
	je next
	
	subb $2, (%rcx)
	incl %eax
	
	jmp loop_decrypt

end:
	ret
	
