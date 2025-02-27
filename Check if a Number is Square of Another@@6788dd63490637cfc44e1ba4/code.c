#include<stdio.h>

int main(void)
{
    int a,b;
    scanf("%i %i",&a,&b);
    if (b*b==a)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    return 0;
}