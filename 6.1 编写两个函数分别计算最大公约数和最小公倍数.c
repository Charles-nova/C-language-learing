#include<stdio.h>
int main()
{
	int a,b;
	int gongyue(int x, int y);
	int gongbei(int x,int y);
	scanf("%d,%d",&a,&b);
	printf("最大公约数是%d\n最小公倍数是%d",gongyue(a,b),gongbei(a,b));
	return 0;
	
	
 } 
 int gongyue(int x, int y)
 {
 	int i,temp;
 	if(x<y)
 	{
 		temp=x;
 		x=y;
 		y=temp;
 		
	 }
	 for(i=x;i>=1;i--)
	 {
	 	if(x%i==0&&y%i==0)break;
	 }
	 return (i);
 }
 int gongbei(int x,int y)
 {
 	int gongyue(int x,int y);
 	int z;
 	z=gongyue(x,y);
 	return (x*y/z);
 }
