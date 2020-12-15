#include<stdio.h>
int main()
{
	int a[3][5],min[8];
	int i,j,ans;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<5;j++)
	{    
	    min[j]=a[0][j];
		for(i=0;i<3;i++)
		{
			if(min[j]>a[i][j])min[j]=a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		min[5+i]=a[i][0];
		for(j=0;j<3;j++)
		{
			if(min[5+i]>a[i][j])min[5+i]=a[i][j];
		}
	}
	ans=min[0];
	for(i=1;i<8;i++)
	{
		if(ans<min[i])ans=min[i];
	}
	printf("%d",ans);return 0;
}
