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

void Deck::DisplayList()
{
    for(Card card : cards)
    {
        card.Display();
        std::cout << " ";
    }

    std::cout << std::endl;
}

void Deck::Shuffle() 
{
    srand(time(NULL));


    for (size_t i = 0; i < cards.size(); i++)
    {
        size_t random_location = rand() % 51;

        if (random_location == i)
        {
            i--;
        }
        else
        {
            std::swap(cards[i], cards[rand() % 51]); // bug detected, generates same number more than once when swapped with itself
        }   
    }
}