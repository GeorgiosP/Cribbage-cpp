#ifndef GAME 
#define GAME

#include "Card.h"
#include "Deck.h"
#include <vector>
#include <string>

using namespace std;

struct Player
{
    string name;
    Card hand[];
    int points;
    bool dealer;
};

class Game
{
    private:
        Deck deck;
        vector<Card> crib;
    public:
        
        Game();
        void Start();
};
#endif