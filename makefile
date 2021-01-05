CC = gcc
FLAGS = -Wall -g
all: isort.o txtfind.o

isort.o: isort.c mylib.h
	gcc -Wall -fPIC -c isort.c
txtfind.o: txtfind.c mylib.h
	gcc -Wall -fPIC -c txtfind.c		

.PHONY: clean all 

clean:
	rm -f *.o run
