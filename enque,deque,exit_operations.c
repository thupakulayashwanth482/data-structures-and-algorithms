#include<stdio.h>
//performing enque,deque and exit operations
void enq();
void deq();
int a[20];
	int r=-1;int f=-1;
	int s=20;
void main()
{
	int opt;
do{
	
printf("1-enque..\t2-deque..\t3-exit..\t\n");
printf("enter your option");
scanf("%d",&opt);
	switch(opt)
{
		case 1:
			enq();
			break;
		case 2:
			deq();
			break;
		default:
			printf("program exited");
}
}
while(opt!=3);
}
//enque operation
void enq()
{
if(r==(s-1))
				printf("que is full\n");
			else
			{
				r=r+1;
				int e;
				printf("enter the value to enter");
				scanf("%d",&e);
				a[r]=e;
			}
}
//deque operation
void deq()
{
if(f==r)
				printf("que is empty\n");
			else
			{
				f=f+1;
				printf("%d\n",a[f]);
			}
}
//b172173 thupakula yashwanth
