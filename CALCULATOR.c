#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	char n;
	printf("Enter two numbers:");
	scanf("%d%d ",&a,&b);
	printf("Enter arthmatic operator (/+-*%)");
	scanf("%c",&n);
	switch(n)
	{
		case '+' :
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			if (b==0)
			{	printf("b can't be zero .");
				break;}
			else
			{	printf("%d",a/b);
				break; }	
		case '%':
			if (b==0)
		{	printf("b can't be zero");
			break;}
			else
			{	printf("%d",a%b);
			break;}
		default:
			printf("error");
	}
	getch();
	
}
