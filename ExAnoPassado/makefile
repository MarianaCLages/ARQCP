exAnoPassado: main.o header1.o header2.o
	gcc -g -Wall main.o asm.o header2.o -o exAnoPassado
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
header1.o: header1.c
	gcc -g -Wall -c header1.c -o header1.o
	
header2.o: header2.s
	gcc -g -Wall -c header2.s -o header2.o
	
clean:
	rm -f *.o ex12

run: exAnoPassado
	./exAnoPassado
