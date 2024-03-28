#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a Number: ";
    cin >> a;
    cout<<"Enter Second Number: ";
    cin >> b;
    
    cout<<"Enter Third Number: ";
    cin >> b;
    
    // if(a==b) {cout<<"Both are equal"; return 0;}
    // (a<b)?cout<<b<<" is greater":cout<<a<<" is greater";

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greater";
        }
        else
        {
            cout<<c<<" is greater";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<" is greater";
        }
        else
        {
            cout<<c<<" is greater";
        }
    }
    return 0;
}
