#variables
CC =g++
CFLAGS =-c -Wall

a.out: main.o Deck.o Card.o Game.o
	g++ main.o Deck.o Card.o Game.o -o a.out

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Deck.o: Deck.cpp Deck.h
	$(CC) $(CFLAGS) Deck.cpp

Card.o: Card.cpp Card.h
	$(CC) $(CFLAGS) Card.cpp

Game.o: Game.cpp Game.h
	$(CC) $(CFLAGS) Game.cpp

clean:
	rm *.o a