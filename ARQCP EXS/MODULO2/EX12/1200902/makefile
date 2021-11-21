ex12: main.o ismultiple.o
	gcc -g -Wall main.o ismultiple.o -o ex12
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
ismultiple.o: ismultiple.s
	gcc -g -Wall -c ismultiple.s -o ismultiple.o
	
run: ex12
	./ex12
