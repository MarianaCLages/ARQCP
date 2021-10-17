#include <stdio.h>
#include "sort_without_reps.h"

int main(void) {
	
	int vec[] = {1, 2, 2, 4, 3, 3};
	int dest[10];
	int n = 6;
	
	sort_without_reps(vec, n, dest);
	n = remove_duplicates(vec, n, dest);
	
	for(int i = 0; i < n; i++) {
		printf("%d\n", dest[i]);
	}
}
