#include <stdlib.h>
#include <stdio.h>

void initialize( int Arr[ ], int N)
{
    for(int i = 0;i<N;i++)
    {
Arr[ i ] = i ;
size[ i ] = 1;
}
}

void weighted_union(int Arr[ ],int size[ ],int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
Arr[ root_A ] = Arr[root_B];
size[root_B] += size[root_A];
}
    else
    {
Arr[ root_B ] = Arr[root_A];
size[root_A] += size[root_B];
}

}

bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
    return true;
    else
    return false;
}