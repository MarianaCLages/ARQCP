#include <stdio.h>
#include "zero_count.h"

char* ptr1;

int main(void) {
	
	char phrase[] = "zer0 0 z0re";
	
	ptr1 = phrase;
	
	printf("Phrase: %s\n", phrase);
	int res = zero_count();
	printf("Zero count: %d\n", res);
	
	return 0;
}
