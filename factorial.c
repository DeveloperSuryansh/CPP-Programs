#include<stdio.h>

void main()
{
    int n;
    int fact=1;
    printf("Enter here a number to find its Factorial: ");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d is %d",n,fact);
}