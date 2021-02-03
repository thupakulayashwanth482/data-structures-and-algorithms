#include<stdio.h>
#include<stdlib.h>
//using reference
//b172173 thupakula yashwanth
struct que
{
	int *a;
	int r;
	int f;
	int size;
};
void enq(struct que *p);
void deq(struct que *l);
void main()
{
	struct que *s;
	s=(struct que*)malloc(sizeof(struct que));
	printf("enter the size of array");
	scanf("%d",&s->size);
	s->r=-1;
	s->f=-1;
	s->a=(int*)malloc(s->size*sizeof(int));
	int opt;
do{
printf("1-enque..\t2-deque..\t3-exit..\t\n");
printf("enter your option");
scanf("%d",&opt);
	switch(opt)
{
		case 1:
			enq(s);
			break;
		case 2:
			deq(s);
			break;
		default:
			printf("program is terminated");
}
}
while(opt!=3);
}
void enq(struct que *p)
{
	
			if(p->r==(p->size-1))
				printf("que is full\n");
			else
			{
				p->r=p->r+1;
				int e;
				printf("enter the value to enter");
				scanf("%d",&e);
				p->a[p->r]=e;
			}
}
void deq(struct que *l)
{
		if(l->f==l->r)
				printf("que is empty\n");
			else
			{
				l->f=l->f+1;
				printf("%d\n",l->a[l->f]);
			}
}
	
