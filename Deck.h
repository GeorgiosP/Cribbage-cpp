// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

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