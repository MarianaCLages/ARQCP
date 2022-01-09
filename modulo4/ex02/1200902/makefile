ex02: main.o sum_n.o
	gcc -g -Wall main.o  sum_n.o -o ex02
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
sum_n.o: sum_n.s
	gcc -g -Wall -c sum_n.s -o sum_n.o
	
clean:
	rm -f *.o ex02

run: ex02
	./ex02
