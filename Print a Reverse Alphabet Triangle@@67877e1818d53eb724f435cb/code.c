#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i =a;i>=1;i--)
    {
        int alpha=65;
        for (int j=0;j<i;j++)
        {
            printf("%c ",alpha);
            alpha+=1;
        }
        printf("\n");
    }
    return 0;
}