ex08: main.o test_even.o vec_sum_even.o
	gcc -g -Wall main.o  test_even.o vec_sum_even.o -o ex08
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
test_even.o: test_even.s
	gcc -g -Wall -c test_even.s -o test_even.o
	
vec_sum_even.o: vec_sum_even.s
	gcc -g -Wall -c vec_sum_even.s -o vec_sum_even.o
	
clean:
	rm -f *.o ex08

run: ex08
	./ex08
