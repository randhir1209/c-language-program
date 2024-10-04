#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(c>=65 && c<=90 || c>=97 && c<=122)
    {
        printf("This is alphabet......");
    }
    else 
    {
        printf("wrong input....");
    }
    return 0;
}