#include<stdio.h>

void swap_by_Pointer(int *num1,int *num2);

void main()
{
    int num1;
    int num2;
    printf("Enter First Num: ");
    scanf("%d",&num1);
    printf("Enter Second Num: ");
    scanf("%d",&num2);
    printf("Num1 = %d and Num2 = %d Before Swapping\n",num1,num2);
    swap_by_Pointer(&num1,&num2);
    printf("Num1 = %d and Num2 = %d After Swapping",num1,num2);
}

void swap_by_Pointer(int *num1,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}