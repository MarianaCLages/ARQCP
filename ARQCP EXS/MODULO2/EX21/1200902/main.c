#include <stdio.h>
#include "new_salary.h"

int code = 11;
int currentSalary = 200;

int main(void) {
	int res = new_salary();
	
	printf("New salary: %d\n", res);
	
	return 0;
}
