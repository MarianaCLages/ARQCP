ex15: main.o duo.o check.o:
	gcc -g -Wall frequencies.o main.o check.o inc_nsets.o -o ex15
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
trio.o: populate.c inc_nsets.c check.c
	gcc -g -Wall -c populate.c inc_nsets.c check.c -o trio.o
	
run: ex15
	./ex15

clean: 
	rm -f .o* ex15

 
