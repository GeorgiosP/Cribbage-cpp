#ifndef PLAYER
#define PLAYER

#include "Card.h"

#include <vector>
#include <string>

using namespace std;

class Player
{   
    private:
        vector<Card> m_hand;
        vector<Card> m_crib;
        string m_name;
        int m_points = 0;
        bool m_is_dealer = false;
        bool m_has_won = false;
    public:
        Player();
        Player(string name) : m_name(name) {};
        void award_points(int points);
        void set_dealer(bool is_dealer);
        bool is_dealer();
        bool has_won();
        int get_points();
};

#endif