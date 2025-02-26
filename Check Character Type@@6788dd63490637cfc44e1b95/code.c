#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch;
    scanf("%c",&ch);
    char check = tolower(ch);
    if (check>0 && check<9)
    {
        check =(int)check;
        printf("Digit");
    }
    else if (check !=0)
    {
        if (check=='a' || check== 'e' || check=='i' || check=='o'|| check=='u')
        {
            printf("Vowel");
        }
        else if ((check >64 && check<91) || (check>96 && check<123))
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