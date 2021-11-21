#include <stdio.h>
#include "needed_time.h"

short current = 16;
short desired = 20;

int main(void) {
	int res = needed_time();
	
	printf("Needed time: %d\n", res);
	
	return 0;
}
