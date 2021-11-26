.section .data
	.global ptr1
	.global ptr2

.section .text
	.global str_copy_porto
	
str_copy_porto:
	movq ptr1(%rip), %rax # rax o end de str1
	movq ptr2(%rip), %rcx # rcx o end de str2
	
ciclo:	
	cmpb $0, (%rax)
	je end
	
	cmpb $'v', (%rax)
	je v_to_b
	
	movb (%rax), %dl
	movb %dl, (%rcx)
	jmp continuar
	
v_to_b:
	movb $'b', (%rcx)
	
continuar:
	incq %rax
	incq %rcx
	
	jmp ciclo
	
end:
	movb $0, (%rcx)
	ret
