#include<stdio.h>
int main()
{
    int num=7,n,i;
    do{
        printf("\nEnter the number:");
        scanf("%d",&n);
        if(num==n)
        {
            printf("Numbers are equals...");
            break;
        }
        else
        {
            printf("Try again...");
        
        }
        } while(1);
    return 0;
}