#ifndef GAME 
#define GAME

#include "Card.h"
#include "Deck.h"
#include "Player.h"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Game
{
    private:
        struct Crib 
        {
            Player player;
            Card cards[4];
        };
        Deck deck;
        vector<Card> crib;
        Player player1;
        Player player2;
        Crib crib;
    public:
        
        Game();
        void Start();
};
#endif