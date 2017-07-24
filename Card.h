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
    private:
        int value;
        Suit suit;
        
    public:
        Card(int m_value, Suit m_suit) : value(m_value), suit(m_suit) {};
        void SetValue(int);
        void SetSuit(Suit);
        void Display();
        void DisplayASCII();
        char GetSuitChar(Suit _suit);
        std::string GetValueString(int _value);
        static const int JACK = 11;
        static const int KING = 12;
        static const int QUEEN = 13;
        static const int ACE = 14;
};
#endif // CARD