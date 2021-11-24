.section .data

.global nota_min
.global nota_max
.global nota_final

.section .text
.global min_max_notas

min_max_notas:
	movq $0, %rax
	movw nota_final(%rip), %ax
	
	cmpw nota_min(%rip), %ax
	jb troca_nota_min
	
	cmpw nota_max(%rip), %ax
	ja troca_nota_max
	
	movw $0, %ax
	jmp end
	
troca_nota_min:
	movw %ax, nota_min(%rip)
	movw $1, %ax
	jmp end
	
troca_nota_max:
	movw %ax, nota_max(%rip)
	movw $1, %ax
	jmp end
	
end:
	ret
