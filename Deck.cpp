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

void Deck::Shuffle() 
{
    for (size_t i = 0; i < cards.size(); i++)
    {
        size_t random_location = rand() % 51;

        if (random_location == i)
        {
            i--;
        }
        else
        {
            std::swap(cards[i], cards[rand() % 51]); 
        }   
    }
}

Card Deck::RandomCard()
{
    return cards[rand() % 51];
}

void Deck::CutDeck()
{
    Card card = RandomCard();
    card.Display();
    std::cout << std::endl;
}

