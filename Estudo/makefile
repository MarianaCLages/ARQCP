ex: main.o nota.o min_max_notas.o
	gcc -g -Wall main.o nota.o min_max_notas.o -o ex
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
nota.o: nota.c
	gcc -g -Wall -c nota.c -o nota.o
	
min_max_notas.o: min_max_notas.s
	gcc -g -Wall -c min_max_notas.s -o min_max_notas.o
	
clean:
	rm -f *.o ex

run: ex
	./ex
