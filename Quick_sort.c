#include<stdio.h>
//Quick_Sort
void quicksort(int a[],int st,int end);
void swap(int a[],int st,int end);
void print(int a[]);
void main()
{
int a[5];
int i;int st=0;int end=4;int e;
for(i=0;i<5;i++)
{
	printf("enter the value to enter");
	scanf("%d",&e);
	a[i]=e;
}

quicksort(a,st,end);
print(a);

}
void quicksort(int a[],int st,int end)
{
	if(end-st>1)
	{
		int p;int i;int j;
		p=a[st];
		i=st+1;
		j=end;
		while(i<j)
		{
			while(a[i]<p && i<=end)
				i=i+1;
			while(a[j]>p && j>=0)
				j=j-1;
			swap(a,i,j);
		}
	swap(a,st,j);
	quicksort(a,st,j-1);
	quicksort(a,j+1,end);
	}
	else
	{
		if(a[st]>a[end])
			swap(a,st,end);
	}

}
void print(int a[])
{
int k;
for(k=0;k<5;k++)
printf("%d",a[k]);
}
void swap(int a[],int st,int end)
{
	a[st]=a[st]+a[end];
	a[end]=a[st]-a[end];
	a[st]=a[st]-a[end];
}

//B172173
