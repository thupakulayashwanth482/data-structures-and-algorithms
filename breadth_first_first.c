//breadth first search
//b172173 yashwanth thupakula
#include<stdio.h>
struct que{
	int a[20];
	int f;
	int r;
};
struct que enqueu(struct que q, int e)
{
    q.r++;
    q.a[q.r]=e;
return(q);
}
int isempty(struct que *q)
{
    if(q->f==q->r)
        return 1;
    else
        return 0;
}
int dequeu(struct que *q)
{
    if(q->f==q->r)
        return NULL;
    else
    {
            q->f++;
            return q->a[q->f];
    }
}
void main()
{
	int v[4]={0,0,0,0};
	struct que q;
	q.f=-1;
	q.r=-1;
	q=enqueu(q,0);
	int k[4][4];
	int i;int j;int ele; int l;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&ele);
			k[i][j]=ele;
		}
	}
	while(!isempty(&q))
	{
		l=dequeu(&q);
		if(v[l]==0)
		{
			v[l]=1;
			printf("%d",l);
		for(int m=0;m<4;m++)
		{
			if(k[l][m]==1&&v[m]==0)
			q=enqueu(q,m);
		}
}
		
	}
}
							//B172193		
