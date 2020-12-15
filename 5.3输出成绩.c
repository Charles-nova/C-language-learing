#include<stdio.h>
int main()
{
	float a[3][5]={{1001.0,99.5,88.5,89.5},{1002.0,77.9,56.5,87.5},{1003.0,92.5,99.0,60.5}};
	int i,j,k;
	void sums(float array[3][5]);
	void sorted(float array[3][5]);
	sums(a);
	sorted(a);
	 for(i=0;i<=2;i++)
	 {
	 	printf("%d,",(int)a[i][0]);
	 	if(i==0)
		 {
		 		printf("11,zhang,");
		 }
		 else if(i==1) printf("11,wang,");
		 else (printf("22,li,"));
	 	for(k=1;k<=4;k++)
	 	{
	 		printf("%.1f",a[i][k]);
	 		if(k!=4)printf(",");
	 		else(printf("\n"));
		 }
	
	 }
	 return 0;
	 
}
void sums(float array[3][5])
{
	float sum;
	int i,j;
	for(i=0;i<=2;i++)
	{
		sum=0.0;
		for(j=1;j<=3;j++)
		{
			sum=sum+array[i][j];
		}
		array[i][4]=sum;
	 } 
}
void sorted(float array[3][5])
	{
		int i,j,k;
		float temp;
	 for(i=2;i>=0;i--)
	 {
	 	for(j=2;j>i;j--)
	 	{
	 		if(array[j-1][4]<array[j][4])
	 		{
	 			for(k=0;k<=4;k++)
	 			{
	 				temp=array[j-1][k];
	 				array[j-1][k]=array[j][k];
	 				array[j][k]=temp;
				 }
			 }
		 }
	 }
	}
	 

