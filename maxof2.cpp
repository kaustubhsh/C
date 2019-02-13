/*WAP to find max oftwo numbers*/
#include<stdio.h>
#include<conio.h>
int manin()
{
	int a,b,max;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
		max=a;
	else
		max=b;
	printf("The greater of two numbers is % d",max);
	getch();
	
 return'0';

}
