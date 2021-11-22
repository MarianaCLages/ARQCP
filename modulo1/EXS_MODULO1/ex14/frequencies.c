void frequencies(float *grades, int n, int *freq){

	int num = 0;

	for(int i = 0; i < 20 ; i++){
		
		for(int j = 0; j < n ; j++){
			
			num = (int)*(grades + j);
			
			if(num == i){
			
				*(freq + i) += 1;
			
			}
		}
	}	
}
