#include<stdio.h>
int main()
{
	int n,i,sum;
	for(n=2;n<=1000;n++)
	{
		for(i=2,sum=1;i<n;i++)
		{
			if(n%i==0)sum=sum+i;
		}
		if(sum==n)
			printf("%d ",n);
	}
	return 0;
	
 } 
