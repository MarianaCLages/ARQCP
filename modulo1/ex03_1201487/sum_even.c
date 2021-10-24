int sum_even( int *p, int num){

	int* xPtr = p;
	int sum=0;

	for(int i = 0 ; i < num ; i++){
	
		sum = sum + *xPtr;
		xPtr++;
	
	}
	
	return sum;

}
