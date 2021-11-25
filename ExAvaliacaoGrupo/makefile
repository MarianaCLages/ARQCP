exAvaliacao: main.o vencedor.o header2.o
	gcc -g -Wall main.o vencedor.o min_max_notas.o -o exAvaliacao
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
vencedor.o: vencedor.c
	gcc -g -Wall -c vencedor.c -o vencedor.o
	
header2.o: header2.s
	gcc -g -Wall -c header2.s -o header2.o
	
clean:
	rm -f *.o exAvaliacao

run: exAvaliacao
	./exAvaliacao
