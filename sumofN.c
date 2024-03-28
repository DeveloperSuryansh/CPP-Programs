#include<stdio.h>

void main()
{
    int n=0;
    int sum=0;
    printf("Enter Range for Sum of N Natural Numbers: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of (%d) Natural Numbers = %d",n,sum);
}