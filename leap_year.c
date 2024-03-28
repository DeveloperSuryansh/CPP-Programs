#include<stdio.h>

void main()
{
    int year;
    printf("Enter here any Year: ");
    scanf("%d",&year);
    printf("%d is %sa leap year\n",year,(year%4==0)?"":"not ");
}