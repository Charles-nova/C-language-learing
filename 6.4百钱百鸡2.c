#include<stdio.h>
int main()
{
	int x,y,z;
	int *a,*b,*c;
	a=&x;b=&y;c=&z;
	void baiji(int *a,int *b,int *c);
	baiji(a,b,c);
	printf("%d", y);
	return 0;
}
void baiji(int *a,int *b,int *c)
{
	int i,j,k;
	for( i=1; i<=33;i++ )
        for( j=1; j <=50; j++ )
            for( k=1; k <= 100; k++ )
            {
                if( 3*i+2*j+k/3==100 && k%3==0 && i+j+k==100 )
				{
					*a=i;*b=j;*c=k;
				}   
            }
}
