#include<stdio.h>
#include<stdlib.h>

struct que
{
	int a[20];
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
	s->size=20;
	s->r=-1;
	s->f=-1;
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
		printf("program terminated");
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









