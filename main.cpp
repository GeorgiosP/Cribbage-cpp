#ifndef MAIN
#define MAIN

#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

#include "Deck.h"
#include "Card.h"
#include "Game.h"
#include "scoring.h"

using namespace std;

bool print_play_menu(string input);

Deck deck;

int main()
{
    string input;
    deck.Shuffle();
    Card cards[5] = {deck.Get(0), deck.Get(1), deck.Get(2), deck.Get(3), deck.Get(4)};
    for (size_t i = 0; i < sizeof(cards)/sizeof(Card); i++)
    {
        cards[i].Display();
    }

    cout << "Points: " << score(cards, sizeof(cards)/sizeof(Card)) << "\n\n";

    while(print_play_menu(input)) {
        
    } // menu loop

    return 0;
}

bool print_play_menu(string input)
{
    cout << "\nprint: Display the Deck" << endl;
    cout << "shuffle: Shuffle the Deck" << endl;
    cout << "cut: cut deck";
    cout << "order: order the deck" << endl;
    cout << "play: Start a new game" << endl;
    cout << "exit: Exit the program" << endl;
    cout << ">"; getline(cin, input);

    if (input == "print")
    {
        deck.DisplayColumned();
        deck.Get(0).GetPlayValue();
    }
    else if(input == "shuffle")
    {
        deck.Shuffle();
    }
    else if(input == "cut")
    {
        deck.CutDeck().Display();
    }
    else if(input == "order")
    {
        deck.Order();
    }
    else if (input == "play")
    {
<<<<<<< HEAD
        Game game = Game();
        
=======
        Game game;
>>>>>>> e2ef478c92f52d619098a34c26b965a3a9d04d4d
        game.Start();
    }
    else if (input == "exit")
    {
        return false;
    }
    else 
    {
        cout << "\nplease enter a valid option";
    }

    return true;
}

#endif