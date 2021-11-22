#include <stdio.h>
#include "noves_fora.h"
#include "calcula_resto.h"

int main(void) {
	
	unsigned int numeros [10] = {0x0B0F0000, 0x0C0A0000, 0x0B080000, 0x07100000, 0x0F120000, 0xF0E10000, 0x0B0F0000, 0x0A0B0000, 0x0F100000, 0x090F0000};
	noves_fora(numeros, (sizeof(numeros) / sizeof(int)));
	return 0;
}
