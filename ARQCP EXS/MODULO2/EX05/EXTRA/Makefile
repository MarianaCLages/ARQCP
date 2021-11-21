ex08: main.o swapBytes.o concatBytes.o crossSumBytes.o crossSumBytesAss.o
	gcc -g -Wall main.o swapBytes.o concatBytes.o crossSumBytes.o crossSumBytesAss.o -o ex08
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
swapBytes.o: swapBytes.s
	gcc -g -Wall -c swapBytes.s -o swapBytes.o
	
concatBytes.o: concatBytes.s
	gcc -g -Wall -c concatBytes.s -o concatBytes.o
	
crossSumBytes.o: crossSumBytes.s
	gcc -g -Wall -c crossSumBytes.s -o crossSumBytes.o
	
crossSumBytesAss.o: crossSumBytesAss.s
	gcc -g -Wall -c crossSumBytesAss.s -o crossSumBytesAss.o
	
run: ex08
	./ex08
