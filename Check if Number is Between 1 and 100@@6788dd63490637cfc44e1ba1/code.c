#include<stdio.h>

int main(void)
{
    int a;
    scanf("%i",&a);
    if (a<=100 && a>=1)
    {
        printf("In Range");
    }
    else 
    {
        printf("Out of Range");
    }
    return 0;
}