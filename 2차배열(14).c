#include<stdio.h>
int arr[2][3];
int brr[2][3];
int a,b,c,d,e,f,g;
int main()
{
	printf("first array\n");
	for(a=0;a<2;a++)
	{
		for(b=0;b<3;b++)
		{
			scanf(" %d",&arr[a][b]);
		}
	}
	printf("second array\n");
	for(c=0;c<2;c++)
	{
		for(d=0;d<3;d++)
		{
			scanf(" %d",&brr[c][d]);
		}
	}
	for(e=0;e<2;e++)
	{
		for(f=0;f<3;f++)
		{
			printf("%d ",arr[e][f]*brr[e][f]);
		}
		printf("\n");
	}	
}
