#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
	int t,n,min=INT_MAX,sum=0,flag=0;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{   
        sum=0; 
	    min = INT_MAX;
	    scanf("%d",&n);
	    int arr[n+1];
	    
	    for(int j=1;j<=n;j++)
	    {   
	        scanf("%d",&arr[j]);
	        if(arr[j]<min)
	        {
	            min = arr[j];
	        }
	        sum+=arr[j];
	        
	    }

	       printf("%d",sum-(n*min));      
	}
	
	return 0;
}
