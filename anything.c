#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t,n;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    { 
        scanf("%d",&n);
        int arr[3][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }  
    }
    
    return 0;
}
