#include<stdio.h>
int main()
{
	float a[5][4],b[5][2]; //定义b为5*2数组，储存最后输出的数据 
	int i,j,k,m;
	float temp,sum;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			sum=sum+a[i][j];  //sum用于储存同学的总分 
		}
		b[i][1]=sum;
		sum=0;
		b[i][0]=a[i][0];  //初始化数组b 
	}
	for(j=0;j<=4;j++) //选择排序 
	{
		k=j;  //将最小的依次放在数组中，引用一个中间变量来保留k的j的值 
		for(i=j+1;i<=4;i++)
		{
			if(b[i][1]<b[k][1])k=i;  //记录每一趟最小值的下标 ,只是比较sum的大小，再进行排序 
		}
		for(m=0;m<=1;m++)
		{
		temp=b[j][m];
		b[j][m]=b[k][m]; //交换位置 
		b[k][m]=temp;
		}
	}
	for(i=4;i>=0;i--)
	{
		printf("%d,%5.1f\n",(int)b[i][0],b[i][1]);	//最后输出时，控制换行，学号为整数。 
	}
	return 0;
	
}
