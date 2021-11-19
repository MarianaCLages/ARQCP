ex16: main.o steps.o
	gcc -g -Wall main.o steps.o -o ex16
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
steps.o: steps.s
	gcc -g -Wall -c steps.s -o steps.o
	
run: ex16
	./ex16
