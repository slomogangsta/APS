#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    char s1[n];
    s1[0]='\0';
    int arr[n];
    int count;
    char c='\0';
    char * str;
    int scount = -1;

    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }

    scanf("%s",s);

    str = s;

    for(int i=0;i<n;i++)
    {
        if(i==0 || str[i]!=c)
        {
            ++scount;
            c = str[i];
            strncat(s1,&c,1);
        }
        ++arr[scount];
    }

    for(int i=0;i<strlen(s1)-1;i++)
    {
        count+=(arr[i]*(arr[i]+1))/2;
    }

    for(int i=1;i<strlen(s1)-1;i++)
    {
        if(arr[i]==1 && s1[i-1]==s1[i+1])
        {
            count+= arr[i-1] > arr[i+1] ? arr[i+1] : arr[i-1] ;
        }
    }

    printf("%d",count);

}