a.out: main.o Deck.o
	g++ main.o Deck.o -o a.out

main.o: main.cpp
	g++ -c main.cpp

Deck.o: Deck.cpp Deck.h
	g++ -c Deck.cpp

clean:
	rm *.o a.out