#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 1; i <= 52; i++)
        cards.push_back(Card((i/4),Suit(i%4)));   
}

void Deck::Display()
{
    for(Card card : cards)
    {
        card.DisplayASCII();
    }
}