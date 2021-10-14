ex09: main.o sort_without_reps.o
	gcc -g -Wall main.o sort_without_rep.o -o ex09
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sort_without_reps.o: sort_without_rep.c
	gcc -g -Wall -c sort_without_rep.c -o sort_without_rep.o
	
run: ex09
	./ex09
