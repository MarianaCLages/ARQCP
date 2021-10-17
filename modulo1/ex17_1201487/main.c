int main(void){

	int vec1[]={1, 2, 3, 4, 5, 6, 7};
	int vec2[]={2, 2, 2, 3, 3, 3, 1};
	
	int size = 7;
	
	swap(vec1,vec2,size);
	
	printf("First vec: ");
	for(int i = 0 ; i < size ; i++){
		printf(" %d,",vec1[i]);
	}
	
	printf("Second vec: ");
	for(int j = 0 ; j < size ; j++){
		printf(" %d,",vec2[j]);
	}


}
