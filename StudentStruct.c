#include<string.h>
#include<stdio.h>

struct Student
{
    char name[50];
    int marks;
    int age;
    int branch;
};


void main()
{
    struct Student Suryansh;
    Suryansh.marks = 90;     // access normally (by dot)
    strcpy(Suryansh.name,"Suryansh Sharma");
    printf("%s %d",Suryansh.name,Suryansh.marks);
}