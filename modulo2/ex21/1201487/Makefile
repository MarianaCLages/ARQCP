ex20: main.o asm.o
	gcc -g -Wall main.o asm.o -o ex20
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o

run: ex20
	./ex20
	
