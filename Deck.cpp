#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 0; i < 52; i++)
        cards.push_back(Card((i/4)+2, Suit(i%4))); 
    
    Order();
}

void Deck::Order()
{
    sort(cards.begin(), cards.end(), [](const Card& lhs, const Card& rhs){ return lhs.suit < rhs.suit || lhs.value < rhs.value; });
}

void Deck::Display()
{
    for(Card card : cards)
    {
        card.Display();
        std::cout << " ";
    }
}