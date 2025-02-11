#include<stdio.h>
int main(void)
{
    int a;
    scanf("%i",&a);
    if (a%5==0 || a%11==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}