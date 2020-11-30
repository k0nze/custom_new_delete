CXX=g++

OBJECTS=$(patsubst %.cpp,%.o,$(shell find . -type f -name "*.cpp"))

all: main

%.o: %.cpp
	$(CXX) -c $< -o $@

main: $(OBJECTS) 
	$(CXX) $(OBJECTS) -o $@

.PHONY clean:
	-rm main
	-rm *.o
