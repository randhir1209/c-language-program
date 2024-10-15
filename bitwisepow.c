#include<stdio.h>
int main()
{
    int n,p=-1;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n)
    {
        n=n>>1;
        p++;
    }
    printf("%d",p);
    return 0;
}