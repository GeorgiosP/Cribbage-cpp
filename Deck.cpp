#include "Deck.h"

Deck::Deck()
{
    srand(time(NULL));

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

    for (size_t i = 0; i < cards.size(); i++)
    {
        if (i % 13 == 0)
            std::cout << std::endl;
        
        cards[i].Display();
        std::cout << " ";
    }

    std::cout << std::endl;
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


// test for reoccurence here http://www.somacon.com/p525.php
void Deck::Shuffle() 
{   
    for (size_t i = 0; i < cards.size(); i++)
        std::swap(cards[i], cards[RandomCard()]);
}

size_t Deck::RandomCard()
{
    return (rand() % (cards.size() -1));
}

Card Deck::CutDeck()
{
    return cards[RandomCard()];
}

// will return the nth card unless out of bounds, it will get the last card
Card Deck::Get(int index)
{
    if (index > 52 || index < 0)
        return cards[51];

    return cards[i];
}
