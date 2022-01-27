CC=gcc
CFLAGS=-g -Wall

LIBS=-lm

all: main

point.o: point.c point.h
	$(CC) $(CFLAGS) -c point.c

triangle.o: triangle.c triangle.h point.h
	$(CC) $(CFLAGS) -c triangle.c

main.o: main.c triangle.h point.h
	$(CC) $(CFLAGS) -c main.c

main: main.o point.o triangle.o
	$(CC) $(CFLAGS) -o main main.o point.o triangle.o $(LIBS)

clean:
	rm main.o;
	rm triangle.o;
	rm point.o;
	rm main;

