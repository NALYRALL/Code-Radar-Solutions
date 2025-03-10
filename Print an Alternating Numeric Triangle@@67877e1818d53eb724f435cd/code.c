#include<stdio.h>
int main(void)
{
    int input;
    int b=0;
    scanf("%d",&input);
    for (int i =1;i<=input;i++)
    {
        int b=0;
        for (int j=0;j<i;j++)
        {
            if (b==0)
            {
                b=1;
                printf("%i ",b);
            }
            else if (b==1)
            {
                b=0;
                printf("%i ",b);
            }

        }
        printf("\n");
    }
    return 0;
}