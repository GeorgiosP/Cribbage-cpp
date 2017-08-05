#include "Game.h"

void Game::Start()
{
    
}

Game::Game()
{
    deck = *new Deck();
    deck.Shuffle();
}