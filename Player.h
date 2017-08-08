#ifndef PLAYER
#define PLAYER

#include "Card.h"

#include <vector>
#include <string>

using namespace std;

class Player
{   
    private:
        vector<Card> hand;
        vector<Card> crib;
        string name;
        bool is_dealer;
    public:
        Player();
        Player(string m_name) : name(m_name) {};
        void award_points(int points);
};

#endif