#include <stdio.h>
int precision()
{   float a;
    scanf("%f",&a);

    a= (double) a;
    print("You entered: %.4f",a);
    return 0;
}