#include<windows.h>
#include<iostream>
using namespace std;

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrev,PSTR szCmdLine,int iCmdShow)
{
    MessageBox(NULL,TEXT("Hello How are you?"),TEXT("Error!!!"),MB_OKCANCEL|MB_ICONERROR);
    return 0;
}