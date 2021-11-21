#include <stdio.h>
#include "check_num.h"

int num = -3;

int main(void) {
	char res = check_num();
	
	printf("Check num: %hhd\n", res);
	
	return 0;
}
