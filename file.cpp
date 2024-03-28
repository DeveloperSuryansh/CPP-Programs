#include<iostream>
#include<fstream>
using namespace std;

int main(int argv,char** arg)
{
    fstream file;
    file.open(arg[1],ios::app);
    if(!file)
    {
        cout<<"Creating File..."<<endl;
    }
    else
    {
        cout<<"Writing To File...."<<endl;
        file<<arg[2]<<endl;
        file.close();
    }

    string ch[1000];
    int i=0;
    file.open(arg[1],ios::in);
    while(getline(file,ch[i]))
    {
        i++;
    }
    for(int i=0;ch[i][0]!=0;i++)
    {
        cout<<i<<" "<<ch[i]<<endl;
    }
    file.close();
    return 0;
}