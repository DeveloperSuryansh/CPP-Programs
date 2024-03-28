#include<stdio.h>

void main()
{
    int x,y;
    int max;
    printf("Enter Two Numbers to find LCM (x y): ");
    scanf("%d %d",&x,&y);
    max = (x>y)?x:y;
    while (1)
    {
        if(max%x==0 && max%y==0)
        {
            printf("LCM of %d and %d is %d",x,y,max);
            break;
        }
        ++max;
    }
}