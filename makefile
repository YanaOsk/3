CC = gcc
FLAGS = -Wall -g
all: isort txtfind


isort: isort.o
	gcc -Wall -g -fPIC -o isort isort.o
txtfind: txtfind.o
	gcc -Wall -g -fPIC  -o txtfind txtfind.o
isort.o: isort.c mylib.h
	gcc -Wall -g -fPIC -c isort.c mylib.h
txtfind.o: txtfind.c mylib.h
	gcc -Wall -g -fPIC -c txtfind.c mylib.h		

.PHONY: clean all 

clean:
	rm -f *.o isort txtfind
