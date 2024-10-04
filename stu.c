#include<stdio.h>
int main()
{
    int roll,marks,phy,che,maths;
    char c[20];
    float per,total;
    printf("Enter student name:");
    scanf("%s",&c);
    printf("Enter roll :");
    scanf("%d",&roll);
    printf("Enter phy marks:");
    scanf("%d",&phy);
    printf("Enter maths marks:");
    scanf("%d",&maths);
    printf("Enter che marks:");
    scanf("%d",&che);
    total=phy+che+maths;   
    per= ((total)/3);
    if(per>=60)
    {
        printf("First Division=%f",per);
    }
    else if(per<60 && per>=45)
    {
        printf("second Division=%f",per);
    }
    else if(per<45 && per>=33)
    {
        printf("Third Division=%f",per);
    }
    else
    {
        printf("Students are fail...");
    }
    return 0;
}