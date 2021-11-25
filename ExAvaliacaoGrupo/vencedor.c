#include "pontuacao.h"

unsigned char prova1, prova2, prova3;

int* vencedor(int *pontos, int n) {
	
	char *ptr = (char *) pontos; // apontador para ir buscar os pontos de cada prova
	char total_pontuacao = 0;
	int* equipa_maior_pontuacao = pontos;
	int* equipa_atual = pontos;
	
	for(char i = 0; i < n * 4; i += 4) { // variável i anda de 4 em 4 bytes para passar aos resultados da equipa seguinte
		equipa_atual = pontos + i;
		prova3 = *(ptr + i); // pontos da prova3 de uma determinada equipa (localizados nos 8 bits menos significativos
		prova2 = *(ptr + i + 2); // pontos da prova2 de uma determinada equipa (localizados nos 8 bits precedentes aos do total)
		prova1 = *(ptr + i + 3); // pontos da prova1 de uma determinada equipa (localizados nos 8 bits mais significativos)
		
		*(ptr + i + 1) = pontuacao(); // valor do total é proveniente da função realizada em assembly
		
		if(total_pontuacao < *(ptr + i + 1)) {
			total_pontuacao = *(ptr + i + 1);
			equipa_maior_pontuacao = equipa_atual;
		}
	}
	return equipa_maior_pontuacao;
}
