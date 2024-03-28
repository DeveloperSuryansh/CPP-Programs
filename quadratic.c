#include<stdio.h>
#include<math.h>

void main()
{
    double a,b,c,dscrt,root1,root2;
    printf("Enter a,b,c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    dscrt = (b*b)+(4*a*c);
    if(dscrt>0)
    {
        root1 = (-b + sqrt(dscrt))/(2*a);
        root2 = (-b - sqrt(dscrt))/(2*a);
        printf("Root 1 = %2lf and Root 2 = %2lf",root1,root2);
    }
    else if(dscrt==0)
    {
        root1 = (-b)/(2*a);
        printf("Root 1 = Root 2 = %2lf",root1,root2);
    }
    else
    {
        root1 = (-b)/(2*a);
        root2 = (sqrt(dscrt))/(2*a);
        printf("Real Part = %2lf and Imaginery Part = %2lf",root1,root2);
    }
}