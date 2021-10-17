ex15: main.o trio.o:
	gcc -g -Wall -c main.o trio.o -o ex15
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
duo.o: populate.c inc_nsets.c 
	gcc -g -Wall -c populate.c inc_nsets.c -o duo.o
	
trio.o: duo.o check.c
	gcc -g -Wall -c check.c duo.o -o trio.o
	
run: ex15
	./ex15

clean: 
	rm -f .o* ex15

 
