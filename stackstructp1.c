#include<stdio.h>
#include<stdlib.h>
//stackwith array with pointer
struct stack
{
	int *a;
	int top;
	int size;
};
void main()
{
	struct stack *s;
	printf("enter the size of array\n");
	s=(struct stack*)malloc(sizeof(struct stack));
	scanf("%d",&s->size);
	s->top=-1;
	s->a=(int*)malloc(s->size*sizeof(int));
	int opt;
do{
	printf("1 push 2 pop 3 exit  enter your option");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			if(s->top==(s->size)-1)
			printf("stack is full\n");
			else{
			s->top=s->top+1;
			int e;
			printf("enter your element");
			scanf("%d",&e);
			s->a[s->top]=e;
			}
		break;
		case 2:
			if(s->top==-1)
			printf("stack is empty\n");
			else{
			printf("%d\n",s->a[s->top]);
			s->top=s->top-1;
			}
		break;
		default:
			printf("welcome\n");

}
}
while(opt!=3);
}
//b172173 thupakula yashwanth
