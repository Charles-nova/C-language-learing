#include<stdio.h>
int main()
{
	int n,i,k=1; //Ϊ�ж����֣�nΪѭ���ڵģ�kΪ�õ��������ĸ���
	printf("2 ");
	for(n=3;n<=100;n++) //�������� 
	{
		for(i=2;i<n;i++)   //�ж����� 
		{
			if(n%i==0)break;
		if(i==(n-1))
			{
				k=k+1;
				printf("%d",n);
				if(k%5!=0)
					printf(" ");
				else(printf("\n")); //��5�ı������� 
		    }
        }
	}
	return 0;
}
