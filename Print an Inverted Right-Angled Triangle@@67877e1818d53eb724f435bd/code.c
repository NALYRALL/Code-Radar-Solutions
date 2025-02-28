#include<stdio.h>

int main(void)
{
    int input;
    scanf("%d",&input);
    for (int i=0;i<input;i++,printf("\n"))
    {
        for (int j=0;j<=input-i;j++)
        {
            printf("* ");
        }
    }
    return 0;
}