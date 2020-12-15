#include<stdio.h>
int main()
{
	int judge(int a);
	int data,year,b4,month,day,c;//data为输入的数字。b4为后四位，month为四位的前两位，day为最后两位 
	scanf("%d",&data);
	year=data/10000;
	b4=data%10000;
	c=judge(year);
	month=b4/100;
	day=b4%100;
	int sum,m2;
	if(c==1)m2=29;
	else (m2=28);
	switch(month)
	{
		case(1): sum=day;break;
		case(2): sum=31+day;break;
		case(3): sum=31+m2+day;break;
		case(4): sum=31+m2+day+31;break;
		case(5): sum=31+m2+day+31+30;break;
		case(6): sum=31+m2+day+31+30+31;break;
		case(7): sum=31+m2+day+31+30+31+30;break;
		case(8): sum=31+m2+day+31+30+31+30+31;break;
		case(9): sum=31+m2+day+31+30+31+30+31+31;break;
		case(10): sum=31+m2+day+31+30+31+30+31+31+30; break;
		case(11): sum=31+m2+day+31+30+31+30+31+31+30+31;break;
		case(12): sum=31+m2+day+31+30+31+30+31+31+30+31+30;break;
		default: sum=0;
	}
	printf("%d\n",sum);
	return 0;
 }
int judge(int a) 
{
	int y;
	if((a%4==0&&a%100!=0)||(a%400==0))
		y=1;
	else
		y=0;
	return(y);
}
