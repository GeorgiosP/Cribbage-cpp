// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

#include "Deck.h"

Deck::Deck()
{
    srand(time(NULL));

    Populate();    
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
        std::cout << "\t";
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

void Deck::Populate()
{
    for (size_t i = 0; i < 52; i++)
        cards.push_back(Card((i/4)+1, Suit(i%4)));   
}

void Deck::Regenerate()
{
    cards.clear();
    Populate();
    Order();
}

size_t Deck::RandomCard()
{
    return (rand() % (cards.size() -1));
}


// cuts the deck, also removes the cut card...
Card Deck::CutDeck()
{
    int random_location = RandomCard();
    Card card_cpy = cards[random_location];
    cards.erase(cards.begin() + random_location);
    return card_cpy;
}

// will return the nth card unless out of bounds, it will get the last card, the card indexed will also be delted
Card Deck::Get(int index)
{
    Card card_cpy;
    if (index > 52 || index < 0)
        card_cpy = cards[51];

    card_cpy = cards[index];

    cards.erase(cards.begin() + index);

    return card_cpy;
}
