#include <stdio.h>
#include "compute.h"

int a = 2;
int b = 3;
int c = 4;
int d = 5;

int main(void) {
	int res = compute();
	
	printf("((A * B) + C) / D: %d\n", res);
	
	return 0;
}
