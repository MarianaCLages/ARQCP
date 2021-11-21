#include <stdio.h>
#include "test_flags.h"

int op1 = 30;
int op2 = 5;

int main(void) {
	char res = test_flags();
	
	printf("Test flags: %hhd\n", res);
	
	return 0;
}
