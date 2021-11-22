#include "calcula_resto.h"

short numero_atual = 0;

void noves_fora(unsigned int *numeros, int n) {
	
	unsigned short *ptr = (unsigned short *) numeros;
	
	for(int i = 1; i < n * 2; i += 2) {
		
		numero_atual = *(ptr + i);
		*(ptr + i - 1) = calcula_resto();

	}
	
}
