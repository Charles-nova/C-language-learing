#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,c,sum,i;
	scanf("%d",&n);
	a=n/100;
	b=(n-a*100)/10;
	c=n%10;
	sum=pow(a,3)+pow(b,3)+pow(c,3);
	if(sum==n)
		printf("%d is a narcissistic number",n);
	else
		printf("%d is not a narcissistic number",n);
	return 0;
 } 
