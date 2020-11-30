all: main

main.o: main.cpp new.h
	g++ -c main.cpp -o main.o

test.o: test.cpp test.h
	g++ -c test.cpp -o test.o

main: main.o test.o
	g++ main.o test.o -o main

.PHONY clean:
	-rm main
	-rm *.o
