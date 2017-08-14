// Raymond Dinkin & George Psarakis : Github:: https://github.com/GeorgiosP/Cribbage-cpp
// Instructions: 
    //1. cd /my/directory 
    //2. sudo apt-get install make || to install make if you don't have it
    //3. make || compiles the files
    //4. ./a.out || run's the binary

#include "Game.h"

void Game::Start()
{
    cout << "\n Welcome to Cribbage!\n" << endl;

    setName();
    pickDealer();

    bool running = true;
    string s;

    while(running)
    {
        if (player1->get_points() > 120)
        {
            running = false;
            cout << player1->m_name << " has won!";
        }
        else if (player2->get_points() > 120)
        {
            running = false;
            cout << player2->m_name << "has won!";
        }

        deal();
        print_board();

        string s;
        cin >> s;

        next_dealer();
        player1->m_hand.clear();
        player2->m_hand.clear();
        deck->Regenerate();
        deck->Shuffle();
    }

    // call destructor for important objects
}



void Game::next_dealer()
{
    if (player1->is_dealer())
    {
        player1->set_dealer(false);
        player2->set_dealer(true);
    }
    else
    {
        player1->set_dealer(true);
        player2->set_dealer(false);
        }
}

void Game::print_board()
{

    cout << "** ROUND START ** \n" << endl;
    cout << player1->m_name << "-> points: " <<  player1->get_points() << " Hand: ";
    for (size_t i = 0; i < player1->m_hand.size(); i++)
    {
        player1->m_hand[i].Display(); cout << " ";
    } 

    if (player1->is_dealer())
        cout << " **DEALER**";
    
    cout << endl;

    cout << player2->m_name << "-> points: " <<  player2->get_points() << " Hand: ";
    for (size_t i = 0; i < player2->m_hand.size(); i++)
    {
        player2->m_hand[i].Display(); cout << " ";
    } 

    if (player2->is_dealer())
        cout << " **DEALER**";

    cout << "\n\n\n";
}

void Game::deal()
{
    for (size_t i = 0; i < 6; i++)
    {
        player1->m_hand.push_back(deck->Get(0));
        player2->m_hand.push_back(deck->Get(0)); 
    }
}


// don't touch this...
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
            player1->set_dealer(true);
            found = true; 
        }
        else if (p1_cut.value < p2_cut.value) {
            cout << player2->m_name << " is the Dealer" << endl;
            player2->set_dealer(true);
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