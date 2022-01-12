ex12: main.o count_bits_zero.o count_bits_zero_c.o vec_count_bits_zero.o
	gcc -g -Wall main.o count_bits_zero.o count_bits_zero_c.o vec_count_bits_zero.o -o ex12
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
count_bits_zero.o: count_bits_zero.s
	gcc -g -Wall -c count_bits_zero.s -o count_bits_zero.o
	
count_bits_zero_c.o: count_bits_zero_c.c
	gcc -g -Wall -c count_bits_zero_c.c -o count_bits_zero_c.o
	
vec_count_bits_zero.o: vec_count_bits_zero.s
	gcc -g -Wall -c vec_count_bits_zero.s -o vec_count_bits_zero.o
	
clean:
	rm -f *.o ex12

run: ex12
	./ex12
