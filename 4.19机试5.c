#include<stdio.h>
struct goods{
	int num;    //货物货号 
	int n;  //货物数量 
	float price;  //单价 
};
int main()
{
	float add(struct goods a[]);
	struct goods a[2];
	struct goods *p=a;
	scanf("%d,%d,%f",&a[0].num,&a[0].n,&a[0].price);
	scanf("%d,%d,%f",&a[1].num,&a[1].n,&a[1].price);
	printf("%d,%.1f",a[0].n+a[1].n,add(p));
	return 0;
 } 
 float add(struct goods a[]){
 	float sum=0.0;
 	int i; 
 	for(i=0;i<2;i++)
 		sum=sum+a[i].n*a[i].price;
 	return (sum);
 }
