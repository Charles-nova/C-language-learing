#include<stdio.h>
int main()
{
	float a[5][4],b[5][2]; //����bΪ5*2���飬���������������� 
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
			sum=sum+a[i][j];  //sum���ڴ���ͬѧ���ܷ� 
		}
		b[i][1]=sum;
		sum=0;
		b[i][0]=a[i][0];  //��ʼ������b 
	}
	for(j=0;j<=4;j++) //ѡ������ 
	{
		k=j;  //����С�����η��������У�����һ���м����������k��j��ֵ 
		for(i=j+1;i<=4;i++)
		{
			if(b[i][1]<b[k][1])k=i;  //��¼ÿһ����Сֵ���±� ,ֻ�ǱȽ�sum�Ĵ�С���ٽ������� 
		}
		for(m=0;m<=1;m++)
		{
		temp=b[j][m];
		b[j][m]=b[k][m]; //����λ�� 
		b[k][m]=temp;
		}
	}
	for(i=4;i>=0;i--)
	{
		printf("%d,%5.1f\n",(int)b[i][0],b[i][1]);	//������ʱ�����ƻ��У�ѧ��Ϊ������ 
	}
	return 0;
	
}
