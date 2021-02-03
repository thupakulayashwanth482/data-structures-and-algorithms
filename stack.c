#include<stdio.h>
//b172173 thupakula yashwanth
void main()
{
	int a[20];
	int s=20;
	int top=-1;
	int opt;
	do{
		printf("1.push,2.pop,3,to exit\n");
		printf("enter your option");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				if(top==(s-1))
					printf("stack if full\n");
				else{
					int m;
					printf("enter the number to push into stack\n");
					scanf("%d",&m);
					top++;
					a[top]=m;
					}
			break;
			case 2:
				if(top==-1)
					printf("stack is empty\n");
				else{
					printf("%d\n",a[top]);
					top--;
					}
			break;
			default:
				printf("welcome\n");
		}
}
		while(opt!=3);
	}
