#include<stdio.h>
int main(void)
{
    int a;
    scanf("%i",&a);
    for (int i=0;i>a;i++)
    {
        for (int j =1 ;j<=a;j++)
        {
            printf("* ");
        }
    }
    return 0;
}