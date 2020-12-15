#include<stdio.h>
int main()
{
	void fun(int *x,int n);
	int i,*p;
	int a[5];p=a;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(p,5);
	for(i=0;i<=3;i++)
		printf("%d,",a[i]);
	printf("%d",a[4]);
	return 0;
}
void fun(int *x,int n)
{
	int i,j,temp,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(*(x+j)>*(x+k))k=j;
		}
		temp=*(x+k);*(x+k)=*(x+i);*(x+i)=temp;
    }
	
}
