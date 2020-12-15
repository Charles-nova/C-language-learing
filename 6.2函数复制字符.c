#include<stdio.h>
int main()
{
	void copystr(char a1[20],char a2[20],int x); 
	char str1[20],str2[20]="";
	int m;
	gets(str1);
	scanf("%d",&m);
	copystr(str1,str2,m);
	puts(str2);
	return 0;
	
	
	
}
void copystr(char a1[20],char a2[20],int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		a2[i]=a1[i];
	}
	a2[x]='\0';
}
