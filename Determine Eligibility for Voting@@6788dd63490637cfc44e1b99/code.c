#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a;
    scanf("%d",&a);
    if (a>=18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}