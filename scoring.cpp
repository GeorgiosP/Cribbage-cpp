#include "scoring.h"

int score(vector<Card> cards)
{
    sort(cards.begin(), cards.end(), [](const Card& lhs, const Card& rhs)
    { 
         return lhs.value < rhs.value;
    });
    return (score_pairs(cards) + score_flush(cards) + score_runs(cards) + score_fifteens(cards));
}

int score_pairs(vector<Card> cards)
{
    int score = 0;
    int pairs = 0;

    for (size_t i = 1; i < cards.size(); i++)
    {
        cout << cards[i-1].value << " " << cards[i].value << endl;
        if (cards[i-1].value == cards[i].value)
        {
            pairs++;
        }
        else
        {
            pairs = 0;
        }
            

        if (pairs == 1)
            score +=2;

        if (pairs == 2)
            score += 6;
        
        if (pairs == 3)
            score += 12;

        
    }

        return score;
}

int score_flush(vector<Card> cards)
{

    int clubs = 0;
    int hearts = 0;
    int spades = 0;
    int diamonds = 0;

    for (size_t i = 0; i < cards.size(); i++)
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


// 2334 is NOT considered a run officially, but 2349 is.. 
int score_runs(vector<Card> cards)
{
    int score = 0;
    int run = 0;

    for (size_t i = 1; i < cards.size(); i++)
    {
        if (cards[i-1].value == cards[i].value+1)
        {
            if (run == 0)
            {
                run += 2;
            }
            else 
            {
                run++;
            }
        }
        else
        {
            if (run == 3)
                score += 3;
            
            if (run == 4)
                score += 4;

            if (run == 5)
                score += 5;

            run = 0;
        }
    }

    return score;
}

int score_fifteens(vector<Card> cards)
{ 

    int score = 0;

    vector<int> set1;
    for (size_t i = 0; i < cards.size(); i++)
    {
        set1.push_back(cards[i].GetPlayValue()); 
    }

    vector<int> set2;
    for (size_t i = 0; i < set1.size(); i++)
    {
        for (size_t j = 0; j < set1.size(); j++)
        {
            if (i != j)
                set2.push_back(set1[i] + set1[j]);
        }
    }

    vector<int> set3;
    for (size_t i = 0; i < set1.size(); i++)
    {
        set3.push_back(set1[i] + set2[i]);
    }

    vector<int> set4;
    for (size_t i = 0; i < set1.size(); i++)
    {
        set4.push_back(set3[i] + set1[i]);
    }

    vector<int> set5;
    for (size_t i = 0; i < set1.size(); i++)
    {
        set5.push_back(set4[i] + set1[1]);
    }


    for (size_t i = 0; i < set2.size(); i++)
    {
        if (set2[i] == 15)
            score++;
    }

    for (size_t i = 0; i < set3.size(); i++)
    {
        if (set3[i] == 15)
            score += 2;
    }

    for (size_t i = 0; i < set4.size(); i++)
    {
        if (set4[i] == 15)
            score += 2;
    }

    for (size_t i = 0; i < set4.size(); i++)
    {
        if (set5[i] == 15)
            score += 2;
    }


    return score;
}

int score_thirtyone(vector<Card> cards)
{
    int sum = 0;
    
    for (size_t i = 0; i < cards.size(); i++)
    {
        sum += cards[i].GetPlayValue();
    }

    return sum;
}