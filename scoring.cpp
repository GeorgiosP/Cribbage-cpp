#include "scoring.h"

int score(Card cards[])
{
    return (score_pairs(cards) + score_flush(cards) + score_runs(cards) + score_fifteens(cards));
}

int score_pairs(Card cards[])
{
    return 0;
}

int score_flush(Card cards[])
{
    return 0;
}

int score_runs(Card cards[])
{
    return 0;
}

int score_fifteens(Card cards[])
{
    return 0;
}

int score_thirtyone(Card cards[])
{
    return 0;
}

