#include <stdio.h>

int sum(int a,int b){

 return a+b;

}

int main (void) {

 char a=1;
 
 char sum2=0;
 
 while(sum2<10){
 
 sum2 = sum(sum2,a);
 
 }
 
 return 0;

}
