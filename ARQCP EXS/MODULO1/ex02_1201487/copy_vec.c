void copy_vec(int *vec1,int *vec2, int n){
	
	int* xPtr1 = vec1;
	int* xPtr2 = vec2;
	
	for(int i = 0 ; i < n ; i++) {
	
		*xPtr2 = *xPtr1;
		xPtr1++;
		xPtr2++;
	
	}
	
	

}
