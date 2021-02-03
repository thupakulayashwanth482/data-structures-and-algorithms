#include<stdio.h>
void dfs(int k,int v[],int a[][4])
{	int j;
	if(v[k]==0)
	{
		v[k]=1;
		printf("%d",k);
		for(j=0;j<4;j++)
		{
			if(a[k][j]==1&&v[j]==0)
			dfs(j,v,a);
		}
	}
}
void main()
{
	int v[4]={0,0,0,0};
	int a[4][4];
	int i;int j;int ele;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&ele);
			a[i][j]=ele;
		}
	}
	int m=0;
	dfs(m,v,a);
}
//B172173 thupakula yashwanth
