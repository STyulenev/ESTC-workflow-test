CC=gcc
CFLAGS=-c -Wall

all: lesson

lesson: main.o module_3d.o lesson.o
	$(CC) main.o module_3d.o lesson.o -o lesson

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

module_3d.o: module_3d.c
	$(CC) $(CFLAGS) module_3d.c

lesson.o: lesson.c
	$(CC) $(CFLAGS) lesson.c

clean:
	rm -rf *.o lesson
