#ifndef MENU
#define MENU

#include <string>
#include <vector>

using namespace std;

class IMenuItem
{
    private:
        const string m_text;
    public:
        IMenuItem(string text) : m_text(text) {};
        virtual void execute();
};


class Menu 
{
    private:
        vector<IMenuItem> m_menu_items;
    public:
};

#endif