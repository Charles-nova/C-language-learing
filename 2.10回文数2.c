#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1,len;
	long num,a;
	scanf("%d",&a);
	num=a;
	long sum=0;
	len=1;
	while(num/(int)pow(10,len)!=0)//其中pow为double类型函数在运算时要将其取整数 。 
	{
		len++;      //这段程序的功能是判断输入的数字的长度 ，其实可以编为一段函数。 
	}
	while(i<=len)
	{
		n=num%10;
		num=num/10;
		sum=sum+n*(int)pow(10,len-i);
		i++;
	}
	if(sum==a)printf("Yes");
	else(printf("No"));
	return 0;
}
