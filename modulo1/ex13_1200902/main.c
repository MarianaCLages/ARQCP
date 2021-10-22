#include <stdio.h>
#include <string.h>
#include "where_is.h"

int main(void) {
	
	char str[] = "mariana";
	char c = 'a';
	int vec[10];
	
	int count = where_is(str, c, vec);
	printf("Character occurances: %d\n", count);
	
	return 0;
}
