#include<stdio.h>
int main()
{
	char a[5]="",b[5]="";
	int i,sum=0,j=0;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<=4;i++)
	{
		if(a[i]<=b[i])
		{
			sum=sum+b[i]-a[i];
			j++;
		}
		else
			break;
		
	}
	
	if(sum==0&&j==0)
		printf("1");
	else if(sum>0)
		printf("-1");
	else
		printf("0");
	return 0;
}
