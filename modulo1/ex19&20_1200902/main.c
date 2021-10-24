#include <stdio.h>
#include "find.h"

int main(void) {
	
	char str[] = "Hello world, it's a great world, world!";
    char* addr[5] = {0};	
    
    find_all_words(str, "world", addr);
    
    for(int i = 0; i < 5; i++) {
		printf("%p ", addr[i]);
	}
	printf("\n");
	
	return 0;
}
