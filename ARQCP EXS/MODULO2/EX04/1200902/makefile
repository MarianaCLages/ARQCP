ex04: main.o sum_v3.o
	gcc -g -Wall main.o sum_v3.o -o ex04
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sum_v3.o: sum_v3.s
	gcc -g -Wall -c sum_v3.s -o sum_v3.o
	
run: ex04
	./ex04
