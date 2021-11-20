ex17: main.o calculator.o
	gcc -g -Wall main.o calculator.o -o ex17
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
calculator.o: calculator.s
	gcc -g -Wall -c calculator.s -o calculator.o
	
run: ex17
	./ex17
