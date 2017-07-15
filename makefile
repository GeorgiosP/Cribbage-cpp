a.out: main.o Deck.o Card.o Game.o
	g++ main.o Deck.o Card.o Game.o -o a.out

main.o: main.cpp
	g++ -c main.cpp

Deck.o: Deck.cpp Deck.h
	g++ -c Deck.cpp

Card.o: Card.cpp Card.h
	g++ -c Card.cpp

Game.o: Game.cpp Game.h
	g++ -c Game.cpp

clean:
	rm *.o a.out