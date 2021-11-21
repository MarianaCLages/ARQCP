#ifndef TIME_H
#define TIME_H
#include <stdlib.h>
#include <time.h>
#endif

void populate( int *vec , int num,  int limit){

	srand ( time(NULL) );

	for(int i = 0 ; i < num ; i++){
		vec[i] = rand() % limit+1;
	}

}
