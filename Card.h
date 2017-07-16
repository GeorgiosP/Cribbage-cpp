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
        Card();
        Card(Suit, int);
        void SetSuit(Suit);
        void SetValue(int);
        void Display();
        static const int JACK = 11;
        static const int KING = 12;
        static const int QUEEN = 13; 
        static const int ACE = 14;
};