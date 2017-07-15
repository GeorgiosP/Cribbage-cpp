#include <iostream>
#include <string>

#include "Deck.h"
#include "Card.h"
#include "Game.h"

using namespace std;

int main() 
{
    Card card = Card(CLUBS, 7); // create a 7 of clubs
    card.Display();
    cout << endl;
    return 0;
}