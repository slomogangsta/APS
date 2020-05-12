# include<stdio.h>
#include<stdlib.h>

struct node
{
          int data;
          struct node *next;
};
typedef struct node NODE;
NODE * addatfront(NODE *start)
{
          int data;
          printf("enter data\n");
          scanf("%d",&data);
          NODE *newnode;
          newnode = (NODE*)malloc(sizeof(NODE));
          if(newnode==NULL){
                    printf("memory failed\n");
                    return start;
          }
          newnode->data=data;
          newnode->next=NULL;
          if(start==NULL){
                    start=newnode;
                    return start;
          }
          newnode->next=start;
          start=newnode;
          printf("node is added to the start\n");
          return start;
}

NODE * addatend(NODE *start){
          int data;
          printf("enter data at the end\n");
          scanf("%d",&data);
          NODE *newnode;
          newnode = (NODE*)malloc(sizeof(NODE));
          if(newnode==NULL)
          {
                    printf("memory failed\n");
                    return start;
          }
          newnode->data=data;
          newnode->next=NULL;
          if(start == NULL)
          {
                    start = newnode;
                    return start;
          }
          NODE *temp;
          temp=start;
          while(temp->next!=NULL)
          {
                    temp=temp->next;

          }
          temp->next=newnode;
          printf("node added to the end of the list");
          return start;

}

/*NODE addatmid(NODE *start)
{
          int data;
          printf("enter data to add at end");
          scanf("%d",&data);
          NODE *newnode;
          newnode=(NODE*)malloc(sizeof(NODE));
          if(newnode==NULL){
                    printf("memory error");
                    return start;
          }
          newnode->data=data;
          newnode->next=NULL;
          if(start==NULL)
          {
                    start=newnode;
                    return start;
          }


}*/

NODE * deleteatstart(NODE *start)
{
          if(start==NULL)
          {
                    printf("list is empty\n");
                    return start;
          }
          NODE *temp;
          temp = start;
          start=start->next;
          free(temp);
          printf("node deleted successfully\n");
          return start;
}

NODE * deleteatend(NODE *start)
{
          if(start==NULL)
          {
                    printf("list is empty\n");
                    return start;
          }
          NODE *temp=start;
          NODE *prev=NULL;
          while(temp->next!=NULL)
          {
                    prev=temp;
                    temp=temp->next;
          }
          prev->next=NULL;
          free(temp);
          printf("deleted node at end\n");
          return start;

}

int display(NODE *start)
{
       int count=0;
       if(start==NULL)
       {
            printf("list is empty\n");
            return count;
       }
       while(start->next!=NULL)
       {
                 printf("%d",start->data);
                 start=start->next;
                 count++;
       }
       printf("%d",count);
       return count;
}

int main()
{
          NODE *start;
          int n;
          printf("1-Add at the start\n 2-Add at the end\n 3-delete at start \n 4-delete at end\n 5-Display\n");
          while(1)
          {

                    scanf("%d",&n);
                    switch(n)
                    {
                              case 1:start=addatfront(start);
                                        break;
                              case 2:start=addatend(start);
                                        break;
                              case 3:start=deleteatstart(start);
                                        break;
                              case 4:start=deleteatend(start);
                                        break;
                              case 5:display(start);
                                        break;
                              case 6:exit(0);
                                        break;
                    }
          }
          return 0;
}