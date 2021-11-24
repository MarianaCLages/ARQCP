#include <stdio.h>
#include "calcula_notas.h"

int main(void) {
	unsigned int notas[10] = {0x0B0F0A10, 0x0C0A0907, 0x0B080A0C, 0x0710080A, 0x0F120E0F, 0x0E110B0C, 0x0B0F0A0B, 0x0F101112, 0x090F0A06};
	int n = sizeof(notas)/sizeof(int);
	
	short count = calcula_notas(notas, n);
	
	printf("Durante o processo foram atualizadas %hd vezes as variáveis nota_min e nota_max\n",count);
	
	return 0;
}
