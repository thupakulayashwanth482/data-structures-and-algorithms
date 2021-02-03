#include<stdio.h>
#include<stdlib.h>
//performing insertion,finding,deletion operations in linked list using call by reference
struct node
{
 int e;
 struct node *next;
};
void insert(struct node **head);
void inserttale(struct node **head);
void insertmiddle(struct node **head);
void insertposition(struct node **head);
void find(struct node **head);
void del(struct node **head);
void main()
{
	struct node *head=NULL;
	struct node *ss;
	struct node *temp;
	temp=head;
	ss=(struct node*)malloc(sizeof(struct node));
	ss->e=5;
	head=ss;
	ss->next=NULL;
	int k;
do{
	printf("the options are:\n1 insertion at head\n2 insertion at tale\n3 insetion in middle\n4 insertion at a position\n5 finding the element\n6 deletion of particular element\n"); 
printf("enter your option");
scanf("%d",&k);
switch(k){
	case 1:
	insert(&head);
	break;
	case 2:
	inserttale(&head);
	break;
	case 3:
	insertmiddle(&head);
	break;
	case 4:
	insertposition(&head);
	break;
	case 5:
	find(&head);
	break;
	case 6:
	del(&head);
	break;
	default:
		printf("hellp");
}
}while(k!=7);
}
//insertion at head	
void insert(struct node **head)
{	
	int e;
		printf("enter the elenment");
		scanf("%d",&e);
	if(*head==NULL)
	{
		struct node *s;
		
		s=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&e);
		s->e=e;
		*head=s;
		
	}
	else
	{
		struct node *temp;
		temp=*head;
		struct node *s1;
		s1=(struct node*)malloc(sizeof(struct node));
		s1->e=e;
		*head=s1;
		s1->next=temp;
		
	}
}
//insertion at tail
void inserttale(struct node **head)
{
	int e;
		struct node *temp;
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		p->next=NULL;
		temp=*head;
		printf("enter the elemnt");
		scanf("%d",&e);
		p->e=e;		
		while(temp->next!=NULL)
		{
			temp=temp->next;
			}
		
		temp->next=p;
}
//insertion in middle
void insertmiddle(struct node **head)
{	
	int e;
		struct node *temp1;
		struct node *temp2;
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		temp1=*head;
		temp2=*head;
		int k=1;
		while(temp1->next!=NULL)
		{
			k=k+1;
			temp1=temp1->next;
		}
		int n;
		n=k/2;
		int m=1;
		if(k==1)
		insert(head);
		else{
		while(m<n)
		{
			temp2=temp2->next;
		}
		printf("enter the element");
		scanf("%d",&e);
		p->e=e;
		p->next=temp1;
		temp2->next=p;
}
	
}
//insertion at particular given position
void insertposition(struct node **head)
{
		int e;
		struct node *temp1;
		struct node *temp2;
		temp1=*head;
		temp2=*head;
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		int k=1;
		while(temp1->next!=NULL)
		{
			k=k+1;
			temp1=temp1->next;
		}
		int l;int m=1;
		printf("enter your position to add");
		scanf("%d",&l);
		if(l==1)
			insert(head);
		else if(l>k)
			printf("cannot add");
		else
{			while(m<l)
			{
				temp2=temp2->next;
				m=m+1;
			}
			printf("enter the elemt to add");
			scanf("%d",&e);
			p->e=e;
			p->next=temp2;
			temp2->next=p;
}
}
//finding particular elements
void find(struct node **head)
{ 		struct node *temp;
		int e;
		printf("enter the element to find");
		scanf("%d",&e);
		temp=*head;
		int k;
		while(temp!=NULL)
		{
			if(temp->e==e)
			{
				printf("element found\n");
				k=1;
				break;
			}
			temp=temp->next;
		}
		if(k!=1)
			printf("element not found");
	
}
//deletion of particular elements
void del(struct node **head)
{
	struct node *temp1;
	struct node *temp2;
	temp1=*head;
	temp2=*head;
	int e;
	printf("enter the element to delete");
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
	*head=temp1->next;
	printf("deletion done\n");}
	else
	{
		temp2->next=temp1->next;
		printf("deletion done\n");
	}
if(p!=1)
	printf("element not found");
}	
//b172173 thupakula yashwanth		
		


