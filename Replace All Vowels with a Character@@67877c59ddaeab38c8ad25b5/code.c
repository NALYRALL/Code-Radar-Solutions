#include <stdio.h>
#include <string.h>

char* replace(int arr[])
{
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        if (strchr("AEIOUaeiou", arr[i])!= NULL)
        {
            arr[i]= '*';
        }
    }
    return arr;
}

int main(void)
{
    char string[50];
    scanf("%49s", string);

    printf("%s", replace(string));

    return 0;
}

