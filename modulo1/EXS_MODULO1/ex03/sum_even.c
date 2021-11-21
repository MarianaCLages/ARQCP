int sum_even(int *p, int num){

	int sum = 0;

	for(int i = 0 ; i < num ; i++) {
	
		if(*p%2 == 0) sum += *p; 
		p++;
		
	}
	
	return sum;

}
