#include <stdio.h>
#include "asm.h"

int op1 = 0, op2 = 0;

int main(void) {
	printf("Valor op1:");
	scanf("%d", &op1);
	
	printf("Valor op2:");
	scanf("%d", &op2);
	
	int res = sum();
	int res2 = sum_v2();
	
	printf("sum = %d\n", res);
	printf("sum_v2 = %d\n", res2);
	
	return 0;
}
