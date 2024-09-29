#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    float p,r,ci;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("\n Enter the rate period:");
    scanf("%f",&r);
    printf("\n Enter the time period:");
    scanf("%d",&t);
    r=r/100;
    ci=p*pow((1+(r/12)),12*t);
    printf("\n ci=%f",ci);
    return 0;
}
