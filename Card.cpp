#include "Card.h"

Card::Card(Suit card_suit, int card_value)
{
    Card::suit = card_suit;
    Card::value = card_value;
}

void Card::Display()
{
    std::cout << "Test" << std::endl;
}