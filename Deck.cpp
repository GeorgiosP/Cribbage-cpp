#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 0; i < 52; i++)
        cards.push_back(Card((i/4)+2, Suit(i%4))); 
    
    Order();
}

void Deck::Order()
{
    // this is a horrible abuse of lambda functions... but hopefully it works
    sort(cards.begin(), cards.end(), [](const Card& lhs, const Card& rhs)
    { 
        if (lhs.suit == rhs.suit)
            return lhs.value < rhs.value;

        return lhs.suit < rhs.suit; 
    });
}

void Deck::Display()
{
    for(Card card : cards)
    {
        card.Display();
        std::cout << " ";
        if (card.value == Card::ACE)
            std::cout << std::endl;
    }
}

void Deck::Shuffle() 
{

} 