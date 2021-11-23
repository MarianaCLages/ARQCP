#include <stdio.h>
#include "total_risco.h"

int main(void) {
	int num = 6;
	int dados[12] = {-1,1, 2,-2, 0,0, 5,5, 4,4, 6,7};
	
	int *ptr = dados;
	
	long long result = total_risco(ptr, num);
	
	printf("Resultado dos riscos: ", result);
	
	return 0;
}
