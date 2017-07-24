#include "Card.h"

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

/* NOTE: as std::replace() does not support ASCII characters of differing widths i.e. ♠, we will use the corresponding letter for each instead */
void Card::DisplayASCII()   
{
    std::map<char, char> to_replace = std::map<char, char>();
    to_replace.insert(std::pair<char, char>('X', 'K'));
    to_replace.insert(std::pair<char, char>('x', ' '));
    to_replace.insert(std::pair<char, char>('Y', 'S'));


    FileReader fr = FileReader();
    std::cout << fr.ReadFileWithReplace("card.txt", to_replace);
}       