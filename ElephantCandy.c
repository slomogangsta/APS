#include <stdio.h>
#include<stdbool.h>

int main(void) 
{
	int T,C,N;
    //bool flag =0;
        
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {   
        //flag = 0; 
        scanf("%d%d",&N,&C);
        int A[N];

        for(int j=0;j<N;j++)
        {   
            scanf("%d",&A[j]);
        }

        int temp = 0,flag=0;

        for(int k=0;k<N;k++)
        {
            
            temp += A[k];
            if(temp>C)
            {
                flag = 1;
                break;
            }

        }
        printf(flag ? "No\n" : "Yes\n");
            
    }
	return 0;
}

