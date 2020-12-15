#include<stdio.h>
int main()
{
	void reverse(int *x,int n);
	int a[10]={10,12,45,45,78,1,52456,78,9,87};
	int i,*p;p=a;
	reverse(p,10);
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void reverse(int *x,int n)
{
	int temp,i;
	for(i=0;i<=(n-1)/2;i++)
	{
		temp=*(x+i);
		*(x+i)=*(x+n-1-i);
		*(x+n-1-i)=temp;
	}
}
