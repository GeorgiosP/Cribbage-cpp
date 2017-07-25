#include <iostream>
#include <string>
#include <algorithm>

#include "Deck.h"
#include "Card.h"
#include "Game.h"

using namespace std;

int main() 
{
    Deck deck = *new Deck();
    deck.Display_Columned();
    cout << endl;
    
    cout << endl;
    return 0;
}