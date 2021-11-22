ex16: main.o where_exists.o
	gcc -g -Wall main.o where_exists.o -o ex16
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
where_exists.o: where_exists.c
	gcc -g -Wall -c where_exists.c -o where_exists.o

clean:
	rm -f *.o ex16

run: ex16
	./ex16
