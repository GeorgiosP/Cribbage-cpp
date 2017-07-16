#include "Card.h"


Card::Card()
{
    // do nothing
}

Card::Card(int _value, Suit _suit)
{
    Card::value = _value;
    Card::suit = _suit;
}

void Card::SetSuit(Suit _suit)
{
    suit = _suit;
}

void Card::SetValue(int _value)
{
    value = _value;
}

void Card::Display()
{
    switch(value)
    {
        case JACK: std::cout << "J";
            break;
        case KING: std::cout << "K";
            break;
        case QUEEN: std::cout << "Q";
            break;
        case ACE: std::cout << "A";
            break;
        default: std::cout << Card::value;
    }

    switch(suit)
    {
        case CLUBS: std::cout << "♠";
            break;
        case SPADES: std::cout << "♠";
            break;
        case HEARTS: std::cout << "♥";
            break;
        case DIAMONDS: std::cout << "♦";
            break;
    };
}

void Card::DisplayASCII()   
{
    std::map<char, char> to_replace = std::map<char, char>();
    FileReader fr = FileReader();
    std::cout << fr.ReadFileWithReplace("card.txt", to_replace);
}       