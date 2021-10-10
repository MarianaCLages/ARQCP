prog: size_string.o main.o
		  gcc size_string.o main.o -o prog

 size_string.o: size_string.c
		   gcc -Wall size_string.c -o size_string.o

 main.o: main.c
		gcc -Wall main.c -o main.o
		
 clean: 
		rm -f .o* prog

 run:
	./prog
