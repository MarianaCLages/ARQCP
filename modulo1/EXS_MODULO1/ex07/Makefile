ex07: main.o array_sort_1.o
	gcc -g -Wall main.o array_sort_1.o -o ex07
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
array_sort_1.o: array_sort_1.c
	gcc -g -Wall -c array_sort_1.c -o array_sort_1.o

clean:
	rm -f *.o ex07

run: ex07
	./ex07
	
