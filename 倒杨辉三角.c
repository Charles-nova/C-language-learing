#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[20][20]={{1},{1,1}};
	int i,j;
	for(i=2;i<n;i++)
	{
		a[i][0]=1;
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];	 //找到杨辉三角的每一行之间的关系，利用类似递归的方法计算 
		}
		a[i][i]=1;
		
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			printf("%d ",a[i][j]);
			if(j==i)printf("\n");
			else
				printf(" ");
		}
		
	}
	return 0;
}
