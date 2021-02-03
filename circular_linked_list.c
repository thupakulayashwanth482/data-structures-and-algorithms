#include<stdio.h>
#include<stdlib.h>

struct node
{
 int e;
 struct node *next;
};
struct node* insert(struct node *head);
struct node* inserttale(struct node *head);
struct node* insertmiddle(struct node *head);
struct node* insertposition(struct node *head);
struct node* find(struct node *head);
struct node* del(struct node *head);
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
	printf("the options are:\n1 insertion at head\n2 insertion at tale\n3 insertion in middle\n4 insertion at a position\n5 finding the element\n6 deletion of particular element\n"); 
printf("enter your option");
scanf("%d",&k);
switch(k){
	case 1:
	head=insert(head);
	break;
	case 2:
	head=inserttale(head);
	break;
	case 3:
	head=insertmiddle(head);
	break;
	case 4:
	head=insertposition(head);
	break;
	case 5:
	head=find(head);
	break;
	case 6:
	head=del(head);
	break;
	default:
		printf("hellp");
}
}while(k!=7);
}
//inserting at head

	
struct node* insert(struct node *head)
{	
	int e;
		printf("enter the elenment");
		scanf("%d",&e);
	if(head==NULL)
	{
		struct node *s;
		
		s=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&e);
		s->e=e;
		head=s;
		s->next=head;
		
	}
	else
	{
		struct node *temp;
		temp=head;
		struct node *s1;
		s1=(struct node*)malloc(sizeof(struct node));
		s1->e=e;
		head=s1;
		s1->next=temp;
		
	}
	return(head);
}

//inserting at tail

struct node* inserttail(struct node *head)
{
	int e;
		struct node *temp;
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		p->next=head;
		temp=head;
		printf("enter the elemnt");
		scanf("%d",&e);
		p->e=e;		
		while(temp->next!=head)
		{
			temp=temp->next;
			}
		
		temp->next=p;
		return(head);
}

//inserting in middle

struct node* insertmiddle(struct node *head)
{	
	int e;
		struct node *temp1;
		struct node *temp2;
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		temp1=head;
		temp2=head;
		int k=1;
		while(temp1->next!=head)
		{
			k=k+1;
			temp1=temp1->next;
		}
		int n;
		n=k/2;
		int m=1;
		if(k==1)
		head=insert(head);
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
	return(head);
}

//insertion atgiven particular position

struct node* insertposition(struct node *head)
{
		int e;
		struct node *temp1;
		struct node *temp2;
		temp1=head;
		temp2=head;
		struct node *p;
		p=(struct node*)malloc(sizeof(struct node));
		int k=1;
		while(temp1->next!=head)
		{
			k=k+1;
			temp1=temp1->next;
		}
		int l;int m=1;
		printf("enter your position to add");
		scanf("%d",&l);
		if(l==1)
			head=insert(head);
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
	return(head);
}

//finding elements in linked list

struct node* find(struct node *head)
{ 		struct node *temp;
		int e;
		printf("enter the element to find");
		scanf("%d",&e);
		temp=head;
		int k;
		while(temp!=head)
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
	return(head);
}

//deletion of particular element in the linked list

struct node* del(struct node *head)
{
	struct node *temp1;
	struct node *temp2;
	temp1=head;
	temp2=head;
	int e;
	printf("enter the element to delete");
	scanf("%d",&e);
	int k=1;int p;
	while(temp1!=head)
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
	printf("deletion done\n");}
	else
	{
		temp2->next=temp1->next;
		printf("deletion done\n");
	}
if(p!=1)
	printf("element not found");
	return(head);
}	
//B172173 thupakula yashwanth
		
		


