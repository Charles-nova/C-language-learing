#include<stdio.h>
#include<math.h>
int main()
{
	int len,a,b,j,k=0;
	long n;
	scanf("%d",&n);
	if(n<=10)
		printf("");
	else
	{
		len=1;
		while(n/(int)pow(10,len)!=0)//����powΪdouble���ͺ���������ʱҪ����ȡ���� �� 
		{
			len++;      //��γ���Ĺ������ж���������ֵĳ��� ����ʵ���Ա�Ϊһ�κ����� 
		}
		
	}
	 for(j=1;j<=len/2;j++) 
	 {
	 	a=(n/(int)pow(10,len-j))%10;           //ȡ�ԳƵĸ�λ�����бȽ� ������ѭ���ظ�����  
	 	b=(n%(int)pow(10,j))/(int)pow(10,j-1);
	 	if(a==b)k++;
		 else
		 	break;
	 }
	 if(k==(int)len/2)
	 	printf("Yes");
	else
		printf("No");
	return 0;	
 } 
