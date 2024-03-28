#include<windows.h>
// #include<iostream>

int main()
{
    mciSendString(TEXT("set cdaudio door open"),0,0,0);
    // std::cout<<"CD Drive Open"<<std::endl;
    mciSendString(TEXT("set cdaudio door close"),0,0,0);
    // std::cout<<"CD Drive Closed"<<std::endl;
        
    return 1;
}