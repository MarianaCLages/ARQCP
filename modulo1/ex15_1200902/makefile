ex15: main.o populate.o check.o inc_nsets.o
	gcc -g -Wall main.o populate.o check.o inc_nsets.o -o ex15
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
populate.o: populate.c
	gcc -g -Wall -c populate.c -o populate.o
	
check.o: check.c
	gcc -g -Wall -c check.c -o check.o
	
inc_nsets.o: inc_nsets.c
	gcc -g -Wall -c inc_nsets.c -o inc_nsets.o
	
run: ex15
	./ex15
