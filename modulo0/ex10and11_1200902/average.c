int g_v[100] = {3, 4, 5};
int g_n = 3;

int average_array(int v[], int n) {
	
	int sum = 0;
	
	for(int i = 0; i < n; i++) {
		sum = sum + v[i];
	}
	return sum / n;
}

int average_global_array() {
	
	 int sum = 0;
	 
	 for(int i = 0; i < g_n; i++) {
		 sum = sum + g_v[i];
	 }
	 return sum / g_n;
}
