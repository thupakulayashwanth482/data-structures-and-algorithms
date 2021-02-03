#include<stdio.h>
#include<stdlib.h>
//b172173 thupakula yashwanth
struct que
{
	int a[20];
	int r,f;
	int size;
};
struct que enq(struct que l);
struct que deq(struct que p);
void main()
{
	struct que s;
	s.r=-1;
	s.f=-1;
	s.size=20;
	int opt;
	int k;
do{
	
printf("1-enque..\t2-deque..\t3-exit..\t\n");
printf("enter your option");
scanf("%d",&opt);
	switch(opt)
{
			case 1:
				
				s=enq(s);
				break;
			case 2:	
				
				s=deq(s);
				break;
			default:
				printf("program is exited");
}
}
while(opt!=3);
}
struct que enq(struct que l)
{
	if(l.r==(l.size-1))
				printf("que is full\n");
	else
			{
				l.r=l.r+1;
				int e;
				printf("enter the value to enter");
				scanf("%d",&e);
				l.a[l.r]=e;
			}
	return(l);
}
struct que deq(struct que p)
{
	
			if(p.f==p.r)
				printf("que is empty\n");
			else
			{
				p.f=p.f+1;
				printf("%d\n",p.a[p.f]);

			}
return(p);
}
