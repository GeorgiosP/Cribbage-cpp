// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

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

        Game game;
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