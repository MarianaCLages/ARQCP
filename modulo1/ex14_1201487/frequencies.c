void frequencies(float *grades, int n, int *freq){

	float *xPtr = grades;
	int *iPtr = freq;
	
	for(int i = 0 ; i < n ; i++){
	
		for(int j = 0 ; j < n ; j ++){
			
			*xPtr = (int)*xPtr;
	
			if(*xPtr == j){
				*iPtr += 1;
			}
			iPtr++;
		}
		xPtr++;
		iPtr = freq;
	}

}
