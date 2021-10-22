#include <stdio.h>
#include "functions.h"

int vec[100];
int *ptr = vec;
int num = 100;
int limit = 20;

int main(void) {
	
	populate(vec, num, limit);
	
	for(int i = 0; i < num / 3; i++) {
		if(check(*ptr, *(ptr + 4), *(ptr + 8)) == 1) { //because it's an integer, it goes 4 by 4
			printf("It satisfies the condition\n");
		} else {
			printf("It doesn't satisfy the condition\n");
		}
	}
	return 0;
}
