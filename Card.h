// Get UNICODE DATA FROM WIKIPEDIA: https://en.wikipedia.org/wiki/Playing_cards_in_Unicode
#ifndef CARD 
#define CARD
#include <string>
#include <iostream>
#include <map>

#include "FileReader.h"

enum Suit
{
    SPADES, 
    HEARTS, 
    DIAMONDS, 
    CLUBS
};

class Card
{
    public:
        int value;
        Suit suit;
        Card(int m_value, Suit m_suit) : value(m_value), suit(m_suit) {};
        void Display();
        void DisplayASCII();
        Suit GetSuit();
        int GetValue();
        static const int JACK = 11;
        static const int KING = 12;
        static const int QUEEN = 13;
        static const int ACE = 1;
};
#endif // CARD