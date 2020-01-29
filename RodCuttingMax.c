#include<stdio.h>
#include<stdlib.h>

int max(int n1,int n2,int n3)
{
    int max;
    if((n1 > n2) && (n1 > n3))
    {
        max = n1;
    }
    else if(n2 > n3)
    {
        max = n2;
    }
    else
    {
        max = n3;
    }
    return max;
}

int rodcutting(int n)
{
    int result[n+1];
    result[0]=0;
    result[1]=0;

    for(int i=2;i<=n;i++)
    {
        result[i]=0;
        for(int j=1;j<=i/2;j++)
        {
            result[i] =  max(result[i],(j*(i-j)),j*result[i-j]);
        }
    }
    printf("%d",result[n]);
}

int main()
{
    int n=6;
    rodcutting(n);
}