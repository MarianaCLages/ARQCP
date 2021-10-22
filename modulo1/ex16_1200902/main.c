#include <stdio.h>
#include "where_exists.h"

int main(void) {
	
	char str1[] = "ana";
	char str2[] = "mariana";
	
	char *ptr1 = str1;
	char *ptr2 = str2;
	
	printf("%s\n", where_exists(ptr1, ptr2));
	
	return 0;
}
