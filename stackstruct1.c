#include<stdio.h>
//b172173 thupakula yashwanth
struct stack
{
	int a[20];
	int top;
	int size;
};
void main()
{
	int opt;
	struct stack s;
	s.top=-1;
	s.size=20;
	do{
		printf("1 push,2 pop 3,exit,please enter your option\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				if(s.top==(s.size-1))
					printf("stack is full");
				else{
					int e;
					printf("enter the element to push\n");
					scanf("%d",&e);
					s.top=s.top+1;
					s.a[s.top]=e;
					}
				break;
			case 2:
				if(s.top==-1)
					printf("stack is empty\n");
				else{
					printf("%d\n",s.a[s.top]);
					s.top=s.top-1;}
				break;
			default:
				printf("welcome\n");
			}
	}
while(opt!=3);
}
		
