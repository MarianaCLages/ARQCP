#include <stdio.h>

void copy_vec(int *vec1, int *vec2, int n);

int main(void){
	
	int vec1[] = {10, 11, 12, 13, 14};
	int vec2[] = {2, 3, 4, 5, 6};
	int n = 5;
	
	copy_vec(vec1,vec2,n);
	
	for(int i = 0 ; i < n ; i++){
		printf("%d\n",vec2[i]);
	}
	
}

void copy_vec(int *vec1,int *vec2, int n){
	
	int* xPtr1 = vec1;
	int* xPtr2 = vec2;
	
	for(int i = 0 ; i < n ; i++) {
	
		*xPtr2 = *xPtr1;
		xPtr1++;
		xPtr2++;
	
	}
	
	

}
