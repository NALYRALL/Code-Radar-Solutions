#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch;
    scanf("%c",&ch);
    char check = tolower(ch);
    if (isdigit(ch))
    {
        printf("Digit");
    }
    else if (isalpha(ch))
    {
        if (check=='a' || check== 'e' || check=='i' || check=='o'|| check=='u')
        {
            printf("Vowel");
        }
        else if (isalpha(ch))
        {
            printf("Consonant");
        }
    }
    else 
    {
        printf("Special Character");
    }
    return 0;
}