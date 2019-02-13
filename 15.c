#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b;
	char c;
	
	printf("Enter a= ");
	scanf("%d",&a);
	
	printf("Enter b= ");
	scanf("%d",&b);
	
	printf("\nMenu :\n---------------------\n");
	printf("Press + to +\n");
	printf("Press - to -\n");
	printf("Press * to *\n");
	printf("Press / to /\n\n");
	
	printf("Enter your choice= ");
	scanf("%c",&c);
	
	switch(c)
	{
		case '+':
		
			printf("Sum of a+b is %d",a+b);
			break;
		case '-':
			
			printf("Sub of a-b is %d",a-b);
			break;
		
		case '*':
		
			printf("Mul of a*b is %d",a*b);
			break;
		
		case '/':
		
			printf("div of a/b is %d",a/b);
			break;
		
		default:
			printf("Invalid choice!\n");
	}
	
	getch();
}
