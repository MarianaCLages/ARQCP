#include <stdio.h>

int main(void){

char a = 1;
unsigned int b = 2232;
int c = 32323;
short d = 42;
long e = 124124124;
long long f = 1231231231231231;
float g = 2.3;
double h = 4.1;

printf("Size of char %lu\n",sizeof(a));
printf("Size of unsigned int %lu\n",sizeof(b));
printf("Size of int %lu\n",sizeof(c));
printf("Size of short %lu\n",sizeof(d));
printf("Size of long %lu\n",sizeof(e));
printf("Size of long long %lu\n",sizeof(f));
printf("Size of float %lu\n",sizeof(g));
printf("Size of double %lu\n",sizeof(h));


return 0;

}
