ex05: main.o swap.o
	gcc -g -Wall main.o swap.o -o ex05
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
swap.o: swap.s
	gcc -g -Wall -c swap.s -o swap.o
	
run: ex05
	./ex05
