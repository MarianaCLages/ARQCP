ex05: main.o vec_sum.o vec_avg.o
	gcc -g -Wall main.o  vec_sum.o vec_avg.o -o ex05
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
vec_sum.o: vec_sum.s
	gcc -g -Wall -c vec_sum.s -o vec_sum.o
	
vec_avg.o:
	gcc -g -Wall -c vec_avg.s -o vec_avg.o
	
clean:
	rm -f *.o ex05

run: ex05
	./ex05
