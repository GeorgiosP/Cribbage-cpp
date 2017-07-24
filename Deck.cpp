#include "Deck.h"

Deck::Deck()
{
    for (size_t i = 1; i <= 52; i++)
    {
        int k = 0;
        switch(i/4)
        {
            case 0: k = 13;
                break;
            case 1: k = 14;
                break;
            default: k = i/4;
        }

        cards.push_back(Card((k/4),Suit(i%4))); 
    }
          
}

void Deck::Display()
{
    for(Card card : cards)
    {
        card.Display();
        std::cout << " ";
        if (card.get == Card::KING)
            std::cout << "\n";
    }
}