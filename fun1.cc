#include<stdio.h>
#include<conio.h>

void add(int,int);
void mul(int,int);
void main()
{
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	add(a,b);// calling actual parameter
	mul(a,b);// bata na pad ta hai ki kaun se variable ja rahe hai
	
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum is %d",c);
}
void mul(int a,int b)
{
	int c;
	c=a*b;
	printf("Mul is %d",c);
}
