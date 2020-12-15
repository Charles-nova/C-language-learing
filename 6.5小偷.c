#include<stdio.h>
int main()
{
	char ans;
	 char judge();
	 ans=judge();
	 printf("%c",ans);
	 return 0;
	 
 } 
 char judge()
 {
 	char x;
 	int i,sum,j;
 	for(i=0;i<=3;i++)
 	{
 		int b[4]={0,0,0,0};  //定义数组    0为不是小偷，1为是小偷。 
		 sum=0;       //注意初始化为0 
 		b[i]=1;       //分别假设ABCD为小偷 
 		if(b[0]==0)sum++;
 		if(b[2]==1)sum++;
 		if(b[3]==1)sum++;
 		if(b[3]==0)sum++;
 		if(sum==3)j=i;
	 }
	 x='A'+j;   //把最后的返回值变为字母 
	 return(x);
	 
 }
