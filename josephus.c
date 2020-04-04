#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,res=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
    {
        res = (res+k)%i;
    }
    printf("%d\n",res+1);
    return 0;
}