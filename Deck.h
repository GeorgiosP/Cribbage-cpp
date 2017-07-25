#ifndef DECK 
#define DECK

#include "Card.h"
#include <vector>
#include <time.h>
#include <stdlib.h>

class Deck
{
    private:
        std::vector<Card> cards;
    public:
        Deck();
        void Shuffle();
        void DisplayColumned();
        void DisplayList();
        void Order();
        Card RandomCard();
        void CutDeck();
};
#endif // DECK