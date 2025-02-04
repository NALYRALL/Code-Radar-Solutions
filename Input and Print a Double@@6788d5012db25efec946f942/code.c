#include <stdio.h>
int main()
{   float a;
    scanf("%f",&a);

    a= (double) a;
    printf("You entered: %.4f",a);
    return 0;
}