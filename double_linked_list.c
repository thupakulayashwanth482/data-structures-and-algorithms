#include<stdio.h>
#include<stdlib.h>
struct node
{
	int e;
	struct node *prev;
	struct node *next;
};
struct node* inserth(struct node *head);
struct node* insertt(struct node *head);
struct node* insertm(struct node *head);
struct node* insertp(struct node *head);
struct node* find(struct node *head);
struct node* del(struct node *head);
void main()
{
	struct node *head=NULL;
	int opt;
do{
	printf("the options are:\n1 insertion at head\n2 insertion at tale\n3 insetion in middle\n4 insertion at a position\n5 finding the element\n6 deletion of particular element\n"); 
printf("enter your option");
scanf("%d",&opt);
switch(opt)
{
	case 1:
		head=inserth(head);
		break;
	case 2:
		head=insertt(head);
		break;
	case 3:
		head=insertm(head);
		break;
	case 4:
		head=insertp(head);
		break;
	case 5:
		head=find(head);
		break;
	case 6:
		head=del(head);
		break;
	default:
		printf("prgrams terminated\n");
}
}
while(opt!=7);
}

//insertion at head in the doubled linked list

struct node* inserth(struct node *head)
{
	int ele;
	struct node *p;
	printf("enter the element to enter at head");
	scanf("%d",&ele);
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->prev=NULL;
		head->next=NULL;
		head->e=ele;
	}
	else
{
	p=(struct node*)malloc(sizeof(struct node));
	p->prev=NULL;
	p->next=head;
	head->prev=p;
	head=p;
	p->e=ele;
}
	return(head);
}

//insertion at tail in the doubled linked list

struct node* insertt(struct node *head)
{
	int ele;
	struct node *p;
	struct node *temp;
	temp=head;
	if(head==NULL)
		head=inserth(head);
	else
{
	printf("enter the elemeent to enter");
	scanf("%d",&ele);
	p=(struct node*)malloc(sizeof(struct node));
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	p->e=ele;
	p->next=NULL;
	temp->next=p;
	p->prev=temp;
}
	return(head);
}

//insertion in the middle 

struct node* insertm(struct node *head)
{
	int ele;int k=1;int n;int m=1;
	struct node *p;
	struct node *t1;
	struct node *t2;
	t1=head;
	t2=head;
	if(head==NULL)
		head=inserth(head);
	else
	{
		while(t1->next!=NULL)
		{
			k=k+1;
			t1=t1->next;
		}
		
		if(k==1)
			head=inserth(head);
		else{
		n=k/2;
		while(m<n)
		{
			t2=t2->next;
			m=m+1;
		}
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter the eleemnt in middle");
	scanf("%d",&ele);
	p->e=ele;
	p->prev=t1->prev;
	t1->prev=p;
	t2->next=p;
	p->next=t1;
}
}
	return(head);
}

//insertion at a particular position

struct node* insertp(struct node *head)
{
		struct node *t1;
		struct node *t2;
		struct node *p;
		t1=head;
		t2=head;
		int pos;int n=1;int k=1;int ele;
		if(head==NULL)
		head=inserth(head);
		else{
			while(t1->next!=NULL)
			{
				t1=t1->next;
				k=k+1;
			}
			printf("enter the positon");
			scanf("%d",&pos);
			if(pos>k)
			{
				printf("insertion at that position is not possible\n");
			}
			else
	{
			while(n<k)
			{
				t2=t2->next;
				n=n+1;
			}
			p=(struct node*)malloc(sizeof(struct node));
			printf("enter the eleemt for insertion");
			scanf("%d",&ele);
			p->prev=t2->prev;
			p->next=t2->next;
			t2->next=p;
			}
}
	return(head);
}

//finding an element in double linked list

struct node* find(struct node *head)
{
		struct node *temp;int ele;int k;
		temp=head;
		if(head==NULL)
			printf("list is empty\n");
		else
	{
		printf("enter the elemt tofind");
		scanf("%d",&ele);
		while(temp!=NULL)
		{
			if(temp->e==ele)
				{
					printf("element found\n");
					k=1;
					break;
				}
			temp=temp->next;
					
}
}
if(k!=1)
printf("eleemtn not found\n");
return(head);
}

//deletion of particular element in double linked list

struct node* del(struct node *head)
{
	struct node *temp1;struct node *temp2;
	temp1=head;temp2=head;
	int e;
	printf("enter the element to delete from list");
	scanf("%d",&e);
	int k=1;int p;
	while(temp1!=NULL)
	{
		if(temp1->e==e)
		{
			p=1;
			break;
		}
		temp1=temp1->next;
		k=k+1;
	}
	int n=2;
	while(n<k)
	{
		temp2=temp2->next;
		n=n+1;
	}
	if(k==1)
{
	head=temp1->next;
	temp1->next->prev=NULL;
	printf("deletion done\n");}
	else
	{
		temp2->next=temp1->next;
		temp1->next->prev=temp2;
		printf("deletion done\n");
	}
if(p!=1)
	printf("element not found");
	return(head);
}	
//B172173
