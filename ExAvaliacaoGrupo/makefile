exAvaliacao: main.o vencedor.o pontuacao.o
	gcc -g -Wall main.o vencedor.o pontuacao.o -o exAvaliacao
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
vencedor.o: vencedor.c
	gcc -g -Wall -c vencedor.c -o vencedor.o
	
pontuacao.o: pontuacao.s
	gcc -g -Wall -c pontuacao.s -o pontuacao.o
	
clean:
	rm -f *.o exAvaliacao

run: exAvaliacao
	./exAvaliacao
