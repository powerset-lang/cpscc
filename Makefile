
CXX = g++
CXXFLAGS = -std=c++20 -pedantic -Wall -Wextra -I./src -g -ftrapv

cpscc : 
	$(CXX) -o bin/cpscc src/cpscc.cc $(CXXFLAGS) 

clean :
	rm -rf cpscc bin/*

again :
	make clean
	clear
	make
	chmod u+x bin/cpscc
