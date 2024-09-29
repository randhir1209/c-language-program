#include<stdio.h>
int main()
{
    int c_id;
    float unit,bill;
    char c[20];
    printf("Enter customer name:");
    scanf("%s",&c);
    printf("\nEnter customer id:");
    scanf("%d",&c_id);
    printf("\nEnter unit:");
    scanf("%f",&unit);
    if(unit<=199)
    {
        bill=unit*1.20;
    }
    else if(unit>=200 && unit<400)
    {
        bill=unit*1.50;
    }
    else if(unit>=400 && unit<600)
    {
        bill=unit*1.75;
    }
    else if(unit>=600)
    {
        bill=unit*2.00;
    }
    else
    {
        printf("enter valid unit.");
    }
    printf("\nElectricity bill:%f",bill);
    if(unit>=400)
    {
        bill=(bill+(bill*.15));
        printf("\n total bill=%f",bill);
    }
    else if(bill<=100)
    {
        bill=100;
        printf("\ntotal bill=%f",bill);
    }
   return 0;
}