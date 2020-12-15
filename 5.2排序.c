#include<stdio.h>
int main()
{
	void func(int a[5]);
	int i;
	int b[5];
	for(i=0;i<=4;i++)
		scanf("%d",&b[i]);
	func(b);
	return 0;
}
void func(int a[5])
{
	int i,j,k;
	i=a[0];
	j=a[4];
	for(k=0;k<=4;k++)
	{
		if(a[k]<i)
			i=a[k]; 
		if(a[k]>j)
			j=a[k];
	}
	printf("max=%d\nmin=%d",j,i);
}
