#include<stdio.h>
int main()
{
    int n,mul,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        mul=n*i;
        printf("\n%d",mul);
        i++;
    }while(i<=10);
    //printf("Multiply=%d",mul);
}