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
    deck.Display();
    cout << endl;
    int numbers[] = {3, 7, 5, 8, 1, 2, 3};
    for(int i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(numbers, numbers + 7);
    for(int i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}