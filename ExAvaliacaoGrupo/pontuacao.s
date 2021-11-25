.section .data 
	.global prova1
	.global prova2
	.global prova3

.section .text
	.global pontuacao

pontuacao:
	movq $0, %rax
	movq $0, %rcx
	movq $0, %rdx
	
	// sign extension uma vez que se trata de valores unsigned
	movzbq prova1(%rip), %rax
	movzbq prova2(%rip), %rcx
	movzbq prova3(%rip), %rdx
	
comparacao:
	cmpq %rcx, %rax #caso a prova 2 seja superior a prova 1, vamos substituir o valor do %rax para simplificar o processo
	jb prova2_maior_prova1 
	
	cmpq %rdx, %rax #caso a prova 3 seja superior a prova 1, vamos substituir o valor do %rax para simplificar o processo
	jb prova3_maior_prova1
	
	cmpq %rdx, %rcx #caso a prova 3 seja superior a prova 2, vamos substituir o valor do %rax para simplificar o processo
	jb prova3_maior_prova2
	
	jmp end
	
prova2_maior_prova1:
	movq %rax, %r9
	movq %rcx, %rax #substituimos o registo que previamente guardava o valor da prova1 pelo o valor da prova2
	movq %r9, %rcx
	jmp comparacao #voltamos à comparação
	
prova3_maior_prova1: #como o valor da prova3 é superior ao da prova2 e, como o valor da prova2 é superior o da prova1, sabemos que as provas com maior pontuação são a prova3 e a prova2, por isso podemos acabar o algoritmo de comparaçoes aqui e calcular o valor entre as duas
	movq %rax, %r9
	movq %rdx, %rax #substituimos o registo que previamente guardava o valor da prova1 pelo valor da prova2
	movq %r9, %rdx
	jmp end
	
prova3_maior_prova2: #como o valor da prova3 é superior ao da prova2 e, como o valor da prova2 é superior o da prova1, sabemos que as provas com maior pontuação são a prova3 e a prova2, por isso podemos acabar o algoritmo de comparaçoes aqui e calcular o valor entre as duas
	movq %rcx, %r9
	movq %rdx, %rcx #substituimos o registo que previamente guardava o valor da prova1 pelo valor da prova2
	movq %r9, %rdx
	jmp end
	
end:
	addb %cl, %al #somamos os valores das duas provas com maior pontuação e retornamos esse valor no registo %al
	ret
	
	
	
	
