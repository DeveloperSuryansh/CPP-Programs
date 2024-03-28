#include<stdio.h>

void main()
{
    int age;
    char name[50];
    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your Age: ");
    scanf("%d",&age);

    printf("Welcome %s You are %d year(s) old\n\n",name,age);
}