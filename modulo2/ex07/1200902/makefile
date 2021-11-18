ex07: main.o cross_sum.o
	gcc -g -Wall main.o cross_sum.o -o ex07
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
cross_sum.o: cross_sum.s
	gcc -g -Wall -c cross_sum.s -o cross_sum.o
	
run: ex07
	./ex07
