#include<stdio.h>
#include<stdlib.h>

int count=0,sum=0;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;

NODE* addstart(NODE * start,int data)
{
    NODE * newnode;
    newnode=(NODE*) malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("memory allocation failed \n");
        return start;
    }
    newnode->data=data;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    newnode->next=start;
    start=newnode;
    return start;
}


void display(NODE * start,NODE * start2)
{
    while(start!=NULL)
    {
        printf("%d\t",start->data);
        sum+=start->data;
        start=start->next;
        count++;
    }

    while(start2!=NULL)
    {
        printf("%d\t",start2->data);
        sum+=start2->data;
        start2=start2->next;
        count++;
    }

    printf("\n");
    //return count,sum;
}

int main()
{
    NODE * start = NULL;
    NODE * start2 = NULL;
    int c;
    while(c!='\n')
    {
        scanf("%d",&c);
        start = addstart(start,c);
    }
    while(c!='\n')
    {
        scanf("%d",&c);
        start2 = addstart(start2,c);
    }

    display(start,start2);
    printf("%d\n",count);
    printf("%d\n",sum);
    return 0;
}
