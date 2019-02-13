#include<stdio.h>
#include<conio.h>

void mess();// decleration or prototype
void mess1();// decleration or prototype
void add();
void mul();
void main()
{
	mess();// calling function
	add();
	mul();
	mess1();// calling function
	
}
void mess()
{
	printf("Welcome\n");
}
void mess1()
{
	printf("Bye\n");
}
void add()
{
	int a,b,c;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("Sum is %d\n",c);
}
void mul()
{
	int a,b,c;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("Multiplication is %d\n",c);
}

