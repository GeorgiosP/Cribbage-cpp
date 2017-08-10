#ifndef SCORING
#define SCORING

#include <vector>
#include <algorithm>
#include "Card.h"

using namespace std;

// this file is for utility only... no classes

int score(Card cards[], size_t size);
int score_pairs(Card cards[], size_t size);
int score_flush(Card cards[], size_t size);
int score_runs(Card cards[], size_t size);
int score_fifteens(Card cards[], size_t size);
int score_thirtyone(Card cards[], size_t size);;
int score_pairs(Card cards[], size_t size);

#endif