int count_bits_zero_c(int x) {

	int count = 0;
	
	for(int i = 1; i < 32; i++) {
		char bit = x << i;
	
		if (bit == 0) {
			count++;
		}
	}
	return count;
}
