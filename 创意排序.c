#include<stdio.h>
int main()
{
	int a[5][2],b[5];//a用来记录数字， b用来记录原来的数字 
	int i,j,k,temp,m;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i][0]);
		b[i]=a[i][0];
		a[i][1]=i;
	}
	for(i=0;i<=4;i++)
	{
		k=i; 
		for(j=i+1;j<=4;j++)
		{
			if(a[j][0]<a[k][0])k=j;
		}
		for(m=0;m<=1;m++)
		{
			temp=a[i][m];
			a[i][m]=a[k][m];
			a[k][m]=temp;
		}
	}
	for(i=1;i<=2;i++)
	{
		temp=b[a[5-i][1]];
		b[a[5-i][1]]=b[a[i][1]];   //采取位数于下标相连接 
		b[a[i][1]]=temp;
		
	}
	for(i=0;i<=4;i++)
		printf("%d",b[i]);
	return 0;		
}
