#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        int chars=65;
        for (int j=0;j<i;j++)
        {
            printf("%c ",chars);
            chars +=1;
        }
        printf("\n");
    }
    return 0;
}