#include <stdio.h>
#include <stdlib.h>

unsigned long int catalan(int n)
{
    if (n <= 1)
        return 1;
    unsigned long int res = 0;
    for (int i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);
    return res;
}

int main()
{   
    int n;
    scanf("%d",&n);
    printf("%lu\n",catalan(n));
    return 0;
}