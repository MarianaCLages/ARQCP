#include "pontuacao.h"

unsigned char prova1, prova2, prova3;

int* vencedor(int *pontos, int n) {
	
	char *ptr = (char *) pontos;
	char total;
	
	for(int i = 0; i < n * 4; i = i + 4) {
		prova3 = *(ptr + i);
		prova2 = *(ptr + i + 2);
		prova1 = *(ptr + i + 3);
		
		total = pontuacao();
}
