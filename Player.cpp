#include "Player.h"

Player::Player() {} // do nothing

void Player::award_points(int points)
{
    m_points += points;

    if (points > 120) 
       m_has_won = true;
}

void Player::set_dealer(bool is_dealer)
{
    m_is_dealer = is_dealer;
}

bool Player::is_dealer() 
{
    return m_is_dealer;
}

bool Player::has_won()
{
    return m_has_won;
}

int Player::get_points() 
{
    return m_points;
}