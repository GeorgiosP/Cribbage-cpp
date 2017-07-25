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
        void DisplayColumned();
        void Order();
};
#endif // DECK