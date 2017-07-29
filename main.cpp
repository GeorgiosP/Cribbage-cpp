#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

#include "Deck.h"
#include "Card.h"
#include "Game.h"

using namespace std;

int main()
{
    Deck deck = *new Deck();
    deck.DisplayColumned();

    cout << "please type option to perform action" << endl;


    return 0;
}