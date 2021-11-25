#include <stdio.h>
#include "vencedor.h"

int main(void) {
	
	unsigned int pontos[5] = {0x12200005, 0x0710001B, 0x1C09001A, 0x18180018, 0x09010020};
	int n = sizeof(pontos) / sizeof(int); //Calcular o tamanho do vetor que guarda os pontos
	
	unsigned int* apontadorEquipaMaiorPontuacao = vencedor(pontos, n); //Ao chamarmos esta função vamos obter o endereço da equipa com a maior pontuação
	
	printf("\nA equipa que teve uma maior pontuação está guardada no endereço:%p\n", apontadorEquipaMaiorPontuacao);
	printf("\n\nEquipas:\n\n");
	
<<<<<<< HEAD
	unsigned char* ptrChar = (unsigned char*) pontos;
	
	char total_pontuacao_equipa = 0;
	char equipas = 0;

	for (char i = 0; i < n*4; i+=4) {
		total_pontuacao_equipa = *(ptrChar + i + 1);
=======
	char total_pontuacao_equipa = 0; // para armazenar as pontuações de cada equipa
	char equipas = 0; //para incrementar o número da equipa no output

	for (char i = 0; i < n * 4; i += 4) {
		total_pontuacao_equipa = *(pontos + i + 1); // vai buscar o valor da pontuação da equipa ao vetor
>>>>>>> d835427145899dbe4edc19d3e0ace53fed5fc198

		printf("Equipa %hhd, Pontuação total : %hhu\n", equipas, total_pontuacao_equipa);
		
		equipas++;
	}
}
