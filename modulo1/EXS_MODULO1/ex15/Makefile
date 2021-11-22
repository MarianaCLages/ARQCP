ex15: main.o funcs.o
	gcc -g -Wall main.o funcs.o -o ex15
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
funcs.o: funcs.c
	gcc -g -Wall -c funcs.c -o funcs.o

clean:
	rm -f *.o ex15

run: ex15
	./ex15
