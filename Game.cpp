#include "Game.h"

void Game::Start()
{
    cout << "\n Welcome to Cribbage!\n" << endl;
    cout << "First, Let's determine who's the dealer... by cutting the deck" << endl;
    Card p1_cut;
    Card p2_cut;
    cout << "Player 1 Cuts: ";
}

Game::Game()
{
    deck = *new Deck();
    deck.Shuffle();
}