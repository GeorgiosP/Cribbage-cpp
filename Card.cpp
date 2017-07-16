#include "Card.h"


Card::Card()
{
    // do nothing
}

Card::Card(Suit _suit, int _value)
{
    Card::suit = _suit;
    Card::value = _value;
}

void Card::SetSuit(Suit _suit)
{
    suit = _suit;
}

void Card::SetValue(int _value)
{
    value = _value;
}

void Card::Display()
{
    std::string s = "";
    switch(value)
    {
        case JACK: s += "J";
            break;
        case KING: s += "K";
            break;
        case QUEEN: s += "Q";
            break;
        case ACE: s += "A";

        default: s += Card::value;
            break;
    }

    switch(suit)
    {
        case CLUBS: s += "♠";
            break;
        case SPADES: s += "♠";
            break;
        case HEARTS: s += "♥";
            break;
        case DIAMONDS: s += "♦";
            break;
    }
    
    std::cout << s;
}