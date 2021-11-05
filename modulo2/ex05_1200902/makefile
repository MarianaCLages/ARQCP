ex05: main.o swap.o concat.o
	gcc -g -Wall main.o swap.o concat.o -o ex05
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
swap.o: swap.s
	gcc -g -Wall -c swap.s -o swap.o
	
concat.o: concat.s
	gcc -g -Wall -c concat.s -o concat.o
	
run: ex05
	./ex05
