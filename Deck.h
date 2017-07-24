#ifndef DECK 
#define DECK

#include "Card.h"
#include <vector>

class Deck
{
    private:
        std::vector<Card> cards;
    public:
        Deck();
        void Shuffle();
        void Display();
};
#endif // DECK