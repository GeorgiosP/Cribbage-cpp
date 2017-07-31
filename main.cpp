#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

#include "Deck.h"
#include "Card.h"
#include "Game.h"

using namespace std;

bool print_play_menu(string input);

Deck deck;

int main()
{
    deck = *new Deck();
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
        deck.Get(0).GetPlayValue();
    }
    else if(input == "shuffle")
    {
        deck.Shuffle();
        system("reset");
    }
    else if(input == "cut")
    {
        system("reset");
        deck.CutDeck().Display();
    }
    else if(input == "order")
    {
        deck.Order();
        system("reset");
    }
    else if (input == "play")
    {
        system("reset");
        Game game = *new Game();
        game.Start();
    }
    else if (input == "exit")
    {
        return false;
    }
    else 
    {
        system("reset");
        cout << "\nplease enter a valid option";
    }

    return true;
}