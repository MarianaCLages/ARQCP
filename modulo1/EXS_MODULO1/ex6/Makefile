ex06: main.o power_ref.o
	gcc -g -Wall main.o power_ref.o -o ex06
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
power_ref.o: power_ref.c
	gcc -g -Wall -c power_ref.c -o power_ref.o

clean:
	rm -f *.o ex06

run: ex06
	./ex06
	
