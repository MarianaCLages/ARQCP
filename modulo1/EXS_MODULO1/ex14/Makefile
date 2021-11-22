ex14: main.o frequencies.o
	gcc -g -Wall main.o frequencies.o -o ex14
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
frequencies.o: frequencies.c
	gcc -g -Wall -c frequencies.c -o frequencies.o

clean:
	rm -f *.o ex14

run: ex14
	./ex14
