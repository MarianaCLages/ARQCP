ex04: main.o upper1.o
	gcc -g -Wall main.o upper1.o -o ex04
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
upper1.o: upper1.c
	gcc -g -Wall -c upper1.c -o upper1.o

clean:
	rm -f *.o ex04

run: ex04
	./ex04
	
