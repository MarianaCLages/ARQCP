exAnoPassado: main.o total_risco.o result.o
	gcc -g -Wall main.o total_risco.o result.o -o exAnoPassado
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
total_risco.o: total_risco.c
	gcc -g -Wall -c total_risco.c -o total_risco.o
	
result.o: result.s
	gcc -g -Wall -c result.s -o result.o
	
clean:
	rm -f *.o exAnoPassado

run: exAnoPassado
	./exAnoPassado
