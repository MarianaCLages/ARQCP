#include <stdio.h>
#include "str_cat.h"

char*ptr1;
char* ptr2;
char* ptr3;

int main(void) {
	char str1[] = "mari";
	char str2[] = "ana";
	char str3[80];
	
	ptr1 = str1;
	ptr2 = str2;
	ptr3 = str3;
	
	printf("First string: %s\n", str1);
	printf("Second string: %s\n", str2);
	
	str_cat();
	
	printf("After concatenation: %s\n", str3);
	
	return 0;	
}
