#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    bubbleSort(arr,n);
    printf(arr,n);
    return 0;
}