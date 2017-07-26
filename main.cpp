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
    deck.DisplayList();
    deck.Shuffle();
    deck.DisplayList();
    deck.Shuffle();
    deck.DisplayList();
    deck.Shuffle();
    deck.DisplayList();
    deck.Shuffle();
    deck.DisplayList();
    
    deck.CutDeck();
    deck.CutDeck();
    deck.CutDeck();
    return 0;
}