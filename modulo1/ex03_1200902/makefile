ex03: main.o sum_even.o
	gcc -g -Wall main.o sum_even.o -o ex03
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sum_even.o: sum_even.c
	gcc -g -Wall -c sum_even.c -o sum_even.o
	
run: ex03
	./ex03
