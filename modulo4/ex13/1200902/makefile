ex13: main.o rotate_left.o rotate_right.o
	gcc -g -Wall main.o rotate_left.o rotate_right.o -o ex13
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
rotate_left.o: rotate_left.c
	gcc -g -Wall -c rotate_left.c -o rotate_left.o
	
rotate_right.o: rotate_right.c
	gcc -g -Wall -c rotate_right.c -o rotate_right.o
	
clean:
	rm -f *.o ex13

run: ex13
	./ex13
