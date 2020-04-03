#~ Sample makefile for a program using:
#~    point.h
#~    point.cpp
#~    ex1.cpp

CC = g++
#~ Additional options can be included, as below
#~ CC = g++ -std=c++17 -Wall

#~ Rule for the main target
main: main.o complex.o
	$(CC) -o $@ $^

#~ Additional rules for dependencies
main.o: main.cpp
	$(CC) -c $^

complex.o: complex.cpp
	$(CC) -c $^

#~ As an alternative to create an individual rule for each dependency
#~ You can try to use a generic rule like this below
#~ (no need to define the two rules above)
%.o: %.cpp
	$(CC) -c $^
