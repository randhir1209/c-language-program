#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n b=%d\n",a,b);
    return;
}