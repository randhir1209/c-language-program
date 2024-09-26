#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d \n b=%d \n",a,b);
    return;
}