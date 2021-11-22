#include <stdio.h>
#include "noves_fora.h"

int main(void) {
	unsigned int numeros [10] = {0x0B0F0000, 0x0C0A0000, 0x0B080000, 0x07100000, 0x0F120000, 0xF0E10000, 0x0B0F0000, 0x0A0B0000, 0x0F100000, 0x090F0000};
	
	int n = (sizeof(numeros) / sizeof(int));
	
	noves_fora(numeros,n);
	
	unsigned short *ptr = (unsigned short *) numeros;
	
	for(int i = 1; i < n * 2; i += 2) {
		unsigned short numero = *(ptr + i);
		unsigned char resto = *(ptr + i - 1);
		printf("Valor do número : %hu\n",numero);
		printf("Valor do resto : %hhu\n", resto);
		
	}
	
}
