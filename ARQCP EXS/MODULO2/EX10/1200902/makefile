ex10: main.o sum2ints.o
	gcc -g -Wall main.o sum2ints.o -o ex10
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sum2ints.o: sum2ints.s
	gcc -g -Wall -c sum2ints.s -o sum2ints.o
	
clean:
	rm -f *.o ex10
	
run: ex10
	./ex10
