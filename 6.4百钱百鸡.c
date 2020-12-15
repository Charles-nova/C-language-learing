#include<stdio.h>
int main()
{
	int x;
	int baiji();
	printf("%d",baiji());
	return 0;
}
int baiji()
{
	int i,j,k,ans;
	for( i=1; i<=33;i++ )
        for( j=1;j<=50; j++ )
        {
        	k=3*(100-3*i-2*j);
        	if(i+j+k==100)ans=j;
        	
	}
	return (ans);

}
