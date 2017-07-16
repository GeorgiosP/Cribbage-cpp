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
    std::cout << "Test" << std::endl;
}