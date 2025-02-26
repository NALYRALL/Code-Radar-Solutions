#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a;
    scanf("%i",&a);
    if (a>=60)
    {
        printf("Eligible");
    }
    else 
    {
        printf("Npt Eligible");
    }
    return 0;
}