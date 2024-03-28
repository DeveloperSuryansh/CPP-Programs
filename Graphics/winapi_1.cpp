#include<windows.h>

LRESULT CALLBACK WinPr(HWND,UINT,WPARAM,LPARAM);

int WINAPI WinMain(HINSTANCE hint,HINSTANCE hprev,LPSTR agr,int ncmd)
{
	WNDCLASSW wc = {0};
	MSG msg = {0};
	// wc.hbrBackground = (HBRUSH)WHITE_BRUSH;
	wc.hCursor = LoadCursor(hint,IDC_ARROW);
	wc.hInstance = hint;
	wc.lpszClassName = TEXT("w1");
	wc.lpfnWndProc = WinPr;

	if(!RegisterClassW(&wc)){
		return -1;
	}
	
	CreateWindowW(TEXT("w1"),TEXT("My First GUI"),WS_OVERLAPPED|WS_VISIBLE,100,100,500,500,NULL,NULL,NULL,NULL);
	
	while(GetMessageW(&msg,NULL,NULL,NULL)){
		TranslateMessage(&msg);
		DispatchMessageW(&msg);
	}

	return 0;
}

LRESULT CALLBACK WinPr(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp)
{
	switch(msg)
	{
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			DefWindowProcW(hwnd,msg,wp,lp);
	}
}