#include <stdio.h>
#include "header1.h"

int main(void) {
	unsigned int notas[10] = {0x0B0F0A10, 0x0C0A0907, 0x0B080A0C, 0x0710080A, 0x0F120E0F, 0x0E110B0C, 0x0B0F0A0B, 0x0F101112, 0x090F0A06};
	int n = 10;
	
	int *ptr = notas;
	
	coiso(ptr, n);
	
	return 0;
}
