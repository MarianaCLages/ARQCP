#include <stdio.h>
#include "call_incr.h"

int main(void) {
	int res = call_incr();
	
	printf("Result = %d\n", res);
	
	return 0;
}
