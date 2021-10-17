ex12: main.o capitalize.o
	gcc -g -Wall main.o capitalize.o -o ex12
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
capitalize.o: capitalize.c
	gcc -g -Wall -c capitalize.c -o capitalize.o
	
run: ex12
	./ex12
