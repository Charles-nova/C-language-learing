#include<stdio.h>
int main()
{
	int fac(int x);
	int n;
	scanf("%d",&n);
	int y;
	y=fac(n);
	printf("%d",y);
	return 0;
 } 
 int fac(int x)
 {
 	int f;
 	if(x==1)
 		f=1;
 	else
 		f=x*fac(x-1);
 	return(f);
 }
