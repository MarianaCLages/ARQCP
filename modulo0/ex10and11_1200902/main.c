#include <stdio.h>
#include "average.h"

int main() {
	
	int v[] = {7, 9};
	
	printf("Average = %d\n", average_array(v, 2));
	
	printf("Global = %d\n", average_global_array());
	
	return 0;
}
