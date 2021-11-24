#include "calcula_resto.h"

short numero_atual = 0;

void noves_fora(unsigned int *numeros, int n) {
	
	unsigned short *ptr = (unsigned short *) numeros;
	unsigned char *xptrChar = (unsigned char *) numeros;
	
	for(int i = 1; i < n * 2; i += 2) {
		
		numero_atual = *(ptr + i);
		*(xptrChar + (2*i) - 1) = calcula_resto();

	}
	
}
