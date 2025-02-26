#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("Loss");
    }
    else 
    {printf("Profit");
    }
    return 0;
}