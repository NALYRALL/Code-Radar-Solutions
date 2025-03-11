#include<stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {       
        for (int j = 0; j < size - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for (int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}