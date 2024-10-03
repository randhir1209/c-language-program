#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("Enter selling price:");
    scanf("%f",&sp);
    if(cp>sp)
    {
        printf("loss=%f" ,cp-sp);
    }
    else if(sp>cp)
    {
        printf("profit=%f",sp-cp);
    }
    else{
        printf("no profit.");
    }
    return 0;
}