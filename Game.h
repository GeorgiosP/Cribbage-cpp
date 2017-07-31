#ifndef GAME 
#define GAME

#include "Card.h"
#include <vector>

using namespace std;

class Game
{
    private:
        vector<Card> crib;
    public:
       void Start();
};
#endif