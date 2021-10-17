#include <stdio.h>
#include "capitalize.h"

int main(void) {
	
	char str[] = "The maximum value of this CYCLE";
	
	capitalize(str);
	printf("Text capitalized = %s\n", str);
	
	return 0;
}
