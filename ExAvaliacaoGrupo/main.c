#include <stdio.h>
#include "vencedor.h"

int main(void) {
	
	unsigned int pontos[5] = {0x12200005, 0x0710001B, 0x1C09001A, 0x18180018, 0x09010020};
	int n = sizeof(pontos) / sizeof(int); //Calcular o tamanho do vetor que guarda os pontos
	
	unsigned int* apontadorEquipaMaiorPontuacao = vencedor(pontos, n); //Ao chamarmos esta função vamos obter o endereço da equipa com a maior pontuação
	
	printf("A equipa que teve uma maior pontuação está guardada no endereço %p\n", apontadorEquipaMaiorPontuacao);
	printf("\n");
	
	char total_pontuacao_equipa = 0;

	for (char i = 0; i < n*4; i+=4) {
		total_pontuacao_equipa = *(pontos + i + 1);
		
		if(i==0 || i==3) printf("Equpipa %hhd , pontuaçao total : %hhd\n", (i/3 + 1), total_pontuacao_equipa);
		else printf("Equpipa %hhd , pontuaçao total : %hhd\n", (i/3), total_pontuacao_equipa);
		
		
		
	}
}
