#include<stdio.h>
int main()
{
	int n,i,rest,a[5]={0};
	scanf("%d",&n);
	a[0]=n%10;
	rest=n/10;
	for(i=1;i<5;i++)
	{
		a[i]=rest%10;
		rest=rest/10;
	}
	printf("%d",a[0]);
	for(i=1;i<5;i++)
	{
		if(a[i]!=0)
		printf("%d",a[i]);
		else break;
	}
	return 0;
 } 
