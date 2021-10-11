ex12: main.o size_string.o
	gcc -g -Wall main.o size_string.o -o ex12
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
size_string.o: size_string.c
	gcc -g -Wall -c size_string.c -o size_string.o
	
run: ex12
	./ex12
