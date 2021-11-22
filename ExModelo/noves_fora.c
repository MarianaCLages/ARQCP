#include <stdio.h>
#include "calcula_resto.h"

void noves_fora(unsigned int *numeros, int n) {
	
	unsigned short *ptr = (unsigned short *) numeros;
	
	for(int i = 1; i < n * 2; i += 2) {
		short res = *(ptr + i);
		//calcula_resto = *(ptr + i - 1);
	}
}
