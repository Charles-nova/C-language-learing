#include<stdio.h>
int main()
{
	char ans;
	 char judge();
	 ans=judge();
	 printf("%c",ans);
	 return 0;
	 
 } 
 char judge()
 {
 	char x;
 	int i,sum,j;
 	for(i=0;i<=3;i++)
 	{
 		int b[4]={0,0,0,0};  //��������    0Ϊ����С͵��1Ϊ��С͵�� 
		 sum=0;       //ע���ʼ��Ϊ0 
 		b[i]=1;       //�ֱ����ABCDΪС͵ 
 		if(b[0]==0)sum++;
 		if(b[2]==1)sum++;
 		if(b[3]==1)sum++;
 		if(b[3]==0)sum++;
 		if(sum==3)j=i;
	 }
	 x='A'+j;   //�����ķ���ֵ��Ϊ��ĸ 
	 return(x);
	 
 }
