#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number a and b:\n");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping :a=%d,b=%d\n",a,b);
    return 0;
}