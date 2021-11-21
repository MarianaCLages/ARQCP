int odd_sum(int *p) {

	int size = *p;
	p++;
	int sum = 0;
	
	for(int i = 0 ; i < size ; i++){
	
		if(*(p + i) % 2 != 0 ) {
			
			sum += *(p + i);
			
		}
	
	}
	
	return sum;

}
