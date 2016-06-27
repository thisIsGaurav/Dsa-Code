#include<stdio.h>
#include<stdlib.h>
void print();

typedef struct node
    {
    int data;
    struct node *next;
    }list;

list *start,*temp,*newnode,*last,*previous;
int pos;
//,,,,,,,,,,,,,,,,,,,,,,,,,main method,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

void main()
{
char ch;
do{
    if(start==NULL)
        {
            start=(list*)malloc(sizeof(list));
            printf("Enter data into the node::\n");
            scanf("%d",&start->data);
            start->next=NULL;
        }
    else
        {
            temp=start;
            while(temp->next!=NULL)
            temp=temp->next;
            newnode=(list*)malloc(sizeof(list));
            printf("\nEnter the data in the newnode::\n");
            scanf("%d",&newnode->data);
            temp->next=newnode;
            newnode->next=NULL;
        }
          printf("\nTo add new node in the list press 'y'::\n");
          while(getchar()!='\n');
          scanf("%c",&ch);
  }
  while(ch=='y');
  temp=start;
  while(temp!=NULL)
  {
  printf("\n%d",temp->data);
  temp=temp->next;
  }
printf("\n***********************************************************************************************\n");

  print(start);
}
  void print(struct node *head)
  {
  if(head==NULL)
  return NULL;
  print(head->next);
  printf("\n%d",head->data);

  }
