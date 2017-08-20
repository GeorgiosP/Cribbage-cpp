// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

#ifndef GAME 
#define GAME

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "scoring.h"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Crib 
{
    Player player;
    vector<Card> cards;
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
        void send_to_crib(Player* player);
        void display_hand(Player* player);
        void play_round_start(Player* player1, Player* player2);
        Card get_card(Player* player);
};
#endif