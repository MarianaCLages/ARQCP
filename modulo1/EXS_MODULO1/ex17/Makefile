ex17: main.o swap.o
	gcc -g -Wall main.o swap.o -o ex17
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
swap.o: swap.c
	gcc -g -Wall -c swap.c -o swap.o

clean:
	rm -f *.o ex17

run: ex17
	./ex17
