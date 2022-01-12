ex09: main.o print_result.o calculate.o
	gcc -g -Wall main.o  print_result.o calculate.o -o ex09
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
print_result.o: print_result.c
	gcc -g -Wall -c print_result.c -o print_result.o
	
calculate.o: calculate.s
	gcc -g -Wall -c calculate.s -o calculate.o
	
clean:
	rm -f *.o ex09

run: ex09
	./ex09
