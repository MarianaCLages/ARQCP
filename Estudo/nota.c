#include "min_max_notas.h"

char nota_final = 0;

char nota_max = 0;
char nota_min = 20;

short calcula_notas(unsigned int *notas, int n) {
	
	unsigned char *ptr = (unsigned char *) notas;
	
	char nota_exame = 0;
	char nota_ex3 = 0;
	char nota_ex2 = 0;
	char nota_ex1 = 0;
	
	short count = 0;
	
	for(int i = 0; i < n * 4; i += 4) {
		nota_exame = *(ptr + i);
		nota_ex3 = *(ptr + i + 1);
		nota_ex2 = *(ptr + i + 2);
		nota_ex1 = *(ptr + i + 3);
		
		nota_final = (nota_ex1 * 0.2) + (nota_ex2 * 0.2) + (nota_ex3 * 0.2) + (nota_exame * 0.4);
		
		printf("Nota final:%d\n",nota_final);
		
		if(min_max_notas()) {
			count++;
		}
	}
	return count;
}
