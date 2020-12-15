#include<stdio.h>
#include<math.h>
struct point
{
	float x;
	float y;  //注意定义的时候为float型变量 
};
int main()
{
	float distance(struct point a[]);
	struct point dot[2]; //定义结构体数组 
	struct point *p;
	p=dot;
	scanf("%f %f %f %f",&dot[0].x,&dot[0].y,&dot[1].x,&dot[1].y); 	
	printf("%f",distance(p));
	return 0;
 } 
 float distance(struct point a[])
 {
 	float d;
 	d=sqrt((a[1].x-a[0].x)*(a[1].x-a[0].x)+(a[1].y-a[0].y)*(a[1].y-a[0].y));
 	return(d);
 }
 
