#include<stdio.h>

int main(void)
{
    char ant;
    scanf("%c",&ant);
    if (ant>='A' && ant<='Z')
    {
        printf("Uppercase");
    }
    else if (ant>='a' && ant<='z')
    {
        printf("Lowercase");
    }
    else 
    {
        printf("Not a alphabet");
    }
    return 0;
}