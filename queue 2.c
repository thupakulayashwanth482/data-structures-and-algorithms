#include<stdio.h>
#include<stdlib.h>
struct que
{
	int a[20];
	int r,f;
	int size;
};	
void main()
{
	struct que s;
	s.r=-1;
	s.f=-1;
	s.size=20;
	int opt;
do{
printf("1-enque..\t2-deque..\t3-exit..\t\n");
printf("enter your option");
scanf("%d",&opt);
switch(opt)
{
			case 1:
			if(s.r==(s.size-1))
				printf("que is full\n");
			else
			{
				s.r=s.r+1;
				int e;
				printf("enter the value to enter");
				scanf("%d",&e);
				s.a[s.r]=e;
			}
			break;
		case 2:
			if(s.f==s.r)
				printf("que is empty\n");
			else
			{
				s.f=s.f+1;
				printf("%d\n",s.a[s.f]);
			}
			break;
		default:
			printf("program is exited\n");
}
}
while(opt!=3);
}
