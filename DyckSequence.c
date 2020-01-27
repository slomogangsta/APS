#include<stdio.h>
#include<stdlib.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void compute(char *a,int l,int r)
{
    int i;
    if(l==r)
    {       
        
        printf("%s\n",a);
    }
    else
    {
        for(i=l;i<=r;i++)
        {
            swap((a+l),(a+i));
            compute(a,l+1,r);
            swap((a+l),(a+i));
        }
    }
}
int main()
{   
    int N,i;
    
    scanf("%d",&N);

    char s[2*N];
    for(i=0;i<N;i++)
    {
        s[i]='x';
    }
    for(i=N;i<2*N;i++)
    {
        s[i]='y';
    }
    s[2*N]='\0';
    //printf("%s",s);
    compute(s,0,2*N-1);
    return 0;
}