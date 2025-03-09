#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++)
    {
        int alpha=65;
        for (int j=0;j<i;j++)
        {
            printf("%d ",j);
            alpha+=1;
        }
        printf("\n");
    }
    return 0;
}