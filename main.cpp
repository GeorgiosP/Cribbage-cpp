#include <iostream>
#include <string>
#include <algorithm> // for later std::swap(a[0], a[1]) use

#include "Deck.h"
#include "Card.h"
#include "Game.h"

using namespace std;

int main() 
{
    Card card = *new Card(Card::KING, DIAMONDS);
    card.DisplayASCII();
    cout << endl;
    return 0;
}