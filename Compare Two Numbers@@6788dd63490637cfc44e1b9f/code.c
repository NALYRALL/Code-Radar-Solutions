#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a,b;
    scanf("%i %i",&a,&b);
    if (a>b)
    {
        printf("First");
    }
    else if (a==b)
    {
        printf("Equal")
    }
    {
        printf("Second");
    }
    return 0;
}