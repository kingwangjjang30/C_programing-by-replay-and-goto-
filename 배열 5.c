#include<stdio.h>

int main()
{
	int y[10];
	int min,x,c;
	for(x=0;x<10;x++)
	{
		scanf("%d",&y[x]);
	}
	min=y[0];
	for(c=0;c<10;c++)
	{
		if(min<y[c])
		{
			min=y[c];
		}
	}
	printf("%d",min);
}
