#include<stdio.h>
#include<string.h>
int main()
{
	int j,i,k,temp;
	char ch[20]="bcfmr";
	scanf("%c",&ch[5]);
	for(i=0;i<5;i++)
	{
		k=i;
		for(j=i+1;j<=5;j++)
		{
			if(ch[j]<ch[k])
				k=j;
		}
		temp=ch[k];
		ch[k]=ch[i];
		ch[i]=temp;
	}
	puts(ch);
	return 0;;
}
