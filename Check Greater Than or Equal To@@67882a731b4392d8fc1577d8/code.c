#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b || a==b)
    {
        printf ("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}