#include<stdio.h>
#include<stdlib.h>
//performing push,pop,exit operations using call by reference
struct node
{
	int e;
	struct node *next;
};
struct node* push(struct node *head);
struct node* pop(struct node *head);
void main()
{
	struct node *head;
	head=NULL;
	int opt;
do{
	printf("1 to push 2 to pop 3 to exit\t enter your option");
	scanf("%d",&opt);
	switch(opt)
{
		case 1:
			head=push(head);
			break;
		case 2:
			head=pop(head);
			break;
		default:
			printf("program getting terminated\n");
	}
}while(opt!=3);
}
//push
struct node* push(struct node *head)
{
		struct node *temp;
		struct node *s;
		temp=head;
		int e;
		printf("enter the element to enter");
		scanf("%d",&e);
		if(head==NULL)
		{
			head=(struct node*)malloc(sizeof(struct node));
			head->e=e;
			head->next=NULL;
			
		}
		else
{
		s=(struct node*)malloc(sizeof(struct node));
		s->e=e;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=s;
		s->next=NULL;
}
		return(head);
}
//pop
struct node* pop(struct node *head)
{ 		int k=1;int n=2;
		struct node *temp;
		struct node *temp2;
		temp=head;
		temp2=head;
		if(head==NULL)
		printf("stack is empty\n");
		else if(head->next==NULL)
{
			printf("%d\n",head->e);
			head=NULL;
}
			
		else
		{
			while(temp->next!=NULL)
{
				temp=temp->next;
				k=k+1;
} 
			if(n<k)
				temp2=temp2->next;
			printf("%d\n",temp->e);
			temp2->next=NULL;
		}
		return(head);
}
//b172173 thupakula yashwaanth
				
