void array_sort1(int *vec, int n) {
	
	int *ptr = vec;
	int aux;
	
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(*(ptr + i) > *(ptr + j)) {
				aux = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = aux;
			}
		}
	}
}
