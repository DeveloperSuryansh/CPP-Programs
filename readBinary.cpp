#include<iostream>
#include<fstream>
#include<bitset>

using namespace std;

int main()
{
    fstream file;
    int i = 0;
    string txt[1000];
    file.open("quadratic", ios::in | ios::binary);
    cout<<file.is_open();
    while(getline(file,txt[i]))
    {
        cout<<txt[i]<<endl;
        i++;
    }
}