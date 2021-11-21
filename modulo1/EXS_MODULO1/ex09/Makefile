ex09: main.o sort_without_reps.o
	gcc -g -Wall main.o sort_without_reps.o -o ex09
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sort_without_reps.o: sort_without_reps.c
	gcc -g -Wall -c sort_without_reps.c -o sort_without_reps.o

clean:
	rm -f *.o ex09

run: ex09
	./ex09
	
