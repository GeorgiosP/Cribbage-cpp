#include "Game.h"

void Game::Start()
{
    cout << "\n Welcome to Cribbage!\n" << endl;

    setName();
    pickDealer();
}

Game::Game()
{
    deck = new Deck();
    deck->Shuffle();
    player1 = new Player();
    player2 = new Player(); 
    
}

void Game::pickDealer()
{
    Card p1_cut = deck->CutDeck();
    Card p2_cut = deck->CutDeck();

    cout << player1->m_name << "'s" << " card: ";
    p1_cut.Display();
    cout << endl;
    cout << player2->m_name << "'s" << " card: ";
    p2_cut.Display();
    cout << endl;

    bool found = false;
    while(!found){
        if(p1_cut.value > p2_cut.value){
            cout << player1->m_name << " is the Dealer" << endl;
            player1->is_dealer();
            found = true; 
        }
        else if (p1_cut.value < p2_cut.value) {
            cout << player2->m_name << " is the Dealer" << endl;
            player2->is_dealer();
            found = true;
        }
        else 
        {
            p1_cut = deck->CutDeck();
            p2_cut = deck->CutDeck();
        }
    }
}

void Game::setName()
{
    for(int i = 1; i < 3; i++)
    {
        string playerDefault = "player";
    
        cout << "Hello! " << playerDefault.append(to_string(i)) << " lets start with your name: ";
        if(i == 1)
        {
            getline(cin, player1->m_name);
            cout << player1->m_name << endl;
        }
        else
        {
            getline(cin, player2->m_name);
            cout << player2->m_name << endl;
        }

    }
    deck->Shuffle();
}