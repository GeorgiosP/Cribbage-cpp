// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

#ifndef PLAYER
#define PLAYER

#include "Card.h"

#include <vector>
#include <string>

using namespace std;

class Player
{   
    private:
        int m_points = 0;
        bool m_is_dealer = false;
        bool m_has_won = false;
    public:
        string m_name;
        Player();
        Player(string name) : m_name(name) {};
        vector<Card> m_hand;
        void award_points(int points);
        void set_dealer(bool is_dealer);
        bool is_dealer();
        bool has_won();
        int get_points();
};

#endif