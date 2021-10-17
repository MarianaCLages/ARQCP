void swap(int* vec1, int* vec2, int size){

	int *xPtr1 = vec1;
	int *xPtr2 = vec2;
	int aux;
	
	for(int i = 0 ; i < size ; i++){
		
		aux = *xPtr1;
		*xPtr1 = *xPtr2;
		*xPtr2 = aux;
		
		xPtr1++;
		xPtr2++;
	
	}


}
