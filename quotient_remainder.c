#include<stdio.h>

int main(int argc,char* argv[])
{
    int a,b;
    printf("Program to find Quotient and Remainder! \n\n");
    printf("Enter First Num (dividend): ");
    scanf("%d",&a);
    printf("Enter Second Num (divisor) : ");
    scanf("%d",&b);
    printf("Quotient => %d \nRemainder => %d",a/b,a%b);
    return 0;
}