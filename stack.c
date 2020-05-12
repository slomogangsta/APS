#include <stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0

struct stack
{
    int top;
    int arr[STACKSIZE];
};
typedef struct stack STACK;

int empty(STACK * s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int full(STACK * s)
{   
    if(s->top==STACKSIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void push(STACK * s)
{   
    if(!full(s))
    {
        printf("Enter the number to pushed \n");
        scanf("%d",&s->arr[++s->top]);
        printf("Sucessfully Pushed \n");
        return;
    }
    else
    {
        printf("FULL \n");
        return;
    }
    
}

void pop(STACK * s)
{
    if(!empty(s))
    {
        printf("%d\n",s->arr[s->top--]);
        return;
    }
    else
    {
        printf("EMPTY");
        return;
    }
    

}

void peek(STACK * s)
{
    if(!empty(s))
    {
        printf("%d\n",s->arr[s->top]);
        return;
    }
    else
    {
        printf("EMPTY");
        return;
    }
    
}

void print(STACK * s)
{
   if(!empty(s))
   {
       for(int i=s->top;i>=0;i--)
       {
           printf("%d ",s->arr[i]);
       }
       printf("\n");
   } 
   else
   {    
       printf("EMPTY");
       return;
   }
   
}

int main()
{
    STACK s;
    s.top=-1;
    int choice=0;
    while(1)
    {
        printf("**menu**\n");
        printf("1-push\n2-pop\n3-peek\n4-print\n5-exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : push(&s);
            break;
             case 2 : pop(&s);
            break;
             case 3 : peek(&s);
            break;
             case 4 : print(&s);
            break;
             case 5 : exit(0);


        }
    }
}