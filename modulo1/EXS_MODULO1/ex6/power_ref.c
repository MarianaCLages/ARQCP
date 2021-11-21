void power_ref(int* x, int y){

	//int n = sizeof(x)/sizeof(int);
	
	for(int i = 0; i < 3 ; i++) {
	
		int aux = *x;
	
		for(int j = 1 ; j < y ; j++) {
		
			*x *= aux;
		
		}
	
		x++;
	
	}
	
}
