#include<stdio.h>
int main()
{
	int sum(int *p,int n);
	int *p,i,a[5];
	p=a;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("%d",sum(p,5));
	return 0;
}
int sum(int *p, int n)
{
	int i,sum1;
	sum1=0;
	for(i=0;i<n;i++)
	{
		sum1=sum1+*(p+i);
	}
	return(sum1);
}
