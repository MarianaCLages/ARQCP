ex17: main.o swap.o
	gcc -g -Wall swap.o main.o -o ex17
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
swap.o: swap.c
	gcc -g -Wall -c swap.c -o swap.o
	
run: ex17
	./ex17

clean: 
	rm -f .o* ex17
