#include <stdio.h>
#include "getarea.h"

int base = 3;
int height = 4;

int main(void) {
	int res = getArea();
	
	printf("Area: %d\n", res);
	
	return 0;
}
