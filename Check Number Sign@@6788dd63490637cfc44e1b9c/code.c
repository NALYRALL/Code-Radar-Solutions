#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a;
    scanf("%i",&a);
    if (a>0)
    {
        printf("Positive");
    }
    else if (a==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}