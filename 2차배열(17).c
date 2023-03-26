#include<stdio.h>
char arr[3][5];
int a,b,c,d,e;
int main()
{
	for(a=0;a<3;a++)
	{
		for(b=0;b<5;b++)
		{
			scanf(" %c",&arr[a][b]);
		}
	}
	for(c=0;c<3;c++)
	{
		printf("\n");
		for(d=0;d<5;d++)
		{
			printf("%c ",arr[c][d]+32);
		}
	}
	
}
