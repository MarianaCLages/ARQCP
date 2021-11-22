exModelo: main.o asm.o noves_fora.o
	gcc -g -Wall main.o asm.o noves_fora.o -o exModelo
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
noves_fora.o: noves_fora.c
	gcc -g -Wall -c noves_fora.c -o noves_fora.o
	
asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o
	
clean:
	rm -f *.o exModelo
	
run: exModelo
	./exModelo
