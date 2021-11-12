ex03: main.o sum_v2.o
	gcc -g -Wall main.o sum_v2.o -o ex03
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sum_v2.o: sum_v2.s
	gcc -g -Wall -c sum_v2.s -o sum_v2.o
	
run: ex03
	./ex03
