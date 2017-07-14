output: main.o Deck.o
	g++ main.o Deck.o -o output

main.o: main.cpp
	g++ -c main.cpp

Deck.o: Deck.cpp Deck.h
	g++ -c Deck.cpp

clean:
	rm *.o output