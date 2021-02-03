#include<stdio.h>
//b172173 thupakula yashwanth
void main()
{
int a[20];
int s=20;
int r=-1;int f=-1;
int opt;
do{

printf("1-enque..\t2-deque..\t3-exit..\t\n");
printf("enter your option");
scanf("%d",&opt);
	switch(opt)
{
		case 1:
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
			break;
		case 2:
			if(f==r)
				printf("que is empty\n");
			else
			{
				f=f+1;
				printf("%d\n",a[f]);
			}
			break;
		default:
			printf("program is exited\n");
}
}
while(opt!=3);		
}

