#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	int q;
	int max(int x,int y);
	q=max(max(a,b),c);
	int m,n;
	if(q==c)
	{
		if(a<b)
		{
			m=a;
			n=b;
		}
		else
		{
			m=b;
			n=a;
		}
	}
	if(q==b)
	{
		if(c<a)
		{
			m=c;
			n=a;
		}
		 else
		{
			m=a;
			n=c;
		 } 
	}
	if(q==a)
	{
		if(c<b)
		{
			m=c;
			n=b;
		}
		 else
		{
			m=b;
			n=c;
		 } 
	}
	printf("%d,%d,%d",m,n,q);
	return 0;
} 
int max(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return (z);
 }


