#ifndef MENU
#define MENU

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class IMenuItem
{
    private:
        const string m_text;
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

class PrintFooMenuItem : public IMenuItem
{
    using IMenuItem::IMenuItem;

    public:
        void Execute();
};

class Menu 
{
    protected:
        vector<IMenuItem> m_menu_items;
    public:
        void Display();
};

class ProgramMenu : public Menu    
{
    public:
        ProgramMenu() 
        {
            m_menu_items.push_back(PrintFooMenuItem("Print Foo"));
            m_menu_items.push_back(ExitMenuItem("Exit"));
        }
};

#endif