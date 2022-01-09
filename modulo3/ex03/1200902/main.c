#include <stdio.h>
#include "str_copy_porto2.h"

char* ptr1;
char* ptr2;

int main(void) {
	
	char str1[] = "Avbc Vv Bb";
	const char SIZE = sizeof(str1) / str1[0];
	char str2[SIZE];
	
	ptr1 = str1;
	ptr2 = str2;
	
	printf("str1: %s\n", str1);
	str_copy_porto2();
	printf("str2: %s\n", str2);
	
	return 0;
}
