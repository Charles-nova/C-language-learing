#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=k;i++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
 } 
