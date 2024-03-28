#include<stdio.h>

void main()
{
    int num,num1,num2;
    int large = 0;
    printf("Enter All three Numbers (Seperate by Space):");
    scanf("%d %d %d",&num,&num1,&num2);
    large = (num>num1)?num:num1;
    printf("Largest Num is (%d)",(large>num2)?large:num2);
}