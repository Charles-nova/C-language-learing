#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",a[0][0]+a[1][1]+a[2][2]);
	return 0;
 } 
