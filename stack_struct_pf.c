#include<stdio.h>
#include<stdlib.h>
//push,pop functions
struct stack
{
	int a[20];
	int top;
	int size;
};
void push(struct stack *b);
void pop(struct stack *b);
void main()
{
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	s->size=20;
	int opt;
do{
	printf("1 push 2 pop 3 exit\n");
	printf("enter your option\n");
	scanf("%d",&opt);
	switch(opt){
			case 1:
				push(s);
				break;
			case 2:
				pop(s);
				break;
			default:
				printf("welcome\n");
		}
}
while(opt!=3);
}
void push(struct stack *b)
{
	if(b->top==(b->size)-1)
		printf("stack is full\n");
	else{
	b->top=b->top+1;
	int e;
	printf("enter the element\n");
	scanf("%d",&e);
	b->a[b->top]=e;
}
}
void pop(struct stack *b)
{
	if(b->top==-1)
	printf("stack is empty\n");
	else{
	printf("%d\n",b->a[b->top]);
	b->top=b->top-1;
}
}
//b172173 thupakula yashwanth





