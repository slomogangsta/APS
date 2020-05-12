#include <stdio.h>
#include<stdlib.h>
#define STACKSIZE 100
#define TRUE 1
#define FALSE 0

struct stack
{
    int top;
    int items[STACKSIZE];
};
typedef struct stack STACK;

int empty(STACK *s)
{
    if(s->top==-1)
    {
        return TRUE;
    }
    else {
        return FALSE ;
    }
}

int full(STACK *s)
{
    if(s->top==(STACKSIZE-1))
    {
        return TRUE;
    }
    else {
        return FALSE ;
    }
}

void push(STACK *s,int x)
{

    if(full(s))
    {
        printf("stack is full");

    }
    s->items[++s->top]=x;
    //printf("push sucessfull\n");
    return ;
}

int pop(STACK *s)
{

    if(empty(s))
    {
        printf("stack is empty");
        return 0;
    }
    int x;
    x=s->items[s->top];
    s->top--;
    //printf("pop sucessfull\n");
    return x;
}

int peek(STACK *s)
{
    if(empty(s))
    {
        printf("stack is empty");
        return 0;
    }
    int x;
    x=s->items[s->top];
    return x;
}

void print(STACK *s)
{
    int i;
    if(empty(s))
    {
        printf("\nStack is empty!!");
    }
    for(i=s->top;i>=0;i--)
    {
        printf("%d\n",s->items[i]);
    }
    return;
}

int main()
{
    STACK s1,s2;
    s1.top=-1;
    s2.top=-1;
    int n,x;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {   
        scanf("%d",&x);
        push(&s1,x);
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        push(&s2,x);
    }

    int a,b,c=0,nc=0;

    while(!empty(&s1) & !empty(&s2))
    {
        a=peek(&s1);
        b=peek(&s2);

        if(a==0 || b==0)
        {
            if(a==0)
            {
                pop(&s1);
            }
            if(b==0)
            {
                pop(&s2);
            }
        }
        
        else if(a>0 & b>0 || a<0 &b <0)
        {
            ++nc;
            pop(&s1);
            pop(&s2);
            printf("0\t");
        }

        else
        {
            ++c;
            pop(&s1);
            pop(&s2);
            printf("1\t");
        }   
    }
    
    printf("\n");
    printf("%d\n",c);
    printf("%d\n",nc);
    return 0;
}
