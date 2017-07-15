// Get UNICODE DATA FROM WIKIPEDIA: https://en.wikipedia.org/wiki/Playing_cards_in_Unicode
#include <string>
#include <iostream>

enum Suit
{
    SPADES, 
    HEARTS, 
    DIAMONDS, 
    CLUBS
};

class Card
{
    private:
        Suit suit;
        int value;
    public:
        Card(Suit, int);
        void Display();
};