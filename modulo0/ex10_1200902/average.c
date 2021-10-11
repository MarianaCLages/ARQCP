int sum = 0;

int average_array(int v[], int n) {
	
	for(int i = 0; i <= n; i++) {
		sum = sum + v[i];
	}
	return sum / n;
}

int *fill_array(int *v, int n) {
	
	for(int i = 0; i <= n; i++) {
		v[i] = i;
	}
	return v;
}
