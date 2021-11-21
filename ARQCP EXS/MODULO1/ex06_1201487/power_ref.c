void power_ref(int* x, int y){
	
	if(y == 0) {
		*x = 1;
	}
	
	int result = 0;
	for(int i = 0; i <= y; i++) {
		result = *x * result;
	}
	*x = result;
}

