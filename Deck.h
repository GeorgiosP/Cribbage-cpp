#ifndef DECK 
#define DECK

#include "Card.h"
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Deck
{
    private:
        std::vector<Card> cards;
        void populate();
    public:
        Deck();
        void Shuffle();
        void DisplayColumned();
        void DisplayList();
        void Order();
        void Regenerate();
        void Populate();
        size_t RandomCard();
        Card CutDeck();
        Card Get(int index);
};
#endif // DECK