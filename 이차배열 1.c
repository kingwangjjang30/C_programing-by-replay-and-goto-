#include<stdio.h>
int y[3][3];
int i,j,l,k,m,n,b;
int main()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)                        
		{
			scanf("%d",&y[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d ",y[0][i]);
	}
	printf("%d\n",sum());
	
	for(i=0;i<3;i++)
	{
		printf("%d ",y[1][i]);
	}
	printf("%d\n",sms());
	
	for(i=0;i<3;i++)
	{
		printf("%d ",y[2][i]);
	}
	printf("%d\n",sss());
	
	printf("%d %d %d %d",ssm(),mms(),mmm(),msm());
}
int sum()
{
	i=y[0][0]+y[0][1]+y[0][2];
	return i;
}
int sms()
{
	j=y[1][0]+y[1][1]+y[1][2];
	return j;
}
int sss()
{
	l=y[2][0]+y[2][1]+y[2][2];
	return l;
}
int ssm()
{
	k=y[0][0]+y[1][0]+y[2][0];
	return k;
}
int mms()
{
	m=y[0][1]+y[1][1]+y[2][1];
	return m;
}
int mmm()
{
	n=y[0][2]+y[1][2]+y[2][2];
	return n;
}
int msm()
{
	b=sum()+sms()+sss();
	return b;
} 
/*처음부터 저장시키기
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&y[i][j]);
		b=b+y[i][j];
	}
	y[i][3]=b;
	b=0;
} 
*/
