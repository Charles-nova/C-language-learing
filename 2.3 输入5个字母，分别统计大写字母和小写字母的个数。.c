#include<stdio.h>
int main()
{
	char a;
	int i;
	int b=0,c=0; //b,c分别记录大小写字母的个数 
	for(i=1;i<=9;i++)
	{
		a=getchar();
		if((a>='a')&&(a<='z'))
			c=c+1;
		else if((a>='A')&&(a<='Z'))
			b=b+1;
	}
	printf("大写字母个数=%d\n",b);
	printf("小写字母个数=%d\n",c);
	return 0;
}
