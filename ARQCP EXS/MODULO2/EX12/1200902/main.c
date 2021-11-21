#include <stdio.h>
#include "ismultiple.h"

int A = 30;
int B = 5;

int main(void) {
	char res = isMultiple();
	
	printf("Is multiple: %hhd\n", res);
	
	return 0;
}
