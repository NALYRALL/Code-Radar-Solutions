#include<stdio.h>

int main(void)
{
    char a;
    scanf("%c",&a);
    switch (a)
    {
        case 'A':
        printf("Exellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'E':
        printf("Fail");
        break;
        default:
            printf("Invalid\n");
    }
    return 0;
}