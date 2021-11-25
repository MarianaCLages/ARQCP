.section .data 
.global prova1
.global prova2
.global prova3

.section .text
.global pontuacao

pontuacao:
	movl prova1(%rip), %eax #guardar o valor da prova1 no %al para fazer comparaçoes com os valores das outras provas
	movl prova2(%rip), %ecx
	
comparacao:
	cmpl prova2(%rip), %eax #caso a prova 2 seja superior a prova 1 , vamos substituir o valor do %al para simplificar o processo
	jb prova2_maior_prova1 
	
	cmpl prova3(%rip), %eax #caso a prova 3 seja superior a prova 2 , vamos substituir o valor do %al para simplificar o processo
	jb prova3_maior_prova1
	
	jmp end
	
prova2_maior_prova1:
	movl prova2(%rip), %eax #substituimos o registo que previamente guardava o valor da prova1 pelo o valor da prova2
	jmp comparacao #agora voltamos à comparação
	
prova3_maior_prova1: #como o valor da prova3 é superior ao da prova2 , e como o valor da prova2 é superior o da prova1 sabemos que as provas com maior pontuação é a prova3 e a prova2 por isso podemos acabar o algoritmo de comparaçoes aqui e calcular o valor entre as duas
	movl prova2(%rip), %ecx 
	jmp end
	
end:
	addb %cl, %al #somamos os valor das duas provas com maior pontuação e retornamos esse valor no registo %al
	ret
	
	
	
	
