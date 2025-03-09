#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++)
    {
        for (int l =1;l=a-i;l--)
        {
            printf(" ");
        }
        for (int j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}