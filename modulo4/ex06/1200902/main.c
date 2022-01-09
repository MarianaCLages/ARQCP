#include <stdio.h>
#include "test_equals.h"

int main(void) {
	
	char* a = "momo";
	char* b = "meme";
	
	int res = test_equal(a, b);
	
	if(res == 1) {
		printf("The strings are equal\n");
	} else if(res == 0) {
		printf("The strings are not equal\n");
	}
	
	return 0;
}
