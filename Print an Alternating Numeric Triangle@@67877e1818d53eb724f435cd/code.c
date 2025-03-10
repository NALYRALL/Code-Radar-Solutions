#include<stdio.h>
int main(void)
{
    int input;
    scanf("%d",&input);
    for (int i =1;i<=input;i++)
    {
        int b=(i%2==0 ) ? 0 :1;
        for (int j=0;j<i;j++)
        {
            printf("%i"b)
            b=1-b;
        }
        printf("\n");
    }
    return 0;
}