#include<stdio.h>
#include<conio.h>

void add(int,int);
void mul(int,int);
void sub(int,int);
void div(int,int);

void main()
{
	int a,b,ch;
	while(1)
	{
		printf("\nEnter two numbers:\t");
		scanf("%d%d",&a,&b);
		printf("1.ADD\n2.SUB\n3.DIV\n4.MUL\n5.EXIT\n");
		printf("\nEnter your choice:-\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				div(a,b);
				break;
			case 4:
				mul(a,b);
				break;
			case 5:
				exit(0);
			
		}
	}
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("SUM is %d",c);
}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("SUB is %d",c);
}
void div(int a,int b)
{
	int c;
	c=a/b;
	printf("DIV is %d",c);
}
void mul(int a,int b)
{
	int c;
	c=a*b;
	printf("SUM is %d",c);
}
