#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    {
        printf("Upper case alphabet....");
    }
    else if(c>=97 && c<=122)
    {
         printf("Lower case alphabet....");
    }
    else if(c>=48 &&c<=57)
    {
         printf("Numeric key....");
    }
    else if(c>=32 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 ||c>=123 &&c<=126)
    {
         printf("Special character....");
    }
    else
    {
         printf("wrong input....");
    }
    return 0;
}