#include<stdio.h>
void main()
{
    int phy,che,maths;
    printf("Enter maths marks:");
    scanf("%d",&maths);
    printf("Enter phy marks:");
    scanf("%d",&phy);
    printf("Enter che marks:");
    scanf("%d",&che);
    if(maths>=65 && phy>=55 && che>=50 && maths+phy+che>=180 ||maths+phy >=140)
    {
        printf("Students are eligible.");
    }
    else
    {
        printf("Students are not eligible.");
    }
    return ;
}