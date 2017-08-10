#include "scoring.h"

int score(Card cards[], size_t size)
{
    return (score_pairs(cards, size) + score_flush(cards, size) + score_runs(cards, size) + score_fifteens(cards, size));
}

int score_pairs(Card cards[], size_t size)
{
    return 0;
}

int score_flush(Card cards[], size_t size)
{
    int clubs = 0;
    int hearts = 0;
    int spades = 0;
    int diamonds = 0;

    cout << endl << size << endl;

    for (size_t i = 0; i < size; i++)
    {
        switch(cards[i].suit) 
        {
            case CLUBS: clubs++;
                break;
            case HEARTS: hearts++;
                break;
            case SPADES: spades++;
                break;
            case DIAMONDS: diamonds++;
                break;
        }
    }

    if (clubs == 4 || hearts == 4 || spades == 4 || diamonds == 4)
        return 4;
        
    if (clubs == 5 || hearts == 5 || spades == 5 || diamonds == 5)
        return 5;

    return 0;
}

int score_runs(Card cards[], size_t size)
{
    return 0;
}

int score_fifteens(Card cards[], size_t size)
{
    int points = 0;

    for (size_t i = 0; i < size; i++)
    {
        int total = 0;

        for (size_t j = 0; j < size; j++)
        {
            if (i != j)
            {
                total += j;
                if (total == 15)
                    points += 2;
            }
        }
    }

    return points;
}

int score_thirtyone(Card cards[], size_t size)
{
    return 0;
}

