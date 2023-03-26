#include<stdio.h>
int arr[4][2];
int a,b,c,d,e,f,g,h,i,j,k,l;
int main()
{
	for(a=0;a<4;a++)
	{
		for(b=0;b<2;b++)
		{
			scanf("%d",&arr[a][b]);
		}
	}
	for(c=0;c<4;c++)
	{
		e=0;
		for(d=0;d<2;d++)
		{
			e=arr[c][d]+e;
		}
		e=e/2;
		printf("%d ",e);
	}
	printf("\n");
	for(g=0;g<2;g++)
	{
		i=0;
		for(h=0;h<4;h++)
		{
			i=arr[h][g]+i;
		}
		i=i/4;
		printf("%d ",i);
	}
	printf("\n");
	for(j=0;j<4;j++)
	{
		for(k=0;k<2;k++)
		{
			l=arr[j][k]+l;
		}
		
	}
	l=l/8;
	printf("%d ",l);
}
