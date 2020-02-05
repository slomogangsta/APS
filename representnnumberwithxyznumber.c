#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{   
    int n;
    scanf("%d",&n);

    int arr[n+1],num[100];
    arr[0] =1;

    for(int i=1;i<=n;i++)
    {
        arr[i]=0;
    }

    for(int i=1;i<3;i++)
    {
        arr[i] = 0;
    }

    for(int i=3;i<=n;i++)
    {
        arr[i] = arr[i-3]+arr[i];
    }

     for(int i=5;i<=n;i++)
    {
        arr[i] = arr[i-5]+arr[i];
    }

    for(int i=10;i<=n;i++)
    {
        arr[i] = arr[i-10]+arr[i];
    }

    for(int i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}