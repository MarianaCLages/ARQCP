void compress_shorts(short* shorts, int n_shorts, int* integers){

	for(short i = 0 ; i < n_shorts ; i++){
		
		*(integers + i) = *(shorts + i); 
	
	}
}
