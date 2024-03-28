// -m32 -lbgi -luser32 -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

#include<graphics.h>
#include<conio.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    setcolor(GREEN);
    settextstyle(3,HORIZ_DIR,4);
    outtextxy(100,100,"This is SURYA DON");
    getch();
    cleardevice();
}