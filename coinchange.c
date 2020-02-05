#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{   
    int num,n;
    scanf("%d%d",&num,&n);

    int arr[num+1],coin[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
    }

    for(int i=0;i<=num;i++)
    {
        arr[i]=0;
    }
    arr[0]=1;

    for(int i=0;i<n;i++)
    {
        printf("%d\t",coin[i]);
    }

    printf("\n");
    
    for(int j=0;j<n;j++)
    {   
        for(int i=coin[j];i<=num;i++)
        {
            arr[i]+=arr[i-coin[j]];
        }

        for(int i=0;i<=num;i++)
        {
            printf("%d\t",arr[i]);
        }

        printf("\n");
    }

    printf("\n%d",arr[num]);

    return 0;
}