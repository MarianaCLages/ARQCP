.section .data
.global numero_atual
	
.section .text
.global calcula_resto

calcula_resto:
	movl numero_atual(%rip), %eax
	
	movl $0, %r9d
	
	cmpl $0, %eax
	cltd
	ja my_loop

	jmp end
	
my_loop:
	movl $10, %ecx
	
	cltd
	
	divl %ecx
	
	addl %edx,%r9d
	
	cmpl $0, %eax
	ja my_loop
	
	jmp calcula_resto_determinar_resto_final
	
	
calcula_resto_determinar_resto_final:
	cmpl $9, %r9d
	jb end

	movl %r9d, %eax
	movl $0, %r9d
	
	cltd
	
	jmp my_loop_2


my_loop_2:	
	movl $10, %ecx
	
	cltd
	
	divl %ecx
	
	addl %edx, %r9d

	cmpl $0, %eax
	ja my_loop_2
	
	jmp calcula_resto_determinar_resto_final
	
end:
	movl %r9d, %eax

	ret
