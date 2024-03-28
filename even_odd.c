#include<stdio.h>

void main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    printf("Given Number (%d) is %s",num,(num%2==0)?"Even":"Odd");
}