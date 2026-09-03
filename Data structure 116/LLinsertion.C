#include<stdio.h>
struct node
{
 int data;
 struct node * next;
 };
int main(){
  struct node *head=NULL,*temp,*newnode;
  int value ,pos,i;
  head=malloc(sizeof(struct node)) ;
  head->data=10;
  head->next=NULL;
  temp=head;

  newnode=malloc(sizeof(struct node));
  newnode->data=20;
  newnode->next=NULL;
  temp->next=newnode;

  printf("\n enter value and position:");
  scanf("%d%d",&value,&pos);
    newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(pos==1)
    {
     newnode->next=head;
     head=newnode;
     }
     else
     {
      temp=head;
      for(i=1;i<pos-1;i++)
       {
	 temp=temp->next;
       }
       newnode->next=temp->next;
       temp->next=newnode;
   }
    printf("\n linked list");
    temp=head;
    while(temp!=NULL)
    {
      printf("%d->",temp->data) ;
      temp=temp->next;
     }
     printf("NULL");
     return 0;
   }


