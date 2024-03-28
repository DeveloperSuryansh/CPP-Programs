#include<iostream>
#include<windows.h>
#include<mmsystem.h>

using namespace std;

int main()
{
    PlaySound(TEXT("guitar.wav"),NULL,SND_SYNC);
    system("pause");
}