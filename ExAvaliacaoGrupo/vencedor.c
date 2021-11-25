#include "pontuacao.h"

unsigned char prova1 = 0;
unsigned char prova2 = 0;
unsigned char prova3 = 0;

unsigned int* vencedor(unsigned int *pontos, int n) {
	
	unsigned char* ptrChar = (unsigned char*) pontos; // apontador para ir buscar os pontos de cada prova
	unsigned int* equipa_maior_pontuacao = pontos; // apontador que será o output final do programa
	unsigned int* equipa_atual = pontos; // apontador para ir alterando, quando necessário, para a equipa de maior pontuação
	
	unsigned char total_pontuacao = 0; // char que guarda o valor total da pontuação de uma determinada equipa
	
	for(char i = 0; i < n * 4; i += 4) { // variável i anda de 4 em 4 bytes para passar aos resultados da equipa seguinte
		equipa_atual = pontos + i;
		prova3 = *(ptrChar + i); // pontos da prova3 de uma determinada equipa (localizados nos 8 bits menos significativos)
		prova2 = *(ptrChar + i + 2); // pontos da prova2 de uma determinada equipa (localizados nos 8 bits precedentes aos do total)
		prova1 = *(ptrChar + i + 3); // pontos da prova1 de uma determinada equipa (localizados nos 8 bits mais significativos)
		
		*(ptrChar + i + 1) = pontuacao(); // chamada da função realizada em assembly para obter o total
		
		if(total_pontuacao < *(ptrChar + i + 1)) { // para comparar a maior pontuação de cada equipa
			total_pontuacao = *(ptrChar + i + 1);
			equipa_maior_pontuacao = equipa_atual;
		}
	}
	return equipa_maior_pontuacao; // retorna o endereço da equipa com maior pontuação
}
