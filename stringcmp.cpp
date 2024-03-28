#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string name;
    const string check="suryansh";
    cout<<"Enter Here your Name:";
    cin>>name;
    cout<<strcmp(name.c_str(),check.c_str())<<endl;
    cout<<name.substr(1,4)<<endl;
    cout<<name.append("nsh")<<endl;
    cout<<name.compare(check);
    return 0;
}