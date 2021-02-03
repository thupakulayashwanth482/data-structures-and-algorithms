#include<stdio.h>
#include<stdlib.h>
//b172173 thuppakula yashwanth
struct stack
{
	int a[20];
	int top;
	int size;
};
void main()
{
	struct stack *s;
	s=(struct stack*)malloc(1*sizeof( struct stack));
	s->top=-1;
	s->size=20;
	int opt;
do{
	printf("1 push 2 pop 3 exit enter your option\n");
	scanf("%d",&opt);
	switch(opt)
{
		case 1:
			if(s->top==(s->size-1))
			printf("stack is full\n");
			else
			{
				s->top=s->top+1;
				int e;
				printf("enter the eleemnt to push\n");
				scanf("%d",&e);
				s->a[s->top]=e;
				}
			break;
		case 2:
			if(s->top==-1)
				printf("stack is empty\n");
			else
			{
				printf("%d\n",s->a[s->top]);
				s->top=s->top-1;
			}
		break;
		default:
			printf("welcome\n");
        }
}
while(opt!=3);
}//b172173 thupakula yashwanth

