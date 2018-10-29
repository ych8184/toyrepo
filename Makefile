CC = gcc
CFLAGS = -Wall

all: bin/main

bin/main: bin/main.o bin/stack.o bin/fib.o
	$(CC) $(CFLAGS) -o bin/main bin/main.o bin/fib.o bin/stack.o

bin/main.o: bindir src/main.c include/stack.h include/fib.h
	$(CC) $(CFLAGS) -Iinclude -c src/main.c -o bin/main.o

bin/stack.o: bindir src/stack.c
	$(CC) $(CFLAGS) -c src/stack.c -o bin/stack.o

bin/fib.o: bindir src/fib.c
	$(CC) $(CFLAGS) -c src/fib.c -o bin/fib.o

bindir:
	test -d bin || mkdir bin

clean:
	rm -rf bin
