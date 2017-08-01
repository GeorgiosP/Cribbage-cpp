#variables
CC =g++
CFLAGS =-c -Wall -std=c++11

a.out: main.o Card.o Deck.o Game.o Player.o FileReader.o
	g++ main.o Card.o Deck.o Game.o Player.o FileReader.o  -o a.out

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Card.o: Card.cpp Card.h
	$(CC) $(CFLAGS) Card.cpp

Deck.o: Deck.cpp Deck.h
	$(CC) $(CFLAGS) Deck.cpp

Game.o: Game.cpp Game.h
	$(CC) $(CFLAGS) Game.cpp

Player.o: Player.cpp Player.h
	$(CC) $(CFLAGS) Player.cpp

FileReader.o: FileReader.h FileReader.cpp
	$(CC) $(CFLAGS) FileReader.cpp

clean:
	rm *.o a.out