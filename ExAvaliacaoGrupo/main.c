#include <stdio.h>
#include "header1.h"

int main(void) {
	
	unsigned int pontos[5] = {0x12200005, 0x0710001B, 0xqC09001A, 0x18180018, 0x09010020};
	
	
	int n = sizeof(vetor) / sizeof(int); //Calcular o tamanho do vetor que guarda os pontos
	
	int* apontadorEquipaMaiorPontuacao = vencedor(pontos,n); //Ao chamarmos esta função vamos obter o endereço da equipa com a maior pontuação
	
	printf("A equipa que teve uma maior pontuação esta guardada no endereço %p\n", apontadorEquipaMaiorPontuacao);
}
