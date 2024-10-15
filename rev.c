#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    do{
        rev=rev*10+num%10;
        num=num/10;
    }while(num>0);
    printf("REv number=%d",rev);
    return 0;
}