#include<stdio.h>
#include<string.h>

void main()
{
    char name[50],name1[50],name2[50];
    printf("Enter your name:");
    scanf("%s",&name);
    getchar();
    printf("Welcome, %s \n\n",name);

    // printf("Enter your name:");
    // scanf("%[^\n]",&name1);
    // getchar();
    // printf("Welcome, %s \n\n",name);

    // printf("Enter your name:");
    // fgets(name2,sizeof(name2),stdin);
    // printf("Welcome, %s \n\n",name);
}