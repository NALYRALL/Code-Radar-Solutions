#include<stdio.h>
isPrime(int num)
{
    for (int i=0;i<num;i++)
    {
        if (num%2==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}