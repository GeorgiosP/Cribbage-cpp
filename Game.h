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

struct Player player1 = {};
struct Player player2 = {};

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