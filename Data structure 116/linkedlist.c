#include<stdio.h>
struct node{
	int data;
	struct node*next;
}*head;
int main(){
	struct node *temp, *newnode;
    int i, n;
    printf("\nEnter number of nodes:");
    scanf("%d",&n);
    printf("\nEnter node variables:");
	head=NULL;
	for(i=0;i<n;i++)
	{
		newnode= malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL){
			head=newnode;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	temp=head;
	printf("\nLinked list:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
	return 0;
}