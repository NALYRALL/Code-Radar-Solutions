#include<stdio.h>
int main(void)
{
    int a;
    scanf("%i",&a);
    for (int i =1;i<=a;i++)
    {
        int num=1;
        for (int j=1 ;j<=a-i;j++)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("%i",num);
            num++;
        }
        for (int l=i-1;l>i;l--)
        {
            num -=1;
            printf("%i",l);
        }
        printf("\n");
    }
    return 0;
}