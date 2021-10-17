ex20: main.o find_word.o
	gcc -g -Wall find_word.o main.o -o ex20
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
find_word.o: find_word.c
	gcc -g -Wall -c find_word.c -o find_word.o
	
run: ex20
	./ex20

clean: 
	rm -f .o* ex19
