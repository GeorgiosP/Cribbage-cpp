#include "Game.h"

void Game::Start()
{
    
}

Game::Game()
{
    crib = *new vector<Card>();
    deck = *new Deck();
    deck.Shuffle();
}