#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a;
    scanf("%i",&a);
    if (a%2==0)
    {
        printf("Even");
    }
    else 
    {
        printf("Odd");
    }
    return 0;
}