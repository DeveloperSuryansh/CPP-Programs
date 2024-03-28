#include<stdio.h>

void main()
{
    int t;
    printf("Enter here any Number: ");
    scanf("%d",&t);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",t,i,(t*i));
    }
}