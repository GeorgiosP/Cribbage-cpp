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
            
        };
        Deck deck;
        vector<Card> crib;
        Player player1;
        Player player2;
    public:
        
        Game();
        void Start();
};
#endif