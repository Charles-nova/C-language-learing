#include<stdio.h>
#include<memory.h>
#include<string.h>
void digitran(int k,char res[])
{
	int a[10],i=0,m,j=0;
	if(k<=25)res[0]='A'+k;
	while(k!=0)
	{
		a[i]=k%10;i++;k=k/10;
	}
		for(m=i-1;m>=0;)
		{
			if(a[m]<=2&&m-1>=0&&a[m-1]<=5)
			{
				res[j]='A'+10*a[m]+a[m-1];
				m=m-2;j++;
			}
			else
			{
				res[j]='A'+a[m];
				m--;j++;
		   }	
		}
}
int main()
{
	char res[10];
	int b[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]==-1)break;
	}
	for(i=0;i<10;i++)
	{
		if(b[i]==-1)break;
		memset(res,0,sizeof(char)*10);
		digitran(b[i],res);
	    printf("%s",res);
	    if(b[i+1]!=-1)printf(" ");
		memset(res,0,sizeof(char)*10);
	}
	return 0;
} 
