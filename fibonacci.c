#include<stdio.h>

void main()
{
    int n,p=0,p0=-1,p1=1;
    printf("Enter here any num: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        p=p0+p1;
        p0=p1;
        p1=p;
        printf("%d ",p);
    }

}