#include<stdio.h>

int main(void)
{
    char ant;
    scanf("%c",&ant);
    if (ant<='z' || ant>='a')
    {
        printf("Lowercase");
    }
    else if (ant<=z'Z' || ant>='A')
    {
        printf("Uppercase");
    }
    else 
    {
        printf("Not a Alphabet");
    }
    return 0;
}