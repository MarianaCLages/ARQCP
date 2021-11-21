#include <stdio.h>
#include "power_ref.h"

int main(void) {
	
	int base = 2;
	int exponent = 3;
	int *ptr = &base;
    
    power_ref(ptr, exponent);
    printf("Result = %hhd\n", *ptr);
}
