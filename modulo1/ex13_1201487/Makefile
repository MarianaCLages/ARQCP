ex13: main.o where_is.o
	gcc -g -Wall main.o where_is.o -o ex13
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
where_is.o: where_is.c
	gcc -g -Wall -c where_is.c -o where_is.o
	
run: ex13
	./ex13

		
clean: 
	rm -f .o* ex13

 
