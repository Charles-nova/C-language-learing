#include<stdio.h>
int main()
{
	char a;
	int i;
	int b=0,c=0; //b,c�ֱ��¼��Сд��ĸ�ĸ��� 
	for(i=1;i<=9;i++)
	{
		a=getchar();
		if((a>='a')&&(a<='z'))
			c=c+1;
		else if((a>='A')&&(a<='Z'))
			b=b+1;
	}
	printf("��д��ĸ����=%d\n",b);
	printf("Сд��ĸ����=%d\n",c);
	return 0;
}
