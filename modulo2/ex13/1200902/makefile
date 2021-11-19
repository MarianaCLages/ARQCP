ex13: main.o getarea.o
	gcc -g -Wall main.o getarea.o -o ex13
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
getarea.o: getarea.s
	gcc -g -Wall -c getarea.s -o getarea.o
	
run: ex13
	./ex13
