#include<stdio.h>
struct data
{
	int year;
	int month;
	int day;
};
int main()
{
	struct data adddays(struct data a, int b);
	void print(struct data);
	 struct data d1,d2;
	 int x;
	 scanf("%d %d %d %d",&d1.year,&d1.month,&d1.day,&x);
	 d2=adddays(d1,x);
	 print(d2);
	 return 0;	 
}
struct data adddays(struct data a, int b)
{
	struct data c;
	int day[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	if((a.year%400==0)||(a.year%4==0&&a.year%100!=0))day[1]=29;
	else day[1]=28;
	b=b+a.day;
	for(;a.month<=12;)
	{
		if(b-day[a.month-1]>0)
		{
			b=b-day[a.month-1];a.month++;
		}
		else
		{
			break;
		}
	}
    c.year=a.year;c.month=a.month;c.day=b;
	return (c);	
	}
void print(struct data x)
{
	printf("%d-%d-%d",x.year,x.month,x.day);
}

