#ifndef GAME 
#define GAME

#include "Card.h"
#include "Deck.h"
#include "Player.h"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Crib 
{
            Player player;
            Card cards[4];
};

class Game
{
    private:
        Deck deck;
        Player player1;
        Player player2;
        Crib crib;
    public:
        
        Game();
        void Start();
};
#endif