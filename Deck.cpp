#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 1; i <= 52; i++)
    {
        cards.push_back(Card(11, SPADES));
    }
          
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