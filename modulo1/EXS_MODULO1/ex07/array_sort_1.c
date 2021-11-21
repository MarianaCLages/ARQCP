void array_sort1(int *vec, int n) {
	
	int *xPtr = vec;
	int t;
	
	for(int i = 0 ; i < n ; i++){
		
		for(int j = i + 1 ; j < n ; j++){
		
			if(*(xPtr + j) > *(xPtr + i)){
				
				t = *(xPtr + i);
				*(xPtr + i) = *(xPtr + j);
				*(xPtr + j) = t;
					
			}
		}	
	}
}
