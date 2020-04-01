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
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    compute(arr,0,n);
    return 0;
}