ex02: main.o asm.o sum_v2.o
	gcc -g -Wall main.o asm.o sum_v2.o -o ex02
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o
	
sum_v2.o: sum_v2.s
	gcc -g -Wall -c sum_v2.s -o sum_v2.o
	
run: ex02
	./ex02
