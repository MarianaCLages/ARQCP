int odd_sum(int *p) {
	
	int sum = 0;
	
	for(int i = 0; i < *p; i++) {
		sum = sum + *(p + 1);
	}
	return sum;
}
