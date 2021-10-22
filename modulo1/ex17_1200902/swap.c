void swap(int* vec1, int* vec2, int size) {
	
	int *ptr1 = vec1;
	int *ptr2 = vec2;
	
	int aux;
	
	for(int i = 0; i < size; i++) {
		aux = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = aux;
		
		ptr1++;
		ptr2++;
	}
}
