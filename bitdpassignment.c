#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

int countsetbit(int n)
{   
    int i=0;
    int count=0;
    while(n!=0)
    {
        n = n&n-1;
        count++;
    }
    return count;
}

int min(int n1,int n2)
{
    return n1 > n2 ? n2 : n1;
}

int main()
{
    int n;
    scanf("%d",&n);
    double n1 = (double) n;

    int dp[(int) pow(2.0,n1)];
    int mask[(int) pow(2.0,n1)];

    for(int i=0;i<(int) pow(2.0,n1);i++)
    {
        dp[i] = INT_MAX;
        mask[i]=i;
    }

    dp[0] = 0;

    for(int i=0;i<(int) pow(2.0,n1);i++)
    {
        printf("%d\t",dp[i]);
    }
    printf("\n");

    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<(int)pow(2.0,n1);i++)
    {
        int b = countsetbit(i);
        for(int j=0;j<n;j++)
        {
            if(!(i&(1<<j)))
            {
                dp[i|(1<<j)] = min(dp[(i|(1<<j))],(dp[i]+arr[b][j]));
            }
        }
    }


    printf("\n%d",dp[((int)pow(2.0,n1)-1)]);

    
}