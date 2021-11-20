#include <stdio.h>
#include "functions.h"

int i = 10;
int j = 3;

int main(void) {
	int res = f();
	printf("f: %d\n", res);
	
	res = f2();
	printf("f2: %d\n", res);
	
	res = f3();
	printf("f3: %d\n", res);
	
	res = f4();
	printf("f4: %d\n", res);
	
	return 0;
}
