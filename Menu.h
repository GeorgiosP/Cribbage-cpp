#ifndef MENU
#define MENU

#include <string>
#include <vector>

using namespace std;

class IMenuItem
{
    private:
        const string m_text;
        const string m_use_key;
    public:
        IMenuItem(const char* text) : m_text(text){};
        virtual void Execute();
};

class ExitMenuItem : public IMenuItem
{
    using IMenuItem::IMenuItem;

    public:
        void Execute();
};

class Menu 
{
    private:
        vector<IMenuItem> m_menu_items;
    public:
        Menu() 
        {
            m_menu_items.push_back(ExitMenuItem("Exit"));
        }
        void Display();
};

#endif