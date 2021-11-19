ex14: main.o getarea2.o
	gcc -g -Wall main.o getarea2.o -o ex14
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
getarea2.o: getarea2.s
	gcc -g -Wall -c getarea2.s -o getarea2.o
	
run: ex14
	./ex14
