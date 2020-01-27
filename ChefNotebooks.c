#include <stdio.h>
#include<stdbool.h>

int main(void) 
{
	int T,C,P,X,Y,K,N;
    bool flag =0;
        
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {   
        flag = 0; 
        //scanf("%d %d %d %d",&X,&Y,&K,&N);
        for(int j=0;j<N;j++)
        {   
            scanf("%d %d",&P,&C);
            if(P>=(X-Y)&&(K>=C))
            {
                    flag = 1;
            }
        }
        printf(flag ? "LuckyChef\n" : "UnluckyChef\n");
            
    }
	return 0;
}

