#include<stdio.h>
char y[10];
int main()
{
	int t,x,z;
	for(x=0;x<10;x++)
	{
		scanf(" %c",&y[x]);
	}
	for(x=9;x>=0;x--)
	{
		printf("%c ",y[x]);
	}
}
