#include<stdio.h>
struct student
{
	int num;int age;char name[20];float score[3];float sum;
};
int main()
{
	
	void input(struct student stu[]);
	void sort(struct student stu[]);
	int i; 
	struct student stu3[3];
	struct student *p;
	p=stu3;
	input(p);
	sort(p);
	for(i=0;i<3;i++)
	{
		printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\n",stu3[i].num,stu3[i].age,stu3[i].name,stu3[i].score[0],stu3[i].score[1],stu3[i].score[2],stu3[i].sum);
 } 
 return 0;
}
 void input(struct student stu[])
 {
 	int i;
 		for(i=0;i<3;i++)
	{
		scanf("%d %d %s %f %f %f %f",&stu[i].num,&stu[i].age,stu[i].name,&stu[i].score[0],&stu[i].score[1]
		                                                          ,&stu[i].score[2],&stu[i].sum);
	}
 }
 void sort(struct student stu[])
 {
 	struct student temp;
 	int i,j,k;
 	for(i=0;i<2;i++)
 	{
 		k=i;
 		for(j=i+1;j<3;j++)
 		{
 			if(stu[j].sum<stu[k].sum)k=j;
 			
		 }
		 temp=stu[i];
		 stu[i]=stu[k];
		 stu[k]=temp;
	 }	
 }
