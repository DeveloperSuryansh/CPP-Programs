#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

enum colors
{
    red,
    blue,
    white,
    pink,
    black,
    green,
    yellow
};

enum direction
{
    horizontal,
    vertical
};

class Print
{
    private:
    colors color=red;
    direction dir=horizontal;
    string text="Hello";

    public:
    void setColor(colors clr)
    {
        color=clr;
    }
    void setDirection(direction dr)
    {
        dir=dr;
    }
    void setText(string txt)
    {
        text=txt;
    }
    void print()
    {
        switch(color)
        {
            case red:
                text="\033[0;31m"+text;
                break;
        }
        switch(dir)
        {
            case horizontal:
                cout<<text<<endl;       
                break;
        }
    }
};

int main()
{
    string str="Hello This is a String...";
    Print prt;
    prt.setColor(red);
    prt.setText(str);
    prt.print();
}