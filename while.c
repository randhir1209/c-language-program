#include<stdio.h>
int main()
{
    int n,i=1,product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        product=product*i;
        i++;
    }
    printf("product=%d",product);
    return 0;
}