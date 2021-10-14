int sort_without_reps(int *src, int n, int *dest){
	
	int *xPtr = src;
	int *xPtr2 = dest;
	int t;
	
	for(int i = 0 ; i < n ; i++){
		
		for(int j = i + 1 ; j < n ; j++){
		
			if(*(xPtr +j ) < *(xPtr + i)){
				
				if(*(xPtr +j ) == *(xPtr + i)){
						
				 *(xPtr + i) = 0;
				 *(xPtr + j) = 0;
				 break;
						
				}
				
				t = *(xPtr + i);
				*(xPtr + i) = *(xPtr + j);
				*(xPtr + j) = t;
					
			}
		}
		
		*xPtr2=*(xPtr + i);
		xPtr2++;
			
	}
	return 1;
}
