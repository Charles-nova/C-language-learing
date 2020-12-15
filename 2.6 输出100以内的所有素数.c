#include<stdio.h>
int main()
{
	int n,i,k=1; //为判断数字，n为循环内的，k为得到的素数的个数
	printf("2 ");
	for(n=3;n<=100;n++) //所有数字 
	{
		for(i=2;i<n;i++)   //判断素数 
		{
			if(n%i==0)break;
		if(i==(n-1))
			{
				k=k+1;
				printf("%d",n);
				if(k%5!=0)
					printf(" ");
				else(printf("\n")); //是5的倍数换行 
		    }
        }
	}
	return 0;
}
