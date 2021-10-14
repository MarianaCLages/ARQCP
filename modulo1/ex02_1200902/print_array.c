void print_array(int *vec, int n) {
	
	int index = 0;
	
	while (n != 0) {
		printf("Index: %d, Value = %d\n", index, *vec);
		vec++;
		index++;
		n--;
	}
}
