#include<stdio.h>

int main(void)
{
    char a;
    scanf("%c",&a);
    switch (a)
    {
        case 1:
        printf("Exellent");
        break;
        case 2:
        printf("Good");
        break;
        case 3:
        printf("Average");
        break;
        case 4:
        printf("Below Average");
        break;
        case 5:
        printf("Fail");
        break;
        default:
            printf("Invalid\n");
    }
    return 0;
}