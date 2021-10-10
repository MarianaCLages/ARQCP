 prog_avg: average.o main.o
		  gcc average.o main.o -o prog_avg

 average.o: average.c
		   gcc -Wall average.c -o average.o

 main.o: main.c
		gcc -Wall main.c -o main.o
		
 clean: 
		rm -f .o* prog_avg

 run:
	./prog_avg
