#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++)
    {
        for (int j=a;j>=1;j--)
        {
            printf(" ");
        }
        for (int k =1;k<=a;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}