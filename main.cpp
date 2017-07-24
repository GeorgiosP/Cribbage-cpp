#include <iostream>
#include <string>
#include <algorithm> // for later std::swap(a[0], a[1]) use

#include "Deck.h"
#include "Card.h"
#include "Game.h"

using namespace std;

int main() 
{
    Deck deck = *new Deck();
    deck.Display();
    cout << endl;
    return 0;
}