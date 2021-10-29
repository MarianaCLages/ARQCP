 void compress_shorts(short* shorts, int n_shorts, int* integers){
 
	short *sPtr = shorts;
	int *iPtr = integers;
	
	for(int i = 0 ; i < (n_shorts/2) ; i++){
	
		*(iPtr + i) = *(sPtr + i);
		*(iPtr + 1 + i) = *(sPtr + 1 + i);
		
		*(iPtr + 2 + i) = *(sPtr + 2 + i);
		*(iPtr + 3 + i) = *(sPtr + 3 + i);
		
		iPtr++;
		sPtr += 4;
		
	}
 
 }
