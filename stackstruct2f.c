#include<stdio.h>
//b172173 thupakula yashwanth
struct stack
{
	int a[20];
	int top;
	int size;
};
struct stack push(struct stack l);
struct stack pop(struct stack l);
void main()
{
	struct stack s;
	s.top=-1;
	s.size=20;
	int opt;int k;
do{
	printf("1.push,2.pop,3.exit\n");
	printf("enter the option\n");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			k=1;
			s=push(s);
		break;
		case 2:
			
			s=pop(s);
		break;
		default:
			printf("welcome\n");
		}
}
while(opt!=3);		
}

struct stack push(struct stack l)
{
	if(l.top==(l.size-1))
	printf("stack is full\n");
	else{
	l.top=l.top+1;
	int e;
	printf("enter the element\n");
	scanf("%d",&e);
	l.a[l.top]=e;
	}
	return l;
}
struct stack pop(struct stack l)
{
	if(l.top==-1)
	printf("stack is empty\n");
	else{
	printf("%d\n",l.a[l.top]);
	l.top=l.top-1;}
	return l;
}//b172173 thupakula yashwanth
