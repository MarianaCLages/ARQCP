ex18: main.o summation.o
	gcc -g -Wall main.o summation.o -o ex18
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
summation.o: summation.s
	gcc -g -Wall -c summation.s -o summation.o
	
run: ex18
	./ex18
