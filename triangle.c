#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the all three sides:");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
    {
        printf("This is equilateral triangle....");
    }
    else if(a==b && b!=c)
    {
        printf("This is isosceles triangle....");
    }
    else if(a!=b && b!=c)
    {
        printf("This is scalene triangle....");
    }
    return 0;
}