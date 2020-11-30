all: main

main: main.cpp
	g++ main.cpp -o main

.PHONY clean:
	-rm main
