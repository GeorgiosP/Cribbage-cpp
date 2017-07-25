#ifndef DECK 
#define DECK

#include "Card.h"
#include <vector>

class Deck
{
    private:
        std::vector<Card> cards;
        bool InCardOrder(const Card &lhs, const Card &rhs) { return lhs.GetSuit() > rhs.GetSuit(); }
    public:
        Deck();
        void Shuffle();
        void Display();
        void Order();
};
#endif // DECK