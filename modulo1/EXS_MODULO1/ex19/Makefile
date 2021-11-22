ex19: main.o find_word.o
	gcc -g -Wall main.o find_word.o -o ex19
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
find_word.o: find_word.c
	gcc -g -Wall -c find_word.c -o find_word.o

clean:
	rm -f *.o ex19

run: ex19
	./ex19
