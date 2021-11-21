ex10: main.o odd_sum.o
	gcc -g -Wall main.o odd_sum.o -o ex10
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
odd_sum.o: odd_sum.c
	gcc -g -Wall -c odd_sum.c -o odd_sum.o
	
run: ex10
	./ex10
