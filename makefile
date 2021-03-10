
all: ssum

clean:
	rm -f ssum

ssum: ssum.cpp
	g++ -std=c++11 ssum.cpp -o ssum
