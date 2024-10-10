#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n>0)
        {
            fact=fact*i;
        }
        i++;
    }
    printf("Factorial=%d",fact);
    return 0;

}