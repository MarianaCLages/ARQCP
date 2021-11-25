#include <stdio.h>
#include "vencedor.h"

int main(void) {
	
	unsigned int pontos[5] = {0x12200005, 0x0710001B, 0x1C09001A, 0x18180018, 0x09010020};
	
	int n = sizeof(pontos) / sizeof(int); //Calcular o tamanho do vetor que guarda os pontos
	
	unsigned int* apontadorEquipaMaiorPontuacao = vencedor(pontos,n); //Ao chamarmos esta função vamos obter o endereço da equipa com a maior pontuação
	
	printf("A equipa que teve uma maior pontuação esta guardada no endereço %p\n", apontadorEquipaMaiorPontuacao);
}
