#include<stdio.h>
int main(void)
{
    int a;
    scanf("%i",&a);
    if ((a%4==0 && a%100!=0) || a%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;

}