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
	while(num/(int)pow(10,len)!=0)//����powΪdouble���ͺ���������ʱҪ����ȡ���� �� 
	{
		len++;      //��γ���Ĺ������ж���������ֵĳ��� ����ʵ���Ա�Ϊһ�κ����� 
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
