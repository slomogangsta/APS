#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int n;
    scanf("%d",&n);
    int c[n+1];
    c[0]=1;
    c[1]=1;
    c[2]=2;
    for(int  i=3;i<=n;i++)
    {
        c[i]=0;
        for(int j=0;j<i;j++)
        {
            c[i]+=c[j] * c[(i-1)-j];
        }
    }
    printf("%d\n",c[n]);
    return 0;
}
