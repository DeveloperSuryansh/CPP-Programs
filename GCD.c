#include<stdio.h>

void main()
{
    int n1,n2,r,i;
    printf("Enter here any two Num(x y): ");
    scanf("%d %d",&n1,&n2);
    for(i=1; i<=n1 && i<=n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
        {
            r=i;
        }
    }
    printf("GCD/HCF of %d and %d is %d",n1,n2,r);
}