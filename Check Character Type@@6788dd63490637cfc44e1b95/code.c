#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch;
    scanf("%c",&ch);
    char check = tolower(ch);
    if (check>0 && check<9)
    {
        printf("Digit");
    }
    else if (check !=0)
    {
        if (check=='a' || check== 'e' || check=='i' || check=='o'|| check=='u')
        {
            printf("Vowel");
            check =(int)check;
        }
        if else ((check >64 && check<91) || (check>96 && check<123))
        {
            printf("Consonant");
        }
    }
    else 
    {
        printf("Special Character");
    }
    return 0;

    // if ((65<=check <=90) && ())
}