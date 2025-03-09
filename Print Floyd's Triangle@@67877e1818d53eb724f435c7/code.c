#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    int alpha=1;
    for (int i =1;i<=a;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("%d ",alpha);
            alpha+=1;
        }
        printf("\n");
    }
    return 0;
}