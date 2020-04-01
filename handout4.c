#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    char arr[n];
    scanf("%s",arr);

    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                printf("%c",arr[j]);
            }
            printf("\n");
        }
    }
}