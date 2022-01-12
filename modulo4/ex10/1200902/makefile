ex10: main.o call_incr.o
	gcc -g -Wall main.o call_incr.o -o ex10
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
call_incr.o: call_incr.s
	gcc -g -Wall -c call_incr.s -o call_incr.o
	
clean:
	rm -f *.o ex10

run: ex10
	./ex10
