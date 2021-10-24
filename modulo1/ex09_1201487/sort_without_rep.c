int sort_without_reps(int *src, int n, int *dest){
	
	int *xPtr = src;
	int *xPtr2 = dest;
	int t=0;
	
	int count = (sizeof(src)/sizeof(int);
	
	for(int i = 0 ; i < n ; i++){
		
		for(int j = i + 1 ; j < n ; j++){
		
			if(*(xPtr +j ) < *(xPtr + i)){
				
				t = *(xPtr + i);
				*(xPtr + i) = *(xPtr + j);
				*(xPtr + j) = t;
					
			} else if(*(xPtr +j ) == *(xPtr + i)){
						
				 *(xPtr + i) = 0;
				 *(xPtr + j) = 0;
				 break;
						
				}
		}
		
		*xPtr2=*(xPtr + i);
		xPtr2++;
			
	}
	return 1;
}
