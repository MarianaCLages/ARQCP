#include <stdio.h>
#include "sum_v3.h"

int op1 = 0, op2 = 0;

int main(void) {
	printf("Valor op1:");
	scanf("%d", &op1);
	
	printf("Valor op2:");
	scanf("%d", &op2);
	
	int res = sum_v3();
	
	printf("sum_v3 = %d\n", res);
	
	return 0;
}
