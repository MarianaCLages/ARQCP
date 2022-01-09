.section .data
	.global ptr1
	.global ptr2

.section .text
	.global str_copy_porto2
	
str_copy_porto2:
	movq ptr1(%rip), %rax # rax o end de str1
	movq ptr2(%rip), %rcx # rcx o end de str2
	
ciclo:
	cmpb $0, (%rax)
	je end
	
	cmpb $'v', (%rax)
	je v_to_b_lower
	
	cmpb $'V', (%rax)
	je v_to_b_upper
	
	movb (%rax), %dl
	movb %dl, (%rcx)
	jmp continuar
	
v_to_b_lower:
	movb $'b', (%rcx)
	jmp continuar
	
v_to_b_upper:
	movb $'B', (%rcx)
	jmp continuar

continuar:
	incq %rax
	incq %rcx
	
	jmp ciclo
	
end:
	movb $0, (%rcx)
	ret
