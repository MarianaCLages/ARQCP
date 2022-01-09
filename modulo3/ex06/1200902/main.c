#include <stdio.h>
#include "encrypt.h"

char* ptr1;

int main(void) {
	char str[] = "ola mari";
	ptr1 = str;
	
	int count = encrypt();
	printf("Number of changes (encrypt)= %d\n", count);
	//printf("%s\n", str);
	
	count = decrypt();
	printf("Number of changes (decrypt)= %d\n", count);
	//printf("%s\n", str);
	
	return 0;
}
