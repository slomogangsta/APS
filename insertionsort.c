#include<stdio.h>
#include<stdlib.h>

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
        printf("%d\t",arr[i]);
    }

    printf("\n");

    for(int i=0;i<n;i++)
    {
        int j=i-1;
        int v = arr[i];

        while(j>=0 && arr[j]>v)
        {
            arr[j+1]=arr[j];
            --j;
        }

        arr[j+1] = v;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
}