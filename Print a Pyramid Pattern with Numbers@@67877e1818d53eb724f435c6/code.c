#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for (int i =0;i<a;i++)
    {
        for (int l =1;l<=(a-i)-1;l++)
        {
            printf(" ");
        }
        for (int j=1;j<=i+1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}