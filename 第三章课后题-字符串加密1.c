#include<stdio.h>
int main()
{
	char a,b,c,d,e; 
	int f=0;    //f为一个判断变量 ，判断是否为可输入的字符
	a=getchar();
	b=getchar();
	c=getchar();
	d=getchar();
	e=getchar();
	if(!((a<87&&a>64)||(a<119&&a>96)))	
		f+=1;
	if(!((b<87&&b>64)||(b<119&&b>96)))	
		f+=1;
	if(!((c<87&&c>64)||(c<119&&c>96)))	
		f+=1;
	if(!((d<87&&d>64)||(d<119&&d>96)))	
		f+=1;
	if(!((e<87&&e>64)||(e<119&&e>96)))	
		f+=1;
	if(f!=0)
		printf("InputError");
	else
	{
		printf("%c",a+4); 
	    printf("%c",b+4);
	    printf("%c",c+4);
	    printf("%c",d+4);
	    printf("%c",e+4);
	}
	return 0;
		
	
	
}
