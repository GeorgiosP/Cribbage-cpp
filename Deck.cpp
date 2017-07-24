#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 0; i < 52; i++)
        cards.push_back(Card((i/4)+2, Suit(i%4))); 
}

void Deck::Display()
{
    for(Card card : cards)
    {
        card.Display();
        std::cout << " ";
        if (card.GetValue() == Card::KING)
            std::cout << "\n";
    }
}