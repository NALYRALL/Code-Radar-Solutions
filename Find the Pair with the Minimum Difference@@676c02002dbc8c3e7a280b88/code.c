#include<stdio.h>
void sorting(int arr[],int length)
{
    for (int i=0;i<length-1;i++)
    {
        for (int j=i+1;j<length;j++)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
void smaldiff(int arr[],int length)
{
    sorting(arr,length);
    int subarr[length-1];
    for (int i=0;i<length-1;i++)
    {
        int dif=0;
        dif = arr[i+1]-arr[i];
        subarr[i]=diff;
    }
    int temp[length-1];
    for (int i= 0; i< length; i++)
    {
        temp[i]= subarr[i];
    }
    sorting(temp,length);
    int var= temp[0];
    int smallest;
    for (int i=0;i<length-1;i++)
    {
        if (var==subarr[i])
        {
            smallest=i
        }
    }
    printf("%d %d",arr[smallest],arr[smallest+1]);



}