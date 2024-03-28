#include<iostream>
#include<conio.h>

char pass[20];
using namespace std;
int main()
{
    string email;
    cout<<"Enter Your EMAIL: "<<endl;
    cin>>email;
    cout<<"Enter your Password: "<<endl;
    for(int i=0;i<20;i++)
    {
        int k;
        k=getch();
        pass[i]=k;
        if(pass[i]==13)
        {
            break;
        }
        printf("*");
    }
    cout<<"Welcome "<<email<<endl;
    cout<<"Password: "<<pass<<endl;
    return 0;
}