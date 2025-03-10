#include<stdio.h>
int main(void)
{
    int a;
    scanf("%i",&a);
    for (int i =1;i<=a;i++)
    {
        int num=1;
        for (int j=1 ;j<a-i;j++)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("%i",num);
            num++;
        }
    }
}