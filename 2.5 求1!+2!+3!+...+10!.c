#include<stdio.h>
int main()
{
	int n,i,sum,temp;
	sum=0;
	for(n=1;n<=10;n++)
	{
		temp=1;
		for(i=1;i<=n;i++)
		{
			temp=temp*i;
		}
		sum=sum+temp;
	}
	printf("1!+2!+3!+...+10!=%d",sum);
	return 0;
		
}
