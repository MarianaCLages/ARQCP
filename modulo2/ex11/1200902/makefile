ex11: main.o test_flags.o
	gcc -g -Wall main.o test_flags.o -o ex11
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
test_flags.o: test_flags.s
	gcc -g -Wall -c test_flags.s -o test_flags.o
	
run: ex11
	./ex11
