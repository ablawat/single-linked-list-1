CC     = gcc
CFLAGS = -O2

test: test.o linked-list-int.o
	$(CC) -o test test.o linked-list-int.o

test.o: test.c
	$(CC) -c -o test.o test.c

linked-list-int.o: linked-list-int.c
	$(CC) -c -o linked-list-int.o linked-list-int.c

clean:
	rm -f *.o
	rm -f test
