#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a,b;
    scanf("%i %i",&a,&b);
    if (a%b==0)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    return 0;
}