#include<stdio.h>

int isprime(int n) 
{
    if (n < 2) return 0;  // Numbers less than 2 are not prime
    if (n == 2 || n == 3 || n == 5 || n == 7) return 1; // Prime numbers
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) return 0; // Divisibility check
    return 1; // Assume prime if not divisible
}
int main(void)
{
    int a;
    scanf("%i",&a);
    if (isprime(a))
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}