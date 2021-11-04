ex02: main.o copy_vec.o
	gcc -g -Wall main.o copy_vec.o -o ex02
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
copy_vec.o: copy_vec.c
	gcc -g -Wall -c copy_vec.c -o copy_vec.o
	
run: ex02
	./ex02
