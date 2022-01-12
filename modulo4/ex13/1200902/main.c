#include <stdio.h>
#include "rotate_left.h"
#include "rotate_right.h"

int main (void) {
	
	int num = 123456;
	int nbits = 3;
	
	int rotateleft = rotate_left(num, nbits);
	int rotateright = rotate_right(num, nbits);
	
	printf("Rotate left = %d\n", rotateleft);
	printf("Rotate right = %d\n", rotateright);
	
	return 0;
}
