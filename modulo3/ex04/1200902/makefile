ex04: main.o vec_add_one.o
	gcc -g -Wall main.o  vec_add_one.o -o ex04
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
vec_add_one.o: vec_add_one.s
	gcc -g -Wall -c vec_add_one.s -o vec_add_one.o
	
clean:
	rm -f *.o ex04

run: ex04
	./ex04
