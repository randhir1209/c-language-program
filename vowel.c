#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("Vowels...");
    }
    else
    {
        printf("this is consonant....");
    }
    return 0;
}