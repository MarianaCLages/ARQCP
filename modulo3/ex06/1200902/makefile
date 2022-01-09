ex06: main.o encrypt.o
	gcc -g -Wall main.o  encrypt.o -o ex06
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
encrypt.o: encrypt.s
	gcc -g -Wall -c encrypt.s -o encrypt.o
	
clean:
	rm -f *.o ex06

run: ex06
	./ex06
