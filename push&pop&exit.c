#include<stdio.h>
#include<stdlib.h>
//push,pop,exit operations
//B172173 thupakula yashwanth
struct node
{
	int e;
	struct node *next;
};
struct node* push(struct node *head);
struct node *pop(struct node *head);
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
			printf("program terminated\n");
}
}while(opt!=3);
}
struct node* push(struct node *head)
{
	struct node *temp;
	struct node *s;
	int e;
	temp=head;
	printf("enter the element to eneter");
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
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=s;
		s->e=e;
		s->next=NULL;
	}
	return(head);
}
struct node* pop(struct node *head)
{
		struct node *temp;
		temp=head;
		if(head==NULL)
			printf("que is empty\n");
		else{
		printf("%d\n",head->e);
		head=head->next;
		}
return(head);
}
//B172173 thupakula yashwanth
