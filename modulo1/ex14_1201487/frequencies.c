void frequencies(float *grades, int n, int *freq) {
	
	int count;
	int grade;
	
	for(int i = 0; i <= 20; i++) {
		count = 0;
		for(int j = 0; j < n; j++) {
			grade = (int)*(grades + j);
			if(grade == i) {
				count++;
			}
		}
		*(freq + i) = count;
	}
}
