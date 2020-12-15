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
		while(n/(int)pow(10,len)!=0)//其中pow为double类型函数在运算时要将其取整数 。 
		{
			len++;      //这段程序的功能是判断输入的数字的长度 ，其实可以编为一段函数。 
		}
		
	}
	 for(j=1;j<=len/2;j++) 
	 {
	 	a=(n/(int)pow(10,len-j))%10;           //取对称的各位数进行比较 ，利用循环重复操作  
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
