int sort_without_reps(int *src, int n, int *dest) {
	
	int temp;
	
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(*(src + i) > *(src + j)) {
				if(*(src + i) == *(src + j)) {
					*(src + i) = 0;
					*(src + j) = 0;
					break;
				}
				temp = *(src + i);
				*(src + i) = *(src + j);
				*(src + j) = temp;
			}
		}
		*dest = *(src + i);
		dest++;
	}
	return 1;
}

int remove_duplicates(int *src, int n, int *dest) {
	
	int j = 0;
	
	for(int i = 0; i < n - 1; i++) {
		if(src[i] != src[i + 1]) {
			dest[j++] = src[i];
		}
	}
	dest[j++] = src[n - 1];
	
	for(int i = 0; i < j; i++) {
		src[i] = dest[i];
	}
	
	return j;
}
