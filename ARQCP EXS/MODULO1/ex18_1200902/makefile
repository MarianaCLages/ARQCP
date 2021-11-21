ex18: main.o compress_shorts.o
	gcc -g -Wall main.o compress_shorts.o -o ex18
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
compress_shorts.o: compress_shorts.c
	gcc -g -Wall -c compress_shorts.c -o compress_shorts.o
	
run: ex18
	./ex18
