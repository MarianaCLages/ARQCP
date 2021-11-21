int sort_without_reps(int *src, int n, int *dest){
	
	int *xPtr = src;
	int *xPtr2 = dest;
	int t=0;
	
	for(int i = 0 ; i < n ; i++){
		
		for(int j = i + 1; j < n ; j++){
			
			if(*(xPtr + j) < *(xPtr + i)){
			
				t = *(xPtr + i);
				*(xPtr + i) = *(xPtr + j);
				*(xPtr + j) = t;
					
<<<<<<< HEAD
			} else if(*(xPtr +j ) == *(xPtr + i)){
						
				 count--;
						
				}
		}
		
		*xPtr2=*(xPtr + i);
=======
			} 
		}	
		*xPtr2 = *(xPtr+i);
>>>>>>> 1812f7dd2f015a1f6af2587702370a44a40e5299
		xPtr2++;
	}
<<<<<<< HEAD
	return count;
=======
	
	
	
	return remove_Duplicates(src,n,dest);
}

int remove_Duplicates(int *src, int n, int *dest){
	
	int j = 0;
	
	for(int i = 0; i <= n - 1; i++) {
		if(src[i] != src[i + 1]) {
			dest[j++] = src[i];
		}
	}
	
	for(int i = 0; i < j; i++) {
		src[i] = dest[i];
	}
	
	return j;
>>>>>>> 1812f7dd2f015a1f6af2587702370a44a40e5299
}
