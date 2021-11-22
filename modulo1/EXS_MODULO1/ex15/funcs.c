#include <time.h>

int sets = 0;

void populate( int *vec , int num,  int limit){
	
	srand(time(0));

	for(int i = 0 ; i < num ; i++){
	
		*(vec + i) = rand() % limit + 1;
	
	}

}

int check (int x, int y, int z){

	if( z > y && y > x ) return 1;
	else return 0;

}

void inc_nsets(){
	sets++;
}
