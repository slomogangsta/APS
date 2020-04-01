#include <stdio.h>
#include <stdlib.h>

int flag=0;

void swap(long int *x, long int *y)
{
    long int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    flag=1;
}


int partition (long int arr[], int s, int e) 
{ 
    int p = arr[e];    
    int i = (s - 1);
  
    for (int j = s; j <= e- 1; j++) 
    { 
        if (arr[j] < p) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[e]); 
    return (i + 1); 
}

void arrange(long int a[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(a,l,r);
        arrange(a,l,pi-1);
        arrange(a,pi+1,r);
    }
}

int main()
{
    int t,n,i;
    scanf("%d",&t);

    for(int a=0;a<t;a++)
    {   
        scanf("%d",&n);
        long int arr[n+1],arr1[n+1],sum=0;

        for(i=1;i<=n;i++)
        {
            scanf("%ld",&arr[i]);
        }

        for(i=1;i<=n;i++)
        {
            scanf("%ld",&arr1[i]);
        }

        arrange(arr,1,n);
        arrange(arr1,1,n);

        if(!flag)
        {
            printf("%ld",arr[1]*n);
            return 0;
        }

        for(i=1;i<=n;i++)
        {
            //arr[i] > arr1[i] ? sum+=arr1[i] : sum+=arr[i];
            if(arr[i]<=arr1[i])
            {
                sum+=arr[i];
            }
            else
            {
                sum+=arr1[i];
            }
            
        }

        printf("%ld\n",sum);
        flag=0;
    }

    return 0;
    
}