#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int t;
    scanf("%d",&t);
    for (int a=0;a<t;a++)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1];

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }

        int i=1,cnt=0,r=0,flag=0,flag2=1;

        for(int j=1;j<=n;j++)
        {
            if((abs(arr[j]-j))>2)
            {   
                printf("Too chaotic\n");
                flag2=0;
                break;
            }
        }
        while(i<=n & flag2)
        {   
            r = abs(arr[i]-i);
            //printf("arr[i]: %d i : %d r : %d\n",arr[i],i,r);
            //if(r>2)
            //{
                //printf("Too chaotic\n");
                //flag=1;
                //break;
            //}
            //else
            //{
                if(r==0)
                {
                    i++;
                }
                else
                {
                    i+=r+1;
                    cnt+=r;
                }
            //}
            
        }
        if(flag2)
        {
            printf("%d\n",cnt);
        }
    }
    return 0; 
    
}