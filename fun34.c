#include<stdio.h>
#include<conio.h>

int add(int,int);
void main()
{
	int a,b,x;
	printf("Enter 2 number");
	scanf("%d%d",&a,&b);
	x=add(a,b);
	printf("%d",x);
	
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
