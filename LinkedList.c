#include<stdio.h>
#include<stdlib.h>

void creationOfList();
void addNodeWhereYouWant();
void deleteAtLast();
void deleteAtGivenPosition();
void deleteAtGivenValue();
void findMidElement();
//void doSame();
typedef struct node
    {
    int info;
    struct node *link;
    }SN;

 SN *start,*temp,*newnode,*previous,*last;      // globally  declared variale...
 int pos,count;

 // main method......................................................................................................

    int main()
        {

         while(1)
       {
        int number;

        printf("\n,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, LINKEDLIST,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n\n");

        printf("press 1 to create list::\n");
        printf("\npress 2 to add element at your desirable place::\n ");
        printf("\npress 3 to delete the node at the last position::\n");
        printf("\npress 4 to delete the node at given position::\n");
        printf("\npress 5 to delete the node at the given value::\n\n");
        printf("\n press 6 to find mid element::\n\n");

        printf("\nEnter your choice::\n");
        scanf("%d",&number);

//  Applying Switch case................................................................................

        switch(number)
        {
        case 1:
                creationOfList();
              //  doSame();
                break;

        case 2:
        addNodeWhereYouWant();

        break;

        case 3:

        deleteAtLast();

        break;

        case 4:
        deleteAtGivenPosition();

        break;

        case 5:
        deleteAtGivenValue();

        break;

        case 6:
        findMidElement();
        break;

        default :
        printf(".............Process is continue...,,,,,,,,,,,,,,,,,,,......");

        }

}
        }

 //.............................method to create list....................................................................................

void creationOfList()
 {
 char ch;
 do{
                   if(start==NULL)
                    {
                    start=(SN*)malloc(sizeof(SN));
                    printf("\nEnter the data that you want to fill in the first node(start)::");
                    scanf("%d",&start->info);
                    start->link=NULL;
                    }
                else
                    {
                     temp=start;              //move start to temp,because we don't have to move start.

                     while(temp->link!=NULL)
                     temp=temp->link;
                     newnode=(SN*)malloc(sizeof(SN));
                     printf("\nEnter the data for the newNode...");
                     scanf("%d",&newnode->info);
                     newnode->link=NULL;
                     temp->link=newnode;

                    }
                    printf("To add new node in the list press 'y'::\n");
                    while(getchar()!='\n');
                    scanf("%c",&ch);
    }
		    while(ch=='y');
                    printf("Your input list is displayed....");

		    temp=start;
                    while(temp!=NULL)
                    {
                    printf("\n%d",temp->info);
                    temp=temp->link;


                    }
 }
 //..................method to add node at given position .......................

 void addNodeWhereYouWant()
 {

 creationOfList();   // calling method.................................................
 printf("Enter position::\n");
 scanf("%d",&pos);
                    int count=1;
		    temp=start;
                    while(temp!=NULL)
                       {
                        count++;
                        if(count==pos)
                    			{
                                SN *node1;
                                node1=(SN*)malloc(sizeof(SN));
                                printf("\nEnter the data to be entered in the list::");
                                scanf("%d",&node1->info);
                                node1->link=NULL;
                                node1->link=temp->link;
                                temp->link=node1;
                                }
                   		temp=temp->link;

                                }
                                temp=start;
                    while(temp!=NULL)
                    {
                    printf("\n%d",temp->info);
                    temp=temp->link;
                    }

}
//................method to delete last node,,,,,,,,,,,,,,,,,,,,,,,,,,

void deleteAtLast()
{
 creationOfList();
 last=previous=start;
while(last->link!=NULL)
{
previous=last;
last=last->link;
}
free(last);
previous->link=NULL;
printf("\n,,,,,,,,,,,,,,,After deleting the last node list is,,,,,,,,,,,,,,,,");
             temp=start;
                    while(temp!=NULL)
                    {
                    printf("\n%d",temp->info);
                    temp=temp->link;
                    }
}
//...............method to delete node at given position,,,,,,,,,,,,,,,,,,,,,

void deleteAtGivenPosition()
{
creationOfList();
printf("\nEnter position of node that you want to delete::\n");
scanf("%d",&pos);
previous=last=start;
int count=1;
while(count!=pos)
{
previous=last;
last=last->link;
count++;
}
previous->link=last->link;
free(last);
printf("After deleting the node the list is::\n");
temp=start;
                    while(temp!=NULL)
                    {
                    printf("\n%d",temp->info);
                    temp=temp->link;
                    }
}
// ...............method to delete value from the list.................
void deleteAtGivenValue()
{
int data;
creationOfList();
printf("\nEnter the data that you want to delete::");
scanf("%d",&data);
previous=last=start;
while(last->info!=data)
{
previous=last;
last=last->link;
}
free(last);
printf("After deleting the node the list is::\n");
temp=start;
                    while(temp!=NULL)
                    {
                    printf("\n%d",temp->info);
                    temp=temp->link;
                    }


}
void findMidElement()
    {
    creationOfList();
    previous=last=start;
    while(last!=NULL)
    {
    previous=last;
    last=last->link->link;
    }
    printf("The mid element is::\n\n");
    printf("\n%d",previous->info);

    }
