all: example_1

example_1: example_1.o dynamic_mem.o
	gcc example_1.o dynamic_mem.o -o example_1 -g -Wall

example_1.o: example_1.c dynamic_mem.h
	gcc -c example_1.c -o example_1.o -g -Wall

dynamic_mem.o: dynamic_mem.c dynamic_mem.h
	gcc -c dynamic_mem.c -o dynamic_mem.o -g -Wall

clean:
	rm -f *.o
