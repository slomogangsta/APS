#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,q,single;
    scanf("%d",&n);
    single = n;
    int marr[n+1][n+1];
    int warr[n+1][n+1];
    int smarr[n+1];
    int swarr[n+1];
   
    for(int i=1;i<=n;i++)
    {
        smarr[i]=0;
        swarr[i]=0;
    }
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&marr[i][j]);
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&warr[i][j]);
        }
    }
    
    while(single>0)
    {
        if()
    }
    return 0;
}