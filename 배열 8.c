#include<stdio.h>
int y[10];
int c,x,min=10000,max=0;
int main()
{
	for(x=0;x<10;x++)
	{
		scanf("%d",&y[x]);
		if(y[x]>=100)
		{
			if(min>y[x])
			{
				min=y[x];
			}
		}
		if(y[x]<100)
		{
			if(max<y[x])
			{
				max=y[x];
			}
		}
	}
	if(min == 10000)
	{
		min =100;
	}
	if(max == 0)
	{
	min =100;
	}
	printf("%d %d",max,min);
}
