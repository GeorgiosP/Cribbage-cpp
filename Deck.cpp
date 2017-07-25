#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 0; i < 52; i++)
        cards.push_back(Card((i/4)+1, Suit(i%4))); 
    
    Order();
}

void Deck::Order()
{
    sort(cards.begin(), cards.end(), [](const Card& lhs, const Card& rhs)
    { 
        if (lhs.suit == rhs.suit)
            return lhs.value < rhs.value;

        return lhs.suit < rhs.suit; 
    });
}

void Deck::DisplayColumned()
{
    for(Card card : cards)
    {
        card.Display();
        std::cout << " ";
        if (card.value == Card::QUEEN)
            std::cout << std::endl;
    }
}

void Deck::Shuffle() 
{

} 