#include<windows.h>

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);

int WINAPI WinMain(HINSTANCE hinst,HINSTANCE hprev,LPSTR cmd,int ncmd)
{
    WNDCLASS wnd={0};
    MSG msg={0};
    HWND hwnd={0};
    wnd.lpszClassName = TEXT("w1");
    wnd.lpfnWndProc = WndProc;
    wnd.hInstance = hinst;
    wnd.hCursor = LoadCursor(NULL,IDC_ARROW);
    wnd.hbrBackground = WHITE_BRUSH;

    if(!RegisterClass(&wnd))
    {
        return -1;
    }

    hwnd = CreateWindow(TEXT("w1"),TEXT("Hello Window"),WS_VISIBLE|WS_OVERLAPPEDWINDOW,0,0,500,500,NULL,NULL,hinst,NULL);

    while(GetMessage(&msg,hwnd,NULL,NULL))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp)
{
    switch(msg)
    {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            DefWindowProc(hwnd,msg,wp,lp);
    }
}