#include<stdio.h>
int main()
{
    int n,i=1,c;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            c=c+(i*i*i);
        }
        i++;
    }
    printf("c=%d",c);
    return 0;
}