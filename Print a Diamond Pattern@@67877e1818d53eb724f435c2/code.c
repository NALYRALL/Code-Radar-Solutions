#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++)
    {
        for (int j=1;j<=2i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}