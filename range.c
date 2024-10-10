#include<stdio.h>
int main()
{
    int n,r=0,i;
   
    
    while(10)
    {
         printf("Enter the Number:\t");
    scanf("%d",&n);
    if(n >=0 && n <=20){
        printf("Within the range");
        break;
    }
    else{
        printf("Try again \n");
        
    }

        
    }
    return 0;
}