#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
    do{
       
        sum=sum+i;
        i++;
       // printf("%d",sum);
    }while(i<=5);
     printf("%d",sum);
    return 0;
}