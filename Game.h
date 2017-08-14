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
        Crib crib;
        Deck* deck;
        Player* player1;
        Player* player2;
        
    public:
        Game();
        void Start();
        void setName();
        void pickDealer();
        void deal();  
        void print_board();    
        void next_dealer(); 
        void send_to_crib(Player player, Card card_t0_send);
};
#endif