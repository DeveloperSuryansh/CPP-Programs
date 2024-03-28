#include<stdio.h>

void main()
{
    int n,r,q,ans=0;
    printf("Enter here a number to reverse it: ");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r = q%10;
        q = q/10;
        ans = (ans*10)+r;
    }
    printf("Reversed Output: %d ",ans);
}