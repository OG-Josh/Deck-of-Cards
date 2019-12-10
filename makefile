CC = g++

FLAGS = -std=c++14 -Wall -g

#OBJS =

all: cardDeckClass


cardDeckClass: cardDeckClass.cpp cardDeckClass.h
	$(CC) $(FLAGS) cardDeckClass.cpp -o cardDeckClass

clean:
	rm *.o cardDeckClass cardDeckClass.tar

tar:
	tar cf cardDeckClass.tar cardDeckClass.scr makefile cardDeckClass.cpp cardDeckClass.h
