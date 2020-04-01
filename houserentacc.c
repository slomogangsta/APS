#include <stdio.h>
#include <stdio.h>

int main()
{
    int n,s,y;
    long long int sum=0;

    scanf("%d %d %d",&n,&s,&y);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sum = s;

    for(int i=1;i<=y;i++)
    {
        sum*=2;
    }

    printf("%lld",sum-s);
}