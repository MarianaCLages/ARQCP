ex11: main.o palindrome.o
	gcc -g -Wall main.o palindrome.o -o ex11
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
palindrome.o: palindrome.c
	gcc -g -Wall -c palindrome.c -o palindrome.o
	
run: ex11
	./ex11
