#include <stdio.h>
#include "average.h"

int main(void) {
	
	int n = 5;
	int v[n];
	
	int average = average_array(fill_array(v, n), n);
	printf("Average of array = %d\n", average);
	
	return 0;
}
