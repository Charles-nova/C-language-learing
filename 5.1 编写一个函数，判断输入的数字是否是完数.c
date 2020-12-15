#include<stdio.h>
int main()
{
	void func(int n);
	int x;
	scanf("%d",&x);
	func(x);
	return 0;
 } 
 void func(int n)
 {
 	int sum=0,i;
 	for(i=1;i<n;i++)
 	{
 		if(n%i==0)
 			sum=sum+i;
	 }
	 if(sum==i)
	 	printf("是完数");
	else
		printf("不是完数");
 }
