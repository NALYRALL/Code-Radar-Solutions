#include<stdio.h>
int main (void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%i",a);
    }
    else if (b>a && b>c)
    {
        printf("%i",b);
    }
    else if (c>b && c>a)
    {
        printf("%i",c);
    }
    else 
    {
        printf("%i",a);
    }
    return 0;
}