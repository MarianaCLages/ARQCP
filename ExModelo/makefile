exModelo: main.o noves_fora.o
	gcc -g -Wall main.o noves_fora.o -o exModelo
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
noves_fora.o: noves_fora.c
	gcc -g -Wall -c noves_fora.c -o noves_fora.o
	
#calcula_resto.o: calcula_resto.s
#	gcc -g -Wall -c calcula_resto.s -o calcula_resto.o
	
run: exModelo
	./exModelo
