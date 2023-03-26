#include<stdio.h>
int arr[6][6];
int a,b,c,d,e,f;
int main()
{
	scanf("%d",&a);
	while(a>10)
	{
		scanf("%d",&a);
	}
	for(b=0;b<a;b++)
	{
		for(c=0;c<b+1;c++)
		{
			if(c==0||c==b)
			{
				arr[b][c]=1;
			}
			else
			{
				arr[b][c]=arr[b-1][c-1]+arr[b-1][c];
			}
		}
	}
	for(e=a-1;e>=0;e--)
	{
		for(f=e;f>=0;f--)
		{
		printf("%d ",arr[e][f]);
		}
		printf("\n");
	}
}
