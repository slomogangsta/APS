#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int n1,int n2)
{
    return n1>n2 ? n1 : n2;
}

int substring(char *s1,char *s2,int n1,int n2)
{
    int lcs[n1+1][n2+1];

    for(int i=0;i<=n1;i++)
    {
        lcs[i][0] = 0;
    }

    for(int i=0;i<=n2;i++)
    {
        lcs[0][i] = 0;
    }

    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                lcs[i][j] = lcs[i-1][j-1]+1;
            }
            else
            {
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            printf("%d\t",lcs[i][j]);
        }
        printf("\n");
    }

    return lcs[n1][n2];

}

int main()
{   
    char S1[100],S2[100];
    int n1,n2;

    scanf("%s",S1);
    scanf("%s",S2);

    n1=strlen(S1);
    n2=strlen(S2);

    int x = substring(S1,S2,n1,n2);

    printf("%d",x);


}