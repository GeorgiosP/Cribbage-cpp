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

void Deck::CutDeck()
{
    cards[RandomCard()].Display();
    std::cout << std::endl;
}

