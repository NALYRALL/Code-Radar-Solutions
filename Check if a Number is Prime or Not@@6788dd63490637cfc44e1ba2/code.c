#include<stdio.h>

int main(void)
{
    int a;
    scanf("%i",&a);
    if (a>2)
        if (a%2==0 || a%3==0 || a%5==0 || a%7==0  || a%9==0 )
        {
            printf("Not Prime");
        }
        else
        {
            printf("Prime");
        }
    return 1;
}