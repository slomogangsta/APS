#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,min,i,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");

    for (i=0;i<n-1;i++)
    {   
        min =i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
                //printf("%d\n",min);
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n")
}