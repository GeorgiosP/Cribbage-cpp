#ifndef SCORING
#define SCORING

#include <vector>
#include <algorithm>
#include "Card.h"

using namespace std;

// this file is for utility only... no classes

struct Set 
{
    int set[];
    int number;
};

int score(vector<Card> cards);
int score_pairs(vector<Card> cards);
int score_flush(vector<Card> cards);
int score_runs(vector<Card> cards);
int score_fifteens(vector<Card> cards);
int score_thirtyone(vector<Card> cards);;
int score_pairs(vector<Card> cards);

#endif