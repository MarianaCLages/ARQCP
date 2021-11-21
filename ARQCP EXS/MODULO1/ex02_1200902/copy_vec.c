void copy_vec(int *vec1, int *vec2, int n) {
	
	while (n != 0) {
		int aux = *vec1;
		*vec2 = aux;
		vec1++;
		vec2++;
		n--;
	}
}
