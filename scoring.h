#ifndef SCORING
#define SCORING

#include <vector>
#include "Card.h"

using namespace std;

// this file is for utility only... no classes

int score(Card cards[]);
int score_pairs(Card cards[]);
int score_flush(Card cards[]);
int score_runs(Card cards[]);
int score_fifteens(Card cards[]);
int score_thirtyone(Card cards[]);;
int score_pairs(Card cards[]);

#endif