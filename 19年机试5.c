#include<stdio.h>
struct fruitinfo{
	int num;
	char name[20];
	float sell;
	float price;
	float profit;
};
int main()
{
	void set (struct fruitinfo *t);
	void sortfruit(struct fruitinfo *t);
	void print(struct fruitinfo *t);
	struct fruitinfo *t,a[6];
	t=a;
	set(t);sortfruit(t);print(t);
	return 0;
}
void set(struct fruitinfo *t)
{
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%d %s %f %f",&(t+i)->num,(t+i)->name,&(t+i)->sell,&(t+i)->price);
		(t+i)->profit=(t+i)->sell*(t+i)->price;
	}
}
void sortfruit(struct fruitinfo *t)
{
	int i,j,k;struct fruitinfo temp;
	for(i=0;i<5;i++)
	{
		k=i;
		for(j=i+1;j<6;j++)
		{
			if((t+j)->profit<(t+k)->profit)k=j;
		}
		temp=*(t+i);*(t+i)=*(t+k);*(t+k)=temp;
	}
}
void print(struct fruitinfo *t)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d %s %.2f %.2f\n",(t+i)->num,(t+i)->name,(t+i)->sell,(t+i)->price);
	}
	printf("%d %s %.2f %.2f\n",(t+5)->num,(t+5)->name,(t+5)->sell,(t+5)->price);
}

