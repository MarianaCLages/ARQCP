#include <stdlib.h>
#include <time.h>

void populate(int *vec , int num, int limit) {
	
	time_t t;
	srand((unsigned) time(&t));
	
	for(int i = 0; i < num; i++) {
		vec[i] = rand() % limit + 1;
	}
}
