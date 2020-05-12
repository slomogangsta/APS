#include<stdlib.h>
#include<stdio.h>

int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    int temp;
    while(1)
    {
        do
        {
            ++i;
        }while(arr[i]<pivot);

        do
        {
            --j;
        } while (arr[j]>pivot);

        if(i>j)
        {
            temp=arr[l];
            arr[l]=arr[j];
            arr[j]=temp;
            return j;
        }

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
    }
}

void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int s = partition(arr,l,h);
        quicksort(arr,l,s-1);
        quicksort(arr,s+1,h);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}