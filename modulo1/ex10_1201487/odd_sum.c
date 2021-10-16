int odd_sum(int  *p){

	int* xPtr = p;
	int n = p[0];
	int sum = 0;
	
	xPtr++;
	
	for(int i = 0 ; i < n-1 ; i ++ ){
	
		if ( *xPtr % 2 != 0 ){
			sum += *xPtr;
		}
		xPtr++;
	}

	return sum;
}
