#include <stdio.h>
#include <string.h>

char replace(int arr[])
{
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        if (strchr("AEIOUaeiou", arr[i])!= NULL)
        {
            arr[i]= '*';
        }
    }
    printf("%s", arr);
}

int main(void)
{
    char string[50];
    scanf("%49s", string);

    replace(string);

    return 0;
}

