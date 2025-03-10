#include<stdio.h>
int main(void)
{
    int input;
    scanf("%d",&input);
    for (int i =1;i<=input;i++)
    {
        
        for (int j=0;j<i;j++)
        {
            int b=0;
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