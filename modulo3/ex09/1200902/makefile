ex09: main.o vec_search.o
	gcc -g -Wall main.o  vec_search.o -o ex09
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
vec_search.o: vec_search.s
	gcc -g -Wall -c vec_search.s -o vec_search.o
	
clean:
	rm -f *.o ex09

run: ex09
	./ex09
