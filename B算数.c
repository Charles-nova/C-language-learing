#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	long c;
	scanf("%d %d",&a,&b);
	c=a+b;
	if(c<0)
	printf("BOOM");
	else printf("%d",c);
	return 0;
 } 
